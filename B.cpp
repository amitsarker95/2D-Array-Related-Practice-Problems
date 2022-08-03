#include<bits/stdc++.h>
using namespace std;

int main(){
int n = 3;

int arr[n][n];
int brr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>brr[i][j];
    }
}
int crr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            crr[i][j] = 0;
        for(int x=0;x<n;x++){
           crr[i][j] += arr[i][x] * brr[x][j];
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<crr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}


