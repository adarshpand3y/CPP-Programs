#include <iostream>
using namespace std;

int main()
{
    int n, min=99999, max=-99999, sum=0, avg=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int ar[n];
    cout<<"Enter "<<n<<" elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i]>max)
        {
            max = ar[i];
        }
        if (ar[i]<min)
        {
            min = ar[i];
        }
        sum += ar[i];
    }
    avg = sum/n;
    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max<<endl;
    cout<<"sum: "<<sum<<endl;
    cout<<"avg: "<<avg<<endl;
    return 0;
}