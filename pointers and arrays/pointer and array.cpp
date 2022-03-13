#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[4];
    int i,sum=0;

    ///address of array elements
    for(i=0;i<4;i++){
        printf("%p\n",&arr[i]);
    }
    printf("%p\n",arr);

    /// accessing array elements
    for(i=0;i<4;i++){
        scanf("%d",arr+i);

        sum+=*(arr+i);
    }

    cout<<sum<<endl;

    /// pointer and arrays

    int* ptr;
    cout<<"assigning address and printing value"<<endl;
    ptr=&arr[2];

    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr-1)<<endl;
    cout<<"printing address\n";
    ptr=arr;
    /// printing the address
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<ptr+2<<endl;

    int *ptr2= arr;
    cout<<"*ptr prints address\n";
    cout<<ptr<<endl;
    /// printing the value
    for(i=0;i<4;i++){
        cout<<*(arr+i)<<endl;
    }



}

