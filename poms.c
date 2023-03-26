#include <stdio.h>
#include <kipr/wombat.h>

int main()
{
 motor(0,200);
 motor(3,698);
 msleep(5666);

 motor(0,0);
 motor(3,0);
 msleep(200);

 enable_servos();
 set_servo_position(3,1200);
 msleep(500);

enable_servos();
 set_servo_position(0,2000);
 msleep(1000);

enable_servos();
 set_servo_position(3,2047);
 msleep(1000);

enable_servos();
 set_servo_position(0,751);
 msleep(1000);
  
 motor(0,-56);
 motor(3,-45);
 msleep(8400);

 motor(0,-999);
 motor(3,854);
 msleep(234);

return 0;
}
