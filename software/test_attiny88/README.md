How to program the badge:
---------------------------

This project uses platformio environment but you can use the Arduino IDE or any
other solution.

You will need an ISP programmer, an Arduino can be configured as a programmer.
In my case, I use the AVR programmer called dragon\_isp.

Remember to change the -c parameter by the one with the name of your programmer.
The same applies to your platformio.io file.
Change the line:
```
upload_protocol = dragon_isp
```
Once you change the programmer set the fuses
If you assembly the board by yourself you will need to set the fuses:

```
avrdude -p t88 -B 50 -c dragon_isp -e -U lfuse:w:0xde:m -U hfuse:w:0xdf:m -U
efuse:w:0xff:m  flash:w:.pioenvs/attiny88/firmware.hex
```
This will set the board to 1MHz, feel free to change it if you want.

The most common cause of not been able to program the fuses are, no supply
voltage on the badge, a flip connector between the programmer and the board ISP
header or a bad solder joint.

To load the demo program enter:
```
pio run -t program 
```

This will program the demo into your badge.
