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

Fixed::Fixed() : _fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num) : _fixedPoint(num << _fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : _fixedPoint(roundf(nb * (1 << _fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &objs) : _fixedPoint(objs._fixedPoint) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ob) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &ob)
        _fixedPoint = ob._fixedPoint;
    return (*this);
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_fixedPoint) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _fixedPoint >> _fractionalBits;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPoint;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _fixedPoint = raw;
}

bool Fixed::operator>(const Fixed &ob) const {
    return _fixedPoint > ob._fixedPoint;
}

bool Fixed::operator>=(const Fixed &ob) const {
    return _fixedPoint >= ob._fixedPoint;
}

bool Fixed::operator<(const Fixed &ob) const {
    return _fixedPoint < ob._fixedPoint;
}

bool Fixed::operator<=(const Fixed &ob) const {
    return _fixedPoint <= ob._fixedPoint;
}

bool Fixed::operator==(const Fixed &ob) const {
    return _fixedPoint == ob._fixedPoint;
}

bool Fixed::operator!=(const Fixed &ob) const {
    return _fixedPoint != ob._fixedPoint;
}

Fixed Fixed::operator+(const Fixed &ob) const {
    return Fixed(this->toFloat() + ob.toFloat());
}

Fixed Fixed::operator-(const Fixed &ob) const {
    return Fixed(this->toFloat() - ob.toFloat());
}

Fixed Fixed::operator*(const Fixed &ob) const {
    return Fixed(this->toFloat() * ob.toFloat());
}

Fixed Fixed::operator/(const Fixed &ob) const {
    return Fixed(this->toFloat() / ob.toFloat());
}

Fixed &Fixed::operator++() {
    _fixedPoint++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    _fixedPoint++;
    return temp;
}

Fixed &Fixed::operator--() {
    _fixedPoint--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    _fixedPoint--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &objs) {
    out << objs.toFloat();
    return out;
}