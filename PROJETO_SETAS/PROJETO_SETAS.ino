#include <Adafruit_NeoPixel.h>

#define QTDE_LEDs 288
#define DATA_PIN 3
#define LEDs_SETA 4

#define LED_0_SETA_1 0
#define LED_0_SETA_2 71
#define LED_0_SETA_3 4
#define LED_0_SETA_4 6
#define LED_0_SETA_5 8
#define LED_0_SETA_6 10
#define LED_0_SETA_7 12
#define LED_0_SETA_8 14
#define LED_0_SETA_9 16
#define LED_0_SETA_10 18
#define LED_0_SETA_11 20
#define LED_0_SETA_12 22


Adafruit_NeoPixel setas(QTDE_LEDs, DATA_PIN, NEO_RGB);

int pot; 

// =================== Seta 1 =====================

void seta1(int state){
if(state==1){
  for(int i = LED_0_SETA_1; i < LEDs_SETA; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_1; i < LEDs_SETA; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 1

// =================== Seta 2 =====================

void seta2(int state){
if(state==1){
  for(int i = LED_0_SETA_2; i < LEDs_SETA + LED_0_SETA_2; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_2; i < LEDs_SETA + LED_0_SETA_2; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 2

// =================== Seta 3 =====================

void seta3(int state){
if(state==1){
  for(int i = LED_0_SETA_3; i < LEDs_SETA + LED_0_SETA_3; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_3; i < LEDs_SETA + LED_0_SETA_3; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 3

// =================== Seta 4 =====================

void seta4(int state){
if(state==1){
  for(int i = LED_0_SETA_4; i < LEDs_SETA + LED_0_SETA_4; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_4; i < LEDs_SETA + LED_0_SETA_4; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 4

// =================== Seta 5 =====================

void seta5(int state){
if(state==1){
  for(int i = LED_0_SETA_5; i < LEDs_SETA + LED_0_SETA_5; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_5; i < LEDs_SETA + LED_0_SETA_5; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 5

// =================== Seta 6 =====================

void seta6(int state){
if(state==1){
  for(int i = LED_0_SETA_6; i < LEDs_SETA + LED_0_SETA_6; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_6; i < LEDs_SETA + LED_0_SETA_6; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 6

// =================== Seta 7 =====================

void seta7(int state){
if(state==1){
  for(int i = LED_0_SETA_7; i < LEDs_SETA + LED_0_SETA_7; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_7; i < LEDs_SETA + LED_0_SETA_7; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 7

// =================== Seta 8 =====================
void seta8(int state){
if(state==1){
  for(int i = LED_0_SETA_8; i < LEDs_SETA + LED_0_SETA_8; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_8; i < LEDs_SETA + LED_0_SETA_8; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 8

// =================== Seta 9 =====================
void seta9(int state){
if(state==1){
  for(int i = LED_0_SETA_9; i < LEDs_SETA + LED_0_SETA_9; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_9; i < LEDs_SETA + LED_0_SETA_9; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 9

// =================== Seta 10 =====================
void seta10(int state){
if(state==1){
  for(int i = LED_0_SETA_10; i < LEDs_SETA + LED_0_SETA_10; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_10; i < LEDs_SETA + LED_0_SETA_10; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 10

// =================== Seta 11 =====================
void seta11(int state){
if(state==1){
  for(int i = LED_0_SETA_11; i < LEDs_SETA + LED_0_SETA_11; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(255, 0, 0));
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_11; i < LEDs_SETA + LED_0_SETA_11; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 11

// =================== Seta 12 =====================
void seta12(int state){
if(state==1){
  for(int i = LED_0_SETA_12; i < LEDs_SETA + LED_0_SETA_12; i++){
    if (i < setas.numPixels()) {
      
    }
  }
  setas.show();
 }
if(state==0){
  for(int i = LED_0_SETA_12; i < LEDs_SETA + LED_0_SETA_12; i++){
    if (i < setas.numPixels()) {
      setas.setPixelColor(i, setas.Color(0,0,0));
    }
  }
  setas.show();
 }
} //Fim Seta 12

void setup() {
  pinMode(A1, INPUT);
  setas.begin();
}

void loop() {
  pot = map(analogRead(A1), 0, 1023, 3000, 100); 

  seta1(1);
  seta9(0);  
  delay(pot);

  seta2(1);
  seta10(0);
  delay(pot);

  seta3(1);
  seta11(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot);

  seta4(1);
  seta12(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot);

  seta5(1);
  seta1(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot);

  seta6(1);
  seta2(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot);

  seta7(1);
  seta3(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot);

  seta8(1);
  seta4(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot);

  seta9(1);
  seta5(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot);

  seta10(1);
  seta6(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot);

  seta11(1);
  seta7(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot);

  seta12(1);
  seta8(0);
  pot = map(analogRead(A1), 0, 1023, 3000, 100);
  delay(pot); 
  
}
