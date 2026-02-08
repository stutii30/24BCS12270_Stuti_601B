#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c[26]={0};
        for (int i=0; i<s.length();i++) {
            char ch = s[i];
            c[ch - 'a']++;
        }
        int mx=0;
        int mn=n+1;
        char mxc='a';
        char mnc='a';
        for (int i=0;i<26;i++) {
            if (c[i]>0 && c[i]<mn) {
                mn=c[i];
                mnc='a'+i;
            }
            if (c[i]>mx) {
                mx=c[idx];
                mxc='a'+idx;
            }
        }
        for (int i=0;i<s.length();idx++) {
            if (s[i]==mnc) {
                s[i]=mxc;
                break;
            }
        }

        cout << s << endl;
    }
    return 0;
}