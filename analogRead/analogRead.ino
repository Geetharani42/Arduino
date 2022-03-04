//Pin declaration
#define analogdata A1

//Variable declaration
int k;
float vol;

void setup() {
  //Baudrate setting 
  Serial.begin(9600);

  //pin direction setting
  pinMode(analogdata, INPUT);
}

void loop() {
  //analogdata read
  k = analogRead(analogdata);

  //voltage conversion
  vol = k * (5.0/1023.0)

  //printing data in serial monitor
  Serial.println("Analog data:"+String(k));
  Serial.println("Voltage(V):"+String(vol));
}
