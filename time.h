#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>
using namespace std;

class Time{
	int hour;
	int minute;
  int second;
  int millisecond;


	public:
		Time();
		Time(const Time&);
		Time(int, int , int, int );
		int getHour()const;
		void setHour(int);
    int getMinute()const;
    void setMinute(int);
    int getSecond()const;
    void setSecond(int);
    int getMillisecond()const;
    void setMillisecond(int);
		void display();
	};
#endif
