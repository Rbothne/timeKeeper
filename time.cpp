#include "time.h"
#include <iostream>
#include <string>
using namespace std;



int Time::getHour()const {return hour;}
void Time::setHour(int pass){
  if (pass>=0 && pass < 24){
    hour = pass;
  }
  else{
    throw "Invalid Hour Value";
  }
}
int Time::getMinute()const {return minute;}
void Time::setMinute(int pass){
  if (pass>=0 && pass< 60){
    minute = pass;
  }
  else{
    throw "Invalid Minute Value";
  }
}
int Time::getSecond()const {return second;}
void Time::setSecond(int pass){
  if (pass>=0 && pass< 60){
    second = pass;
  }
  else{
    throw "Invalid Second Value";
  }
}
int Time::getMillisecond()const {return millisecond;}
void Time::setMillisecond(int pass){
  if (pass>=0 && pass<= 100){
    millisecond = pass;
  }
  else{
    throw "Invalid Millisecond Value";
  }
}

Time::Time(){
  hour = 0;
  minute = 0;
  second = 0;
  millisecond = 0;
}
Time::Time(const Time& current){
    hour = current.hour;
    minute = current.minute;
    second = current.second;
    millisecond = current.millisecond;
}
Time::Time(int h,int m,int s,int mil){
hour = h;
minute = m;
second = s;
millisecond = mil;
}
void Time::display(){
  cout << hour << ":"<< minute<< ":" << second << "." << millisecond;
}
