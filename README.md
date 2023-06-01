# RGB_board


Simple 3V board design with tact switch and potmeter to control a RGB LED


## Description

This board runs on 3V and is also the size of a 2x AA battery pack. It features an attiny85 microcontroller, a potentiometer, a tact switch and a common anode RGB LED. 

With the tact switch different color modes can be selected (red, green or blue). Within each color mode, the intensity can be modified by turning the potentiometer knob. 

It was designed for a high school workshop to engage teenagers in immersive designs by playing with lighting and paper structures. 

## Bill of materials

###Tools

**Arduino IDE with following installed**
 
* ATtiny microcontrollers boards via board manager
* Libaries: 
	* BLEDevice.h
	* BLEHIDDevice.h
	* HIDKeyboardTypes.h
	* movingAvg.h	
* The arduino sketch under "files" in this repository [./files/RGB_attiny_pot_switch_3V/RGB_attiny_pot_switch_3V.ino](./files/RGB_attiny_pot_switch_3V/RGB_attiny_pot_switch_3V.ino) 

**Programmer**

You can either program the chip with Sparkfun's avr programmer [(see this hookup guide)](https://learn.sparkfun.com/tutorials/tiny-avr-programmer-hookup-guide/)

Or with an Arduino UNO microcontroller, a breadboard, and a bunch of dupont jumpers. [See this instructable](https://srituhobby.com/how-to-program-attiny85-with-arduino-uno-step-by-step/)

### Components per board

* [Solderable screw terminal (2 ports)](https://www.reichelt.nl/nl/nl/loetbare-schraubklemme-2-pol-rm-5-mm-90--ctb5202-2-p292669.html?&trstct=pol_12&nbc=1)
* [3x 100 ohm resistors](https://www.reichelt.nl/nl/nl/metaaloxide-weerstand-2w-5-100-ohm-2w-metall-100-p2312.html?&trstct=pol_0&nbc=1)
* [Attiny85 chip (DIP)](https://www.reichelt.nl/nl/nl/8-bit-attiny-avr-risc-microcontroller-8-kb-20-mhz-dip-8-attiny-85-20-pu-p69299.html?&nbc=1)
* [9V battery clip](https://www.reichelt.nl/nl/nl/batterijclip-voor-9-volt-blok-verticaal-clip-9v-p6665.html?&nbc=1)
* [Battery holder 2x AA mignon batteries with connector that matches the battery clip](https://www.reichelt.nl/nl/nl/houder-voor-2-mignoncellen-aa-drukknop-halter-2xum3-dk-p8438.html?&trstct=pol_1&nbc=1)
* [RGB LED (common anode)](https://opencircuit.nl/product/rgb-5mm-diffuse-led-common-anode)
* [Potentiometer ](https://opencircuit.nl/product/10k-rv09-verticale-potentiometer)
* [Tact switch 6 mm](https://opencircuit.nl/product/tactiele-button-6x6x5mm)
* The printed circuit board (PCB) (this design can be ordered [here](https://aisler.net/p/CUOELNLM))
* [2x AA batteries](https://www.reichelt.nl/nl/nl/set-van-40-batterijen-alkaline-mignon-ansmann-ans-al40-pack-p104406.html?&trstct=pol_6&nbc=1)



## Board design

 <img src="./images/top.png" alt="top of the board" width="800"> 

 <img src="./images/bottom.png" alt="bottom of the board" width="800"> 

## Assembly

### 1. Program the ATtiny chip before sholdering

See links to tutorials up top. 

### 2. Stuffing the board

 <img src="./images/assembly_notes.png" alt="bottom of the board" width="800"> 

* Solder all parts to the boards following this diagram. Note the orientation of the following: 
	* the long leg on the RGB is the common anode and goes into the second hole of the led footprint
	* note the notch on the attiny85 chip, it marks the orientation and should point in the same direction of the little circle in the silkscreen of the footprint
	* glue or tie the battery pack to the board, screw the wires into the screw terminal. The red lead goes to the + and the black lead goes to the -. 

### 3. Test

* Test connections with a multimeter
* Power the board and test it

#### 4. Disconnect the battery to power off!

**NOTE: To turn off the board: disconnect the battery. Although you can turn off the LED with the potmeter, the chip will continue running and drain the battery. When done: switch it off.s**
