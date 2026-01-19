class MyLinkedList {
public:
    struct Node{
        int data;
        Node* next;
        Node(int x){
            data = x;
            next = NULL;
        }
    };
    Node* head;
    MyLinkedList() {
        head = NULL;
        
    }
    
    int get(int index) {
        Node* temp = head;
        int count = 0;

        while (temp != NULL){
            if (count == index)
                return temp-> data;

            temp = temp->next;
            count++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp -> next = head;
        head = temp;
        
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
        
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
            return ;
        }
        Node* temp = head;
        int count = 0;
        while(temp != NULL && count < index-1){
            temp = temp -> next;
            count++;
        }
        if (temp == NULL) return;

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

    }
    
    void deleteAtIndex(int index) {
        if (head == NULL) return;

        if (index == 0){
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }
        Node* temp = head;
        int count = 0;

        while(temp->next != NULL && count < index-1){
            temp = temp->next;
            count++;
        }
        if (temp->next == NULL) return;

        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */