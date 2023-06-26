#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{	
	//int value1,value2;
	//double temp;

	//cout << "Hello World" << endl;
	//cout << "Please enter a number : ";
	//cin >> value1;
	//cout << endl;

	//cout << "Please enter another number : ";
	//cin >> value2;
	//cout << endl;

	//cout << value1 + value2<<endl;
	//cout << value1 - value2 << endl;
	//cout << value1 * value2 << endl;	//double=int*int if int very large,errors happen


	//temp = static_cast<double>(value1) / value2;    //temp = (double)value1 / value2;
	//cout << temp << endl;

	//int a = 3;
	//int b = 4;
	//double c, d, e;
	//c = (a % b) * 6;  //modulus,return remainder of integer division
	//				  //4%2=1   c=(3%4)*6=18
	//d = c / b;		 //18/4=4.5(4)
	//e = (a + b + c + d) / 4;		//(3+4+18+4)/4=7.25 (7)

	//cout << a << b << c << d << e << endl;

	// exercise 5
	//char option;
	//
	//int sum = 0;
	//
	//float product = 1;
	//
	//string name;		
	////array
	//char name[99];//store 99 character

	//double salesTax = 0.825;//variable
	//
	//const double salesTax = 0.825;	//constant
	////not allow to change const variable
 //   #define salesTax 0.825    //declare constant value  // can place outside the main function(whole program can use it)

	//double sum1 = 0;

	//exercise 6
	

	//#define NUM 20
	//int a, b=8 ;
	//cout << a << endl;		//invalid
	//a = 6;//v
	//b = 3;//v
	//a = b = 24;//v
	//a = 12 = b;//i
	//b = b + 3;//v
	//b = 1 + NUM;//v
	//9 = b;//i
	//b %= 2;//v
	//a + b = 36;//i
	//b *= 10 - b;//v




	//exercise 7
	//int x = 123;

	//cout << x % 10 << endl;  //3
	//cout << x / 10 << endl;		//12.3(12)
	//cout << x / 10.0 << endl;	//12.3
	//cout << (x / 10) % 10 << endl;		//2
	//cout << x / 100 << endl;			//1.23(1)
	//cout << x / 1000 << endl;			//0.123(0)
	//cout << x % 1000 << endl;			//123
	//cout << 4200 - 20 * x / 3 % 4 - 122 << endl;//4200-20*123/3%4-122=4078
	////cout << x %= 3 <<endl;			//x=x%3;
	//x %= 3;
	//cout << x << endl;
	//int y = 2;
	///*cout << x /= 8 - 2 * y << endl;*/
	//x /= 8 - 2 * y;			//0
	////x/(8-2*y)   //30
	//cout << x << endl;
	

	//Exercise 9
	/*int a, b;

	cout << "Enter 2 integer:";
	cin >> a >> b ;


	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout<<fixed<,setprecision(2);
	cout << a << "/" << b << "=" << static_cast<double>(a) / b << endl;*/

	//Exercise 10

	int x=10, y=5;
	cout << "Result: \n\n";

	cout << "x value\ty value\texpressions\tresults\n";//  \t
	int x1 = y + 3;
	cout << left << setw(10) << x <<left<<setw(10)<< y << left << setw(13) << "x=y+3"<< left << setw(1)<<"x=" <<x1<<endl;
	int x2 = y - 2;
	cout << left << setw(10) << x << left << setw(10) << y << left << setw(13) << "x=y-2"<<left<<setw(1)<<"x=" <<x2 << endl;
	int x3 = y * 5;
	cout << left << setw(10) << x << left << setw(10) << y << left << setw(13) << "x=y*5"<<left<<setw(1)<< "x=" <<x3 << endl;
	int x4 = x / y;
	cout << left << setw(10) << x << left << setw(10) << y << left << setw(13) << "x=x/y"<<left << setw(1)<< "x=" << x4 << endl;
	int x5 = x % y;
	cout << left << setw(10) << x << left << setw(10) << y << left << setw(13) << "x=x%y "<<left<<setw(1)<< "x=" << x5 << endl;




	system("PAUSE");
	return 0;

}