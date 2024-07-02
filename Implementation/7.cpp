#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<m; j++){
                cout<<"#";
            }
        }
        else{
            if(cnt%2 == 0){
                for(int j=0; j<m-1; j++){
                    cout<<".";
                }
                cout<<"#";
            }
            else{
                cout<<"#";
                for(int j=0; j<m-1; j++){
                    cout<<".";
                }
            }
            cnt++;
        }
        cout<<endl;
    }
}