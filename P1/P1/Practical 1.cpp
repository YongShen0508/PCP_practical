#include <iostream>    //input output stream , cin/cout
#include <iomanip>


using namespace std;	//use the standard c++ library

/*

int main() 					//main function, integer as return type
{	//beginning of function
	
	cout << "Hello World" << endl;		//std::cout<<"Hello World"<<std::endl;

	cout << "I love UTAR\n";	// \n--new line character

	cout << "I love UCCD1004" << endl;

	cout << " 1 + 1 " << endl;

	cout << 1 + 1 << endl;

	system("pause");   

	return 0;	//successful

}	//end of function
*/

/*
//Exercise 2
int main()
{
	int i = 0, y = 0;
	for (int i = 0; i < 50; i++)
	{
		cout << "*";
	}


	cout << '\n' << left << setw(15) << "*" << "UCCD 1004" << right << setw(26) << "*" << '\n';
	cout << left << setw(5) << "*" << "Programming concept and practices" << right << setw(12) << "*" << '\n';
	cout << left << setw(15) << "*" << "Practical 1" << right << setw(24) << "*" << '\n';
	cout << left << setw(12) << "*" << "Author: Bruce Lee" << right << setw(21) << "*" << '\n';
	cout << left << setw(5) << "*" << "Date of Birth: 27 November 1948" << right << setw(14) << "*" << '\n';

	for (int y = 0; y < 50; y++)
	{
		cout << "*";
	}

	return 0;
}

*/

//Exercise 3

//variable
/*
string name= "Jerry";

int main()
{
	cout << name << "is a boy" << endl;
	cout << name << "is 16 years old" << endl;
	cout << name << "is a malaysian" << endl;

	return 0;
}



//Exercise 3
#include <iostream>
using namespace std;
int main()
{
	int num1;		//float(7 digit),double(15 digit)
	int num2;
	double division;

	num1 = 36;
	num2 = -7;

	division = num1 / num2;		//division(double)=num1(int)/num2(int)			// double / int = double


	cout << "num1 = " << num1 << endl;
	
	cout << "num2 = " << num2 << endl;
	
	cout << "Division of num1 by num2 is equal to " << division << endl;
	
	system("pause");

	return 0;
}

//Exercise 4


int main()
{
	double num1;
	double num2;
	double division;

	num1 = -62.5;
	num2 = 2.4;


	division = num1 / num2;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "Division of num1 by num2 is equal to " << division << endl;
	system("pause");
	return 0;
}
*/
/*
//Exercise 5
int main()
{
	float radius, area;

	cout << "\nEnter radius of circle : ";
	cin >> radius;		///extraction operator

	area = 3.14 * radius*radius;

	cout << "Area of circle : " << area << endl;

	system("pause");
	return 0;
}
*/

//Exercise 6
#include <string>		//getline function		
int main()
{
	string id;	//A123
	string name;
	double studyHours;
	
	
	cout << "Enter your ID:";
	cin >> id;
	cout << endl;
	cin.ignore();		//must put before getline function(ignore \n)
	
	cout << "Enter your name: ";
	//cin >> name;//Jenny Tan,enter key(\n newline character)
	getline(cin, name);
	cout << endl;
	//Tan will store in the buffer
	
	cout << "Enter the number of hours you have spent to practice programming per day: ";
	cin >> studyHours;//ignore \n character
					  //2, enter key (\n newline character)
	cout << endl;

	cout << "Hello, " << name <<" with " << id << "! You are spending " << studyHours * 7
		<< " hours to practice programming per week." << endl;
	system("pause");
	return 0;
}