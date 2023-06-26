#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{

    /*string str = "This is a string";
    for (int i = 0; i < str.size(); i++)
        str[i] = toupper(str[i]);
    cout << str << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            if (j > i)
                cout << " ";
            else if (j <= i)
                cout << "*";
        }
        cout << endl;
    }
    */
    /*
    int num,num1;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 9; j >= 1; j--)
        {            
            num = i % 2;
            num1 = j % 2;
            if (j > i)
                cout << "       ";
            else if (num1 == 1 && num==1)
                cout << "       ";
            else if (num1 == 0 && num==0)
                cout << "       ";
            else if (j<=i)
                cout << j << "X" << i << "=" << setw(2) << j * i << " ";

        }
        cout << endl;
    }
    cout << endl;
    */
    /*
    int num;

    int first, second;
    cout << "Select first value";
    cin >> first;
    cout << "select second value";
    cin >> second;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 9; j >= 1; j--)
        {
            num = i % 2;

            if (j > i)
                cout << "       ";
            else if(j==first && i==second)
                cout << "       ";
            else if (j <= i)
                cout << j << "X" << i << "=" << setw(2) << j * i << " ";

        }
        cout << endl;
    }
    cout << endl;
    */
    /*for (int i = 9; i >= 1; i--)
    {
        for (int j = 9; j >= 1; j--)
        {
            if (j > i)
                cout << "       ";
            else if (j <= i)
                cout << j << "X" << i << "=" << setw(2) << j * i << " ";

        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "X" << j << "=" <<setw(2)<< i * j<<" ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 9; i >=1; i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout << i << "X" << j << "=" << setw(2) << i * j << " ";
        }
        cout << endl;
    }
    cout << endl;
    */

    int num1 = 3, num2 = 3, num3 = 10;
    for (int i = num2; i <= 5; i++)
    {
        for (int j = num1; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= num2; k++)
        {
            cout << "* ";
        }
        for (int j = num1; j >= 1; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= num2; k++)
        {
            cout << "* ";
        }
        cout << endl;
        num1--;
        num2++;

    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= num3; j++)
        {
            cout << "* ";
        }
        cout << endl;
        num3 -= 2;
    }

    

    system("pause");
    return 0;

}
