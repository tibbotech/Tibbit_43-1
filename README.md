<img src="./images/tibbit-43_1.png" width="26%"><img src="./images/tibbit_43-1.svg" width="73%">

# Tibbit #43-1

This repository contains the firmware for the PIC16F1825 microcontroller integrated into Tibbit #43-1 Four-Channel Streaming ADC ±10V. The microcontroller enables low-jitter sampling of analog data while enhancing the linearity and precision of analog-to-digital conversions.

The microcontroller's firmware can be upgraded in the system without any external hardware. Firmware updates take place through the microcontroller's low-voltage programming (LVP) mode. The Tibbit's TX line acts as SCL, the RX line as SDA, and the –MCLR line puts the microcontroller into the LVP mode.

Tibbit #43-1 is based on the AD7323 12-bit+sign successive-approximation analog-to-digital converter IC. It offers four single-ended or two differential channels.

Tibbit #43-1 has an input range of ±10V in the single-ended mode and ±20V in the differential mode. Both are common output ranges of industrial pressure, temperature, and other types of transducers. This makes Tibbit #43-1 ideal for use in Internet of Things (IoT), Industrial IoT, and industrial automation applications that require continuous sampling of instruments and on-the-fly analog-to-digital conversion of the data.

## Useful links
* [Tibbit #43-1 — Official Product Page](https://www.tibbo.com/store/tps/tibbits.html#/?filter=%2343_1)
* [Tibbit #43-1 — Official Documentation](https://docs.tibbo.com/phm/tibbit_43-1)
* [Tibbit #43-1 Interface Protocol Documentation](https://docs.tibbo.com/phm/tibbit_43-1_interface)
* [CODY — Tibbo's Project Code Wizard](https://cody.tibbo.com)
* [Contact Tibbo Support](https://tibbo.com/support/contact.html)
