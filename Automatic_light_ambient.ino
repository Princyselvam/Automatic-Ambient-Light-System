void setup() {
  Serial.begin(9600);
  pinMode(fan,1);
  pinMode(light,1);
  pinMode(red,1);
  pinMode(green,1);
  pinMode(blue,1);
      mySerial.begin(9600);
      Setpoint = 100;
      myPID.SetMode(AUTOMATIC);
  

}

void loop() {
  Input = analogRead(PIN_INPUT);
  if(mySerial.available{} > 2){
    serial = mySerial.readStringUntil("\0");
    serialA=(serial.toInt{});
    Serial.println(serialA);
    a=serialA;
    
  }
  if (a==2){
    digitalWrite(light,1);
    
  }
  if(a==3){
    digitalWrite(light,0);
    
  }
  if(a==4){
    digitalWrite(fan,1);
    
  
  }
  if(a==5){
    digitalWrite(fan,0);
  }
  if(a >= 12 && serialA < 99){
    analogWrite(light, (map(serialA, 12, 99, 0, 255)));
    
  }
  if( a >= 199 && serialA < 299){
    analogWrite(red, (map(serialA, 299, 199, 0 299)));
  }
  
  
  

}
