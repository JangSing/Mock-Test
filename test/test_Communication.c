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

void test_sendBitHigh_IOpin_High_and_ClockPin_High_Then_Low()
{
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);

  sendBitHigh(IO_PIN);
}

void test_sendBitlow_IOpin_Low_and_ClockPin_Low_Then_High()
{
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);

  sendBitLow(IO_PIN);
}

void test_writeTurnAroundIO_set_as_Output_and_ClockPin_High_Then_Low()
{
  setPinToOutput_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);

  writeTurnAroundIO(IO_PIN);
}

void test_readTurnAroundIO_set_as_Input_and_ClockPin_Low_Then_High()
{
  setPinToInput_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);

  readTurnAroundIO(IO_PIN);
}

//testing function writeData using cmd 0xCD to address 0xDEAD with data 0xC0
void test_writeData_Set_cmd_0xCD_Address_0xDEAD_Data_0xC0()
{
  //writeTurnAroundIO => to cahnge the IO to become an Output
  setPinToOutput_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);

  //mock for cmd value (0xCD)
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

  //mock for address value (0xDEAD)
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

  //mock for data value (0xC0)
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

  //writing data using cmd 0xCD to address 0xDEAD with data 0xC0
  writeData(0xCD,0xDEAD,0xC0);
}

// testing function readBit to read a single bit of the Data
void test_readBit()
{
  uint32_t BitValue;
  readPin_ExpectAndReturn(IO_PIN,1);

  BitValue=readBit(IO_PIN);

  TEST_ASSERT_EQUAL(1,BitValue);
}

//test function readData using cmd 0xAB at address 0xFACE
void test_readData_given_cmd_0xAB_and_Address_0xFACE_should_return_readValue()
{
  uint32_t ReadValue;

  //writeTurnAroundIO => to change the IO to become an Output
  setPinToOutput_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);

  //mock for cmd value (0xAB)
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

  //mock for address value (0xFACE)
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
  // **************************1
  setPinHigh_Expect(IO_PIN);
  setPinHigh_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);

  //readTurnAroundIO => to change the IO to become an Input
  setPinToInput_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);

  //creating Data to let the function to read
  readPin_ExpectAndReturn(IO_PIN,1);
  readPin_ExpectAndReturn(IO_PIN,0);
  readPin_ExpectAndReturn(IO_PIN,1);
  readPin_ExpectAndReturn(IO_PIN,0);
  readPin_ExpectAndReturn(IO_PIN,1);
  readPin_ExpectAndReturn(IO_PIN,0);
  readPin_ExpectAndReturn(IO_PIN,1);
  readPin_ExpectAndReturn(IO_PIN,0);

  //readData using cmd 0xAB at address 0xFACE
  ReadValue=readData(0xAB,0xFACE);

  //test whether the data 0x10101010 has been succesfully read into
  TEST_ASSERT_EQUAL(0xAA,ReadValue);
}