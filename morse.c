#define MORSE_H

#include<stdio.h>

unsigned char morse_long='-';
unsigned char morse_short='.';
unsigned char morse_pause='/';

const unsigned char morses[37]={
    /* 
    note: 
    using 1byte as a morse code;
    5bit(value)+3bit;
    0   `
    1   -
    
    key[1] ~ key[26] are letters;
    key[27] ~ key[36] are numbers;
     */
    //pause
    0b00000000,
    //a-e
    0b01000010,
    0b10000100,
    0b10100100,
    0b10000011,
    0b00000001,
    //f-j
    0b00100100,
    0b11000011,
    0b00000100,
    0b00000010,
    0b01110100,
    //k-o
    0b10100011,
    0b01000100,
    0b11000010,
    0b10000010,
    0b11100011,
    //p-t
    0b01100100,
    0b11010100,
    0b01000011,
    0b00000011,
    0b10000001,
    //u-z
    0b00100011,
    0b00010100,
    0b01100011,
    0b10010100,
    0b10110100,
    0b11000100,
    //0-4
    0b11111101,
    0b01111101,
    0b00111101,
    0b00011101,
    0b00001101,
    //5-9
    0b00000101,
    0b10000101,
    0b11000101,
    0b11100101,
    0b11110101,
};

unsigned char char_to_morse(char c){
    if((64<c)&&(c<91)) return c-64;
    if((96<c)&&(c<123)) return c-96;
    if((47<c)&&(c<58)) return c-21;
};

int main(){
    char c;
    scanf("%c",&c);
    char_to_morse(c);
    return 0;
}