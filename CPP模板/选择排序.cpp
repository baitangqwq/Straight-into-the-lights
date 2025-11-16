#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N = 2e5 +10;
#define THREE_MAX(D1,D2,D3) (max(D1,D2)>D3?max(D1,D2):D3)
#define THREE_MIN(D1,D2,D3) (min(D1,D2)>D3?D3:min(D1,D2))
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    int arr[n];
    for(int i = 0; i<n-1;i++){
        int p = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[p]){
                p=j;
            }
        }
        if( p != i )
            swap(arr[i],arr[p])
    }
    return 0;
}