#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int sq = sqrt(n);

int arr[sq][sq];
for(int i=0;i<sq;i++){
    for(int j=0;j<sq;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<sq;i++){
    for(int j=0;j<sq;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}



return 0;
}
