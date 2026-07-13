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
        ListNode* temp=head;
        vector<int>n;
        while(temp!=nullptr){
            n.push_back(temp->val);
            temp=temp->next;
        }
        int ans=INT_MIN,N=n.size();

        for(int i=0;i<N/2;i++){
            ans=max(ans,n[i]+n[N-1-i]);
        }
        return ans;
    }
};