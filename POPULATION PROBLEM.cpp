/*Population
Write a program that will predict the size of a population of organisms. The program
should ask the user for the starting number of organisms, their average daily population increase (as a percentage), and the number of days they will multiply. A loop
should display the size of the population for each day.
Input Validation: Do not accept a number less than 2 for the starting size of the population. Do not accept a negative number for average daily population increase. Do not
accept a number less than 1 for the number of days they will multiply.*/

#include <iostream>
#include <cmath>
using namespace std;
double startingNumber,Percentage ,days;
int main(){
	cout<<"How much the starting number of organizms?"<<endl;
	cin>>startingNumber;
	cout<<"How much is tye daily percentage of the organizm ?"<<endl;
	cin>>Percentage;
	cout<<"HOw many days will they will multiply?"<<endl;
	cin>>days;
	Percentage=Percentage/100;
	if (startingNumber>=2&&Percentage>0&&days>=1){
		cout<<"\t\tSIZE RESULT AFTER\t\t SIZE"<<endl;
		for(int daycount=1;daycount<=days;daycount++)
		{
			double size=startingNumber*(1+Percentage);
			cout<<"\t\t"<<daycount<<" DAYS\t\t\t\t"<<size<<endl;
			startingNumber=size;
			
		}
	}
}
