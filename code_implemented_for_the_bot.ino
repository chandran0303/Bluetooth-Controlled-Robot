char j;
String iS="";
#include<AFMotor.h>//Follow instructions in the video to understand how to import the same(All credit on how to use the same goes to the creator of the video)
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
void setup()    
{
 motor1.setSpeed(200);//Can be set from 0-255
 motor2.setSpeed(200);//Can be set from 0-255
 Serial.begin(9600);           
}
void loop()
{
  if(Serial.available()){
  while(Serial.available())
    {
      char iC = (char)Serial.read();
      iS += iC;       
    }
    Serial.println(i);
    while (Serial.available() > 0)  
    { j = Serial.read() ; }      
    if(iS == "f"){  //To move forward      
      motor1.run(FORWARD);
      motor2.run(FORWARD);
    }else if(iS == "b"){ //To move backward 
      motor1.run(BACKWARD);
      motor2.run(BACKWARD);
    }
    else if(iS == "l"){  //To move left
      motor1.run(FORWARD);
      motor2.run(RELEASE);
    }
    else if(iS == "r"){//To move right 
      motor1.run(RELEASE);
      motor2.run(FORWARD);
    }
    else if(iS == "s"){  //To stop
      motor1.run(RELEASE);
      motor2.run(RELEASE);
    }
    iS = "";
  }
}