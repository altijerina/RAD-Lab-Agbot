import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys, select, termios, tty




# Key mappings for teleop control
key_bindings = {
    'w': (1.0, 0.0),    # Move forward
    's': (-1.0, 0.0),   # Move backward
    'a': (0.0, 1.0),    # Turn left
    'd': (0.0, -1.0),   # Turn right
    's': (0.0, 0.0),     # Stop
    ' ': (0.0, 0.0)     # Stop
}

class AgBotTeleop(Node):
    def __init__(self):
        super().__init__('agbot_teleop')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.twist = Twist()
        self.linear_scale = 0.1  # Adjust linear speed scaling
        self.angular_scale = 0.1  # Adjust angular speed scaling
        
        
        self.get_logger().info("""
        ---------------------------
        Moving around:
                w
           a    s    d
                x

        w/x : increase/decrease linear velocity ( ~ 0.26)


        space key, s : force stop

        CTRL-C to quit
        """)

    def getKey(self):
        tty.setraw(sys.stdin.fileno())
        rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
        if rlist:
            key = sys.stdin.read(1)
        else:
            key = ''
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)
        return key      

    def clamp(self, value, min_val, max_val):
        return max(min(value, max_val), min_val)
    
    def clamp(self, value, min_val, max_val):
        return max(min(value, max_val), min_val)    

    def main(self):
        self.settings = termios.tcgetattr(sys.stdin)
        self.twist.linear.x = 0.0
        self.twist.angular.z = 0.0
        
        linear_min_value = -0.26
        linear_max_value = 0.26;       
        angular_min_value = -1.82
        angular_max_value = 1.82    
           
        try:
            while rclpy.ok():
                key = self.getKey()
                if key in key_bindings.keys():
                    linear_vel = key_bindings[key][0] * self.linear_scale
                    angular_vel = key_bindings[key][1] * self.angular_scale
                    self.twist.linear.x = self.clamp(linear_vel, linear_min_value, linear_max_value)
                    self.twist.angular.z = self.clamp(angular_vel, angular_min_value, angular_max_value)
                    self.publisher_.publish(self.twist)
                else:
                    if (key == '\x03'):
                        break

        except Exception as e:
            print(e)

        finally:
            self.twist.linear.x = 0.0
            self.twist.angular.z = 0.0
            self.publisher_.publish(self.twist)

def main(args=None):
    rclpy.init(args=args)
    teleop_node = AgBotTeleop()
    teleop_node.main()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
