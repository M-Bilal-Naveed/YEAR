#include<iostream>
using namespace std;
int limit[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *monthname = {"Null","Jan","Feb","March","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
class date
{
	private:
		int day;
		int month;
		int year;
	public:
		void date(int,int,int);
		void setdate(int,int,int);
		void setdate(int);
		void setmonth(int);
		void setyear(int);
		int getday();
		int getmonth();
		int getyear();
		void printdate(); 
		};
		date :: date(int d,int m, int y)
		{
			this -> setdate(d,m,y);
		}
		date :: setdate(int d,int m,int y)
		{
			this->setdate(d);
			this->setmonth(m);
			this->setyear(y);
		}
		date :: setdate(int d)
		{
			day=( (d>=1 && d<=limit[this->getmonth()])? d:1);
			if(this->getmonth()==2 && this->getyear()%4==0)
			     day=((d>=1 && d<=29)? d:1);
		}
		date :: setmonth( int m)
		{
			month=((m>=1 && m<=12)? m:1);
		}
		date ::setyear(int y)
		{
			year=((y>=1900 && y<=2023)? y:1);
		}
		int date :: getday()
		{
			return day;
		}
		int date :: getmonth()
		{
			return month;
		}
		int date :: getyear()
		{
			return year;
		}
		void date :: printdate()
		{
			cout<<this->getday()<<"-"<<monthname[this->getmonth()]<<"-"<<this->getyear()<<endl;
		}
		int main()
		{
			date d1(03,05,2003);
			d1.printdate();
			return 0;
		}
