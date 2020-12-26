#include "pitches.h"
//Defining pins
int c_note  = 6;
int d_note  = 7;
int e_note = 8;
int f_note 9
int g_note =  10;
int a_note =  11;
int b_note =  12;
int c2_note =13;
int buzzerPin = 5;

//NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6
// notes in the melody:
int melody[] = {
  NOTE_C6, NOTE_B5, NOTE_A5, NOTE_G5, NOTE_F5,
   NOTE_E5, NOTE_D5, NOTE_C5, NOTE_G5, NOTE_A5,
   NOTE_A5, NOTE_B5, NOTE_B5, NOTE_C6, NOTE_C6,
   NOTE_C6, NOTE_B5, NOTE_A5, NOTE_G5, NOTE_G5,
   NOTE_F5, NOTE_E5, NOTE_C6, NOTE_C6, NOTE_B5,
   NOTE_A5, NOTE_G5, NOTE_G5, NOTE_F5, NOTE_E5,
   NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_F5,
   NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_D5,
   NOTE_D5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_E5,
   NOTE_D5, NOTE_C6, NOTE_C6, NOTE_A5, NOTE_G5,
   NOTE_F5, NOTE_E5, NOTE_F5, NOTE_E5, NOTE_D5,
   NOTE_C5};
int duration = 500;  // 500 miliseconds

void setup() {
  pinMode(c_note , OUTPUT);
  pinMode(d_note , OUTPUT);
  pinMode(e_note , OUTPUT);
  pinMode(f_note , OUTPUT);
  pinMode(g_note , OUTPUT);
  pinMode(a_note , OUTPUT);
  pinMode(b_note , OUTPUT);
  pinMode(c2_note , OUTPUT);
  pinMode(buzzerPin , OUTPUT);
}

void loop() {
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody[thisNote], duration);

    // Output the voice after several minutes
    delay(1000);
  }

  // restart after two seconds
  delay(2000);
}
