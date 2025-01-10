#include <iostream>
using namespace std;

int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}}; //u, d, r, l
int y = 0, x = 0;
int x_b, y_b, t; //y, x array
bool flag = false;

void check(){
    if(x < 0 || x >= x_b || y < 0 || y >= y_b)flag = true;
}


// need check every step out of bound
int main(){
    
    while(cin >> y_b >> x_b >> t){
        y = 0, x = 0;
        flag = false;
        char s;
        for(int i=0;i < t;++i){
            cin >> s;
            if(s == 'U'){
                x += dir[0][0];
                y += dir[0][1];
                check();
                if(flag)break;
            }
            else if (s == 'D'){
                x += dir[1][0];
                y += dir[1][1];
                check();
                if(flag)break;
            }
            else if (s == 'R'){
                x += dir[2][0];
                y += dir[2][1];
                check();
                if(flag)break;
            }
            else if (s == 'L'){
                x += dir[3][0];
                y += dir[3][1];
                check();
                if(flag)break;
            }
        }
        if(flag)cout << "invalid" << endl;
        else cout << "valid" << endl;
    }



    return 0;
}
