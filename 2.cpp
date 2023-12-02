// Date:02-12-2023
// ❤️ Happy Coding :) ❤️
#include <iostream>
#include <queue>
// https://leetcode.com/problems/top-k-frequent-elements/
using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        priority_queue<pair<int, int>> freq;
        for (auto i : map)
        {
            freq.push(make_pair(i.second, i.first));
        }
        vector<int> ans(k);
        for (int i = 0; i < k; i++)
        {
            ans[i] = freq.top().second;
            freq.pop();
        }
        return ans;
    }
};
