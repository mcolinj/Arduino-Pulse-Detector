#include <PulseDetector.h>
/*
 *  
 *
 */
PulseDetector::PulseDetector(int pulses) : _pulses_to_detect(pulses), _match_fuzz(90), _last_time(0) {
	this->clear();
}

void PulseDetector::clear(void) {
	// no implementation yet, what should clear do?
}

bool PulseDetector::detected(void) {
	return true;
}

void PulseDetector::pulse_at(int ms) {
 	// so we got a pulse at time millis.  What do we do?
	this->_last_time = ms;

/* 
 * Here is the first cut at the pulse_at implementation.
 * Needs to work from object data this->_pulses[], etc...
 */
/* void soundISR()
{
  int m = millis();
  Serial.print("m = ");
  Serial.println(m);
  if ((last_clap - m) > 5000) {
    clap_count = 0;
  }
  
  if(clap_count > 0 && (m - claps[clap_count - 1]) < 500){
    Serial.println("Early return");
    last_clap = m;
    return;
  }
  // save new value in buffer
  claps[clap_count] = m;
  clap_count++;
  if (clap_count == 3) {
  // check if the intervals are about the same?
  int ivl1 = claps[1] - claps[0];
  int ivl2 = claps[2] - claps[1];
  //Serial.println(millis());
  if(clap_count == 2){
    if(ivl1 == ivl2){
      for(int i=0; i<3; i++) {
        Serial.println(claps[i]);
      }
      Serial.println("Evenly Spaced Claps");
    }
    else{
      Serial.println("Not Even");
      Serial.println(ivl1 - ivl2);
    }
    clap_count = 0;
  }
  }
*/
}

void PulseDetector::pulse_handler(void) {
    // this should do pretty much what test_pulse does.  Maybe
    // it should get millis() and then call pulse_at()?
}


