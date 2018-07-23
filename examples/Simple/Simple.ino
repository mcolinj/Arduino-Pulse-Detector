#include <PulseDetector.h>


PulseDetector dtor = PulseDetector(3);   // detect 3 in a row

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  Serial.begin(9600);

  // do ClapDetector test test in the setup
  dtor.pulse_at(1000);
  dtor.pulse_at(1500);
  dtor.pulse_at(2000);
  if (dtor.detected()) {
   	  Serial.println("Detected!"); 
  } else {
      Serial.println("No way.");
  }
}

void loop() {
	
}
