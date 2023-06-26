#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    //Exercise 1
    /*int a = 6, b = 4, c = 5, d = 9;

    a = ++b - --d / c--;  
    cout << "a=" << a << ", " << "b=" << b << ", " << "c=" << c << ", "
        << "d=" << d << ", " << endl;


    d += ++a - (b % --c);
    cout << c << ", " << a << ", " << d << endl;


    c -= a++ * --b;
    cout << a << ", " << ++b << ", " << c-- << endl;


    b -= c++ - d-- * a;
    cout << a << ", " << b << ", " << c << ", " << d << endl;*/


    //Exercise 2
    //cout << (5 + 6 == 3 + 7) << endl;//false:0
    //cout << (2 * 6 - 4 >= 9 - 1) << endl;//true:1
    //cout << ('U' >= 't') << endl;//false
    //cout << ('A' <= 'a') << endl;//true
    //cout << ('#' <= '+') << endl;//true
    //cout << (6.28 / 3 < 3 - 1.2)<< endl;//false

    

    /*if (true)
    {
        cout << "statement 1" << endl;
        cout << "statement 2" << endl;

    }
    cout<<"statement 3"

    if (true)
        cout << "statement 1" << endl;
    cout << "statement 1" << endl;
    cout << "statement 1" << endl;*/


    //if ('+' < '*')
    //    cout << "+*";
    //cout << "%%" << endl;

    //if (10 <= 2 * 5)
    //
    //    cout << "10 ";
    //cout << "2 * 5";
    //cout << endl;

    //if ('a' < 'A')//false
    //    cout << 'a';
    //    cout << 'A';
    //    cout << endl;
    //

    //if (6 == 2 * 4 - 2)
    //    cout << 3 * 4 / 6 - 8 << endl;
    //cout << "**" << endl;

    //if ('R' < '$' && '&' <= '#')
    //    cout << "$#";
    //cout << "R&";
    //cout << endl;

    //if ('4' > '3' || 2 < -10)
    //    cout << "1 2 3 4" << endl;
    //cout << "$$" << endl;

    /*double score;
    int num;
    cout << "Enter score: ";
    cin >> score;*/
    
    /*if (score < 0 || score>100)
        cout << "Invalid input." << endl;

    else if (score >= 60)
        cout << "You pass." << endl;

    else
        cout << "You fail." << endl;*/
    /*if (score>=60 && score <=100)
        cout << "Invalid input." << endl;

    else if (score < 0 || score>100)
        cout << "You pass." << endl;

    else
        cout << "You fail." << endl;*/


    /*if (score < 60 && score >= 0)
        num = 0;
    else if (score >= 60 && score <= 100)
        num = 1;
    else
        num = 3;

    switch (num)
    {
    case 0:
        cout << "you fail" << endl;
        break;
    case 1:
        cout << "You fail." << endl;
        break;
    case 3:
        cout << "invalid input." << endl;
        break;
    default:
        cout << "Invalid input." << endl;
        break;

    }*/
    
    
    //int myNum = 10;
    //int yourNum = 30;   //30%10=0


    ////12%5=2
    ////33%30=3
    //if (yourNum % myNum == 3)
    //{
    //    yourNum = 3;
    //    myNum = 1;
    //}
    //else if (yourNum % myNum == 2)
    //{
    //    yourNum = 2;
    //    myNum = 2;
    //}
    //else
    //{
    //    yourNum = 1;
    //    myNum = 3;
    //}
    //cout << myNum << " " << yourNum << endl;







    //Exercise 6

    //int beta;
    //cin >> beta;//11
    //switch (beta % 7)//4
    //{
    //case 0:
    //case 1:
    //    beta = beta * beta;
    //    break;
    //case 2:
    //    beta++;
    //    break;
    //case 3:
    //    beta = static_cast<int>(sqrt(beta * 1.0));
    //    break;
    //case 4:
    //    beta = beta + 4;
    //case 6:
    //    beta = beta--;
    //    break;
    //default:
    //    beta = -10;
    //}
    //cout << beta << endl;

    
    
    
    
    
    
    
    
    
    
    
    
    
    int weight, distance;
    double rate=0;
    cout << "Enter weight: ";
    cin >> weight;
    cout << endl;

    cout << "Enter distance: ";
    cin >> distance;
    cout << endl;

    if (weight < 1 || distance<1)
        cout << "invalid input" << endl;

    else if (weight >= 1 && weight <= 5)
    {
        if (distance >= 1 && distance <= 99)
        {
            rate = 1.2;
        }
        else if (distance >= 100)
        {
            rate = 2.5;
        }
    }
    else if (weight >= 6 && weight <= 30)
    {
        if (distance >= 1 && distance <= 99)
        {
            rate = 2.2;
        }
        else if (distance >= 100)
        {
            rate = 2.5;
        }
    }
    else if (weight>30)
    {
        if (distance >= 1)
           rate = 4.5;
    }

    cout << weight << "*RM" << rate << "=" << fixed<<setprecision(2)<< static_cast<double>(weight) * rate << endl;

    terminate();

    return 0;


}