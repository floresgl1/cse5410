8/27/26, 3:03 PM 

digitalRead() | Arduino Documentation 

on Docs 

### ARDUINODOCS |—§ Qs Searchon 



<!-- Start of picture text -->
©<br><!-- End of picture text -->

/ © 

< Go Back En Home / Programming / Language ON THIS PAGE Language Reference Reference / Functions / <u>,</u> digitalRead() | Description Syntax Functions ° digitalRead() Notes and Warnings Digitaligi 1/0 Last revision © 04/23/2025 See also | digitalRead() digitalWrite() ninMode( Description Math . Reads the value from a specified abs() digital pin, either HIGH or LOW constrain() . map() max() Syntax min() Use the following function to pow() read the value of a digital pin: sq() digitalRead(pin) sqrt() Bits and Bytes Parameters bit() The function admits the bitClear() . following parameter: bitRead() pin : the Arduino pin number bitSet() you want to read. bitWrite() highByte() Returns lowByte() The function returns the Analogmene I/O boolean state of the read pin. as analogRead() HIGH | or) LOW |. analancDandADaenlhitianlN 

### Language Reference 

https://docs.arduino.cc/language- ~~re~~ ference/en/functions/digital-io/digitalread/ 

1/3 

8/27/26, 3:03 PM 

digitalRead() | Arduino Documentation 

### Example Code 

Control the Arduino built ~~-~~ in LED on pin 13 (output) by assigning the same value of a push button connected to pin 7 (input). 

























int ledPin = 13; // int inPin = 7; // int val = @; // void setup() { pinMode(ledPin, OUT pinMode(inPin, INPU } void loop() { val = digitalRead(i digitalWrite(ledPin } 

# Notes and Warnings 

If the pin isn’t connected to anything, digitalRead() can return either HIGH or LOW (and this can change randomly). The analog input pins can be used as digital pins, referred to as AO, A1, etc. The exception is the Arduino Nano, Arduino Pro Mini, and Arduino Mini's A6 and A7 pins, which can only be used as analog inputs. 

## See also 

https://docs.arduino.cc/language- ~~re~~ ference/en/functions/digital-io/digitalread/ 

2/3 

