#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include <set>
using namespace std;

void combArr(vector<int> &candidates, int target, vector<vector<int>> ans, int index=0, vector<int> ds={}){
    
    if(index==candidates.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }

    if(candidates[index]<=target){
    ds.push_back(candidates[index]);
    combArr(candidates,target-candidates[index],ans,index+1,ds);
    ds.pop_back();
    }
    combArr(candidates,target,ans,index+1,ds);
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans; 
        combArr(candidates, target, ans);
        set<vector<vector<int>>> notcopy(ans);
        return notcopy;
    }

int main(){
    vector<int> candidates = {10,1,2,7,6,1,5};
    
    combinationSum2(candidates, 8);
    // for(int i:candidates){
    //     cout<<i<<",";
    // }
}