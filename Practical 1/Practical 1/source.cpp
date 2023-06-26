

#include <iostream>    //input output stream , cin/cout
#include <iomanip>

using namespace std;	//use the standard c++ library
/*
//Exercise 1

int main() 					//main function, integer as return type
{	//beginning of function
	cout << "We are born to code!" << endl;
	return 0;
}	//end of function

*/
//Exercise 2
int main()
{
	int i = 0,y = 0;
	for (int i = 0; i < 50; i++)
	{
		cout << "*";
	}


	cout <<'\n'<<left << setw(15) << "*" <<"UCCD 1004" << right << setw(26) << "*" << '\n';
	cout <<left<<setw(5)<<"*"<< "Programming concept and practices" <<right<<setw(12)<<"*"<< '\n';
	cout <<left<<setw(15)<<"*"<< "Practical 1" <<right<<setw(24)<<"*"<< '\n';
	cout << left << setw(12) << "*" << "Author: Bruce Lee" << right << setw(21) << "*" << '\n';
	cout <<left<<setw(5)<<"*"<< "Date of Birth: 27 November 1948" <<right<<setw(14)<<"*"<< '\n';

	for (int y = 0; y < 50; y++)
	{
		cout << "*";
	}

	return 0;

}

/*
//Exercise 3
int main()
{
	int num1;
	int num2;
	double division;

	num1 = 36;
	num2 = -7;

	division = num1 / num2;

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

//Exercise 5

int main()
{
	float radius, area;

	cout << "\nEnter radius of circle : ";
	cin >> radius;

	area = 3.14 * radius * radius;

	cout << "Area of circle : " << area << endl;

	system("pause");
	return 0;
}

//Exercise 6
#include <string>

int main()
{
	string name;
	double studyHours;

	cout << "Enter your name: ";
	cin >> name;
	cout << endl;

	cout << "Enter the number of hours you have spent to practice programming per day: ";
	cin >> studyHours;
	cout << endl;

	cout << "Hello, " << name << "! You are spending " << studyHours * 7
		<< " hours to practice programming per week." << endl;
	system("pause");
	return 0;
}
*/
/*
//Exercise 7
//Method 1
int main() {
	float num1, num2, num3, num4, num5,sum,average;

	cout << "Type the first number :";
	cin >> num1;
	cout << endl;

	cout << "Type the second number :";
	cin >> num2;
	cout << endl;

	cout << "Type the third number :";
	cin >> num3;
	cout << endl;

	cout << "Type the fourth number :";
	cin >> num4;
	cout << endl;

	cout << "Type the fifth number :";
	cin >> num5;
	cout << endl;

	sum = num1 + num2 + num3 + num4 + num5;
	average = sum / 5;
	
	cout << "The average score is " << average << endl;

	return 0;

}


//Method 2
int main()

{

	string number[5] = { "First","Second","Third","Fourth","Fifth" };

	float Num=0, sum=0, average=0;

	for (int i = 0; i < 5; i++)

	{

		cout << " Type the " << number[i] << " number : " ;

		cin >> Num;

		sum += Num;

		cout<<endl;
	
	}

	average = sum / 5;

	cout << "The average score is " << average << endl;

	return 0;

}


/*
//Method 3
int main() 
{

	float num=0, sum=0, average=0;

	cout << "Type the first number :";
	cin >> num;
	sum += num;
	cout << endl;

	cout << "Type the second number :";
	cin >> num;
	sum += num;
	cout << endl;

	cout << "Type the third number :";
	cin >> num;
	sum += num;
	cout << endl;

	cout << "Type the fourth number :";
	cin >> num;
	sum += num;
	cout << endl;

	cout << "Type the fifth number :";
	cin >> num;
	sum += num;
	cout << endl;

	average = sum / 5;

	cout << "The average score is " << average << endl;

	return 0;

}
*/

