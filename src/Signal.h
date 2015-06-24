#ifndef Signal_H
#define Signal_H

#define IO_PIN    4
#define CLK_PIN   5

/**
 * @breif set pin to high
 * @para pinNo is the pin to set high
 */
void setPinHigh(int pinNo);


/**
 * @breif set pin to low
 * @para pinNo is the pin to set low
 */
void setPinLow(int pinNo);

/**
 * @breif Read pin state
 * @para pinNo is the pin to read from
 * return 1 if pin is high, otherwise 0
 */
int readPin(int pinNo);

/**
 * @breif Set pin as output
 * @para pinNo is the pin set as output
 */
void setPinToOutput(int pinNo);

/**
 * @breif Set pin as input
 * @para pinNo is the pin set as input
 */
 void setPinToInput(int pinNo);



#endif // Signal_H
