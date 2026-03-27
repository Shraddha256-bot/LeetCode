class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1) return s;
        int n = s.length();

        bool gd = false;

        vector<string> rows(numRows);

        int currow = 0;

        for(char c : s){
            rows[currow] += c;

            if(currow == 0 || currow == numRows - 1)
                gd = !gd;

            if (gd == true) {
                    currow = currow + 1;   // neeche jao
                    } else {
                        currow = currow - 1;   // upar jao
                        }
            }
        

        string res;
        for(string row : rows){
            res += row;
        }

        return res;
    }
};