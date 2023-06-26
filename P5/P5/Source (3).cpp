#include<iostream>
#include<fstream>
#include<string>


using namespace std;


/*int main()
{
	//writing to a file
	//declare an output file stream object

	ofstream outfile;
	outfile.open("example.txt",ios::app);
	//outfile.open("c:\\example.txt",ios::app);

	outfile << "Hello World!" << endl;//console window
	outfile.close();


	//reading from a file
	string line;
	ifstream infile;
	ofstream outfile;
	infile.open("example.txt");
	outfile.open("example.txt");
	if (infile.is_open())
	{
		string line;
		//getline(cin,line)
		while (getline(infile, line))
		{
			cout << line << endl;//console window
			outfile << line <<endl;//file
		}
	}
	else
	{
		cout << "unable to open the file" << endl;
	}


	infile.close();
	outfile.close();

	return 0;
}*/
/*int main()
{

	int num;
	int sum = 0;
	ifstream myfile("sum.txt");
	if (myfile.is_open())
	{
		while (!myfile.eof())  //end of file
		{
			myfile >> num;
			sum += num;
			cout << "The first number is: " << num<<endl;
		}
		cout << "the sum of above number is:" << sum << endl;
	}
	else
	{
		cout << "unable to open the file" << endl;
	}
	return 0;
}*/
//int main()
//{
//	string employee, name;
//	int num1,num2,num3,num4,num5;
//	int num=0;
//	double total;
//	ifstream infile;
//	infile.open("employee.txt");
//	if (infile.is_open())
//	{
//		while (!infile.eof())
//		{
//			getline( infile,employee);
//			cout << "Employee ID: " << employee << endl;
//			getline(infile, name);
//			cout << "Employee Name: " << name << endl;
//			infile >> num1>>num2>>num3>>num4>>num5;	
//			infile.ignore();
//
//			cout << " "<< num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5 << endl;
//			total = (num1 + num2 + num3 + num4 + num5) * 3.5;
//			cout << "Total wages : " << total << endl;
//		}
//	}
//	else
//		cout << "unable to open the file" << endl;
//	
//	infile.close();
//
//	return 0;
//}

int main()
{
	string name, id;
	ifstream infile;
	ofstream outfile;
	double cgpa;
	infile.open("student.txt");
	outfile.open("resultList.txt");
	if (infile.is_open())
	{
		while (!infile.eof())
		{
			getline(infile, name);
			cout << "Student Name: " << name<<endl;

			outfile << name<<"\n";

			infile >> id >> cgpa;
			cout << "student ID: " << id << endl;
			cout << "CGPA: " << cgpa<<endl;
			
			outfile << cgpa<<"\n";

			if (cgpa >= 3.7 && cgpa <= 4.0)
			{
				cout <<name<< " get President list"<<endl;
				outfile << "president list\n";
			}
			else if (cgpa < 3.7 && cgpa >= 3.5)
			{
				cout <<name<< " get Dean list"<<endl;
				outfile << "Dean list\n";

			}
			else if (cgpa < 3.5 && cgpa >= 3.0)
			{
				cout <<name<< " get distinction list"<<endl;
				outfile << "distinction list\n" ;

			}
			else if (cgpa < 3.0 && cgpa >= 0)
			{
				cout <<name<< " need to work harder"<<endl;
				outfile << "Work harder.\n";


			}
			else
			{
				cout << "Data error";
				outfile << "not applicable\n";

			}
			infile.ignore();
			cout << endl;
		}

	}
	else
		cout << "unable to open the file\n";

	infile.close();


	return 0;

}