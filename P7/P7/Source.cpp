#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//function declaration

void checkingTemperature(double CityTempFah[], string city[]); //pass down array, must include[]


int main()
{
	//int id[50];  // declare an array called id to store 50 IDs
	//int list[10];
	//luist[2]=5     //assign 5 to list[2]
	//cout<<list[2]<<endl;		//5
	//cout<<list<<endl;         //memory address of list[0]

	//list[11]=5;				//11 is not within valid range of index number 0 to 9
	//cout<<list[11]<<endl;		//memory out of bound

	/*int list[10];
	for (int i = 0; i < 15; i++)
	{
		list[10 + i] = 5;			//error,memory out of bound, list[10+0]
									//list[10+1]=list[11]=5
									//list[10+14]=list[24]=5

		cout << list[10 + i] << endl;
	}
	*/
	/*
	double myList[5];
	cout << sizeof(double) << endl;		//8 bytes for each boxs.Hence, output is 8
	cout << sizeof(myList) << endl;		//40
	cout << sizeof(myList) / sizeof(double) << endl;//5

	int myList1[10];
	cout << sizeof(myList1) / sizeof(int) << endl;// 40/4

	*/

	//Exercise 1

	/*
	int myArray[50];
	const int SIZE=10;
	double list[SIZE];
	const int X = 50;
	double list[X];
	int ids[30];
	*/

	//Exercise 2
	/*
	int list[]={18,13,14,16};
	int x[10]={1,7,5,3,2,8};
	double y[5] = { 2.0,5.0,8.0,11.0,14.0};
	double lengths[] = { 8.2,3.9,6.4,5.7,7.3 };
	int list[7] = { 12,13,14,16,8 };
	string names[8] = { "John","Lisa","Chris","Katie" };
	*/

	/*
	//Exercise 3
	string student[5];	//one dimensional array

	//two dimensional arrays
	double student[5][2];	//two dimensional array [][]
	double employee[10][4];
	//store 3500 as the 6th employee's salary
	employee[5][2] = 3500;
	double whiteboard[20][3];
	//store 3.5 as the 15th whiteboard's length
	whiteboard[14][1];
	*/


	//Exercise 4
	/*
	double temp[5];
	for (int i = 0; i < 5; i++)//i=0,......5
		temp[i] = pow(i, 2.0) + 2;
	for (int i = 0; i < 5; i++)
		cout << temp[i] << " ";//2,3,6,11,18
	cout << endl;
	temp[0] = pow(temp[1], 3);		// temp[0]=27
	temp[1] = temp[4] - temp[2];	// temp[1]= 18-6=12
	temp[2] = temp[0] - 5;			// temp[2]= 27-5=22
	for (int i = 0; i < 5; i++)
		cout << temp[i] << " ";		//
	cout << endl;
	*/

	//Exercise 5
	/*
	double CityTempFah[7];
	string city[7];
	ifstream infile;
	infile.open("cityTempFah.txt");

	if (infile.fail())
		cout << "unable to open the file" << endl;
	else
	{

		int i = 0;
		while (!infile.eof())
		{

			getline(infile, city[i]);
			infile >> CityTempFah[i];
			infile.ignore();
			i++;
		}
	}
	checkingTemperature(CityTempFah, city);
	*/

	/*
	string city[] = {"Kuala Lumpur","Beijing","Canberra", "Cairo","Eureka","Moscow"};
	double CityTempFah[] = {34.5,9,39,22,-29.6,-3};

	//function call
	checkingTemperature(CityTempFah,city);  //pass down the array must exclude []
	*/

	//Exercise 6
	ifstream infile;
	infile.open("employee.txt");
	const int size = 20;
	string Emp_ID[size], Emp_Name[size];
	int hours_work[size][5];
	if (infile.fail())
	{
		cout << "unable to open the file"<<endl;
	}
	else
	{
		int i = 0;
		while (!infile.eof())
		{
			getline(infile, Emp_ID[i]);			
			getline(infile,Emp_Name[i]);
			//infile >> Emp_Name[i];
			//infile.ignore();
		
			for (int j = 0; j < 5; j++)
			{
				infile >> hours_work[i][j];
			}
			infile.ignore();
			
			
			i++;
		}

		
		for (int z = 0; z <= i; z++)
		{				
			double total=0;
			cout << "Employee ID: " << Emp_ID[z]<<endl;
			cout << "Employee Name:" << Emp_Name[z]<<endl;
			for (int j = 0; j < 5; j++)
			{
				cout << hours_work[z][j] << " ";
				total += hours_work[z][j];			
			}
			cout << endl;
			cout << "Total vages: " << total * 3.5<<endl;
		}
	}

	system("pause");
	return 0;
}

void checkingTemperature(double CityTempFah[], string city[])
{
	int largest = 0, smallest = 0;
	const int size = 6;
	for (int i = 1; i < size; i++)
	{
		if (CityTempFah[largest] > CityTempFah[i])
			largest = i;
		if (CityTempFah[smallest] < CityTempFah[i])
			smallest = i;
	}

	/*
	for (int i = 0; i < 6; i++)
	{
		if (i == 0)
			largest = CityTempFah[i];
		else
		{
			if (CityTempFah[i]>largest)
				largest = CityTempFah[i];
		}
	}
	*/
	cout << "The city with the highest temperature is " << city[largest] << endl;
	cout << "The city with the lowest temperature is " << city[smallest] << endl;
	
}