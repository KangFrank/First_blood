/*the totally code is a combination of Arduino and processing*/

/*
int foot[4];//creats an empty array with four elements
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
  delay(1000);
}
*/

/*Arduino read the port value
int recvPin=0;
int wait=1000;
int val=0;
void setup()
{
  //Initialize the Serial Interface
  Serial.begin(9600);
  
}

void loop()
{
  //Take a reading from the Analog Pin
  val=analogRead(recvPin);
  //Output the detected value
  Serial.print("DETECT:") ;
  Serial.println(val);
  //Wait to take the next reading
  delay(wait); 
}
*/

/*Arduino try to connect the processing*/
int potpin=0;//input to Arduino
void setup()
 {
  Serial.begin(9600);//start communication,bite rate is 9600
 }
void loop()
 {
  int sensorValue=analogRead(potpin);//value scope is 0~1023
  int data=sensorValue/4;//change 0~1023 to 0~255
  Serial.print(data,BYTE);//upload/send the data to up-controler
  delay(20);
 }

 /*Processing part code*/
 import processing.serial.*;//import the serial communication SDK
 Serial duankou;//creat the object duankou
 float data;//stock the data from Arduino
 float d;//diameter of the paint paper
 void setup()
 {
  duankou=new Serial(this,"com3",9600);//make com3 as the receieve port and the byte rate is 9600
  size(600,600);//the size of the paper
  background(0);//the background color: 0 is black, 255 is white
  stroke(128);//the line of the paper is gray(128)
  smooth();
  }

  void draw()
  {
    background(0);
    //when the serial port get a value
    if(duankou.available()>0){
      //stock the value that receieved from Arduino
      data=duankou.read();
      //turn the value of Arduino into the color of 0~255
      d=map(data,0,255,5,140)；
      println(int(d));
      }
     //creat a array of colorplate
     for(float x1=0;x1<=600;x1=100){
      for(float y1=0;y1<=600;y1=100){
        fill(242,204,47,160);
        ellipse(x1,y1,d,d);
        }
      }
      //creat another array of colorplate
     for(float x1=50;x1<=550;x1=100){
      for(float y1=50;y1<=600;y1=100){
        fill(116,193,206,160);
        ellipse(x1,y1,d,d);
        }
      }
   }