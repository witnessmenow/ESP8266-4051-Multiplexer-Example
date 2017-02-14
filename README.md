# ESP8266-4051-Multiplexer-Example
An example showing how to use a 4051 multiplexer with an esp8266 to connect up to 8 analog sensors.

Buy the Multiplexers here:
- [Aliexpress](http://s.click.aliexpress.com/e/qzNZrRZ)
- [eBay](https://rover.ebay.com/rover/1/5282-53468-19255-0/1?icep_id=114&ipn=icep&toolid=20004&campid=5338037665&mpre=http%3A%2F%2Fwww.ebay.ie%2Fitm%2F10PCS-IC-MUX-DEMUX-8X1-16DIP-SN74HC4051-74HC4051-NEW-%2F311503477945%3Fhash%3Ditem48870ddcb9%3Ag%3AXIgAAOSwnipWbBG4)

Buy the ESP8266 here:
- [Wemos d1 mini clone](http://s.click.aliexpress.com/e/uzFUnIe)
- [Wemos d1 mini](https://www.aliexpress.com/item/D1-mini-Mini-NodeMcu-4M-bytes-Lua-WIFI-Internet-of-Things-development-board-based-ESP8266/32529101036.html)
- [NodeMCU](http://s.click.aliexpress.com/e/AAyvJiA) 

Wiring: Wemos ->  4051
---------------
D4    ->   S0 (A)

D3    ->   S1 (B)

D2    ->   S2 (C)

A0    ->   Common

3.3v  ->   VCC

G     ->   GND

G     ->   Inhibit

G     ->   VEE  
