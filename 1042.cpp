#include <iostream>

using namespace std;
int main ()
{
    int num1, num2, num3;
    int smallest, middle, biggest;
    cin >> num1 >> num2 >> num3;

    if ((num1 < num2) && (num1 < num3))
    {
        smallest = num1;
        if (num2 > num3)
        {
            biggest = num2;
            middle = num3;
        }
        else if(num2 < num3)
        {
            middle = num2;
            biggest = num3;
        }
    }

    if ((num1 > num2) && (num3 > num1))
    {
        middle = num1;
        if (num2 < num3)
        {
            smallest = num2;
            biggest = num3;
        }
        else if(num2 > num3)
        {
            biggest = num2;
            smallest = num3;
        }
    }

    if ((num1 > num2) && (num1 > num3))
    {
        biggest = num1;
        if (num3 > num2)
        {
            middle = num3;
            smallest = num2;
        }
        else if (num2 > num3)
        {
            middle = num2;
            smallest = num3;
        }
    }

    cout<< smallest <<endl<< middle <<endl<< biggest <<endl<<endl;

    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    return 0;
}
