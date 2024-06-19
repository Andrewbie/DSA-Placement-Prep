#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &arr){
    for(int i:arr){
        cout<<i<<", ";
    }
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
        else if(st.size()>0 && ques[st.top()]<ques[i]){
            ans.push_back(st.top());
        }
        else if(st.size() && ques[st.top()]>ques[i]){
            while (st.size()>0 && ques[st.top()]>ques[i])
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
        st.push(i);
    }

    return ans;
    
}

vector<int> NSR(vector<int> &ques){
    vector<int> ans;
    stack<int> st;
    int n = ques.size();

    for(int i=n-1; i>=0; i--){
        if(st.size()==0){
            ans.push_back(7);
        }
        else if(st.size()>0 && ques[st.top()]<ques[i]){
            ans.push_back(st.top());
        }
        else if(st.size()>0 && ques[st.top()]>ques[i]){
            while(st.size()>0 && ques[st.top()]>ques[i]){
                st.pop();
            }
            if(st.size()==0){
                ans.push_back(7);
            }
            else{
                ans.push_back(st.top());
            }
        }
        st.push(i);
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

int MAH(vector<int> &ques){
    vector<int> left = NSL(ques);
    vector<int> right = NSR(ques);
    vector<int> width;

    for(int i=0; i<left.size(); i++){
        width.push_back(right[i]-left[i]-1);
    }

    int max_area = 0;

    for (int j = 0; j < ques.size(); j++)
    {
        if((width[j]*ques[j])>max_area){
            max_area = width[j]*ques[j];
        }
    }
    
    return max_area;
}

int main(){
    vector<int> ques = {6,2,5,4,5,1,6};
    int ans = MAH(ques);

    // printVector(ans;)
    cout<<ans<<endl;
}