#include<bits/stdc++.h>
using namespace std;
void primefactor(int N){
    for(int i=2;i*i<N;i++){
        if(N%i==0){
            cout<<i<<" ";
            while(N%i==0){
                N/=i;
            }
        }
    }
    if(N>1){
        cout<<N<<endl;
    }
}


int main(){
    int N;
    cin>>N;
    primefactor(N);
}

