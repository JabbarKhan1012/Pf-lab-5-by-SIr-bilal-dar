#include<iostream>
using namespace std;
int main()
{
    int Total_subject,subject;
    float sum, percentage;
    cout<<"How much subject do you have::";
    cin>>Total_subject;
    for(int i=1;i<=Total_subject;i++)
    {
        cout<<"enter the marks of subject_"<<i<<"=";
        cin>>subject;
        sum+=subject;
    }
    cout<<"The total of all the subject is::"<<sum<<endl;
    percentage=(sum/(Total_subject*100))*100;
    cout<<"Your percentage is "<<percentage<<endl;
    if(percentage>=90){
        cout<<"You have got Grade A";
    }
    else if (percentage>=75&&percentage<=89)
    {
        cout<<"you have got Grade B";
    }
    else if(percentage>=50&&percentage<=74)
    {
        cout<<"You have got Grade C";
    }
    else
    cout<<"You have failed the exam";
    
}
