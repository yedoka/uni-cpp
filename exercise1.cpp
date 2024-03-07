#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char answer;
    double x1, x2, y1, y2;
    do
    {
        cout<<"Enter value for x1: ";
        cin>>x1;
        cout<<"Enter value for x2: ";
        cin>>x2;
        if(x1==-10 || x2==-10)
        {
            cout<<"Error!!!";
            return 0;
        }
        else
        {
            y1=(pow(x1, 2)+1)/(x1+10);
            y2=(pow(x2, 2)+1)/(x2+10);
            cout<<"For x1 value "<<x1<<" y is "<<y1<<endl;
            cout<<"For x2 value "<<x1<<" y is "<<y2<<endl;
            if(y1!=y2)
            {
                cout<<max(y1, y2)<<" is bigger than "<<min(y1, y2)<<endl;
            }
            else 
            {
                cout<<"Values are equal!"<<endl;
            }
            
        }
        cout<<"CONTINUE?(Y/N)"<<endl;
        cin>>answer;
    } 
    while(answer=='y' || answer=='Y');
    
    return 0;
}