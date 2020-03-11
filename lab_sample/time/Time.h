#include <iostream>

using namespace std;

class Time {
public:
  Time(int, int, int);
  Time(const Time &);
  void setHour(int);
  int getHour();
  void setMinute(int);
  int getMinute();
  void setSecond(int);
  int getSecond();
  void advance(int, int, int);
  void reset(int, int, int);
  void print();

private:
  int hour;
  int minute;
  int second;
};
