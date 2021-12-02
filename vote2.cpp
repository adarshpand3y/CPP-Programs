#include <iostream>
using namespace std;

int main()
{
    int n;
    int vote[6] = {0, 0, 0, 0, 0, 0};
    cout<<"Enter the number of ballot papers: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter choice: ";
        int ch;
        cin>>ch;
        if(ch>=1 && ch<=5)
            vote[ch-1] += 1;
        else
            vote[5] += 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Candidate "<<i+1<< " got "<<vote[i] <<" vote(s)."<<endl;
    }
    cout<<"Number of spoilt ballots: "<< vote[5];
    return 0;
}