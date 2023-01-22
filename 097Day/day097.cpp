// 0x97Day of 0x365Days challenge
// VEDANT BHARAD
// 22-1-2023
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *h1=list1,*h2=list2,*ret=list1,*temp;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        if(h1->val > h2->val)
        {
            ret=list2; swap(h1,h2);
        }
        while(h2)
        {
            if( (h1->next ==NULL)  || (h1->next->val > h2->val) )
            {
                temp=h2->next;
                h2->next=h1->next;
                h1->next=h2;
                h2=temp;
            }
            h1=h1->next;
        }
        return ret;
    }
};