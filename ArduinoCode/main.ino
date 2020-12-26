#include "pitches.h"
//Defining pins
int c_note  = 13;
int d_note  = 12;
int e_note = 11;
int f_note = 10;
int g_note =  9;
int a_note =  8;
int b_note =  7;
int c2_note =6;
int buzzerPin = 5;

//NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6
// notes in the melody:
/*int melody[] = {
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
   NOTE_C5};*/
   int melody[] = {
     C5_NOTE , C5_NOTE , G5_NOTE , G5_NOTE , A5_NOTE , A5_NOTE ,G5_NOTE , F5_NOTE , F5_NOTE , E5_NOTE ,E5_NOTE, D5_NOTE , D5_NOTE , C5_NOTE
   };
int duration = 500;  // 500 miliseconds

void setup() {

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
  for (int thisNote = 0; thisNote < 56; thisNote++) {
    int currentPin = 0;
    // pin8 output the voice, every scale is 0.5 sencond
    if(melody[thisNote] == NOTE_C5){
      digitalWrite(c_note , HIGH);
      tone(buzzerPin, melody[thisNote], duration);
      currentPin = c_note;
    }
    else if(melody[thisNote] == NOTE_D5){
      digitalWrite(d_note , HIGH);
      tone(buzzerPin, melody[thisNote], duration);
      //digitalWrite(d_note , LOW);
      currentPin = d_note;
    }
    else if(melody[thisNote] == NOTE_E5){
      digitalWrite(e_note , HIGH);
      tone(buzzerPin, melody[thisNote], duration);
      //digitalWrite(e_note , LOW);
      currentPin = e_note;
    }
    else if(melody[thisNote] == NOTE_F5){
      digitalWrite(f_note , HIGH);
      tone(buzzerPin, melody[thisNote], duration);
      //digitalWrite(f_note , LOW);
      currentPin = f_note;
    }
    else if(melody[thisNote] == NOTE_G5){
      digitalWrite(g_note , HIGH);
      tone(buzzerPin, melody[thisNote], duration);
      //digitalWrite(g_note , LOW);
      currentPin = g_note;
    }
    else if(melody[thisNote] == NOTE_A5){
      digitalWrite(a_note , HIGH);
      tone(buzzerPin, melody[thisNote], duration);
      //digitalWrite(a_note , LOW);
      currentPin = a_note;
    }
    else if(melody[thisNote] == NOTE_B5){
      digitalWrite(b_note , HIGH);
      tone(buzzerPin, melody[thisNote], duration);
      //digitalWrite(b_note , LOW);
      currentPin = b_note;
    }
    else if(melody[thisNote] == NOTE_C6){
      digitalWrite(c2_note , HIGH);
      tone(buzzerPin, melody[thisNote], duration);
      //digitalWrite(c2_note , LOW);
      currentPin = c2_note;
    }



    // Output the voice after several minutes
    delay(1000);
    digitalWrite(currentPin , LOW);
  }
  // restart after two seconds
  delay(2000);
}
