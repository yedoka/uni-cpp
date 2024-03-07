#include <iostream>
using namespace std;

void input_array(int* arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Element#"<<i+1<<": ";
        cin>>arr[i];
    }
}

void display_array(int* arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

double avg(int* arr, int n)
{
    int sum=0, count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0 && arr[i]%3!=0)
        {
            sum+=arr[i];
            count++;
        }
        else
        {
            i++;
        }
    }
    if(count!=0)
    {
        return (double)sum/count;
    }
    else
    {
        return 0;
    }

}


int main()
{
    const int n=5;
    int arr[n];
    input_array(arr, n);
    display_array(arr, n);
    if(avg(arr, n)==0)
    {
        cout<<"There is no negative non divisible by 3 element in the array!"<<endl;
    }
    else
    {
        cout<<"Average of negative non divisible by 3 elements is: "<<avg(arr, n)<<endl;
    }
    return 0;
}