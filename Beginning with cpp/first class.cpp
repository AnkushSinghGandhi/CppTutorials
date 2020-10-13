#include<iostream>
using namespace std;

class person{
    char name[30];
    int age;

    public:
        void getdata(void);
        void display(void);
};

void person :: getdata(void)
{
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
}


void person :: display(void)
{
    cout << "Name : " << name << "\n";
    cout << "Age : " << age << "\n";
}

int main(){

    person p;

    p.getdata();
    p.display();

    return 0;
}