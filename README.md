# Arduino-Serial-IR
Jonah Winchell
Digital Network Infrastructure, Spring 2025

This project outlines one transmit and one receive module for RS323-compliant serial communication via IR.

---

To transmit serial data, an Arduino creats a 38kHz square wave (to match the receiver's frequency) via Pulse Width Modulation and NORs it with its own serial output. This signal is sent to an IR LED which can then be detected by the receiver module.
![transmitter](./images/tx_circuit.png)

--- 

To receive data, a second Arduino uses an IR Receiver who's data output is tied to the arduino's serial input. This data is then recorded by a serial monitor connected to the Arduino via USB.

![receiver](./images/rx_circuit.png)

---

Thanks to:
[jmknapp](https://forum.arduino.cc/t/serial-comm-using-ir/10620)
[Maker.io](https://www.digikey.com/en/maker/tutorials/2021/how-to-send-and-receive-data-over-ir-signals-with-an-arduino)
