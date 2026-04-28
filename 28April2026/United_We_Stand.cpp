#include<iostream>
#include<vector>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n,mx = INT_MIN;
        cin>>n;
        vector<int> a(n);
        vector<int> b,c;

        for(int i=0; i<n; i++){
            cin>>a[i];
            mx = max(a[i],mx);
        }

        for(int x : a){
            if(x != mx){
                b.push_back(x);
            }else{
                c.push_back(x);
            }
        }

        if(b.size()==0){
            cout<<-1;
            break;
        }

        cout<<b.size()<<" "<<c.size();
        for(int x : b) cout<<x<<" ";
        cout<<endl;
        for(int x : c) cout<<x<<" ";
    }


    return 0;
}