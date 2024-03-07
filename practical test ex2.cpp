#include <iostream>
using namespace std;

void input_array(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Value #"<<i+1<<": ";
        cin>>arr[i];
    }
}

int count_less(int *arr, int n, int x)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<x)
        {
            count++;
        }
    }
    return count;
}

int largest_less(int *arr, int n, int x)
{
    int largest=-1;
    int index=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<x && arr[i]>largest)
        {
            largest=arr[i];
            index=i+1;
        }
    }
    return index;
}

int main() {
    int n, x;
    cout<<"Enter length of array: ";
    cin>>n;
    int* arr = new int[n];
    input_array(arr, n);
    cout<<"Enter value for x: ";
    cin>>x;

    cout<<"Number of elements less than "<< x << ": "<<count_less(arr, n, x)<<endl;
    cout<<"Index of element with the largest value less than "<< x << ": " <<largest_less(arr, n, x);

    return 0;

}