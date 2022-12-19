#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LEDs 25
#define LEDs_CORPO 24
#define LED_PIN 2
#define QTDE_CORES 13

Adafruit_NeoPixel led_tree (LEDs, LED_PIN, NEO_GRB + NEO_KHZ800);

int a = 5, b;

unsigned long time1, 
              time2,
              timeEffect = 6900,
              timeEffect2 = 8100,
              timeEffect3 = 8200,
              timeEffect4 = 9300;

unsigned char led_sorteado,
              cor_anterior,
              led_anterior;

uint32_t vermelho        =   led_tree.Color(255, 0, 0),
         rosa            =   led_tree.Color(255, 0, 128),
         magenta         =   led_tree.Color(255, 0, 255),
         violeta         =   led_tree.Color(128, 0, 255),
         azul            =   led_tree.Color(0, 0, 255),
         azure           =   led_tree.Color(0, 128, 255),
         ciano           =   led_tree.Color(0, 255, 255),
         verde_primavera =   led_tree.Color(0, 255, 128),
         verde           =   led_tree.Color(0, 255, 0),
         verde_limao     =   led_tree.Color(128, 255, 0),
         amarelo         =   led_tree.Color(255, 255, 0),
         laranja         =   led_tree.Color(255, 128, 0),
         branco          =   led_tree.Color(255, 255, 255),
         cor_sorteada;

void sorteador(unsigned char num_leds){

  unsigned char sorteio_cor = random(QTDE_CORES),
                sorteio_led = random(num_leds);

  led_sorteado = sorteio_led;

  switch (sorteio_cor){
    case 0:
      cor_sorteada = vermelho;
      break;
    case 1:
      cor_sorteada = rosa;
      break;
    case 2:
      cor_sorteada = magenta;
      break;
    case 3:
      cor_sorteada = violeta;
      break;
    case 4:
      cor_sorteada = azul;
      break;
    case 5:
      cor_sorteada = azure;
      break;
    case 6:
      cor_sorteada = ciano;
      break;
    case 7:
      cor_sorteada = verde_primavera;
      break;
    case 8:
      cor_sorteada = verde;
      break;
    case 9:
      cor_sorteada = verde_limao;
      break;
    case 10:
      cor_sorteada = amarelo;
      break;
    case 11:
      cor_sorteada = laranja;
      break;
    case 12:
      cor_sorteada = branco;
      break;
    }
  }

int leds_aleatorios(){
  int ciclos = 0;
  while (ciclos < 2500){
    sorteador(LEDs_CORPO);
    Serial.println(cor_sorteada);
    Serial.println(led_sorteado);
    led_tree.setPixelColor(led_sorteado, cor_sorteada);
    led_tree.show();
    delay(100);
    led_tree.setPixelColor(led_sorteado, 0);
    led_tree.show();
    ciclos++;
  }
  
  led_tree.clear();
  led_tree.show();
  return 1;
}

void setup() {
  Serial.begin(9600);
  led_tree.begin();
}

void loop() {
led_tree.setPixelColor(0, 255, 80, 0);
leds_aleatorios();
led_tree.clear();
led_tree.show();

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
}*/

}