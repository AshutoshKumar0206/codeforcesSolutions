// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int arr[300300];
// int isSort(int l, int h){
//     if(h-l == 1)return 0;
//     int mid = l + (h-l)/2;
//     int maxLeft = *max_element(arr + l, arr + mid);
//     int maxRight = *max_element(arr + mid, arr + h);
//    int ans = 0;
//     if(maxLeft > maxRight){
//         ans++;
//         for(int i = 0; i < (mid-l); i++){
//             swap(arr[l+i], arr[mid+i]);
//         }
//     } 
//     return isSort(l, mid) + isSort(mid, h) + ans;
// }
// void solve(){
// int n;
// cin>>n;
// for(int i = 0; i<n; i++){
//     cin>>arr[i];
// }
// int ans = isSort(0, n);
// if(is_sorted(arr, arr+n)){
//     cout<<ans<<endl;
// }
// else{
// cout<<-1<<endl;
// }
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--){
//     solve();
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int isSort(int l, int h, vector<int>&v){
    if(h-l == 1)return 0;
    int mid = l + (h-l)/2;
    int maxLeft = *max_element(v.begin() + l, v.begin() + mid);
    int maxRight = *max_element(v.begin() + mid, v.begin() + h);
   int ans = 0;
    if(maxLeft > maxRight){
        ans++;
        for(int i = 0; i < (mid-l); i++){
            swap(v[l+i], v[mid+i]);
        }
    } 
    return isSort(l, mid, v) + isSort(mid, h, v) + ans;
}
void solve(){
int n;
cin>>n;
vector<int>v(n);
for(int i = 0; i<n; i++){
    cin>>v[i];
}
int ans = isSort(0, n, v);
if(is_sorted(v.begin(), v.end())){
    cout<<ans<<endl;
}
else{
cout<<-1<<endl;
}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    
    return 0;
}