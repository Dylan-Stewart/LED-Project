#include <stdio.h>
#include <stdlib.h>
#include <bcm2835.h>
#include "MYLIGHTSLIB.h"

extern int init(int PIN, int PIN2){
    if (!bcm2835_init())
      return 1;
 
    // Set the pin to be an output
    bcm2835_gpio_fsel(PIN, BCM2835_GPIO_FSEL_OUTP);
    bcm2835_gpio_fsel(PIN2, BCM2835_GPIO_FSEL_OUTP);
    return 0;
}

extern int blink(int PIN, int PIN2){

    if (!bcm2835_init())
      return 1;

    bcm2835_gpio_fsel(PIN, BCM2835_GPIO_FSEL_OUTP);

    while (1)
    {

    bcm2835_gpio_write(PIN, HIGH);
    bcm2835_delay(500);
    bcm2835_gpio_write(PIN, LOW);
    bcm2835_delay(100);
    bcm2835_gpio_write(PIN2, HIGH);
    bcm2835_delay(500);
    bcm2835_gpio_write(PIN2, LOW);
    bcm2835_delay(500);


    }
    bcm2835_close();
    return 0;
}


extern int PoliceBlink(int PIN, int PIN2){
 
    if (!bcm2835_init())
      return 1;
 
    bcm2835_gpio_fsel(PIN, BCM2835_GPIO_FSEL_OUTP);
    bcm2835_gpio_fsel(PIN2, BCM2835_GPIO_FSEL_OUTP);

    while (1)
    {
       bcm2835_gpio_write(PIN, HIGH);
       bcm2835_delay(500);
       bcm2835_gpio_write(PIN, LOW);
       bcm2835_delay(500);
       bcm2835_gpio_write(PIN, HIGH);
       bcm2835_delay(10);
       bcm2835_gpio_write(PIN, LOW);
       bcm2835_gpio_write(PIN, HIGH);
       bcm2835_delay(10);
       bcm2835_gpio_write(PIN, LOW);
       bcm2835_gpio_write(PIN, HIGH);
       bcm2835_delay(10);
       bcm2835_gpio_write(PIN, LOW);
       bcm2835_delay(50);
       bcm2835_gpio_write(PIN2, HIGH);
       bcm2835_delay(10);
       bcm2835_gpio_write(PIN2, LOW);
       bcm2835_delay(10);
       bcm2835_gpio_write(PIN2, HIGH);
       bcm2835_delay(10);
       bcm2835_gpio_write(PIN2, LOW);
       bcm2835_gpio_write(PIN2, HIGH);
       bcm2835_delay(10);
       bcm2835_gpio_write(PIN2, LOW);
       bcm2835_delay(50);
    }
    bcm2835_close();
    return 0;
}
