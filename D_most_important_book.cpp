#include<iostream>
using namespace std;
#include <string>
#include <cstring> // 包含 memset 的標頭檔
#include <vector>

int main(){
    string s;
    int  t = 0;
    while(cin >> t){
        vector<string> v;
        int imp = 0;
        for(int i=0;i < t;++i){
            cin >> s >> imp;
            if(imp == 3)v.push_back(s);
        }
        for(int i =0;i < v.size();++i){
            cout << v[i] << endl;
        }
    }
    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // 書籍數量

//     string title;
//     int importance;

//     // 處理輸入並檢查重要度
//     for (int i = 0; i < n; i++) {
//         cin >> title >> importance;
//         if (importance == 3) {
//             cout << title << endl; // 重要度為 3，輸出標題
//         }
//     }

//     return 0;
// }
