class Solution {
public:

    int calculate(string s) {
        stack<int> st;
        int num = 0;
        char sign = '+';
        int n = s.size();


        for(int i=0; i < n; i++){
            if (isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
            }

            if ((!isdigit(s[i] )&& s[i] != ' ') || i == n - 1){
                if (sign == '+'){
                    st.push(num);
                }
                else if (sign == '-'){
                    st.push(-num);
                } else if (sign == '*'){
                    int a = st.top(); st.pop();
                    st.push(a * num);
                } else if (sign == '/'){
                    int a = st.top(); st.pop();
                    st.push(a/num);
                }
                sign = s[i];
                num = 0;
            }
        }

        int ans = 0;
        while (!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
