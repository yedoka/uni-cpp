#include <iostream>
using namespace std;

int main(){
    int x, n, i=0, counter=0, sum=0;
    cout<<"How many times?";
    cin>>n;
    if(n>=1)
    {
        do
        {
            cout<<"Enter x: ";
            cin>>x;
            if(x>0){
                if(x%2==0){
                    cout<<x<<" is positive and even"<<endl;
                }
                else{
                    cout<<x<<" is positive and odd"<<endl;
                    counter++;
                    sum=sum+x;
                }
            }
            else if (x<0){
                if(x%2==0){
                    cout<<x<<" is negative and even"<<endl;
                }
                else{
                    cout<<x<<" is negative and odd"<<endl;
                    counter++;
                    sum=sum+x;
                }
            }
            else{
                cout<<"zero"<<endl;
            }
            i++;
        } 
        while (i<n);
        cout<<counter<<" numbers are odd"<<endl;
        cout<<"AVG of odd numbers: "<<(double)sum/counter<<endl;
    }
    else{
        cout<<"Wrong value for n!"<<endl;
    }
}