// #include "notes.h" 
#include "tunes.h" 


/// Initialization 

void setOutput(); 
void setOutput() {

    pinMode(red_pin, OUTPUT); 
    pinMode(blue_pin, OUTPUT); 
    pinMode(green_pin, OUTPUT); 
    pinMode(pin, OUTPUT); 
    
}

void setup(){

  Serial.begin(9600); 
  

  setOutput(); 

  
  digitalWrite(13, HIGH); 

  for (int i = 0; i < 4; i++) { 
    metronome(); 
  }
  
}

/// Mainloop 
void loop() {

  tuneFive(); 

  delay(000); 
  
  tuneSix(); 

  delay(2000); 

  tuneSeven(); 

 delay(2000);  

  tuneEight(); 
  delay(8000); 
}

