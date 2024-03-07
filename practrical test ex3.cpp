#include <iostream>
using namespace std;

void input_array(int *arr, int length)
{
    for(int i=0; i<length; i++)
    {
        cout<<"Value #"<<i+1<<": ";
        cin>>arr[i];
    }
}

void avg_a(int *arr, int length, int sum=0, int count=0)
{
    for(int i=0; i<length; i++)
    {
        if(arr[i]>=-5 && arr[i]<=5)
        {
            count+=1;
            sum+=arr[i];
        }
    }
    if(count==0)
    {
        cout<<"There is no element in range [-5, 5]"<<endl;
    }
    else{
        cout<<"AVG of elements greater than -5 and smaller than 5: "<<(float)sum/count<<endl;
    }
}


void avg_b(int *arr, int length, int a, int b, int sum=0, int count=0)
{
    for(int i=0; i<length; i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            count+=1;
            sum+=arr[i];
        }
    }
    if(count==0)
    {
        cout<<"There is no element in range (a, b)"<<endl;
    }
    else
    {
        cout<<"AVG of elements in range (a, b): "<<(float)sum/count<<endl;
    }
}


void sum_odd(int *arr, int length, int sum_odds=0)
{
    for(int i=0; i<length; i++)
    {
        if(arr[i]%2!=0)
        {
            sum_odds+=arr[i];
        }
    }
    cout<<"Sum of all odds: "<<sum_odds<<endl;
}

void divisible3(int *arr, int length, int count=0)
{
    for(int i=0; i<length; i++)
    {
        if(arr[i]%3==0)
        {
            count+=1;
        }
    }
    cout<<"Elements divisible by 3: "<<count<<endl;
}


void greatest(int *arr, int length, int greatest_el=0)
{
    greatest_el=arr[0];
    for(int i=0; i<length; i++)
    {
        if(arr[i]>greatest_el)
        {
            greatest_el=arr[i];
        }
    }
    cout<<"Greatest element of array: "<<greatest_el<<endl;
}


void greatest_odd(int *arr, int length, int greatest_el=0)
{
    greatest_el=arr[0];
    for(int i=0; i<length; i++)
    {
        if(arr[i]%2==0 && arr[i]>greatest_el)
        {
            greatest_el=arr[i];
        }
    }
    cout<<"Greatest odd element of array: "<<greatest_el<<endl;
}



int main() {
    const int length=10;
    int a, b;
    cout<<"ENTER A: ";
    cin>>a;
    cout<<"ENTER B: ";
    cin>>b;
    int *arr = new int[length];
    input_array(arr, length);
    avg_a(arr, length);
    avg_b(arr, length, a, b);
    sum_odd(arr, length);
    divisible3(arr, length);
    greatest(arr, length);
    greatest_odd(arr, length);
    return 0;
}