#ifndef __PULSE_DETECTOR_H__
#define __PULSE_DETECTOR_H__

#define MAX_PULSES 10

class PulseDetector {
  public:
  	PulseDetector(int pulses);  // specify number of pulses to recognize
  	void clear(void);           // zero data and pulse_count
  	bool detected(void);     // does data represent evenly spaced pulses?
  	void pulse_at(int ms);      // receive a pulse at time ms (for testing)
  	void pulse_handler(void);   // 
  private:
  	int _pulses_to_detect;
  	int _match_fuzz;            // percent variation in interval
  	int _pulses[MAX_PULSES];
  	int _pulse_count;
  	int _sleep_reset;
  	int _last_time;
};

#endif
