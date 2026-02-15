class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
       sort(bulbs.begin(), bulbs.end());

        int n = bulbs.size();

        vector<int> container;

        for(int i=0; i < n;i++){
            int num = 0;
            for(int j=0; j < n; j++){
                if (bulbs[i] == bulbs[j]){
                    num = num + 1;
                }
            }

            if(num % 2 != 0 )
            {
                bool exists = false;
                for(int ch :  container){
                    if (ch == bulbs[i]){
                        exists = true;
                        break;
                    }
                }
                if(!exists){
                    container.push_back(bulbs[i]);
                }
            }        }

        return container;
    }
};