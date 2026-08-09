class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = 0;

        for(int i=0; i < piles.size(); i++){
            maxi = max(maxi , piles[i]);
        }

        int low = 1;
        int high = maxi;

        while(low <= high){
            int mid = low + (high - low) / 2;

            long long sum = 0;

            for(int i=0; i < piles.size(); i++){
                sum += (piles[i] + mid - 1) / mid;
            }

            if(sum <= h){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
        
    }
};