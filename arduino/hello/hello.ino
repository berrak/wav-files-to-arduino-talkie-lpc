//==================================================================================
// Name        : hello.ino
// Author      : Created by Debinix Team (c).
// License     : GPL-3.0
// Version     : Date 2022-10-15.
// Description : This example shows how to use a customized LPC phrase 
//               with the 'Arduino Talkie Speech Amplifier' and ESP32 TinyPICO.
//
// What's next : Explore the 'Wav-to-LPC conversion guide' to learn more. 
//               (https://github.com/berrak/wav-files-to-arduino-talkie-lpc)
//==================================================================================

#include <Talkie.h>
#include "Vocab_US_Acorn.h"

#include "hellolpc.h"   // Our linear predictive coding (LPC) content.

Talkie voice;

const int volDAC = 26;   // GPIO26 controls speaker volume

void setup() {
    Serial.begin(115200);
    delay(1000);
    
    dacWrite(volDAC, 255); // 8bit DAC '255' = max voltage out, i.e. 3.3V.
    
    Serial.println("Setup completed...");
}


void loop() {

  voice.say(spa_PLEASE);
  delay(500);   
  
  // custom created phrase
  voice.say(FILENAME);
  delay(50000);


  
}
