#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <windows.h>

#define num 2

using namespace std;

struct address
{
    string city;
    int st_no,bl_no;
};
struct employee
{
    int code,age;
    string name;
    float gross,tax,bouns,netSal;
    address emp_add;
};
int main()
{
    int i;
    employee emp[num];
    for(i=0; i<num; i++)
    {
        cout << "Enter employee no."<<i+1<<" code: ";
        cin >> emp[i].code;
        cout << "Enter employee no."<<i+1<<" name: ";
        cin >> emp[i].name;
        cout << "Enter employee no."<<i+1<<" age: ";
        cin >> emp[i].age;
        cout<< "Enter employee no."<<i+1<< " gross salary: ";
        cin>> emp[i].gross;
        cout<< "Enter employee no."<<i+1<< " bouns: ";
        cin>> emp[i].bouns;
        cout<< "Enter employee no."<<i+1<< " tax: ";
        cin>> emp[i].tax;
        cout << "Enter employee no."<<i+1<<" city: ";
        cin >> emp[i].emp_add.city;
        cout << "Enter employee no."<<i+1<<" street number: ";
        cin >> emp[i].emp_add.st_no;
        cout << "Enter employee no."<<i+1<<" building number: ";
        cin >> emp[i].emp_add.bl_no;
        emp[i].netSal=emp[i].bouns+emp[i].gross-emp[i].tax;
    }
    for(i=0; i<num; i++)
    {
        cout<<"employee no." <<i+1<<" code : "<<emp[i].code<<", name: "<<emp[i].name<<", age: "<<emp[i].age<<", gross salary: "<<emp[i].gross<<", bouns: "<<emp[i].bouns<<" ,Net Salary: "<<emp[i].netSal<<", city: "
            <<emp[i].emp_add.city<<", street No.: "<<emp[i].emp_add.st_no<<", Building No.: "<<emp[i].emp_add.bl_no<<endl;
    }

    return 0;
}
