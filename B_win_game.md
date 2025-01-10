### 問題翻譯：
有一場比賽，其中 \( N \) 支隊伍參加。每支隊伍和其他隊伍進行對戰，結果記錄如下：
- `W` 表示勝利（+2 分）。
- `D` 表示平局（+1 分）。
- `L` 表示失敗（+0 分）。
- `-` 表示隊伍自己與自己無需比賽。

根據比賽結果，計算每支隊伍的總得分、勝場數、平局數和敗場數，並找出得分最高的隊伍。

輸出：
1. 優勝隊伍的編號 \( s \)（編號從 1 開始）。
2. 該隊伍的總得分 \( t \)、勝場數 \( W \)、平局數 \( D \)、敗場數 \( L \)。

---

### 輸入格式：
1. 第一行是整數 \( N \)（隊伍數量）。
2. 接下來的 \( N \) 行為 \( N \times N \) 的字符矩陣 \( c[i][j] \)，表示第 \( i \) 隊與第 \( j \) 隊的比賽結果：
   - `W` 表示 \( i \) 隊勝 \( j \) 隊。
   - `D` 表示 \( i \) 隊與 \( j \) 隊平。
   - `L` 表示 \( i \) 隊負 \( j \) 隊。
   - `-` 表示無比賽。

---

### 輸出格式：
一行輸出 5 個數字：
1. 優勝隊伍的編號 \( s \)。
2. 總得分 \( t \)。
3. 勝場數 \( W \)。
4. 平局數 \( D \)。
5. 敗場數 \( L \)。

---

### 範例：

#### 範例 1：
輸入：
```
3
-DW
D-D
LD-
```

輸出：
```
1 3 1 1 0
```

#### 範例 2：
輸入：
```
10
-WLDWWDWWW
L-WDDWWLWV
WL-LWWWWWD
DDW-WWDWWW
LLLL-LWWWW
LLLLW-WLLL
DLWDLW-WLW
LWLLWWL-WWW
LLLLLLWL-WW
LLDLLWLLL-W
```

輸出：
```
4 15 6 3 0
```

---

### 解釋：
1. **輸入處理：**
   - 使用字符串陣列存儲比賽結果矩陣。
2. **統計數據：**
   - 對每支隊伍的比賽結果進行遍歷，根據 `W`、`D`、`L` 更新得分和統計數據。
3. **找出優勝隊伍：**
   - 優勝隊伍為得分最高的隊伍。
4. **輸出結果：**
   - 輸出優勝隊伍的編號和該隊伍的統計數據。

---

### 時間與空間複雜度：
- **時間複雜度：** \( O(N^2) \)，遍歷比賽結果矩陣。
- **空間複雜度：** \( O(N) \)，存儲每支隊伍的統計數據。

```cpp
#include <iostream>
using namespace std;
#include <vector>
#include <string>


int main(){
    int T;
    while(cin >> T){
        vector<string> g;
        vector<int> w(T, 0), l(T, 0), p(T, 0), d(T, 0); 
        for(int i =0;i < T;++i){
            string s;
            cin >> s;
            g.push_back(s);
        }
        for(int i=0;i < T;++i){
            for(int j=0;j < T;++j){
                if(i == j) continue;
                if(g[i][j] == 'W')w[i]++;
                else if(g[i][j] == 'L')l[i]++;
                else if(g[i][j] == 'P')p[i]++;
                else d[i]++;   
            }
        }
        for(int i=0; i< T;++i) p[i] = w[i] * 2 + d[i];
        int mx = 0, mxi=0;
        for(int i=0;i <T;++i){
            if(p[i] > mx){
                mx = p[i];
                mxi = i;
            }
        }
        cout << mxi + 1 << ' ' << p[mxi] << ' ' << w[mxi] << ' '<< d[mxi] << ' ' << l[mxi] << endl;


    }
```


    return 0;
}
