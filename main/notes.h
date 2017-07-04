/* 
const int MYVAL = 10;
const float THISVAL = 5.0; 

void testTwo(int one); 

void test() { 

  testTwo(20); 
}

void testTwo(int one) { 
  
}

*/ 

/// NotesLib Defintions 
// Works along side notes.h (in NotesLib folder) 

/// Tone_def 
/*
 This is where the definition of each tone / note is 
*/

// The following code is from TwinkleTwinkle0 but has been edited 

/// 

/// LED Logic Variables 
bool red = false; bool blue = false; bool green = false; 
int red_pin = 3; int blue_pin = 4; int green_pin = LED_BUILTIN; // to be set 
// int red_pin = 6; int blue_pin = 7; int green_pin = 6; // to be set 

/// Global Variables from "notes.h" 
int pin = 11; // Buzzer Pin 
int freq = 105; // frequency (he rtz) 
int dur = 140; // duration (milliseconds) 

/// Global Variables from "notes.h" which com before th Tones / Notes declarations / definitions 
int a = 800, b = 900, c = 1100; 
int d = 1400, e = 1500;  
int f = 1700, g = 1800, h = 1900; 
int j = 3700, k = 3800, i = 3900; 
int toneLength = 400; // was created to adjust the timing but may only be tempoary 


/// Actual Tunes / Melodies 

/// Initialization 
/*
void setup(){

  Serial.begin(9600); 

  pinMode(13, OUTPUT); 
  
  digitalWrite(13, HIGH); 

  for (int i = 0; i < 4; i++) { 
    metronome(); 
  }
  
}
*/ 

/// Mainloop 
/* 
void loop() {

   /* 
  tuneFive(); 

  delay(1000); 
  
  tuneSix(); 

  delay(1000); 

  tuneSeven(); 

  delay(1000); 
  */ 

//  tuneEight(); 
//  delay(2000); 
// }

/// LED 
void high_led(); 
void mid_led(); 
void low_led(); 

/// Individual Tones / Notes 

  void _a(); 
  void _b();  
  void _c(); 
  void _d(); 
  void _e(); 
  void _f();  
  void _g(); 
  void _h(); 
  void _i(); 

/// Other 
/* 
/int l_freq; 
void alterFrequency(int tonesLength) { 

    l_freq = floor(random(3000, 4000)); 

    tone(pin, l_freq, tonesLength); 
    endTone();   
}
*/ 

void alterFreq(int freq, int toneDur); 
void playTone(); 
void endTone(); 
void metronome(); 

/*
void setOutput(); 
void setOutput() {

    pinMode(red_pin, OUTPUT); 
    pinMode(blue_pin, OUTPUT); 
    pinMode(green_pin, OUTPUT); 
    pinMode(pin, OUTPUT); 
    
}*/ 

/// LED Logic 
/*
void low_led() { 
  if (red) { 
    digitalWrite(red_pin, HIGH); 

    digitalWrite(LED_BUILTIN, LOW); 
    blue = false; 
    green = false; 
  } else { 
    
    digitalWrite(red_pin, LOW); 

    digitalWrite(LED_BUILTIN, LOW); 
  }
}
void mid_led() { 
  if (blue) { 
    digitalWrite(blue_pin, HIGH); 
    
    red = false; 
    green = false; 
  } else { 
    digitalWrite(blue_pin, LOW); 
  }
}
void high_led() { 
  if (red) { 
    digitalWrite(green_pin, HIGH); 
    
    blue = false; 
    red = false; 
  } else { 
    digitalWrite(green_pin, LOW); 
  }
}

/* 
 *  Note: 
* I should make individual tones for each / similar tunes so that each tunes timing is correct 
* I should also probably add in an extra note which will act as a 'pause' 
 */
 /*
int a = 800, b = 900, c = 1100; 
int d = 1400, e = 1500;  
int f = 1700, g = 1800, h = 1900; 
int j = 3700, k = 3800, i = 3900; 
int toneLength = 400; // was created to adjust the timing but may only be tempoary 
*/  
int cFreq; 
void  getFreq(int curFreq) { 
  cFreq = curFreq; 

  if (curFreq >= d) { 
     digitalWrite(blue_pin, HIGH);  
     digitalWrite(red_pin, LOW); 
     digitalWrite(green_pin, LOW); 
  } else if (curFreq >= j) { 
     digitalWrite(green_pin, HIGH);  
     digitalWrite(red_pin, LOW); 
     digitalWrite(blue_pin, LOW); 
  } else if (curFreq < d) { 
     digitalWrite(red_pin, HIGH);  
     digitalWrite(green_pin, LOW); 
     digitalWrite(blue_pin, LOW); 
  } 
  
}
  void _a() { 
      // alterFreq(a, 80);    
     alterFreq(a, toneLength * 2); 
     delay(toneLength);

      getFreq(a); 
  } 
  void _b() { 
     // alterFreq(b, 80);    
     alterFreq(b, toneLength * 2); 
     delay(toneLength);

     getFreq(b); 
  } 
  void _c() { 
     // alterFreq(c, 100);    
     alterFreq(c, toneLength * 2); 
     delay(toneLength); 

     getFreq(c); 
  } 
  void _d() { 
     // alterFreq(d, 100);    
     alterFreq(d, toneLength * 2); 
     delay(toneLength); 

     getFreq(d); 
  } 
  void _e() { 
     // alterFreq(e, 100);    
     alterFreq(e, toneLength * 2); 
     delay(toneLength); 

     getFreq(e); 
  }   
  void _f() { 
     // alterFreq(f, 100);    
     alterFreq(f, toneLength * 2); 
     delay(toneLength); 

     getFreq(f); 
  } 
  void _g() { 
    //  alterFreq(g, 100);    
    alterFreq(d, toneLength * 2); 
    delay(toneLength); 

    getFreq(g); 
  } 
  void _h() { 
     // alterFreq(h, 100);    
     alterFreq(h, toneLength * 2); 
     delay(toneLength); 

     getFreq(h); 
  } 
  void _i() { 
     // alterFreq(i, 100);    
     alterFreq(i, toneLength * 2); 
     delay(toneLength); 

     getFreq(i); 
  } 

/// Other 
/* 
/int l_freq; 
void alterFrequency(int tonesLength) { 

    l_freq = floor(random(3000, 4000)); 

    tone(pin, l_freq, tonesLength); 
    endTone();   
}
*/ 

void alterFreq(int freq, int toneDur) { 
   
    tone(pin, freq, toneDur); 
    endTone();   
}

void playTone() {
 pinMode(pin, OUTPUT);
 tone(pin, freq, dur); 
}
void endTone() {
  delay(dur); 
  noTone(pin); 
  delay(dur); 
}

void metronome() {
  
  playTone(); 
  endTone();

}



