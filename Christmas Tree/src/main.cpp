#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LEDs 25
#define LEDs_CORPO 24
#define LED_PIN 2

Adafruit_NeoPixel led_tree (LEDs, LED_PIN, NEO_GRB + NEO_KHZ800);

int a = 5, b;

unsigned long time1, 
              time2,
              timeEffect = 6900,
              timeEffect2 = 8100,
              timeEffect3 = 8200,
              timeEffect4 = 9300;

void setup() {
  led_tree.begin();
  led_tree.setPixelColor(24, 255, 80, 0);
  led_tree.show();
}

void loop() {

  led_tree.setPixelColor(23, 255, 80, 0);
  led_tree.show();
  led_tree.setPixelColor(22, 255, 255, 0);
  led_tree.show();
  led_tree.setPixelColor(21, 80, 255, 0);
  led_tree.show();
  led_tree.setPixelColor(20, 0, 255, 0);
  led_tree.show();
  led_tree.setPixelColor(19, 0, 255, 80);
  led_tree.show();
  led_tree.setPixelColor(18, 0, 255, 255);
  led_tree.show();
  led_tree.setPixelColor(17, 0, 80, 255);
  led_tree.show();
  led_tree.setPixelColor(16, 0, 0, 255);
  led_tree.show();
  led_tree.setPixelColor(15, 80, 0, 255);
  led_tree.show();
  led_tree.setPixelColor(14, 255, 0, 255);
  led_tree.show();
  led_tree.setPixelColor(13, 255, 0, 80);
  led_tree.show();
  led_tree.setPixelColor(12, 255, 0, 0);
  led_tree.show();
  led_tree.setPixelColor(11, 255, 80, 0);
  led_tree.show();
  led_tree.setPixelColor(10, 255, 255, 0);
  led_tree.show();
  led_tree.setPixelColor(9, 80, 255, 0);
  led_tree.show();
  led_tree.setPixelColor(8, 0, 255, 0);
  led_tree.show();
  led_tree.setPixelColor(7, 0, 255, 80);
  led_tree.show();
  led_tree.setPixelColor(6, 0, 255, 255);
  led_tree.show();
  led_tree.setPixelColor(5, 0, 80, 255);
  led_tree.show();
  led_tree.setPixelColor(4, 0, 0, 255);
  led_tree.show();
  led_tree.setPixelColor(3, 80, 0, 255);
  led_tree.show();
  led_tree.setPixelColor(2, 255, 0, 255);
  led_tree.show();
  led_tree.setPixelColor(1, 255, 0, 80);
  led_tree.show();
  led_tree.setPixelColor(0, 255, 0, 0);
  led_tree.show();

  delay(10000);

  led_tree.clear();
  led_tree.show();

  for (int i = 0; i < LEDs_CORPO; i++){
    led_tree.setPixelColor(i,random(64,255),random(64,255),random(64,255));
    led_tree.show();
    delay(200);
    led_tree.setPixelColor(i, 0, 0, 0);
    led_tree.show();
    delay(200);
    }
  
  for (int i = 0; i < LEDs_CORPO; i++){
    led_tree.setPixelColor(i,random(64,255),random(64,255),random(64,255));
    led_tree.show();
    delay(200);
    a = 6;
    }

    if(a==6){
      for (int i = LEDs_CORPO; i > 0; i--){
        led_tree.setPixelColor(i, 0, 0, 0);
        led_tree.show();
        delay(200);
    }
    }

  /*for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,255,255,255);
      led_tree.show();
    }
  }
  delay(20000);*/

/*if(a == 0){
  time1 = millis();
  time2 = millis();
  while(time2 - time1 < timeEffect){
    led_tree.setPixelColor(24, 255, 80, 0);
    led_tree.show();
    int brilho = (exp(sin(millis() / 2000.0 * PI)) - 0.36787944) * 108.0;
    led_tree.setBrightness(brilho);
    for (int i = 0; i < LEDs_CORPO; i++){
      if(i < LEDs_CORPO){
        led_tree.setPixelColor(i,0,0,255);
        led_tree.show();
      }
    
    time2 = millis();
    a = 1;
  }
}
}

if(a == 1){
  time1 = millis();
  time2 = millis();
  while(time2 - time1 < timeEffect2){
    led_tree.setPixelColor(24, 255, 80, 0);
    led_tree.show();
    int brilho = (exp(sin(millis() / 2000.0 * PI)) - 0.36787944) * 108.0;
    led_tree.setBrightness(brilho);
    for (int i = 0; i < LEDs_CORPO; i++){
      if(i < LEDs_CORPO){
        led_tree.setPixelColor(i,255,0,0);
        led_tree.show();
      }
    }
    time2 = millis();
  }
 
  a = 2;
}

if(a == 2){
  time1 = millis();
  time2 = millis();
  while(time2 - time1 < timeEffect3){
    led_tree.setPixelColor(24, 255, 80, 0);
    led_tree.show();
    int brilho = (exp(sin(millis() / 2000.0 * PI)) - 0.36787944) * 108.0;
    led_tree.setBrightness(brilho);
    for (int i = 0; i < LEDs_CORPO; i++){
      if(i < LEDs_CORPO){
        led_tree.setPixelColor(i,0,255,0);
        led_tree.show();
      }
    }
    time2 = millis();
  }
 
  a = 3;
}

if(a == 3){
  time1 = millis();
  time2 = millis();
  while(time2 - time1 < timeEffect4){
    led_tree.setPixelColor(24, 255, 80, 0);
    led_tree.show();
    int brilho = (exp(sin(millis() / 2000.0 * PI)) - 0.36787944) * 108.0;
    led_tree.setBrightness(brilho);
    for (int i = 0; i < LEDs_CORPO; i++){
      if(i < LEDs_CORPO){
        led_tree.setPixelColor(i,255,255,255);
        led_tree.show();
      }
    }
    time2 = millis();
  }
 
  a = 4;
}

  if(a == 4){
  for (int i = 0; i < LEDs_CORPO; i++){
      led_tree.setPixelColor(i,0,0,255);
      led_tree.show();
      delay(100);
    }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);
  
  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,255);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,255);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);

  // 

  for (int i = 0; i < LEDs_CORPO; i++){
      led_tree.setPixelColor(i,0,255,0);
      led_tree.show();
      delay(100);
    }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);
  
  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,255,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,255,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);

//

  for (int i = 0; i < LEDs_CORPO; i++){
      led_tree.setPixelColor(i,255,0,0);
      led_tree.show();
      delay(100);
    }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);
  
  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,255,0,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,255,0,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);

  //

  for (int i = 0; i < LEDs_CORPO; i++){
      led_tree.setPixelColor(i,255,80,0);
      led_tree.show();
      delay(100);
    }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);
  
  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,255,80,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,255,80,0);
      led_tree.show();
    }
  }
  delay(500);

  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,0,0,0);
      led_tree.show();
    }
  }
  delay(500);

  a = 5; 
  }

if(a == 5){
  led_tree.setPixelColor(24, 255, 80, 0);
  led_tree.show();
  for(int i = 0; i< LEDs_CORPO; i++){
      led_tree.setPixelColor(i, 255,255,255);
      led_tree.show();
      delay(70);
      led_tree.setPixelColor(i, 0, 0, 0);
      }
    a = 6;
  }

if(a == 6){
  for (int i = 0; i < LEDs_CORPO; i++){
    if(i < led_tree.numPixels()){
      led_tree.setPixelColor(i,255,255,255);
      led_tree.show();
    }
}
a = 7;
}

if(a == 7){
  uint16_t i, j;

  for (i = 255; i > LEDs; i--) {
    if (i < led_tree.numPixels()) {
      led_tree.setPixelColor(i, 0, 0, 0);
    }
    led_tree.show();
    delay(100);
  }
  delay(1000);
}
a = 5;*/
}