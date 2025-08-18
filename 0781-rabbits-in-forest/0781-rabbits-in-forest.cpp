class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> freq;
        for (int ans : answers) {
            freq[ans]++;
        }

        int result = 0;
        for (auto [k, count] : freq) {
            int groupSize = k + 1;
            int groups = (count + groupSize - 1) / groupSize; // ceil(count / groupSize)
            result += groups * groupSize;
        }

        return result;
    }
};