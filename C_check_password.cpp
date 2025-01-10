#include <iostream>
using namespace std; 
#include <string>

int main(){
    string s;
    while(cin >> s){
        if(s.size() < 6 ){
            cout << "Invalid" << endl;
            continue;
        }
        bool alp = false, num = false;
        bool flag = true;
        for(int i =0;i < s.size();++i){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))alp = true;
            if(s[i] >= '0' && s[i] <= '9')num = true;
            if(i >=1 && i<s.size()-1 && s[i-1] == s[i] && s[i] == s[i+1])flag = false;
        }
        if(!flag || !alp || !num)  cout << "Invalid" << endl;
        else cout << "Valid" << endl;
    }



    return 0;
}
