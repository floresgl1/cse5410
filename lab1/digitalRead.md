digitalRead() | Arduino Documentation

on Docs

### ARDUINODOCS |—§ Qs Searchon

*[figure]*

< Go Back En Home / Programming / Language ON THIS PAGE Language Reference Reference / Functions / , digitalRead() | Description Syntax Functions ° digitalRead() Notes and Warnings Digitaligi 1/0 Last revision © 04/23/2025 See also | digitalRead() digitalWrite() ninMode( Description Math . Reads the value from a specified abs() digital pin, either HIGH or LOW constrain() . map() max() Syntax min() Use the following function to pow() read the value of a digital pin: sq() digitalRead(pin) sqrt() Bits and Bytes Parameters bit() The function admits the bitClear() . following parameter: bitRead() pin : the Arduino pin number bitSet() you want to read. bitWrite() highByte() Returns lowByte() The function returns the Analogmene I/O boolean state of the read pin. as analogRead() HIGH | or) LOW |. analancDandADaenlhitianlN

### Language Reference

https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalread/

digitalRead() | Arduino Documentation

### Example Code

Control the Arduino built-in LED on pin 13 (output) by assigning the same value of a push button connected to pin 7 (input).

int ledPin = 13; // int inPin = 7; // int val = @; // void setup() { pinMode(ledPin, OUT pinMode(inPin, INPU } void loop() { val = digitalRead(i digitalWrite(ledPin }

# Notes and Warnings

If the pin isn’t connected to anything, digitalRead() can return either HIGH or LOW (and this can change randomly). The analog input pins can be used as digital pins, referred to as AO, A1, etc. The exception is the Arduino Nano, Arduino Pro Mini, and Arduino Mini's A6 and A7 pins, which can only be used as analog inputs.

## See also

https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalread/

---

## Reference — canonical source text

*Retrieved 2026-08-27 from the [Arduino Language Reference](https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalread/), via its source repository [`arduino/reference-en`](https://github.com/arduino/reference-en/blob/master/Language/Functions/Digital%20IO/digitalRead.adoc). The scanned text above interleaved the page sidebar and truncated the example code; this section is the authoritative version.*

### Description

Reads the value from a specified digital pin, either `HIGH` or `LOW`.

### Syntax

`digitalRead(pin)`

### Parameters

- `pin`: the Arduino pin number you want to read

### Returns

`HIGH` or `LOW`

### Example Code

Sets pin 13 to the same value as pin 7, declared as an input.

```arduino
int ledPin = 13;  // LED connected to digital pin 13
int inPin = 7;    // pushbutton connected to digital pin 7
int val = 0;      // variable to store the read value

void setup() {
  pinMode(ledPin, OUTPUT);  // sets the digital pin 13 as output
  pinMode(inPin, INPUT);    // sets the digital pin 7 as input
}

void loop() {
  val = digitalRead(inPin);   // read the input pin
  digitalWrite(ledPin, val);  // sets the LED to the button's value
}
```

### Notes and Warnings

If the pin isn't connected to anything, `digitalRead()` can return either `HIGH` or `LOW` (and this can change randomly).

The analog input pins can be used as digital pins, referred to as A0, A1, etc. The exception is the Arduino Nano, Pro Mini, and Mini's A6 and A7 pins, which can only be used as analog inputs.

### See also

- [Description of the digital pins](http://arduino.cc/en/Tutorial/DigitalPins)
