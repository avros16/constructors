#include <iostream>
using namespace std;


class Time 
{

public:
Time (int = 0, int = 0, int =0); 

void setTime (int,int,int);
void setHour(int);
void setSecond(int);
void getHour();
void getMinute();
void getSecond();
void printUniversal();
void printStandard();


private:
int hour;
int minute;
int second;

};


}