//pin declaration
#define output 3 //any digital pin
#define input  4
//variable declaration
int k;

void setup() {
  //pin direction setting (input/output)
  pinMode(output,OUTPUT);
  pinMode(input, INPUT);

  //Initial conditions set to 0
  digitalWrite(output, LOW);
}

void loop() {
  k = digitalRead(input) //value will be either 1 or 0

  //condition
  if(k == 1){  //put condition according to application
    digitalWrite(output, HIGH);
  }
  else{   //when threshold condition fails
    digitalWrite(output, LOW);
  }
}
