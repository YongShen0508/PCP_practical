#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void checkingTemperature(double CityTempFah[], string city[]);

int main()
{
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
			infile>> CityTempFah[i];
			infile.ignore();
			i++;
		}
	}
	checkingTemperature(CityTempFah, city);
}
void checkingTemperature(double CityTempFah[], string city[])
{
	double largest=0,smallest=0;
	for(int i=0; i<6; i++)
	{ 
		if (largest < CityTempFah[i])
			largest=CityTempFah[i];
		if (smallest > CityTempFah[i])
			smallest=CityTempFah[i];
	}
	for (int i = 0; i < 6; i++)
	{
		if (smallest == CityTempFah[i])
			cout << "The city with the lowest temperature is " << city[i]<<endl;
		if (largest == CityTempFah[i])
			cout << "The city with the highest temperature is " << city[i]<<endl;
		

	}
}
