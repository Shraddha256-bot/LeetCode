class Solution {
public:
    string processStr(string s) {
        int n =s.size();

        string container;

        for(int i=0; i < n; i++){
            if(s[i] == '*'){
                if(!container.empty()){
                    container.pop_back();
                }
            }

            else if(s[i] == '#'){
                string t = container;
                container += t;
            }

            else if (s[i] == '%'){
                reverse(container.begin(), container.end());
            }
            else{
                container.push_back(s[i]);
            }
        }

        return container;
    }
};