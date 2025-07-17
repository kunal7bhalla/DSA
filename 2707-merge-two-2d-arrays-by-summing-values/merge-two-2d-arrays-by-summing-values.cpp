class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i][0] == nums2[j][0]) {
                // Same id, add values
                result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            } else if (nums1[i][0] < nums2[j][0]) {
                // Add nums1's id-value pair
                result.push_back(nums1[i]);
                i++;
            } else {
                // Add nums2's id-value pair
                result.push_back(nums2[j]);
                j++;
            }
        }

        // Add any remaining entries from nums1
        while (i < nums1.size()) {
            result.push_back(nums1[i]);
            i++;
        }

        // Add any remaining entries from nums2
        while (j < nums2.size()) {
            result.push_back(nums2[j]);
            j++;
        }

        return result;
    }
};
