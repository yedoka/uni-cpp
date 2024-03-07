#include <iostream>
using namespace std;

int main(){
    double y, x;
    int n, i=1, counter=0;
    cout<<"How many times? ";
    cin>>n;
    if(n>=1){
        do
        {
            cout<<"Enter x: ";
            cin>>x;
            if(x>1){
                y=1/(x-1);
                cout<<"y="<<y<<endl;
                if(y>0){
                    cout<<"y is positive"<<endl;
                }
                else{
                    cout<<"y is negative"<<endl;
                    counter++;
                }
            }
            else if (x>=-1 && x<=1){
                y=0.5*x;
                cout<<"y="<<y<<endl;
                if(y>0){
                    cout<<"y is positive"<<endl;
                }
                else{
                    cout<<"y is negative"<<endl;
                    counter++;
                }
            }
            else {
                y=1/(x+1);
                cout<<"y="<<y<<endl;
                if(y>0){
                    cout<<"y is positive"<<endl;
                }
                else{
                    cout<<"y is negative"<<endl;
                    counter++;
                }
            }
            i++;

        } while (i<=n);
        cout<<counter<<" y's are negative"<<endl;
    }
    else{
        cout<<"Wrong value for n!"<<endl;
    }

    
    return 0;
    
}