#include<vector>
#include <iostream>
using namespace std;
// long elementsSum(const vector<vector<int>>& arr, int d = 0){
//     int sum = 0;
//     for (int i=0, j=arr.size()-1; i<arr.size(); i++, j--){
//         if(arr[i].size()<=j){
//             sum+=d;
//             continue ;
//         }
//         sum+=arr[i][j];
//     }
//     return sum; 
// }
// // Another solution in short
long elementsSum(const vector<vector<int>>& arr, int d = 0){
    int sum = 0;
    for (int i=0, j=arr.size()-1; i<arr.size(); i++, j--)
        if(arr[i].size()<=j)  sum+=d;
        else sum+=arr[i][j];
    return sum; 
}
int main(){
    cout << (int)'0';
}