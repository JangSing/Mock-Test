#include "Communication.h"
#include <stdint.h>
#include <Signal.h>
#include <stdio.h>
#include <stdlib.h>

void sendBitHigh(int pinNo){
  setPinHigh(pinNo);
  setPinHigh(CLK_PIN);
  setPinLow(CLK_PIN);
}

void sendBitLow(int pinNo){ 
  setPinLow(pinNo);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);  
}

void writeTurnAroundIO(int pinNo){
  setPinToOutput(pinNo);
  setPinToOutput(CLK_PIN);
  setPinHigh(CLK_PIN);
  setPinLow(CLK_PIN);
}

// void readTurnAroundIO(int pinNo){
  // setPinToOutput(pinNo);
  // setPinToOutput(CLK_PIN);
  // setPinHigh(CLK_PIN);
  // setPinLow(CLK_PIN);
// }

void writeData(uint8_t cmd, uint16_t address, uint8_t data){
  writeTurnAroundIO(IO_PIN);
  int i;
  int temp;
  
  printf("FOR CMD\n");
  for(i=0;i<8;i++)
  {
    temp=cmd;
    temp=temp>>i;
    temp=temp&1;
    if(temp==1){
      sendBitHigh(IO_PIN);
      printf("i=%d  cmd&0x1=%d\n",i,temp&0x1);
    }
    else {
      sendBitLow(IO_PIN);
      printf("i=%d  cmd&0x1=%d\n",i,temp&0x1);
    }
  }
  
  printf("FOR ADDRESS\n");
  for(i=0;i<16;i++)
  {
    temp=address;
    temp=temp>>i;
    temp=temp&1;
    if(temp==1){
      sendBitHigh(IO_PIN);
      printf("i=%d  cmd&0x1=%d\n",i,temp&0x1);
    }
    else {
      sendBitLow(IO_PIN);
      printf("i=%d  cmd&0x1=%d\n",i,temp&0x1);
    }
  }
  
  printf("FOR DATA\n");
  for(i=0;i<8;i++)
  {
    temp=data;
    temp=temp>>i;
    temp=temp&1;
    if(temp==1){
      sendBitHigh(IO_PIN);
      printf("i=%d  cmd&0x1=%d\n",i,temp&0x1);
    }
    else {
      sendBitLow(IO_PIN);
      printf("i=%d  cmd&0x1=%d\n",i,temp&0x1);
    }
  }
      

  
}


uint32_t readBit(int pinNo){
  
  
  
  
  
  
  
}