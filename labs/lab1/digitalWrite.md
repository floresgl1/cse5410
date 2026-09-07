digitalWrite() | Arduino Documentation

#### ARDUINODOCS |—§ Qs

###### Searchon Docs

*[figure]*

< Go Back En

Home / Programming / Language Reference / Functions / , digitalWrite()

ON THIS PAGE | Description Syntax Parameters Returns Example Code Notes and Warnings and Warnings Warnings See also

#### Language Reference

##### Functions

*[figure]*

Digital 1/O _, Returns Last revision © 04/23/2025 digitalRead() Example Code _. . digitalWrite() Notes and Warnings and Warnings Warnings ninMode( Description1 1 See also Math . Write a HIGH ora LOW value abs() to a digital pin. constrain() If the pin has been configured as map() an OUTPUT with pinMode() , its maxi) voltage will be set to the corresponding value: 5V (or 3.3V ming on 3.3V boards) for HIGH and pow() OV (ground) for Low. sat) If the pin is configured as an sqrt() INPUT ,| digitalWrite() | will Bits and Bytes enable<sup>(HIGH)ordisable(LOW)</sup> the internal pull-up on the pitt) input pin. It is recommended to bitClear() set the pinMode() to bitRead() INPUT_PULLUP to enable the bitSet() internal. pull-up. resistor.. See the Digital Pins tutorial for more bitWrite() information. highBytisnByrel) If you do not set the pin. as an lowByte() OUTPUT , and connect an LED to Analog I/O it, when calling Help digitalWrite(pin, HIGH) , the analogRead()logRead LED may appear dim.. Without. pratense nd Daca ian\ explicitly setting pinMode() , https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalwrite/

digitalWrite() | Arduino Documentation

digitalWrite() will have enabled the internal pull-up resistor, which acts like a large current-limiting resistor.

## Syntax

Use the following function to write a digital value to a pin:

digitalWrite(pin, value)

###### Parameters

The function admits the following parameters:

pin : the Arduino pin number to be controlled. value : HIGH or LOW

###### Returns

The function returns nothing.

#### Example Code

Set the Arduino digital pin 13 (built-in LED) as an’ OUTPUT and toggles it by alternating between HIGH and LOW at one second pace.

https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalwrite/

digitalWrite()

| Arduino Documentation

void setup() { pinMode(13, OUTPUT) } void loop() { digitalWrite(13, HI delay(100@); digitalWrite(13, LO delay(100@); }

# Notes and Warnings

The analog input pins can be used as digital pins, referred to as AO, A1, etc. The exception is the Arduino Nano, Pro Mini, and Mini's A6 and A7 pins, which can only be used as analog inputs.

### See also

Description of the digital pins

Suggest Need License & changes support? Trademar

|The|Help Center|The Arduino|
|---|---|---|
|contenton|Ask the|documentatic|
|docs.ardui|Arduino|is licensed|
|no.cc is|Forum|under the|
|facilitated|Discover|Creative|
|througha|= Arduino|Commons|
|public|Discord|Attribution-|
|igitalwrite/||a|

https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalwrite/

---

## Reference — canonical source text

*Retrieved 2026-08-27 from the [Arduino Language Reference](https://docs.arduino.cc/language-reference/en/functions/digital-io/digitalwrite/), via its source repository [`arduino/reference-en`](https://github.com/arduino/reference-en/blob/master/Language/Functions/Digital%20IO/digitalWrite.adoc). The scanned text above interleaved the page sidebar and truncated the example code; this section is the authoritative version.*

### Description

Write a `HIGH` or a `LOW` value to a digital pin.

If the pin has been configured as an `OUTPUT` with `pinMode()`, its voltage will be set to the corresponding value: 5V (or 3.3V on 3.3V boards) for `HIGH`, 0V (ground) for `LOW`.

If the pin is configured as an `INPUT`, `digitalWrite()` will enable (`HIGH`) or disable (`LOW`) the internal pullup on the input pin. It is recommended to set the `pinMode()` to `INPUT_PULLUP` to enable the internal pull-up resistor. See the [Digital Pins](http://arduino.cc/en/Tutorial/DigitalPins) tutorial for more information.

If you do not set the `pinMode()` to `OUTPUT`, and connect an LED to a pin, when calling `digitalWrite(HIGH)`, the LED may appear dim. Without explicitly setting `pinMode()`, `digitalWrite()` will have enabled the internal pull-up resistor, which acts like a large current-limiting resistor.

### Syntax

`digitalWrite(pin, value)`

### Parameters

- `pin`: the Arduino pin number.
- `value`: `HIGH` or `LOW`.

### Returns

Nothing

### Example Code

The code makes the digital pin 13 an `OUTPUT` and toggles it by alternating between `HIGH` and `LOW` at one second pace.

```arduino
void setup() {
  pinMode(13, OUTPUT);    // sets the digital pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH); // sets the digital pin 13 on
  delay(1000);            // waits for a second
  digitalWrite(13, LOW);  // sets the digital pin 13 off
  delay(1000);            // waits for a second
}
```

### Notes and Warnings

The analog input pins can be used as digital pins, referred to as A0, A1, etc. The exception is the Arduino Nano, Pro Mini, and Mini's A6 and A7 pins, which can only be used as analog inputs.

### See also

- [Description of the digital pins](http://arduino.cc/en/Tutorial/DigitalPins)
