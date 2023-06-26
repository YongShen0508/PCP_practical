#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	/*//Exercise 1
	//Q1
	int i = 0;
	int temp = 1;
	while (i < 5)
	{
		i = i + 1;
		temp = temp * i;
	}
	cout << "i = " << i << " and temp = " << temp << endl;*/

	/*//Q2
	int count = 12;
	double sum = 0;
	while (count > 8)
	{
		if (count % 2 == 0)
			sum = sum + pow(count, 2.0);
		count--;
	}
	cout << sum << endl;*/

	/*//Q3
	int num = 1;
	for (int i = 0; i < 5; i++)
	{
		num = num * (5 - i);
		cout << num << " ";
	}
	cout << endl;*/

	/*//Q4
	int count = 1;
	do
		cout << count * (count - 2) << " ";
	while (count++ <= 5);
	cout << endl;*/

	/*//Q5
	//Given 10 30 16 25 76 - 1 as the input, what is the output 
	//Sentinel Controlled
	int num = 0;
	int sum;
	cin >> sum;
	while (num != -1)	//num=1,num!=-1 false
						//num=5,num!=-1  true
	{
		cin >> num;
		sum = sum + num;
	}
	cout << "Sum = " << sum << endl;*/

	/*//Q6
	//Given 10 30 16 25 76 - 1 as the input, what is the output ?
	//Flag Controlled
	int num;
	int sum;
	bool exp = true;
	cin >> sum;
	num = sum;
	while (exp)
	{
		cin >> num;
		sum = sum + num;

		if (num % 2 == 1)
			exp = false;
	}
	cout << "Sum = " << sum << endl;*/

	/*//Q7
	//Given 5 3 8 as the input, what is the output ?
	cin >> a >> b >> c;
	for (int j = 1; j < a; j++)
	{
		d = b + c;
		b = c;
		c = d;
		cout << c << " ";
	}
	cout << endl;*/

	/*//Q8
	//Correct the following code so that it readsand finds the sum of 5 numbers:
	int count = 0;
	int sum = 0;
	int num;
	while (count < 5)
	{
		
		cin >> num;
		count++;
		sum = sum +num;
		
	}
	cout << "Sum = " << sum << endl;*/


	////Exercise 5
	//int marks, largest=0,fail=0,sum=0,num=0;
	//bool decision=true;
	//char selection;
	//while (decision)
	//{
	//	cout << "Enter student's marks : ";
	//	cin >> marks;
	//	
	//	if (marks < 0 || marks>100)
	//	{
	//		cout << "Invalid input." << endl;
	//	}
	//	else
	//	{
	//		if (marks < 50)
	//			fail += 1;
	//		if (marks > largest)
	//			largest = marks;
	//		sum += marks;
	//		num += 1;
	//	}
	//	cout << "Do you want to enter more marks? (y/n) :";
	//	cin >> selection;
	//	if (selection == 'y')
	//		decision = true;
	//	else
	//		decision = false;
	//}

	//cout << "Average marks : " <<setprecision(2)<< static_cast<double>(sum)/num << endl;
	//cout << "Highest marks : " << largest << endl;
	//cout << "Number of students failed : " << fail << endl;
	
	/*//Exercise 6(answer)
	double mark, sum = 0, highest,num=0;
	int count = 0, fail = 0;
	char answer;
	do {
		cout << "Enter the student's marks : ";
		cin >> mark;
		if (mark < 0 || mark>100)
		{
			cout << "Invalid input.";
		}
		else if (mark>=0&& mark <=100)
		{
			if (mark < 50)
				fail += 1;
			if (mark > highest)
				highest = mark;
				sum += mark;
				num += 1;
		}
		cout << "Do you want to enter more marks(y/n) :";
		cin >> answer;

	} while (answer == 'y' || answer=='Y');*/


	/*//Exercise 6
	/*int i,j;
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "&";
		}
		cout << endl;
	}
	
	for (int i = 6; i > 0; i--)
	{	

		int num = 2;
		for (int j=0 ; j <i; j++)
		{
			cout << i * num;
			num += 2;
		}
		cout << endl;
	}*/
	
	int num = 50;
	bool stop = true;
	const int fee = 40;
	int rent=600;
	int income=0;
	while (stop)
	{
		int highest;
		highest = num * rent * 27;
		if (highest > income)
		{
			income = highest;
			num--;
			rent += 40;
		}
		else if (income > highest)
			stop = false;

	}
	cout << "The highest income is " << income;
		

	return 0;
}