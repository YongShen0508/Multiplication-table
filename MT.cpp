#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
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



    
   for (int i = 1; i <= 9; i++)
    {
        for (int j = 9; j >= 1; j--)
        {
            num = i % 2;

            if (j > i)
                cout << "       ";
            else if (j <= i)
                cout << j << "X" << i << "=" << setw(2) << j * i << " ";

        }
        cout << endl;
    }
    cout << endl;
    for (int i = 9; i >= 1; i--)
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

    system("pause");
    return 0;

}
