class Solution {
public:
    int binaryGap(int n) {
        string s = "";
        while(n > 0){
            if (n % 2 == 1){
                s = s + '1';
            }
            else {
                s= s + '0';
            }
            n=n/2;
        }
        int num = 0;

        for(int i=0;i< s.size(); i++){
            if(s[i] == '1'){
                int j = i + 1;

                while(j < s.size() && s[j] != '1'){
                    j++;
                }
                if(j < s.size()){
                    num = max(num, j-i);
                }
            }
        }

        return num;
    }
};