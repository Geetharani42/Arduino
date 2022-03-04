//Pin declaration
#define pwmpin 6   //choose any pwm pin for analogwrite

void setup() {
  //Serial baudrate setting
  Serial.begin(9600);

  //Pin direction setting
  pinMode(pwmpin, OUTPUT);
}

void loop() {
  //checking the serial data from serial monitor
  if (Serial.available() > 0) {
    //reading the serial data
    int analograw =  Serial.parseInt();

    //Serially printing the data
    Serial.println("Read data:"+String(analograw));

    //writing data to pwmpin
    analogWrite(pwmpin, analograw);
}
}
