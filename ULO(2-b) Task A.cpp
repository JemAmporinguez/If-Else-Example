#include <iostream>
#include "conio.h"
#include <windows.h>
#include<stdio.h>
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoXY(int x, int y);
void Waitkey();
void gotoXY(int x, int y) 
{ 
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
double FirstExam,SecondExam,ThirdExam,FinalExam; //declaring variables in the exams
double Quiz1,Quiz2,Quiz3;//decalring variables in the quizes
double Exercise1,Exercise2,Exercise3, Exercise4;//declaring variables in the Lab exercises
double LabProject;//declaring variables in the Laboratory Project
bool validQuizes,validExams,validLabExam,validLabProject;// decalring varaibles in Validations for the requirement points
double FirstExamWeight,SecondExamWeight,ThirdExamWeight,FinalExamWeight,LabExerciseWeight,QuizWeight,LabProjectWeight,GeneralAverage;//y Weight of every category assigned in the Weights assignment
string remarks;
int a; //where the program will go back in case the user wants to rerun the program
char presskey;//press key  in the last part after filling all the points
int main(){
	a: //where the program back when the user wants to rerun
	system ("CLS"); //clear all the display on the screen which will repeat the program form the start                                                              
	gotoXY(23,0);
	cout<<"Computation of grades";
	gotoXY(0,3);
	cout<<"Major Examinations(100 pts each)";
	gotoXY(40,3);
	cout<<"Quizes(40 pt each)";
	gotoXY(46,4);
	cout<<"Qz# 1:";
	cin>>Quiz1;
	gotoXY(46,5);
	cout<<"Qz# 2:";
	cin>>Quiz2;
	gotoXY(46,6);
	cout<<"Qz# 3:";
	cin>>Quiz3;
	gotoXY(7,4);
	cout<<"First :";
	cin>>FirstExam;
	gotoXY(7,5);
	cout<<"Second :";
	cin>>SecondExam;
	gotoXY(7,6);
	cout<<"Third :";
	cin>>ThirdExam;
	gotoXY(7,7);
	cout<<"Final :";
	cin>>FinalExam;
	gotoXY(0,8);
	cout<<"Laboratory Exercises (50 pts each )";
	gotoXY(7,9);
	cout<<"Exer #1      :";
	cin>>Exercise1;
	gotoXY(7,10);
	cout<<"Exer #2     :";
	cin>>Exercise2;
	gotoXY(7,11);
	cout<<"Exer #3       :";
	cin>>Exercise3;
	gotoXY(7,12);
	cout<<"Exer #4       :";
	cin>>Exercise4;
	gotoXY(0,13);
	cout<<"Laboratory Project(100 pts):";
	cin>>LabProject;
	if ((FirstExam>=0)&&(FirstExam<=100)&&(SecondExam>=0)&&(SecondExam<=100)&&(ThirdExam>=0)&&(ThirdExam<=100)&&(FinalExam>=0)&&(FinalExam<=100))//Validation of the requirement points in every part of the exams
	{
		validExams=true;//The Exams will be valid 
	}
	else 
	{
		validExams=false;//The Exams will not  be valid 
	}
	if (((Quiz1>=0)&&(Quiz1<=40))&&((Quiz2>=0)&&(Quiz2<=40))&&((Quiz3>=0)&&(Quiz3<=40)))//Validation of Quizes range from 0-40
	{
		validQuizes=true;//The Quizes will be valid 
	}	
	else 
	{
		validQuizes=false;//The Quizes will not be valid 
	}
	if ((Exercise1>=0)&&(Exercise1<=50)&&(Exercise2>=0)&&(Exercise2<=50)&&(Exercise3>=0)&&(Exercise3<=50)&&(Exercise4>=0)&&(Exercise4<=50))//Validation of Lab Exercises from 0-50
	{
		validLabExam=true;//The Laboratory Exercises will be valid 
	}
	else 
	{
		validLabExam=false;//The Laboratory Exercises will not be valid 
		
	}
	if (LabProject>=0&&LabProject<=100)//Validation of Laboratory Project from 0-100;
	{
		validLabProject=true;//The Laboratory Project will be valid
	}
	else
	{
		validLabProject=false;//The Laboratory Project will not  be valid
		
	 } 
	//base 15 system in computing first exam
	
	FirstExamWeight=((FirstExam/100)*85)+15;
 	FirstExamWeight=((FirstExamWeight*10)/100);//conversion from 100 % to be equal into 10 %//
	//base 15 system in computing second exam
	SecondExamWeight=((SecondExam/100)*85)+15;
	SecondExamWeight=((SecondExamWeight*10)/100);//conversion from 100 % to be equal into 10 %/
	//base 15 system in computing third exam
	ThirdExamWeight=((ThirdExam/100)*85)+15;
	ThirdExamWeight=(ThirdExamWeight*10)/100;//conversion from 100 % to be equal into 10 %//
	//base 15 system in computing final exam
 	FinalExamWeight=((FinalExam/100)*85)+15;
 	FinalExamWeight=((FinalExamWeight*30)/100);//conversion from 100 % to be equal into 30 %//
	//base 15 system in computing Laboratory Exercises
	LabExerciseWeight=((Exercise1+Exercise2+Exercise3+Exercise4)/(200));//adding all scores of lab exercise annd divided to overall score
	LabExerciseWeight=(LabExerciseWeight*85)+15;
	LabExerciseWeight=(LabExerciseWeight*10)/100; //conversion from 100 % to be equal into 10 %//
	QuizWeight=((Quiz1+Quiz2+Quiz3)/120);//adding all the quizes score and divided to overall scores
	QuizWeight=(QuizWeight*85)+15;
	QuizWeight=(QuizWeight*10)/100;//conversion from 100% to be equal into 10%;
	//base 15 system in computing Laboratory Project
	LabProjectWeight=((LabProject/100)*85)+15;
	LabProjectWeight=(LabProjectWeight*20)/100;//Converting from 100% to be equal into 20%//

	
	GeneralAverage=(FirstExamWeight+SecondExamWeight+ThirdExamWeight+FinalExamWeight+LabExerciseWeight+QuizWeight+LabProjectWeight);//adding all the Weight Assignment 
	
	
	
	if((validQuizes==true)&&(validExams==true)&&(validLabExam==true)&&(validLabProject==true))//If the input of the users are accepted within the range of points  required
	{
		if(GeneralAverage>=95&&GeneralAverage<=100){//If the general avaerage 95-100
			gotoXY(46,15);
			remarks="Excellent";
		cout<<"Remarks    :"<<remarks;//Displaying the Remarks if it is 95-100 
		}
		else if(GeneralAverage>=90&&GeneralAverage<=94){//If the general avergage is 90-94
			remarks="Very Good ";
			gotoXY(46,15);
		cout<<"Remarks    :"<<remarks;//Displaying the Remarks if it is 90-94
		}
		else if(GeneralAverage>=85&&GeneralAverage<=89){//If the general average is 85-89
			remarks="Good";
			gotoXY(46,15);
			cout<<"Remarks    :"<<remarks;//Displaying the Remarks if it is 85-90
		}
		else if(GeneralAverage>=80&&GeneralAverage<=84){//If the general average  is 80-84
			remarks="Satisfactory";
			gotoXY(46,15);
			cout<<"Remarks    :"<<remarks;//Displaying the Remarks if it is 80-84
		}
		else if(GeneralAverage>=75&&GeneralAverage<=79){//If the general avergae is 75-80
			remarks="Fair ";
			gotoXY(46,15);
			cout<<"Remarks    :"<<remarks;//Displaying the Remarks if it is below 75-80
		}
		else { //if the general avergae is below 75 
			remarks="Failed";
			gotoXY(46,15);
			cout<<"Remarks    :"<<remarks;//Displaying the Remarks if it is below 75
		}
		gotoXY(46,14);
		cout<<"Gen. Av.    : "<<GeneralAverage;//displaying the output of the general avergae in the screen
		gotoXY(6,17);
		cout<<"Press <Enter Key> to Re-run the Program ";// Prompting the user to enter the "Enter Key" to rerun the program
		gotoXY(6,18);
		cout<<"Press <any key> to exit";// Output to show the user press any key to exit
		presskey=getch();//waiting the the user to press key , it will not execute unless the user will not type to the keyboard
		if (presskey==13) {//if the user press the Enter key//
    		goto a;// it will go to the int a located  above which will reruning to imout the scores
		}
		else {// if the user will press other key
 			return 0; //it will end the program if the user pressanother key
		}	
	}
	else { //What will do if the inputs of scores are not valid
		
		gotoXY(6,16);
		cout<<"\nPlease Re-run The program, You entered invalid range of points :  ";// output showing 
		
		gotoXY(6,18);
		cout<<"Press <Enter Key> to Re-run the Program ";;// Prompting the user to enter the "Enter Key" to rerun the program
		gotoXY(6,19);
		cout<<"Press <any key> to exit";	// Output to show the user press any key to exit
		gotoXY(6,19);
		presskey=getch();//if the user press the Enter key//
		if (presskey==13) {// it will go to the int a located  above 
    		goto a;// it will go to the int a located  above which will reruning to imout the scores
		}
		else {// if the user will press other key
			
 			return 0;//it will end the program if the user press another key
		}	
		
		}
	
	}
	
	

