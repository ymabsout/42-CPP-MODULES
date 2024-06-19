#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
#include <set>
#include <unordered_map>
#include <queue>
#define ff(o) for (ll i=0;i < o;i++)
using namespace std;
typedef  long long ll;

// int dr[]{-1,1,0,0,-1,1};
// int dc[]{0,0,1,-1,1,-1};

// struct node{
//     int r , c, dista;
// };

// int valid(int r, int c, vector < vector <int > > &grid, int size){
//     if (r <= 0 || r >= size || c <= 0 || c >= size || grid[r][c] != '0')
//         return (0);
//     return (1);
// }

// class Solution {
// public:
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         int n = grid[0].size();
//         node f;
//         queue<node> abs;
//         abs.push({0,0});
//         int r = -1;
//         int c = -1;
//         int min_dis = n*n;
//         while (!abs.empty()){
//             f = abs.front();
//             abs.pop();
//             if (f.r == n-1 && f.c == n -1)
//                 return (min_dis + 1);
//             for (int i = 0 ; i < 6; i++){
//                 r = f.r + dr[i];
//                 c = f.c + dc[i];
//                 if (valid(r, c, grid, n)){
//                     int curr_dist = f.dista + 1;
//                     if (curr_dist <= min_dis){
//                         min_dis = curr_dist;
//                         abs.push({r,c,curr_dist});
//                     }
//                 }
//             }
//         }
//         return ({-1,-1});
//     }
// };
