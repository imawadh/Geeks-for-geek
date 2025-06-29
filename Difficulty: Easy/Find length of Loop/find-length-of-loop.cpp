/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    
    int countNodesinLoop(Node *head) {
        // Code here
        // Check whether cycle exist or not 
        Node* fast =  head;
        Node* slow =  head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) break;
        }       
        if(fast==NULL || fast->next==NULL){
            return 0;
        }
        
        Node* temp = head;
        while(temp!=slow){
            temp=temp->next;
            slow = slow->next;
        }
        
        temp = temp->next;
        int ct = 1;
        while(temp!=slow){
            temp = temp->next;
            ct++;
        }
        return ct;
        
        
        
    }
};