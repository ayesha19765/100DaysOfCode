#include <iostream>
#include <queue>
// https://leetcode.com/problems/find-median-from-data-stream/
// Date:01-12-2023
// ❤️ Happy Coding :) ❤️

using namespace std;
class MedianFinder
{
public:
    priority_queue<int> maxHeap;                            // stores low half
    priority_queue<int, vector<int>, greater<int>> minHeap; // stores high half

    MedianFinder()
    {
    }
    // Time - O(logn)
    void addNum(int num)
    {
        maxHeap.push(num);
        minHeap.push(maxHeap.top());
        maxHeap.pop();
        if (minHeap.size() > maxHeap.size())
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    // Time - O(logn)
    double findMedian()
    {
        if (maxHeap.size() > minHeap.size())
        {
            return maxHeap.top();
        }
        return (maxHeap.top() + minHeap.top()) / 2.0;
    }
    // 1, 6, 2, 3, 9, 11
    // 1
    // maxHeap - 1
    // minHeap -
    // 1 6
    // maxHeap - 1
    // minHeap - 6
    // 1 6 2
    // maxHeap - 1 2
    // minHeap - 6
    // 1 6 2 3
    // maxHeap - 1 2
    // minHeap - 6 3
    // 1 6 2 3 5
    // maxHeap - 1 2
    // minHeap - 6 3 5
};

int main()
{

    return 0;
}
