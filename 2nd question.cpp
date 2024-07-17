#include<bits/stdc++.h>
using namespace std;
int main(){
int max =-99999,arr[]={1,2,77,4};

for(int i=0;i<4;i++){
if(max<arr[i]){
max = arr[i];
}
}
cout<<"The max element in this array is :"<<max;
return 0;
}
