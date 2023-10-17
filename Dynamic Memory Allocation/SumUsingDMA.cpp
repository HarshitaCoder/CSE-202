#include<iostream>
using namespace std;

int main()
{
    int *arr,sum=0;
    int size;
    cout<<"\nEnter the size of integer array: ";
    cin>>size;
    cout<<"\nCreating an array of size"<<size;
    arr=new int[size];
    if(arr==NULL)
    {
        cout<<"\nProblem in memory allocation";
        exit(1);
    }
    cout<<"\nEnter array elemnets: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"\nSum of elements of array is: "<<sum;
    delete []arr;
    return 0;
}