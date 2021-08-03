//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Name: Santiago de Jesus Villalobos-Gonzalez
//Program Description: Lab #6
//Course: CS 102 - Introduction to Programming C++
//Due Date: August 1st, 2021 by Midnight
//http://www.sr2jr.com/textbook-solutions/computer-science/40401001/absolute-cpp-parameters-and-overloading

//From The “Chapter 4: #1 Parameters and Overloading, from  – Absolute C++’ book, from Sr2Jr Textbook Solutions, inc. 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>

void overviewData( );
void inputData(int &hr,int &min);
void convert12Format(int &hr,char &type);
void displayData(int hr,int min,char type);


int main() 
{   
	using namespace std;
    int hours,min;
	char type,choice;
	overviewData( );
	do
	{
        inputData(hours,min);
	    convert12Format(hours,type);
	    displayData(hours,min,type);
		cout<<"To continue,press Enter, then enter 'y':";
		cin>>choice;
	}while(choice=='y');
}
void overviewData( )
{
    using namespace std;
    cout << "Converts 24-hour to 12-notation.\n";
	cout<<"-----------------------------------\n";
}
//Read hours and minutes from the key board
void inputData(int &hr,int &min)
{

   using namespace std;
   cout<<"Enter hours:";
   cin>>hr;
   cout<<"Enter minutes:";
   cin>>min;
}
//Convert 24 hours format to 12 hours format
void convert12Format(int &hrs,char &type)
{
	if(hrs>12 )
	{
		hrs=hrs%12;
		type='P';
	}
	else
		type='A';
}
//Result on screen
void displayData(int hrs,int min,char t)
{
	using namespace std;
	cout<<"12-hour notation:"<<endl;
	cout<<hrs<<":"<<min<<" "<<t<<"M"<<endl;
}