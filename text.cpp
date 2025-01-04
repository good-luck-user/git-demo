//
// Created by wwwwu on 2024-11-08.
//

#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> ans;
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};

    int n=matrix.size();//行
    int m=matrix[0].size();//列
    int top=0,left=0,bot=n-1,right=m-1;
    while(top<=bot&&left<=right) {
        for (int j = left; j <= right; j++) {
            ans.push_back(matrix[top][j]);
        }
        top++;
        for (int i = top; i <= bot; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bot) {
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bot][j]);
            }
            bot--;
        }
        if (left <= right) {
            for (int i = bot; i >= top; i++) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return 0;
    }
    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<endl;
    }
}