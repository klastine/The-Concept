const int BIA = 3;
const int BIB = 5;

byte speed = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(BIA,OUTPUT);
  pinMode(BIB,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3,speed);
  analogWrite(5,0);
  delay(2000);
  analogWrite(3,0);
  analogWrite(5,speed);
  delay(2000);
  /*delay(2000);
  backward();
  delay(2000);*/
  // motor turns --> cross sectional area
  // 

  // v final = 0 = velocity^2 + 2* delta x * ((1/2 rho v^2 C A)/m)
  // C A = (joe's C equation) (pi*r^2 + 4*(fin cross sectional area))

}

void forward(){
  
  analogWrite(BIA,speed);
  analogWrite(BIB,0);
  delay(2000);
  analogWrite(BIA,0);
  analogWrite(BIB,speed);
  delay(2000);
  
  }

/*void backward(){
  
  analogWrite(BIA,0);
  analogWrite(BIB,speed);
  
  }*/
