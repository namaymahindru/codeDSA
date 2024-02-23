
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode*temp = headA;
        map<ListNode*,int> mpp;

        while(temp!=NULL){
            mpp[temp]=1;
            temp=temp->next;

        }

        temp=headB;

        while(temp!=NULL)
        {
            if(mpp.find(temp)!=mpp.end()){
                return temp;

            }

            temp=temp->next;
        }

        return 0;
    }
};