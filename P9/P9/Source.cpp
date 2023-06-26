#include <iostream>
#include<string>
using namespace std;

//Step 1 to step 9
/*
struct Record {
	string name;
	int id;
	Address address;
	void print()
	{
		cout << name << " " <<id << endl;
		cout << address.streetname << " " << address.states << endl;
		name = "michael";
		id = 100;
	}//latest name and id will update in the main function
};
struct Address
{
	string streetname;
	string states;
};
*/
//Exercise 1
struct Address
{
	int number;
	string address;//char address[100];
	string cities;//char city[20];
	string states;//char states[30];
	string postcode;//char postcode[10];
};



//Exercise 2
struct nameType
{
	string first;
	string last;
};

struct employeeType
{
	nameType name;
	int performanceRating;
	int pID;
	string dept;
	double salary;
};
employeeType employees[100];		//struct array  100 employees 
employeeType newEmployee;			//seven info of one meployee info -struct

/* Structure declaration */
struct Date {
	int day;
	int month;
	int year;
};

struct Time {
	int hour;
	int min;
	int sec;
};

struct Stamp {
	Date date;
	Time time;
} stamp;

struct Job {
	Stamp start;
	Stamp end;
};

struct Student
{
	int id;
	int entry_year;
	double gpa;
}student[100];

/*
void print(Record& rec1)//reference parameter
{
	cout << rec1.name << " " << rec1.id << endl;
	cout << rec1.address.streetname << " " << rec1.address.states << endl;
}
*/
/*
int main()
{
	//id,salary of 100 wrokers
	double worker[100][2];//2d array
	//id,name and salary of 100 worker
	//double worker[100][3];		//2d array

	int id;				//int -default datatype
	//Record rec1;		//users defined-data type
	//rec1.name = "Alex";
	//rec1.id = 99;
	//Record rec1 = { "Alex",99 };
	//cout << rec1.name << endl << rec1.id;

	Record rec1 = { "Alex",99,{"Jalan Kampar","Perak"} };
	cout << rec1.name << endl << rec1.id << endl;
	cout << rec1.address.streetname << endl << rec1.address.states << endl;

	//pass down name,value,streetname,state to a printing function
	print(rec1);
	rec1.print();
}
*/
void adding(Student student[], int& num_stud)
{
	char ans;
	do {
		//student[2] = {9101,2018,2.95};
		//student[3] = {1121,2019,3.12};
		//student[1].gpa = 2.11;
		int id, year;
		double gpa;
		cout << "enter the id of the student >>";
		cin >> id;
		student[num_stud].id = id;
		cout << "enter the entry year of the student >>";
		cin >> year;
		student[num_stud].entry_year = year;
		cout << "enter the gpa of the student >>";
		cin >> gpa;
		student[num_stud].gpa = gpa;
		num_stud += 1;
		cout << "Do you want to continue >>";
		cin >> ans;
		ans = toupper(ans);
	} while (ans == 'Y');
}
void printing(Student student)
{
	cout << "student id >> " << student.id << endl;
	cout << "student entry year >> " << student.entry_year << endl;
	cout << "student gpa >> " << student.gpa << endl;
}
void modify(Student student[], int number);
bool search(double);

int main()
{
	//exercise 2
	/*
	newEmployee.name.first = "John";
	newEmployee.name.last = "Smith";
	cout << newEmployee.name.first;
	employees[35] = newEmployee;
	if (employees[45].pID == 555334444)
		employees[45].performanceRating = 1;
	employees[0].salary = 0;
	return 0;

	//exercise 3
	stamp.time.hour = 2;
	Job job[10];
	job[0].start.date.month;
	*/
	//pass student array into the function to addd 2 students info
	//list out all students details
	student[0] = { 1234,2016,3.41 };
	student[1] = { 5678,2015 };
	int number = 2;
	adding(student, number);
	for (int i = 0; i, number; i++)
	{
		printing(student[i]);
	}

	for (int i = 0; i < number; i++)
	{
		bool result = search(student[i].gpa);
		if (result)
			cout << student[i].id;
	}
}

void modify(Student student[], int number)
{
	bool decision;
	while (decision)
	{
		int num;
		string info;
		cout << "Enter the number of student you want to modify ";
		cin >> num;
		if (num < number && num>0)
		{
			cin.ignore();
			cout << "which information you want to modify >>";
			getline(cin, info);
			for (int i = 0; i < info.size(); i++)
			{
				info[i] = toupper(info[i]);
			}
		}
		else
			cout << "invalid input" << endl;
	}
}

void update(Student student[], int number)
{
	int selection, id_selection, countnostudent = 0;
	cout << "which info to update 1. id, 2. entry year ,3. gpa";
	cin >> selection;
	cout << "enter student's id";
	cin >> id_selection;
	for (int i = 0; i < number; i++)
	{
		if (id_selection == student[i].id)
		{

			if (selection == 1)
			{
				cin >> student[i].id;
			}
			else if (selection == 2)
			{
				cin >> student[i].entry_year;
			}
			else if (selection == 3)
			{
				cin >> student[i].gpa;
			}
		}
		else
			countnostudent++;
	}
	if (countnostudent == number)
		cout << "invalid student" << endl;
}

bool search(double gpa)
{
	if (gpa > 3.0)
		return true;
	else
		return false;
}