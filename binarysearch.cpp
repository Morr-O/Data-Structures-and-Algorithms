#include<iostream>
using namespace std;

int binarySearch(int ar[], int left, int right, int n)
{
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(ar[mid]==n)
        {
            return mid;
        }
        else if (ar[mid]<n)
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a;
    int i;
    int arr [10];
    int output;
    cout<<"Enter 10 integers in ascending order: "<<endl;
    for (int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search: "<<endl;
    cin>>a; 

    output=binarySearch(arr,0,9,a);
    if (output==-1)
    {
        cout<<"No match found"<<endl;
    }
    else
    {
        cout<<"Match found at position: "<<output<<endl;
    }
    return 0;
}