#include <iostream>
#include <string>
using namespace std;

string Solve(string a, string b) {
    int mx = 0;

    for (int i = 1; i <= min(a.length(), b.length()); i++) {
        if (a.substr(a.length() - i) == b.substr(0, i)) {
            mx = i;
        }
    }
    return a + b.substr(mx);
}

int main() {
    int T;
    while(cin >> T){
        string result, tp;
        cin >> result;

        for (int i = 1; i < T; i++) {
            cin >> tp;
            result = Solve(result, tp); 
        }
        cout << result << endl;
    }
   

    return 0;
}
