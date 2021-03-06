#ifndef WINDGAUGE_H_
#define WINDGAUGE_H_

#include <deque>

class WindGauge {
 public:
  WindGauge(int period = 12);
  void currentWindSpeed(int);
  int highest() const;
  int lowest() const;
  int average() const;
 private:
  int period;
  int size;
  std::deque<int> history;
};
#endif

