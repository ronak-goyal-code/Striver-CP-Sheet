#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        int temp = 1;
        while(n){
            int d = n % 10;
            n /= 10;
            if(d != 0){
                ans.push_back(d*temp);
            }
            temp *= 10;

        }
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}