#include<iostream>
using namespace std;

int main(){

    float number1, number2, sum, average;
    cout << "Enter two numbers: "; //prompt
    cin >> number1;
    cin >> number2;

    sum = number1 + number2;
    average = sum/2;

    cout << "sum = " << sum << "\n";
    cout << "Average = " << average << "\n";

    return 0;
}