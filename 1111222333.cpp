/*Average Rainfall
Write a program that uses nested loops to collect data and calculate the average rainfall
over a period of years. The program should first ask for the number of years. The outer
loop will iterate once for each year. The inner loop will iterate twelve times, once for
each month. Each iteration of the inner loop will ask the user for the inches of rainfall
for that month.
After all iterations, the program should display the number of months, the total inches
of rainfall, and the average rainfall per month for the entire period.
Input Validation: Do not accept a number less than 1 for the number of years. Do not
accept negative numbers for the monthly rainfall.*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double years,inches,tinches;
string Availability,MonthName;
int a;
double sum;

int main()
{
	cout<<"How many years do you want to measure?\n"<<endl;
	cin>>years;
	for(int yearcount=1;yearcount<=years;yearcount++){
		cout<<"Let me question about the year #"<<yearcount<<"\n"<<endl;
		int max=12;
		for(int MonthCount=1;MonthCount<=max;MonthCount++){
			switch(MonthCount){
				case 1:
					MonthName="January";
					break;
				case 2:
					MonthName="February";
					break;
				case 3:
					MonthName="March";
					break;
				case 4:
					MonthName="April";
					break;
				case 5:
					MonthName="May";
					break;
				case 6:
					MonthName="June";
					break;
				case 7:
					MonthName="July";
					break;
				case 8:
					MonthName="August";
					break;
				case 9:
					MonthName="Septermber";
					break;
				case 10:
					MonthName="October";
					break;
				case 11:
					MonthName="November";
					break;
				case 12:
					MonthName="December";	
					break;
			}
			a:
			cout<<"How many inches monthly  of rain does the month "<<MonthName<<" have?\n"<<endl;
			cin>>inches;
			sum+=inches;
			while(inches<0){
				goto a;
			}	
		}
		inches+=inches;
	}
	double average=sum/(
	years*12);
	double averagemonth=sum/12;
		system("cls");
		cout<<"\t\tNUMBER OF MONTHS\t\tTOTAL ICNHES OF RAINFALL\t\tAVERAGE RAINFALL FOR ENTIRE "<<years<<" YEAR/YEARS"<<endl;
		cout<<"\n\t\t"<<years*12<<" MONTHS"<<"\t\t\t"<<sum<<" inches"<<"\t\t\t                 "<<average<<endl;
}
