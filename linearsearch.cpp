#include<iostream>
using namespace std;

void linearSearch(int a[], int b){
    int temp =-1;
    for (int i=0; i<5; i++){
        if (a[i]==b)
        {
            cout<<"Number found at location: "<<i<<endl;
            temp=0;
        }
    }
    if (temp==-1)
    {
        cout<<"No element found"<<endl;
    }

}
int main(){
    int arr [5]={1,2,3,4,5};
    int n;
    cout<<"Which number are you looking for?"<<endl;
    cin>>n;
    linearSearch(arr,n);
    
    return 0;

}