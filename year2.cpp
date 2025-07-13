#include<iostream>
using namespace std;
int limit[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char 
*monthNames[13]={"Null","January","February","March","April","May"
,"June","July","August","September","October","November","December"
};
class date
{
private:
int day;
int month;
int year;
public:
date(int,int,int);
void setDate(int,int,int);
void setDay(int);
void setMonth(int);
void setYear(int);
int getDay();
int getMonth();
int getYear();
void printDate();
};
date::date(int d,int m,int y)
{
this->setDate(d,m,y);
}
void date::setDate(int d,int m,int y)
{
this->setYear(y);
this->setMonth(m);
this->setDay(d);
}
void date::setYear(int y)
{
year = ((y>=1900&&y<=2023)?y:1900);
}
void date::setMonth(int m)
{
month = ((m>=1&&m<=12)?m:1);
}
void date::setDay(int d)
{
day = ((d>=1&&d<=limit[this->getMonth()])?d:1);
if(this->getMonth()==2&&this->getYear()%4==0)
day =((d>=1&&d<=29)?d:1);
}
int date::getDay()
{
return day;
}
int date::getMonth()
{
return month;
}
int date::getYear()
{
return year;
}
void date::printDate()
{
cout<<this->getDay()<<"-"<<monthNames[this->getMonth()]<<"-"<<this->getYear()<<endl;
}
int main()
{
date d1(03,05,2003);
d1.printDate();

return 0;
}
