#include "Wire.h"

#define EEPROM_ADDRESS 0x57
#define QWORD 8 // for formatting reasons, read 8 bytes at a time
#define NUM_QWORDS 32 // 256/QWORD

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Wire.begin();

Wire.beginTransmission(EEPROM_ADDRESS);
Wire.write(0x00);
Wire.endTransmission(false);


Serial.println("printing values");

for (int i=0; i<NUM_QWORDS; i++){
  Wire.requestFrom(EEPROM_ADDRESS, QWORD);
  for (int j=0; j<QWORD; j++) {   
    byte val =  Wire.read();
    char buf[2];
    sprintf(buf, "%02x", val);
    Serial.print(buf);
    if j != 7:
      Serial.print(' ');
  }
  Serial.println();
}

}


void loop() {
  // put your main code here, to run repeatedly:

}
