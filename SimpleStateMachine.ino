/*
SimpleStateMachine
*/

//---------------Integers-----------------//
//constant integer
  const int InternalLED = 13;
  const int ExternalLED = 12;

// A0 has the pushbutton attached to it. Give it a name
  int pushButton = A0;

// count how many times the button is pressed
  int timesPressed = 0;

//---------------Setup-----------------//

// the setup routine runs once when you press reset:
  void setup() {

// initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

// make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(ExternalLED, OUTPUT);
  pinMode(InternalLED, OUTPUT);
  }


//---------------Loop-----------------//
// the loop routine runs over and over again forever:
  void loop() {
    
// read the input pin:
  int buttonState = digitalRead(pushButton);
  
// delay in between reads for stability
   delay(10); //very quick delay

//count each time the button is pressed
   if (buttonState == HIGH) {
    timesPressed++;
    delay(10); //very quick delay
   }
   
// print out how many times button has been pressed
   Serial.println(timesPressed);

//state 1: nothing
   if(timesPressed==1){
    digitalWrite(ExternalLED, LOW);
    delay(100); //quick delay
   }
//state 2: nothing
   else if(timesPressed==2) {
    digitalWrite(ExternalLED, LOW);
    delay(100); //quick delay
   }
//state 3: nothing
   else if(timesPressed==3){
    digitalWrite(ExternalLED, LOW);
    delay(100); //quick delay
   }
//state 4: keep light on
   else if(timesPressed==4){
    digitalWrite(ExternalLED, HIGH);
    delay(100); //quick delay
   } 
//state 5: keep light on
   else if(timesPressed==5){
    digitalWrite(ExternalLED, HIGH);
    delay(125); //delay
   } 
//state 6: keep light on
   else if(timesPressed==6){
    digitalWrite(ExternalLED, HIGH);
    delay(100); //quick delay
   } 
//state 7: keep light on
   else if(timesPressed==7){
    digitalWrite(ExternalLED, HIGH);
    delay(100); //quick delay
   } 
   else {
// reset the state on 4th click since LED has turned on
    timesPressed=0;
    digitalWrite(ExternalLED, LOW);
    delay(100); //quick delay
   }
  }
