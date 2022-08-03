#include<bits/stdc++.h>
using namespace std;

int main(){
int r,c;
cin>>r>>c;
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
}
int mx = arr[0][0];
int index1,i,j,a,b;

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(mx<arr[i][j]){
            mx = arr[i][j];
            a = i;
            b = j;
        }
    }
}

cout<<"Max :"<<mx<<endl<<"Location :"<<"["<<a<<"]"<<"["<<b<<"]"<<endl;

return 0;
}

