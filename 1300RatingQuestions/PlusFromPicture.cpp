#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int h,w;
cin >> h >> w;
vector<vector<char>>v(h, vector<char>(w));
for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
        cin>>v[i][j];
    }
}
vector<vector<bool>>vis(h, vector<bool>(w, false));
bool flag = false;
for(int i = 1; i<h-1; i++){
    for(int j = 1; j<w-1; j++){
        if(v[i][j] == '*' && v[i-1][j] == '*' && v[i][j-1] == '*' && v[i+1][j] == '*' && v[i][j+1] == '*'){
            int up = i, down = i, right = j, left = j;
            while(up >= 0 && v[up][j] == '*')vis[up--][j] = true;
            while(down < h && v[down][j] == '*')vis[down++][j] = true;
            while(left >= 0 && v[i][left] == '*')vis[i][left--] = true;
            while(right < w && v[i][right] == '*')vis[i][right++] = true;

            for(int row = 0; row < h; row++){
                for(int col = 0; col < w; col++){
                    if(vis[row][col] != (v[row][col] == '*')){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
            cout<<"YES"<<endl;
            return; 
        }
    }
}
    cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--){
    solve();
    // }
    
    return 0;
}