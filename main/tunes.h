#include "notes.h" 

void tuneFive(); 
void tuneSix(); 
void tuneSeven(); 
void tuneEight(); 

/// Tunes 
void tuneFive() { // note / tune finder 2

  for (int t = 0; t < 2; t++) { 
      for (int t = 0; t < 2; t++) { 
        _a(); _b(); _b(); _a(); 
      } 
      _d(); _e(); _f(); _d(); _e(); _i();  
  } 
    _i(); _e(); _d(); _i(); _i(); _i(); _f(); 
    _i(); _e(); _d(); _i(); _i(); _i(); _f();
} 

void tuneSix() { 

  for (int t = 0; t < 2; t++) { 
      _i(); _e(); _d(); _i(); _i(); _i(); _f(); 
     _i(); _e(); _d(); _i(); _i(); _i(); _f();
  } 
} 

void tuneSeven() { 
  // Ensure tuneFive & tuneSix are defined 

  tuneFive(); 
  tuneSix(); 
}

int repeatedTwice = 0; 
void tuneEight() { // Twinke Twinkle 
//  int repeatedTwice = 0; 

  while (repeatedTwice != 2) {
     _a(); _a(); _b(); _b(); _f(); _f(); _d(); delay(800); 
     _d(); _d(); _c(); _c(); _b(); _b(); _a(); delay(800); 
     _b(); _b(); _d(); _d(); _c(); _c(); _b(); delay(800); 
     repeatedTwice += 1; 
  }
}

