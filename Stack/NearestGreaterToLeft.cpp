#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <algorithm>

vector<int> NGR(vector<int> &ques){
    int n = ques.size();
    vector<int> ans;
    stack<int> st;

    for(int i=n-1; i>=0; i--){
        if(st.size()==0){
            ans.push_back(-1);
        }
        else if(st.top()>ques[i] && st.size()>0){
            ans.push_back(st.top());
        }
        else if(st.top()<ques[i] && st.size()>0){
            while(st.size()>0 && st.top()<ques[i]){
                st.pop();
            }

            if(st.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
        }
        st.push(ques[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> NGL(vector<int> ques){
    vector<int> ans;
    stack<int> st;
    int n = ques.size();
    for(int i=0; i<n; i++){
        if(st.size() == 0){
            ans.push_back(-1);
        }
        else if(st.size()>0 && st.top()>ques[i]){
            ans.push_back(st.top());
        }
        else if(st.size()>0 && st.top()<ques[i]){
            while(st.size()>0 && st.top()<ques[i]){
                st.pop();
            }
            if(st.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
        }
        st.push(ques[i]);
    }

    return ans;
}

vector<int> NSL(vector<int> &ques){
    vector<int> ans;
    stack<int> st;
    int n = ques.size();

    for (int i = 0; i < n; i++)
    {
        if(st.size()==0){
            ans.push_back(-1);
        }
        else if(st.size()>0 && st.top()<ques[i]){
            ans.push_back(st.top());
        }
        else if(st.size() && st.top()>ques[i]){
            while (st.size()>0 && st.top()>ques[i])
            {
                st.pop();
            }
            if(st.size()==0){
                ans.push_back(-1);
            }
            else {
                ans.push_back(st.top());
            }
            
        }
        st.push(ques[i]);
    }

    return ans;
    
}

vector<int> NSR(vector<int> &ques){
    vector<int> ans;
    stack<int> st;
    int n = ques.size();

    for(int i=n-1; i>=0; i--){
        if(st.size()==0){
            ans.push_back(-1);
        }
        else if(st.size()>0 && st.top()<ques[i]){
            ans.push_back(st.top());
        }
        else if(st.size()>0 && st.top()>ques[i]){
            while(st.size()>0 && st.top()>ques[i]){
                st.pop();
            }
            if(st.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
        }
        st.push(ques[i]);
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){
    vector<int> ques = {1,3,2,4};
    
    vector<int> ans = NSR(ques);

    for(auto i = 0; i<ans.size(); i++){
        cout<<ans[i]<<", ";
    }
}