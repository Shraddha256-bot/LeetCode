class Solution {
    public:
        int strStr(string haystack, string needle) {

                int hs = haystack.size();
                        int ns = needle.size();

                                for(int i = 0; i <= hs - ns; i++){

                                            int j = 0;

                                                        while(j < ns && haystack[i + j] == needle[j]){
                                                                        j++;
                                                                                    }

                                                                                                if(j == ns){
                                                                                                                return i;
                                                                                                                            }
                                                                                                                                    }

                                                                                                                                            return -1;
                                                                                                                                                }
                                                                                                                                                };
