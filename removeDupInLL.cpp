
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* current = head;
    while(current && current->next){
        if(current->next->val == current->val){
            ListNode* tobeDel = current->next;
            current->next = current->next->next;
            delete tobeDel;
        }else{
            current = current->next;
        }
    }
    return head;
    }
};