//#include <Arduino.h>          //Para a Arduino IDE, comente essa linha. Para o VS Code, descomente-a
#include <Adafruit_NeoPixel.h>

//Definição dos pinos
#define LED_PIN 2
#define QTDE_CORES 13

//Quantidades de LEDs a serem manipulados
#define LEDs 25
#define LEDs_CORPO 24

//Objeto
Adafruit_NeoPixel led_tree (LEDs, LED_PIN, NEO_GRB + NEO_KHZ800);

//Variáveis 
uint8_t led_sorteado,
        cor_anterior,
        led_anterior,
        count = 0;

//Mapeamento de cores
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


//Função para sortear valores de posição e cor
void sorteador(unsigned char num_leds){

  //Sorteia os valores
  uint8_t sorteio_cor = random(QTDE_CORES),
          sorteio_led = random(num_leds);

  led_sorteado = sorteio_led;       //variável que recebe a posição do led sorteado

  //Atribui cores às posições sorteadas
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

// Efeito árvore colorida estática
void cor(){
    led_tree.setPixelColor(0, vermelho);
    led_tree.setPixelColor(1, rosa);
    led_tree.setPixelColor(2, magenta);
    led_tree.setPixelColor(3, violeta);
    led_tree.show();
    led_tree.setPixelColor(4, azul);
    led_tree.show();
    led_tree.setPixelColor(5, azure);
    led_tree.show();
    led_tree.setPixelColor(6, ciano);
    led_tree.show();
    led_tree.setPixelColor(7, verde_primavera);
    led_tree.show();
    led_tree.setPixelColor(8, verde);
    led_tree.show();
    led_tree.setPixelColor(9, verde_limao);
    led_tree.show();
    led_tree.setPixelColor(10, amarelo);
    led_tree.show();
    led_tree.setPixelColor(11, laranja);
    led_tree.show();
    led_tree.setPixelColor(12, branco);
    led_tree.show();
    led_tree.setPixelColor(13, vermelho);
    led_tree.show();
    led_tree.setPixelColor(14, rosa);
    led_tree.show();
    led_tree.setPixelColor(15, magenta);
    led_tree.show();
    led_tree.setPixelColor(16, violeta);
    led_tree.show();
    led_tree.setPixelColor(17, azul);
    led_tree.show();
    led_tree.setPixelColor(18, azure);
    led_tree.show();
    led_tree.setPixelColor(19, ciano);
    led_tree.show();
    led_tree.setPixelColor(20, verde_primavera);
    led_tree.show();
    led_tree.setPixelColor(21, verde);
    led_tree.show();
    led_tree.setPixelColor(22, verde_limao);
    led_tree.show();
    led_tree.setPixelColor(23, amarelo);
    led_tree.show();
    delay(10000);

    //Desliga todos os leds de uma só vez
    for(int a = 0; a < LEDs_CORPO; a++){
    if(a < LEDs_CORPO){
      led_tree.setPixelColor(a, 0);
      led_tree.show();
    }
  }
  delay(20);
    count = 1;        //Atualiza a variável de controle
}

//Efeito LEDs coloridos aleatórios
void LEDs_aleatorios(){
  int e = 0;        //variável que recebe o número de ciclos desejados

  //Sorteia 250 vezes um número qualquer entre 0 e 23 e liga o led referente a esse núemro, desligando-o na sequência 
  while(e < 250){
    sorteador(LEDs_CORPO);
    led_tree.setPixelColor(led_sorteado, cor_sorteada);
    led_tree.show();
    delay(75);
    e++;
  }
  if(e == 250){
    count = 2;      //Atualiza a variável de controle
  }

  //Desliga todos os leds de uma só vez
  for(int a = 0; a < LEDs_CORPO; a++){
    if(a < LEDs_CORPO){
      led_tree.setPixelColor(a, 0);
      led_tree.show();
    }
  }
  delay(20);
}

//Efeito de cores percorrendo todo o corpo da árvore
void passeio_cor(){
  int e = 0;        //variável que recebe o número de ciclos desejados

  //Faz com que uma cor seja sorteada e percorra toda a árvore, repetindo o ciclo por 10 vezes
  while(e < 10){
    sorteador(LEDs_CORPO);
    for(int h = 0; h < LEDs_CORPO; h++){
      led_tree.setPixelColor(h, cor_sorteada);
      led_tree.show();
      delay(40);
    }
    e++;
  }
  if(e == 10){
    count = 0;      //Atualiza a variável de controle
  }
}

void setup() {
  Serial.begin(9600);
  led_tree.begin();
}

void loop() {
  led_tree.setPixelColor(24, 255, 80, 0);     //Mantém o LED da estrela permanentemente ligado
  led_tree.show();

  //Controla os efeitos
  if(count == 0){
    cor();
  }
  if(count == 1){
    LEDs_aleatorios();
  }
  if(count == 2){
    passeio_cor();
  }
}