// Date:05-12-2023
// ❤️ Happy Coding :) ❤️
// ❤️ Ayesha ❤️
// https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;
};
class Solution
{
public:
    Node *findTail(Node *head)
    {
        // no child
        // no change
        if (head->child == NULL)
        {
            if (head->next)
                return findTail(head->next);
            return head;
        }
        else
        {
            Node *ans = findTail(head->child);
            Node *child = head->child;
            Node *next = head->next;
            if (next)
                next->prev = ans;
            head->next = child;
            child->prev = head;
            ans->next = next;
            head->child = NULL;
            if (next)
                return findTail(next);
            return ans;
        }
    }
    Node *flatten(Node *head)
    {
        if (head)
            findTail(head);
        return head;
    }
};
int main()
{

    return 0;
}
