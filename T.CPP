#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
#include <set>
#include <unordered_map>
#define ff(o) for (ll i=0;i < o;i++)
using namespace std;
typedef  long long ll;

void solve(){
    // n number of cubes
    // f index +1 
    //k how many cubes
    int n, f , k; cin >> n >> f >> k;
    int hold=0;
    map < int , int, greater<int> > cub;
    ff(n){
        int l; cin >> l;
        if (i == f-1)
            hold = l;
        cub[l]++;
    }
    int index = 0;
    for( auto u : cub){
        if (u.first == hold){
            break;
        }
        if (u.second > 1)
            index += u.second-1;
        else
            index += u.second;
    }
    // cout << index  << endl;
    if (k >= index + cub[hold])
        cout << "YES" << endl;
    else if (k < cub[hold] + index && k > index)
        cout << "MAYBE" << endl;
    else
        cout << "NO" <<endl;
}

int main (){
    ll test; cin >> test;
    while (test--){
        solve();
    }
}