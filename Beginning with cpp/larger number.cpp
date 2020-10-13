#include<iostream>
using namespace std;

class largest{

    int number1, number2, number3;

    public:
        void getdata(void);
        void comparenum(void);
};

void largest :: getdata(void){

    cout << "Enter First Number : ";
    cin >> number1;
    cout << "\n" << "Enter Second Number : ";
    cin >> number2;
    cout << "\n" << "Enter Third Number : ";
    cin >> number3;
}

void largest :: comparenum(void){

    cout << "Number 1 : " << number1 << "\n" << "Number 2 : " << number2 << "\n" << "Number 3 : " << number3 << "\n";

    if (number1 > number2)
    {
        if (number1 > number3)
        {
            cout << "Number 1 is greatest" << "\n";
        }

        else 
        {
            cout << "Number 3 is greatest" << "\n";
        }
    }

    else 
    {
        if (number2 > number3)
        {
            cout << "Number 2 was greatest" << "\n";
        }

        else
        {
            cout << "Number 3 was greatest" << "\n";
        }
    }
}

int main(){

    largest number;
    number.getdata();
    number.comparenum();

    return 0;
}
