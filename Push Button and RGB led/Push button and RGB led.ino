const int red_pin = 4;
const int green_pin = 2;
const int blue_pin = 3;
int counta;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(0);
  // print out the value you read:
  Serial.println(sensorValue);
//  Serial.println(count);
  Serial.print("E");

  if(sensorValue<50){
    counta++;Serial.println("pressed");
  }
  if (counta ==0 )
  {
    analogWrite(red_pin, 0);
    analogWrite(green_pin, 0);
    analogWrite(blue_pin, 0);
    Serial.println(counta);
    delay(1000);
    
  }
  else if (counta == 1)
  {
    analogWrite(red_pin, 255);
    analogWrite(green_pin, 0);
    analogWrite(blue_pin, 0);
    Serial.println(counta);
    delay(1000);
    
  }
   else if (counta == 2 )
  {
    analogWrite(red_pin, 0);
    analogWrite(green_pin, 255);
    analogWrite(blue_pin, 0);
   Serial.println(counta);
    delay(1000);
  } 
  else if (counta == 3 )
  {
    analogWrite(red_pin, 0);
    analogWrite(green_pin, 0);
    analogWrite(blue_pin, 255);
    Serial.println(counta);
    delay(1000);
    counta=0;
  }

  delay(1);        // delay in between reads for stability
}
