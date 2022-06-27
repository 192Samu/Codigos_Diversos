int main(){ 
  /* Pinos de controle dos motores*/
  DDRB |= (1<<0); /* Direção M1 -> D8, PB0 */
  DDRB |= (1<<1); /* M1 -> D9, PB1 */
  DDRB |= (1<<2); /* Direção M2 -> D10, PB2 */
  DDRB |= (1<<3); /* M2 -> D11, PB3 */

  /*Direção M1 e M2 iniciadas em 0 (Robô se move para frente) */
  PORTB &= ~(1<<0);
  PORTB &= ~(1<<2);

  /* Pinos dos sensores setados como entrada */
  DDRD &= ~(1<<6); /* Sensor L -> D6, PD6 */
  DDRD &= ~(1<<7); /* Sensor R -> D7, PD7 */

  while(1){     /* Loop */

    if((PIND & ~(1<<6)) && (PIND & ~(1<<7))){   /* Testa se os dois sensores estão lendo 0*/
      PORTB |= (1<<1);  /* M1 (PB1) liga */
      PORTB |= (1<<3);  /* M2 (PB3) liga */
    }

    if((PIND & (1<<6)) && (PIND & ~(1<<7))){    /* Testa se sensor L = 1 e sensor R = 0 */
      PORTB &= ~(1<<1); /* M1 (PB1) desliga */
      PORTB |=  (1<<3); /* M2 (PB3) liga */
    }

    if((PIND & ~(1<<6)) && (PIND & (1<<7))){    /* Testa se sensor L = 0 e sensor R = 1 */
      PORTB |=  (1<<1); /* M1 (PB1) liga */
      PORTB &= ~(1<<3); /* M2 (PB3) desliga */
    }
    
  } /* Fim while()*/

} /* Fim main()*/