#include <iostream>
#include <vector>
using namespace std;

void combinationArr(vector<int> &candidates, int target, vector<vector<int>> ans, int index=0, vector<int> ds={}){
            
            if(index==candidates.size()-1){
                if(target==0){
                    ans.push_back(ds);
                }
                return;
            }

            if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            combinationArr(candidates, target-candidates[index], ans, index, ds);
            ds.pop_back();
            }
            combinationArr(candidates,target,ans,index+1,ds);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        combinationArr(candidates, target, ans);
        return ans;
    }

int main(){
    vector<int> candidates = {2,3,6,7};
    vector<vector<int>> ans = combinationSum(candidates, 7);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<j<<", ";
        }
        cout<<endl;
    }
}