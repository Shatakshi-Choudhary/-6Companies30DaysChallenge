#include <iostream>
using namespace std;

int displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int createArray(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
    }
}

int addition(int arr[], int size, int sum)
{
    int add = 0;
    for (int i = 0; i < size; i++)
    {
        add += arr[i];
    }
    // cout<<add;
    return add;
}

int main()
{

    int k = 3, n = 7; //  k = no. of elements in array  & n = sum of all the elements
    // int arr[k];
    // createArray(arr,k,n);
    // displayArray(arr,k);
    int arr[k] = {1, 2, 4};
    if (addition(arr, k, 7) == n)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False";
    }

    return 0;
}