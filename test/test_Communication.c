#include "unity.h"
#include "Communication.h"
#include "mock_Signal.h"
#include <stdint.h>


void setUp(void)
{
}

void tearDown(void)
{
}

void test_sendBitHigh_IOpin_High_ClockPin_High_Then_Low()
{
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);
  
  sendBitHigh(IO_PIN);
}

void test_sendBitlow_IOpin_Low_ClockPin_Low_Then_High()
{
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  
  sendBitLow(IO_PIN);
}

void test_writeTurnAroundIO()
{
  setPinToOutput_Expect(IO_PIN);
  setPinToOutput_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);  
  
  writeTurnAroundIO(IO_PIN);
}

void test_writeData()
{  
  setPinToOutput_Expect(IO_PIN);
  setPinToOutput_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  //for cmd
  // **************************1  
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);
  // **************************0  
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);  
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);  
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 

  //for address
   // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
   // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
   // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
   // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);   
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  
  //for data
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************0
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN); 
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);   
  writeData(0xCD,0xDEAD,0xC0);
}

void test_readData()







