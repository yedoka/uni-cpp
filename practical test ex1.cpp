#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generate_array(int* arr, int n, int p, int q)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (q - p + 1) + p;
    }
}

void display_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int count_occurrences(int* arr, int n, int x)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            counter++;
        }
    }
    return counter;
}

int find_integer(int* arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n, p, q, x;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the range of the array: ";
    cin >> p >> q;
    generate_array(arr, n, p, q);
    display_array(arr, n);
    cout << "Enter the number you want to find: ";
    cin >> x;
    cout << "The number of occurrences of " << x << " is " << count_occurrences(arr, n, x) << endl;
    cout << "The index of the first element with value equal to " << x << " is " << find_integer(arr, n, x) << endl;
    delete[] arr;
    return 0;
}