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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=new ListNode();
        ListNode* temp=ans;

        while(list1 != nullptr && list2 != nullptr){
            ListNode* ne=new ListNode();
            if(list1->val<=list2->val){
                ne->val=list1->val;
                list1=list1->next;
            }
            else{
                ne->val=list2->val;
                list2=list2->next;
            }
            temp->next=ne;
            temp=temp->next;
        }
        while(list1 !=nullptr){
            ListNode* ne=new ListNode();
            ne->val=list1->val;
            list1=list1->next;
            temp->next=ne;
            temp=temp->next;
        }
        while(list2 !=nullptr){
            ListNode* ne=new ListNode();
            ne->val=list2->val;
            list2=list2->next;
            temp->next=ne;
            temp=temp->next;
        }
        return ans->next;
    }
};