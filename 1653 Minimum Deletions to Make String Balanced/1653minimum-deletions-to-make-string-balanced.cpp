class Solution {
public:
    int minimumDeletions(string s) {
        int count = 0;
        int del = 0;

        for(char x : s){
            if (x == 'b'){
                count = count +1;
            }
            else {
                del = min (del + 1, count);
            }
        }

        return del;
    }
};