#include "Wire.h"

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Wire.begin();

Wire.beginTransmission(0x57);
Wire.write(0x00);
Wire.endTransmission(false);


Serial.println("printing values");

for (int i=0; i<32; i++){
  Wire.requestFrom(0x57, 8);
  for (int j=0; j<8; j++) {   
    byte val =  Wire.read();
    Serial.print(val);
    if j != 7:
      Serial.print(' ');
  }
  Serial.println();
}

}


void loop() {
  // put your main code here, to run repeatedly:

}
