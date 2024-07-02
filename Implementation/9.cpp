#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int minIdx = 0;
    int maxIdx = 0;
    for(int i=0; i<n; i++){
        if(arr[i] <= arr[minIdx]){
            minIdx = i;
        }
        if(arr[i] > arr[maxIdx]){
            maxIdx = i;
        }
    }
    ans = maxIdx - 1 + n - minIdx;
    if(maxIdx > minIdx){
        ans--;
    }
    cout<<ans<<endl;
}