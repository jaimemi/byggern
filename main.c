#define  F_CPU 4915200UL
#include <util/delay.h>
#include <avr/io.h>

// Add a nice comment

int main(){
  DDRB = (1 << PB0);

 while(1){
    PORTB |= (1 << PB0);
    _delay_ms(1000);

    PORTB &= ~(1 << PB0);
    _delay_ms(1000);
 }
  return 0;
}
