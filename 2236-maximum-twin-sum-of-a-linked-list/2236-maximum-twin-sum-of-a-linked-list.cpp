/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>n;
        while(head){
            n.push_back(head->val);
            head=head->next;
        }
        int ans=INT_MIN;

        for(int i=0;i<n.size();i++){
            ans=max(ans,n[i]+n[n.size()-1-i]);
        }
        return ans;
    }
};