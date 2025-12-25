class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> st;
        for (int i = 1 ; i <= nums.size() ; i++) {
            st.insert(i);
        }
        map<int , int> mp;
        int r = -1;
        for (auto &i : nums) {
            mp[i]++;
            if (mp[i] > 1) {
                r = i;
            }
            if (st.count(i)) {
                st.erase(i);
            }
        }
        vector<int> ans(2);
        ans[0] = r;
        ans[1] = *st.begin();

        return ans;
    }
};
