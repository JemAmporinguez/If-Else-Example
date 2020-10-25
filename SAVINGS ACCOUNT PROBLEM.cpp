/*Savings Account Balance
Write a program that calculates the balance of a savings account at the end of a period
of time. It should ask the user for the annual interest rate, the starting balance, and the
number of months that have passed since the account was established. A loop should
then iterate once for every month, performing the following:
A) Ask the user for the amount deposited into the account during the month. (Do not
accept negative numbers.) This amount should be added to the balance.
B) Ask the user for the amount withdrawn from the account during the month. (Do
not accept negative numbers.) This amount should be subtracted from the balance.
C) Calculate the monthly interest. The monthly interest rate is the annual interest rate
divided by twelve. Multiply the monthly interest rate by the balance, and add the
result to the balance.
After the last iteration, the program should display the ending balance, the total
amount of deposits, the total amount of withdrawals, and the total interest earned.
NOTE: If a negative balance is calculated at any point, a message should be displayed
indicating the account has been closed and the loop should terminate.*/
#include <iostream>
using namespace std;
double AnnualRate,StartingBalance,Months,TotalBalance;
double WithdrawMoney,AddMoney;
double MonthlyRate;
char WithdrawORAdd;
int question,withdrawing,addding;
int main(){
	cout<<"How much is your annual interest rate?"<<endl;
	cin>>AnnualRate;
	cout<<"How much is your starting balance of your savings account"<<endl;
	cin>>StartingBalance;
	cout<<"How many months does this account was established?"<<endl;
	cin>>Months;
	AnnualRate=AnnualRate/100;
	MonthlyRate=AnnualRate/12;
	
		for(int monthcount=1;monthcount<=Months;monthcount++){
			
			system("cls");
			StartingBalance=StartingBalance*(1+MonthlyRate);
			question:
			cout<<"We are in Month #"<<monthcount<<" Type W to withdraw, Type A to add balance and type N to Ignore"<<endl;
			cin>>WithdrawORAdd;
			if(WithdrawORAdd=='W'){
				withdrawing:
				cout<<"How much do you want to withdraw in month #"<<monthcount<<"?"<<endl;
				cin>>WithdrawMoney;
				if(WithdrawMoney<0){
					cout<<"Error that is a negative number, Please enter again"<<endl;
					goto withdrawing;
				}
				StartingBalance=StartingBalance-WithdrawMoney;
			}
			else if(WithdrawORAdd=='A'){
				adding:
				cout<<"How much money do you want to add in month #"<<monthcount<<"?"<<endl;
				cin>>AddMoney;
				if(AddMoney<0){
					cout<<"Error that is a negative number, Please enter again"<<endl;
					goto adding;
				}
				StartingBalance=StartingBalance+AddMoney;
			}
			else if(WithdrawORAdd=='N'){
				continue;
			}
			else{
				cout<<"ERROR!! Please enter again"<<endl;;
				goto question;
			}
			if(StartingBalance<0){
				break;
			}
			
			
		}
	if(StartingBalance<0){
		cout<<"Sorry Your Account has been closed Thank You"<<endl;
	}
	else{
		cout<<"You have a balance of "<<StartingBalance<<" left "<<endl;
	}
	system("pause");
	return 0;
}
