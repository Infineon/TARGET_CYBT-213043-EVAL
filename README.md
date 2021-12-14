# CYBT-213043-EVAL

### Overview

The Infineon CYBT-213043-EVAL Evaluation Kit enables you to evaluate and develop single-chip Bluetooth&#174; applications using the EZ-BT AIROC&#8482; Module CYBT-213043-02. The CYBT-213043-02 EZ-BT AIROC&#8482; Module is an integrated, fully certified, 12.0 mm x 16.61 mm x 1.70 mm, programmable dual-mode Bluetooth&#174; module designed to reduce your time-to-market. The CYBT-213043-02 module utilizes the Infineon CYW20819 silicon device.  Manufactured using advanced CMOS low-power process, the CYW20819 employs high integration to reduce external components, thereby minimizing the device's footprint and cost. This kit helps evaluate device functionality and develop applications quickly for faster time-to-market. CYBT-213043-EVAL can be used as a standalone evaluation kit or can be combined with Arduino-compatible shields.

* CYW20819-based dual-mode (LE/BR/EDR) Bluetooth&#174; 5.0-compliant fully certified module (CYBT-213043-02)
* Arduino compatible headers for hardware expansion
* User switches and LEDs
* FCC, ISED, MIC, and CE Certified Module on board (CYBT-213043-02)
* USB connector for power, programming, and USB-UART bridge

### Standalone Usage

To use the CYBT-213043-EVAL:

1) Configure the evaluation board headers/switches to the desired settings

2) Connect the evaluation board to a PC via a USB cable

3) Refer to KBA226703 for platform files, Makefile target generation, and HCI UART switch position setting for programming

4) Use ModusToolbox&#8482; 2.0 and BTSDK 2.0 (or higher), develop your application, program and test

Note: Recover the CYBT-213043-EVAL before programming. The Arduino-compatible headers(J3/J4/J6/J7) are optional connections, which provide additional I/O connections to the module and allow for other Arduino shields to be used during development.

Optional Usage with Arduino Shield:

Arduino compatible shields can be connected through the Arduino compatible headers (J3/J4/J6/J7) to provide additional I/O connections and functionality.

### Kit Contents

* 1 X EZ-BT Module Arduino Evaluation Board (CYBT-213043-EVAL) with on-board EZ-BT AIROC&#8482; Module (CYBT-213043-02)
* 1 X USB Cable

### Additional Information

Max UART baud rate is 1M. Use baud rate of 115200 for Client Control.

External 32 kHz LPO is used by default. To operate without external LPO, set USE\_32K\_EXTERNAL\_LPO=0 on the make command line or edit the default value in CYBT-213043-EVAL.mk.

For more information, see [CYBT-213043-EVAL](http://www.cypress.com/CYBT-213043-EVAL)

