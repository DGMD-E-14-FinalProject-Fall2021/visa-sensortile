<h1> VISA SensorTile </h1>

***Repository Contents***
---
- **/visa_sensortile** - VISA SensorTile project folder.
- **/datasheets** - Datasheets for all hardware utilized in VISA SensorTile
- **VISA SensorTile tutorial.pdf/.docx** - Tutorial on how to setup hardware and project. Directions on how to interact with it over bluetooth low energy.

***SensorTile Mac Address***
---
The MAC address of the SensorTile is a random static address of C0:CC:BB:AA:AA:AA.

***BLE API***
---

***Distance data characteristic value handle***<br/>
Characteristic Handle: 000E<br/>
Characteristic Value: Timestamp (2 bytes), pressure (4 bytes), distance (2 bytes)<br/> 
Characteristic Value Format: Little endian<br/>

***Client characteristic configuration handle for distance data transmission.***<br/> 
Characteristic Handle: 000F<br/>

| Value       | Result      |
| ------------- | ------------- |
| 0100          | Turns on distance data transmission  |
| 0000  | Turns off distance data transmission  |

***Client characteristic configuration handle for haptic feedback.***<br/> 
Characteristic Handle: 0012<br/>

| Value       | Result      |
| ------------- | ------------- |
| 0000          | Turns off haptic feedback  |
| 0100  | Turns on vibration pattern to navigate hand right  |
| 0200  | Turns on vibration pattern to navigate hand left  |
| 0300  | Turns on vibration pattern to navigate hand up  |
| 0400  | Turns on vibration pattern to navigate hand down  |
| 0500  | Turns on vibration pattern to navigate hand forward  |
| 0600  | Turns on vibration pattern to navigate hand backward  |
