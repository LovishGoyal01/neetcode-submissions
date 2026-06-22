class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++) st.insert(nums[i]);
        int maxi=0;
        for(int i:st){
            if(st.find(i-1)==st.end()){
                int x=i;
                int cnt=0;
                while(st.find(x++)!=st.end()) cnt++;
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};
