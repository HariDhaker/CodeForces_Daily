#include<iostream>
#include<vector>
using namespace std;

int main(){
   int n;
   cin>>n;
   int temp;
   int mini = INT_MAX;
   for(int i=0; i<n; i++){
       cin>>temp;
       mini = min(mini , abs(temp));
   }
   cout<<mini<<endl;
    return 0;
}