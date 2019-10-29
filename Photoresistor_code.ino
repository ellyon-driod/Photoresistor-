
/* Elyon Eyimife 
 *  Photoresistor circuit
 *  Using a photoresistor (or photocell) to turn on an LED in the dark
 */
//Constant Variables
const int Ph_resistor= A0; // Photoresistor at Arduino analog pin A0
const int ledPin=9;       // Led pin at Arduino pin 9

//Variable
int value;          // Store value from photoresistor (0-1023)

void setup(){
 pinMode(ledPin, OUTPUT);  // Set lepPin - 9 pin as an output
 pinMode(Ph_resistor, INPUT);// Set pResistor - A0 pin as an input (optional)
}

void loop(){
  value = analogRead(Ph_resistor);
  
  if (value > 30){
    digitalWrite(ledPin, LOW);  //Turn led off
  }
  else{
    digitalWrite(ledPin, HIGH); //Turn led on
  }

  delay(500); //Small delay
}
