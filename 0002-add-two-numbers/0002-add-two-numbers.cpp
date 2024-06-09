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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // stack<ListNode*> s1,s2,s3;
        // while(l1!=NULL){
        //     s1.push(l1);
        //     l1=l1->next;
        // }   
        // while(l2!=NULL){
        //     s2.push(l2);
        //     l2=l2->next;
        // }
        // int carry=0;
        // while(!s1.empty()&&!s2.empty()){
        //     int sum=s1.top()->val+s2.top()->val+carry;
        //     ListNode* temp=new ListNode(sum%10);
        //     // temp->val=sum%10;
        //     s3.push(temp);
        //     if(sum>9)
        //         carry=1;
        //     else
        //         carry=0;
        //     s1.pop();
        //     s2.pop();
        // }
        // while(!s1.empty()){
        //     int sum=s1.top()->val+carry;
        //     ListNode* temp;
        //     temp->val=sum%10;
        //     s3.push(temp);
        //     if(sum>9)
        //         carry=1;
        //     else
        //         carry=0;
        //     s1.pop();
        // }
        // while(!s2.empty()){
        //     int sum=s2.top()->val+carry;
        //     ListNode* temp;
        //     temp->val=sum%10;
        //     s3.push(temp);
        //     if(sum>9)
        //         carry=1;
        //     else
        //         carry=0;
        //     s2.pop();
        // }
        // if(carry==1){
        //     ListNode* temp;
        //     temp->val=1;
        //     s3.push(temp);
        // }
        // ListNode* temp;
        // if(!s3.empty())
        //     ListNode* prev=s3.top();
        // while(!s3.empty()){
        //     ListNode* temp=s3.top();
        //     s3.pop();
        //     if(s3.size()==0)
        //         temp->next=NULL;
        //     else
        //         temp->next=s3.top();
        // }
        // return temp;
        int carry=0,num1=0,num2=0;
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        while(l1!=NULL || l2!=NULL || carry!=0){
            if(l1!=NULL)
                num1=l1->val;
            else
                num1=0;
            if(l2!=NULL)
                num2=l2->val;
            else
                num2=0;
            int sum=num1+num2+carry;
            carry=sum/10;
            int digit =sum%10;
            ListNode* newNode=new ListNode(digit);
            temp->next=newNode;
            temp=temp->next;
            
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        return dummy->next;

    }
};