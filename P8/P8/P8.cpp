#include<iostream>
#include<string>



using namespace std;
//bool isvowel(char);
int main()
{
	/*
	//C++ string
	string word = "Hello";
	cout << word << endl;
	cout << word[0] << endl;
	cout << word[1] << endl;
	cout << word[2] << endl;
	cout << word[3] << endl;
	cout << word[4] << endl;
	cout << word[5] << endl;

	char a = 'A';
	char str1[] = { 'H','e','l','l','o' };

	//C-string
	char str2[] = "Hello";
	cout << str2 << endl;

	//char str3[5] = "Hello";  //error prompt
	char str4[16] = "Hello";


	//char str5[];//must initialize the value
	*/
	/*
	char str3[5];
	strcpy(str3,"Hello");
	cout<<str3<<endl;
	*/
	/*
	string str = "Hello";
	cout << str << endl;
	cout << "Length" << str.length() << endl;

	string str1 = "I am happy.";
	cout << str1 << endl;
	cout << "Length: " << str1.length()<<endl;

	char str2[6] = "Hello";
	cout << str2 << endl;
	cout << "Length: " << strlen(str2) << endl;
	cout << "Size of array: " << sizeof(str2) << endl;


	string str1 = "Hello";
	string str2 = "World";
	cout << str1 + str2 << endl;

	char str3[12] = "Hello";
	char str4[7] = "World";
	cout << strcat(str3, str4) << endl;


	string str1 = "Hello";
	string str2 = "World";
	str1.swap(str2);
	cout << str1<<" "<<str2;

	string str1 = "Hello";
	str1.replace(2, 2, "r"); //(from,to,replace by) 
	cout << str1 << endl;//hero


	string str1 = "Hello";
	string str2 = "World";
	string str2 = str1.substr(0, 4);   //from,length
	cout << str1 << " " << str2 << endl;  // Hello Hell


	string str1 = "Hello";   //Apple
	string str2 = "Hello";	//Banana
	cout << str1.compare(str2) << endl;//check ascii table of first character // 65<66  -1  
	if (str.compare(str2) == 0)
		cout << "same" << endl;
	else
		cout << "not same" << endl;





	*/
	/*
	//Step 1
	char str2[] = "Hello";
	cout << str2 << endl;
	//Step 2
	char str3[6];
	strcpy(str3, "Hello");

	//Exercise 1
	//A
	char str[10] = "JOHN";
	char str2[10] = "john";
	cout << strcmp(str, str2) << endl;   //74<106  output: -1
	//B
	char str3[2] = "a";
	char str4[2] = "b";
	cout << strcmp(str3, str4);			//-1
	//C
	char str5[10] = "John";
	char str6[10] = "Johnson";
	strcmp(str5, str6);					//-1
	*/
	/*
	//John is Smart
	string str;
	cin >> str; 
	getline(cin, str);
	cout << str;

	char str1[10];
	cin.getline(str1, 10);//John is s\0
	cout << strlen(str1) << endl;
	cout<<cin.fail()<,endl;
	cin.clear(str1);`			//reset the status of the input 
	cin>>str1;
	*/
	
	/*
	//Exercise 2
	char input[100], backup[100];
	cout << "Enter string: ";
	cin.getline(input,100);
	int number = strlen(input);
	strcpy(backup, input);
	for (int i = 0; i < number; i++)
	{
		input[i] = toupper(input[i]);
		if ((input[i] == 'A' || input[i] == 'E') || (input[i] == 'I' || (input[i] == 'O' || input[i] == 'U')))		//IF(isvowel(input[i]))			//passs this to function definition
			cout << "*";
		else
			cout << backup[i];
	}
	cout << endl;
	/*
	//Exercise 3
	char name[8][100] = { "David Lee", "Michael Lee", "Dave Roberts", "Max Lim", "Jenny Hong", "Jane Tan", "John Yew","Jay Tee" };        //size of row(no. of name),size of column(naming character)
	char ch;
	cin>>ch;

	for (int i = 0; i < 8; i++)
	{
		if (stupper(name[i][0]) == toupper(ch))
			cout << name[i] << endl;
	}
	*/

	//Exercise 4
	
	//two deimensional array
	//char name[8][100] = { "David Lee", "Michael Lee", "Dave Roberts", "Max Lim", "Jenny Hong", "Jane Tan", "John Yew","Jay Tee" };

	string firstname;
	string names[5];  //one dimensional array
	names[0] = "John Doe";
	names[1] = "Jane Doe";
	names[2] = "Simon Hong";
	names[3] = "Barry Allen";
	names[4] = "Arthur Kim";

	int index=0;
	for (int i = 0; i < 5; i++)
	{
		firstname = names[i];
		int number=0,smallest=0;
		for (int j = 0; j< firstname.size(); j++)
		{
			number += int(firstname[j]);
		}
		if (i == 0)
			smallest = number;
		else if (number < smallest)
			index = i;
	}
	cout << names[index] << endl;
	/*
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
			firstname = names[i];
		else
		{
			if (firstname.names[i])
				firstname = names[i];
		}
	}
	cout << firstname << endl;
	*/
	system("pause");
	return 0;
}

/*
bool isvowel(char ch)
{
	switch (ch)
	{
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
	case'A':
	case'E':
	case'I':
	case'O':
	case'U':
		return true;
	default:
		return false;
	}
	

}

*/