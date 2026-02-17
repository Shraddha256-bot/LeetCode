class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char, int> mp;
        mp = {{'a' , weights[0]},
              {'b' , weights[1]}, 
              {'c' , weights[2]},
              {'d' , weights[3]},
              {'e' , weights[4]}, 
              {'f' , weights[5]}, 
              {'g' , weights[6]},
              {'h' , weights[7]},
              {'i' , weights[8]},
              {'j' , weights[9]},
              {'k' , weights[10]},
              {'l' , weights[11]},
              {'m' , weights[12]},
              {'n' , weights[13]},
              {'o' , weights[14]},
              {'p' , weights[15]},
              {'q' , weights[16]},
              {'r' , weights[17]},
              {'s' , weights[18]},
              {'t' , weights[19]} ,
              {'u' , weights[20]},
              {'v' , weights[21]} ,
              {'w' , weights[22]},
              {'x' , weights[23]},
              {'y' , weights[24]}, 
              {'z' , weights[25]}
};
string result = "";

int n = words.size();

for(int i=0 ;i < n; i++){
    int sum = 0;
    for(int j=0;j < words[i].size(); j++){
        char ch = words[i][j];
        sum = sum + mp[ch];
    }
    int rem = sum % 26;

    char mchar = 'z' - rem;

    result = result + mchar;
    
}

        return result;



        
    }
    
};