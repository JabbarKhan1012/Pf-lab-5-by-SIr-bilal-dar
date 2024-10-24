#include<iostream>
using namespace std;
int main()
{
    int num=0;
    cout<<"Enter the number:: ";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        cout<<"The cube is "<<(i*i*i)<<endl;
    }
}