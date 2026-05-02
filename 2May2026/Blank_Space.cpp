#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans = 0,cnt=0;

        while(n--){
            int temp;
            cin>>temp;
            if(temp==0){
                cnt++;
            }else{
                ans = max(cnt, ans);
                cnt = 0;
            }
        }
        cout<<ans<<endl;
    }
}