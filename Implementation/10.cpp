#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    string str = "EASY";
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t == 1){
            str = "HARD";
        }
    }
    cout<<str<<endl;
}