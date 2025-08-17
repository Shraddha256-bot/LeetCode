class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int a = INT_MIN;
        int index = 0;
        for(int i = 0; i< arr.size() ; i++){
            if (arr[i] > a){
                a = arr[i];
                index = i;
            }
            else{
                continue;
            }
        }
        return index;
    }
};