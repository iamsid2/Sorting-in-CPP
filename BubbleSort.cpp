#include<iostream>
using namespace std;

int BubbleSort(int arr[],int n)
{
    int i,j,tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    cout<<"The Array after bubble sort becomes:\n ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"ENter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    return 0;
}
