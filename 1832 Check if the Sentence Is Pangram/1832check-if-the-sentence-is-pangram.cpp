class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char> c = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                                  'n','o','p','q','r','s','t','u','v','w','x','y','z'};

        int n = c.size();

        for(int i=0; i < n;i++){
            bool found= false;

            for(int j =0; j <sentence.size(); j++){
                if(sentence[j] == c[i]){
                    found = true;
                    break;
                }
            }
            if(!found){
                return false;
            }
        }
        return true;
    }
};