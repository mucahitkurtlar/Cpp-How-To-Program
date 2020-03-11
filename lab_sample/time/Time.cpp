#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(int h, int m, int s){
  setHour(h);
  setMinute(m);
  setSecond(s);
}

Time::Time(const Time &obj){
  hour = obj.hour;
  minute = obj.minute;
  second = obj.second;
}

void Time::setHour(int h){
  hour = h;
}

int Time::getHour(){
  return hour;
}

void Time::setMinute(int m){
  minute = m;
  if(minute >= 60){
    hour += minute / 60;
    minute = minute % 60;
  }
}

int Time::getMinute(){
  return minute;
}

void Time::setSecond(int s){
  second = s;
  if(second >= 60){
    minute += second / 60;
    second = second % 60;
  }
}

int Time::getSecond(){
  return second;
}

void Time::advance(int hi, int mi, int si){
  setHour(hour + hi);
  setMinute(minute + mi);
  setSecond(second + si);
}

void Time::reset(int h, int m, int s){
  setSecond(s);
  setMinute(m);
  setHour(h);
}

void Time::print(){
  if(minute >= 60){
    hour += minute / 60;
    minute = minute % 60;
  }

  if(second >= 60){
    minute += second / 60;
    second = second % 60;
  }
  cout << hour << ":" << minute << ":" << second << "\n";

}
