// Ardino Bluetooth controlled car//


# include <AFMotor.h>

//initial motors pin

AF_DCMotor motor1(1, MOTOR12_1KHZ);

AF_DCMotor motor2(2, MOTOR12_1KHZ);

AF_DCMotor motor3(3, MOTOR34_1KHZ);

AF_DCMotor motor4(4, MOTOR34_1KHZ);

char command;


void setup() 
{

Serial.begin (9600); //set the baund rate to your Bluethoot modeule 


}

void loop() 


{
if (Serial.available() > 0)

{

  command = Serial.read();
  Stop(); // initialize with motors stoped
// Change pin mode only if new command is different from previous

// Serial ,println (command);
  switch(command)
{
  case 'F'
    Forward ();
   break;

   case 'B'
     Back();
   break;
  case 'L'
     Left();
   break;
case 'R'
     Right();
   break;
}
 }
 }
 void forward()
 {
  motor1.setSpeed(255); // define maximum velocity 
  motor1.run(FORWARD);  // Rotate the motor clockwise
  motor2.setSpeed(255); // define maximum velocity 
  motor2.run(FORWARD);  // Rotate the motor clockwise
  motor3.setSpeed(255); // define maximum velocity 
  motor3.run(FORWARD);  // Rotate the motor clockwise
  motor4.setSpeed(255); // define maximum velocity 
  motor4.run(FORWARD); // Rotate the motor clockwise

 }
void back()

{
   motor1.setSpeed(255); // define maximum velocity 
   motor1.run(BACKWARD); // Rotate the motor clockwise
   motor2.setSpeed(255); // define maximum velocity 
   motor2.run(BACKWARD); // Rotate the motor clockwise
   motor3.setSpeed(255); // define maximum velocity 
   motor3.run(BACKWARD); // Rotate the motor clockwise
   motor4.setSpeed(255); // define maximum velocity 
   motor4.run(BACKWARD); // Rotate the motor clockwise
  
 



  void left()

  {
   motor1.setSpeed(255); // define maximum velocity 
   motor1.run(BACKWARD); // Rotate the motor clockwise
   motor2.setSpeed(255); // define maximum velocity 
   motor2.run(BACKWARD); // Rotate the motor clockwise
   motor3.setSpeed(255); // define maximum velocity 
   motor3.run(BACKWARD); // Rotate the motor clockwise
   motor4.setSpeed(255); // define maximum velocity 
   motor4.run(BACKWARD); // Rotate the motor clockwise
  }
  void right()

  {
   motor1.setSpeed(255); // define maximum velocity 
   motor1.run(BACKWARD); // Rotate the motor clockwise
   motor2.setSpeed(255); // define maximum velocity 
   motor2.run(BACKWARD); // Rotate the motor clockwise
   motor3.setSpeed(255); // define maximum velocity 
   motor3.run(BACKWARD); // Rotate the motor clockwise
   motor4.setSpeed(255); // define maximum velocity 
   motor4.run(BACKWARD); // Rotate the motor clockwise

  }

  void stop()
  
  {
   motor1.setSpeed(0);  // define minimum velocity 
   motor1.run(RELEASE); // Stop the motor clockwise
   motor2.setSpeed(0);  // define minimum velocity 
   motor2.run(RELEASE); // Stopthe motor clockwise
   motor3.setSpeed(0);  // define minimum velocity 
   motor3.run(RELEASE); // Stop the motor clockwise
   motor4.setSpeed(0);  // define minimum velocity 
   motor4.run(RELEASE); //  Stop the motor clockwise
