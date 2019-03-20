#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,s=0,c=0;
    cin >> n;
    char str1[n],str2[n];
    cin >> str1;
    cin >> str2;
    for(i=0;i<n;i++){
        c=str1[i]-str2[i];
        if(c<0)
            c = c*(-1);
        if(c>5)
            c = 10-c;
        s = s+c;
    }
    cout << s << endl;
    return 0;
}
