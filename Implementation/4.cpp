#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int t = k*l;
    t = t/nl;
    int q = c*d;
    p = p/np;
    int ans;
    if(t < p){
        if(t < q) ans = t;
        else ans = q;
    }
    else{
        if(p < q) ans = p;
        else ans = q;
    }
    ans /= n;
    cout<<ans<<endl;

}