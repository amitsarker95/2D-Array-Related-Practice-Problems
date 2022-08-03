#include<bits/stdc++.h>
using namespace std;

int main(){
int n,sum=0;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
   sum += arr[0][i] + arr[n-1][i] + arr[i][i] + arr[i][n-i-1];
}
int extra = arr[0][0]+arr[n-1][0]+arr[n/2][n/2]+arr[n-1][n-1]+arr[0][n-1];

cout<<sum-extra<<endl;

return 0;
}
