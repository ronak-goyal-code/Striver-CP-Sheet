#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
    int row = 0;
    int col = 0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            int n;
            cin>>n;
            if(n == 1){
                row = i;
                col = j;
            }
        }
    }
    int ans = abs(3 - row) + abs(3 - col);
    cout<<ans<<endl;
}