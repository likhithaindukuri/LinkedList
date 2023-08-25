class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur=head;
        Node* next;
        while(cur!=NULL){
            next=cur->next;
            Node* copy=new Node(cur->val);
            cur->next=copy;
            copy->next=next;
            cur=next;
        }
        cur=head;
        while(cur!=NULL){
            if(cur->random!=NULL){
                cur->next->random=cur->random->next;
            }
            cur=cur->next->next;
        }
        cur=head;
        Node* dummy=new Node(0);
        Node* copy;
        Node* copyTail=dummy;
        while(cur!=NULL){
            next=cur->next->next;

            copy=cur->next;
            copyTail->next=copy;
            copyTail=copy;

            cur->next=next;
            cur=next;
        }
        return dummy->next;
    }
};