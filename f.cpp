// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
#include <set>
#include <unordered_map>
using namespace std;
typedef  long long ll;
#define ff(o) for (ll i=0;i < o;i++)

class Solution {
public:
    double myPow(double x, int n) {
        int k = n;
        int count =0;
        for (;k % 2 == 0;){
            k /= 2;
            count++;
        }
        for (; k > 1; k--)
            x *=x;
        x *= count;
    return(x);
    }
};