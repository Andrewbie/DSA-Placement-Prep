#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int> &ques){
    vector<int> ans;
    stack<int> st;

    for (int i = 0; i < ques.size(); i++){
        if(st.size()==0){
            ans.push_back(-1);
        }
        else if(st.size()>0 && ques[st.top()]>ques[i]){
            ans.push_back(i-st.top());
        }
        else if(st.size()>0 && ques[st.top()]<ques[i]){
            while(st.size()>0 && ques[st.top()]<ques[i]){
                st.pop();
            }
            if(st.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(i-st.top());
            }
        }
        st.push(i);
    }
    
    return ans;
}

int main(){
    vector<int> ques = {100,80,60,70,60,75,85};
    vector<int> ans = stockSpan(ques);

    for(int i=0; i<7; i++){
        cout<<ans[i]<<", ";
    }
}