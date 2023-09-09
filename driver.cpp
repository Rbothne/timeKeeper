//Robert Bothne
//time_keeper
//clock in and clock out timer
//these projects are actually fun hopefully I didnt miss anything stupid
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include "time.h"
bool getClockTime(Time&);
Time calcHoursWorked(const Time, const Time);

int main(){// prompting user, closing program and catching exceptions as well as printing to user.
  Time clockin;
  Time clockout;
  Time total;
  bool success;
  cout << "CLOCK IN:" << endl << "Enter your clock time (HH MM SS):";
  success = getClockTime(clockin);
  if (success==0){
    return(0);
  }
  cout << "CLOCK OUT:" << endl << "Enter your clock time (HH MM SS):";
  success = getClockTime(clockout);
  if (success==0){
    return(0);
  }else{
    try {
        total = calcHoursWorked(clockin,clockout);
    }
    catch(const char* e){
      cout << e << endl;
    }
  }
  total.display();
 cout << endl;
}

bool getClockTime(Time& input){ //passing by reference to change "input" times and check validity.
  int h, m ,sec;
  cin >> h >> m >> sec;
  try{
    input.setHour(h);
input.setMinute(m);
    input.setSecond(sec);

  }
  catch (const char* f){
    cout << f << endl;
    return(0);
  }
  return (1);
}

Time calcHoursWorked(const Time start, const Time finish){// calculating hours through logical thinking and lots of variables.
  int mil, ih, im,isec,imil,fh,fm,fsec,fmil,toth,totm,tots,totmil;
//  int xh,xm,xs,xmi;
  ih = start.getHour();
  im = start.getMinute();
  isec = start.getSecond();
  imil = start.getMillisecond();
  fh = finish.getHour();
  fm = finish.getMinute();
  fsec = finish.getSecond();
  fmil = finish.getMillisecond();
  toth = fh - ih;
  totm = fm - im;
  tots = fsec - isec;
  totmil = fmil - imil;
if (totmil>=100){
  tots+=1;
  totmil=0;
}
if (totmil<0){
  tots-=1;
  totmil+=100;
}
if (tots>=60){
  totm+=1;
  tots=0;
}
if (tots<0){
  totm-=1;
  tots+=60;
}
if (totm>=60){
  toth+=1;
  totm=0;
}
if (totm<0){
  toth-=1;
  totm+=60;
}
if (toth<0){
  throw "Invalid time calculated.";
}


  Time shift(toth,totm,tots,totmil);
  return(shift);
}
