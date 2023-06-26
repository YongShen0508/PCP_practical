#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
/*
 //Step 1 to Step 5 function declaration :return type, function name, datatype of argument passed to function
int add(int a, int b); // return type:int returned by function, function name :add
						//data type of arguments: two integers
int main()
{
	//Exercise 1
	//call the function: fucntion name (argument passed to function)
	
	// Method 1
	//cout << add(3, 4) << endl;
	
	//Method 2
	//int result;		// store return answer in the result
	//result=add(3, 4);
	//cout<,result<,endl;
	

	system("PAUSE");
	return 0;
}

//function definition : retunr type, function name, datatype of argument passed to function,argument
int add(int a, int b)    //3+4			//if declare datatype should return something
{
	return a + b;		//return 3+4 = 7
}

*/
/*
//Step 7 nested call function 
int add(int, int);
int main()
{
	//call the function
	cout << add(add(3, 4), 5) << endl;
	system("PAUSE");
	return 0;
}
int add(int a, int b)    //3+4			//if declare datatype should return something
{
	return a + b;		//return 3+4 = 7
}
*/

// Step 8
/*
//declare a function here.
int multiply(int, int, int);

int main()
{
	//call the function
	cout << multiply(3, 4, 5) << endl;
	system("PAUSE");
	return 0;
}
//function definition
int multiply(int a, int b, int c)
{
	return a * b * c;
}
*/
//Step 8
/*
void printHello()
{
	cout << "Hello" << endl;
}
int main()
{
	printHello();
}
*/


//Step 9
/*
void functionA(int x) {
	x = 100;
}
void functionB(int& x) { //reference parameter
	x = 100;
}
int main(void) {
	int x = 10;
	functionA(x);
	cout << x << endl; //10
	functionB(x);
	cout << x << endl; //100
	system("PAUSE");
	return 0;
}
*/


/*
// Exercise 1
using namespace std;
int main()
{
	int num1;
	int num2;
	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	cout << endl;
	if (num1 != 0 && num2 != 0)
		cout << sqrt(fabs(num1 + num2 + 0.0)) << endl;  
	// fabs:used to find absolute value for floating type data type
	// abs :can only used to find the absolute value for integer data type
	
	// sqrt(fabs(12+4+0.0)  
	else if (num1 != 0)	
		cout << floor(num1 + 0.0) << endl;				//floor: if 5.2, find integer less than 5.2 ===5
	else if (num2 != 0)
		cout << ceil(num2 + 0.0) << endl;				//ceil:if 5.2, find integer larger than 5.2 ===6
	else
		cout << 0 << endl;
	return 0;
}
*/

//Exercise 2
//(a)
/*
using namespace std;

int mysteryReturn(int, int, int);

int main()
{
	int x, y, z;

	x = 7; y = 8; z = 3;
	cout << "Return: " << mysteryReturn(x, y, z) << endl;
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

	system("pause");
	return 0;
}

int mysteryReturn(int x, int y, int z) {
	if (x <= y && x <= z)
		return (y + z - x);
	else if (y <= z && y <= x)
		return (z + x - y);
	else
		return (x + y - z);
}
*/

//(b)
/*
void mysteryReference(int, int, int&, int&);

int main()
{
	int x, y, z, ans;

	x = 10; y = 5;
	mysteryReference(x, y, z, ans);
	cout << "Reference: " << ans << endl;
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

	system("pause");
	return 0;
}

void mysteryReference(int x, int y, int& z, int& ans) {
	z = 30;
	if (x <= z && y <= z)
		ans = (y + z - x);
	else if (y <= x && z <= x)
		ans = (z + x - y);
	else
		ans = (x + y - z);
}
*/

//(c)
/*
int globalAnswer = 0;		//global variables (can access it inside main function and void function)

void mysteryGlobal(int, int, int&);

int main()
{
	int x, y, z;		//local variable  (only can use in main function)

	x = 9; y = 12;
	mysteryGlobal(x, y, z);
	cout << "Global: " << globalAnswer << endl;
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

	system("pause");
	return 0;
}

void mysteryGlobal(int x, int y, int& z) {
	z = 11;
	if (z <= y && x <= z)
		globalAnswer = (y + z - x);
	else if (x <= z && y <= x)
		globalAnswer = (z + x - y);
	else
		globalAnswer = (x + y - z);
}


*/

//Exercise 2
/*
int mysteryReturn(int, int, int);

int main()
{
	int x, y, z;

	x = 7; y = 8; z = 3;
	cout << "Return: " << mysteryReturn(x, y, z) << endl;
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

	system("pause");
	return 0;
}

int mysteryReturn(int x, int y, int z) {
	if (x <= y && x <= z)
		return (y + z - x);
	else if (y <= z && y <= x)
		return (z + x - y);
	else
		return (x + y - z);


*/
//Exercise 3
/*
int triple(int x);
void triple(int x, int& result);
void triple(int x);

int globalanswer=0;

int main()
{
	int x,result;
	cout << "Please input value x: ";
	cin >> x;
	cout << triple(x) << endl;
	//result=triple(x);
	//cout<<result<<endl;

	triple(x, result);
	cout << result << endl;

	triple(x);
	cout << globalanswer;
}

int triple(int x)
{
	x *= 3;
	return x;
}


void triple(int x, int& result)
{
	result = x*3;
}


void triple(int x)
{
	globalanswer = x * 3;
}
*/



//Exercise 4
bool isOdd(int x);

int main()
{
	int num;
	cout<<"Please input the integer : ";
	cin>>num;
	if (isOdd(num))
		cout << "odd number";
	else
		cout << "even number";
}

bool isOdd(int x)
{
	if (x%2==1)
		return true;
	else
		return false;
}

//Exercise 5
/*
void swap(int& x, int& y);

int main()
{
	int x = 5;
	int y = 10;
	swap(x, y);
	cout << x << endl; //this one should display 10
	cout << y << endl; //this one should display 5
	return 0;
}
*/

//Exercise 6
/*
void func1();
void func2(int&, int&, double&);
int main()
{
	int num1, num2;
	double num3;
	int choice;
	cout << fixed << showpoint << setprecision(2);
	do
	{
		func1();
		cin >> choice;
		cout << endl;
		if (choice == 1)
		{
			cout << "Input two integers :";
			cin >> num1>> num2;
			cin.ignore();
			func2(num1, num2, num3);
			cout << num1 << ", " << num2 << ", " << num3 << endl;
		}
	} while (choice != 99);
	return 0;
}
void func1()
{
	int num1, num2;
	cout << "To run the program, enter 1." << endl;
	cout << "To exit the pogram, enter 99." << endl;
	cout << "Enter 1 or 99: ";
	
}
void func2(int& a, int& b,double& c)
{	
	if (a != 0 && b != 0)
	{
		if (a >= b)
		{
			c = pow(a, b);
		}
		else
		{
			c = pow(b, a);
		}
	}
	else if(a!=0 && b==0)
	{ 
		c = sqrt(abs(a));
	}
	else if (a == 0 && b != 0)
	{
		c = sqrt(abs(a));
	}
}
*/