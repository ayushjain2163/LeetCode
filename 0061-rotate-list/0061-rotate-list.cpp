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

//Efficient Approach 

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
        int n=0;
        struct ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        // std::cout << n << std::endl;
        if(head==NULL || head->next==NULL|| k%n==0)
            return head;
        k=k%n;
        temp=head;
        int i=1;
        while(i<n-k){
            temp=temp->next;
            i++;
        }
        // std::cout << i << std::endl;
        // std::cout << temp->val << std::endl;

        struct ListNode* tail=temp;
        struct ListNode* newHead=temp->next;
        temp=newHead;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        tail->next=NULL;
        
        
        return newHead;
    }
};



// Slower Approach
// class Solution {
// public:
//     ListNode* rotate(ListNode* head){
//         struct ListNode* temp=head;
//         while(temp->next->next!=NULL){
//             temp=temp->next;
//         }
//         struct ListNode* last=temp;
//         temp=temp->next;
//         last->next=NULL;
//         temp->next=head;
//         return temp;
//     }
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL || head->next==NULL)
//             return head;
//         while(k){
//             head=rotate(head);
//             k--;
//         }
//         return head;
//     }
// };