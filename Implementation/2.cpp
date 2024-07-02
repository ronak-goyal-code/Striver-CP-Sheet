#include<iostream>
#include<string>

using namespace std;

int main(){
    long long n;
    cin>>n;
    string str = to_string(n);
    if(str[0] >= '5' && str[0] != '9'){
        int d = (int)(str[0] - '0');
        d = 9 - d;
        str[0] = (char)(d + '0');
    }
    for(int i=1; i<str.size(); i++){
        if(str[i] >= '5'){
            int d = (int)(str[i] - '0');
            d = 9 - d;
            str[i] = (char)(d + '0');
        }
    }
    n = stoll(str);
    cout<<n;

}