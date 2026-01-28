class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> str;

        for(char container : s){
            if (!str.empty() && str.top() == container){
            str.pop();
        }
        else {
            str.push(container);
    }
        }

    string ans = "";

    while(!str.empty()) {
        ans += str.top();
        str.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
    }
};