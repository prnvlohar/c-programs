#include<iostream>
using namespace std;
int main()
(
    int n;
    cout<<"enter a number:";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"the number is not prime"<<endl;
        }
        else
        {
            cout<<"number is prime"<<endl;
        }
    }
    return 0;

)