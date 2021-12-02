// Students have got individual marks of mathematics,
// using class-object concept add all their marks.
// Adarsh ka code hai. Copy mat kariyo.
#include <iostream>
using namespace std;

class Student
{
    public:
    int m;
};

int main()
{
    int n, sum=0;
    cout<<"Enter the number of students: ";
    cin>>n;
    Student ar[n];
    cout<<"Enter marks of " <<n<< " students"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i].m;
    }
    for (int i = 0; i < n; i++)
    {
        sum += ar[i].m;
    }
    cout<<"Their total marks obtained: "<<sum<<endl;
    cout<<"Average marks: "<<sum/n<<endl;
    return 0;
}