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
  setPinHigh(CLK_PIN);
  setPinLow(CLK_PIN);
}

void readTurnAroundIO(int pinNo){
  setPinToInput(pinNo);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
}

void writeData(uint8_t cmd, uint16_t address, uint8_t data){
  int i;
  int temp;

  writeTurnAroundIO(IO_PIN);

  printf("WRITING\n");
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

  printf("\nFOR ADDRESS\n");
  for(i=0;i<16;i++)
  {
    temp=address;
    temp=temp>>i;
    temp=temp&1;
    if(temp==1){
      sendBitHigh(IO_PIN);
      printf("i=%d  address&0x1=%d\n",i,temp&0x1);
    }
    else {
      sendBitLow(IO_PIN);
      printf("i=%d  address&0x1=%d\n",i,temp&0x1);
    }
  }

  printf("\nFOR DATA\n");
  for(i=0;i<8;i++)
  {
    temp=data;
    temp=temp>>i;
    temp=temp&1;
    if(temp==1){
      sendBitHigh(IO_PIN);
      printf("i=%d  data&0x1=%d\n",i,temp&0x1);
    }
    else {
      sendBitLow(IO_PIN);
      printf("i=%d  data&0x1=%d\n",i,temp&0x1);
    }
  }
}

uint32_t readBit(int pinNo){
  uint32_t BitValue;

  BitValue= readPin(pinNo);

  return BitValue;
}

uint32_t readData(uint8_t cmd,uint16_t address){
  int i;
  int temp;

  writeTurnAroundIO(IO_PIN);

  printf("\n\nREADING\n");
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

  printf("\nFOR ADDRESS\n");
  for(i=0;i<16;i++)
  {
    temp=address;
    temp=temp>>i;
    temp=temp&1;
    if(temp==1){
      sendBitHigh(IO_PIN);
      printf("i=%d  address&0x1=%d\n",i,temp&0x1);
    }
    else {
      sendBitLow(IO_PIN);
      printf("i=%d  address&0x1=%d\n",i,temp&0x1);
    }
  }

  temp=0;
  readTurnAroundIO(IO_PIN);

  for(i=0;i<8;i++)
  {
    temp=temp+(readBit(IO_PIN));
    temp=temp<<1;
  }
}








