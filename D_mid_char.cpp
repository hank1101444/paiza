#include<iostream>
using namespace std;
#include <string>
#include <cstring> // 包含 memset 的標頭檔


int main(){
    string s;
    while(cin >> s){
        char a[100];
        int len = 0;
        memset(a, '\0', sizeof(a));
        for(int i =0; i< s.size();++i){
            if((i+1) % 2 ==1){
                a[len++] = s[i];
            }
        }
        cout << a << endl;
    }

    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string S, result = "";
//     cin >> S;

//     // 遍歷字串，取出奇數位置字元
//     for (int i = 0; i < S.length(); i++) {
//         if (i % 2 == 0) { // 奇數位置 (索引從0開始)
//             result += S[i];
//         }
//     }

//     // 輸出結果
//     cout << result << endl;

//     return 0;
// }
