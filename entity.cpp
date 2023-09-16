//
// Created by Login on 2023/7/27.
//
#ifndef PROJECT_ENTITY_H
#define PROJECT_ENTITY_H

#endif //PROJECT_ENTITY_H

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <unordered_set>
#include <queue>

#define LOG(x) std::cout << x << std::endl;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x) , next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


void print_vector(const std::vector<int>& vector)
{
    for(int a : vector)
    {
        std::cout << a << " ";
    }
    std::cout << "\n";
}

ListNode* creatListNode(const std::vector<int> data)
{
    if(data.empty()) return nullptr;
    ListNode* cur = new ListNode(data[0]);
    ListNode* ret = cur;
    int idx = 1;
    while(idx < data.size())
    {
        cur->next = new ListNode(data[idx]);
        cur = cur->next;
        idx+=1;
    }
    return ret;
}

void printListNode(ListNode* head)
{
    while(head != nullptr)
    {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << "\n";
}

ListNode* getLastListNode(ListNode* head)
{
    while(head->next != nullptr)
    {
        head = head->next;
    }
    return head;
}