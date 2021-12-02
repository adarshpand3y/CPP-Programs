// Adarsh ka code hai
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
        switch (ch)
        {
        case 1:
            vote[0] += 1;
            break;
        case 2:
            vote[1] += 1;
            break;
        case 3:
            vote[2] += 1;
            break;
        case 4:
            vote[3] += 1;
            break;
        case 5:
            vote[4] += 1;
            break;
        default:
            vote[5] += 1;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Candidate "<<i+1<< " got "<<vote[i] <<" vote(s)."<<endl;
    }
    cout<<"Number of spoilt ballots: "<< vote[5];
    return 0;
}