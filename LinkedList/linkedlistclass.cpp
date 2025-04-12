#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList() {
        head = tail = nullptr;
        size = 0;
    }

    // Insertion at given position
    void insert(int pos, int val) {
        Node* temp = new Node(val);

        if (pos == 0) {
            if (size == 0) {
                head = tail = temp;
            } else {
                temp->next = head;
                head = temp;
            }
        } else if (pos == size) {
            tail->next = temp;
            tail = temp;
        } else {
            if (size == 0) {
                cout << "Empty List. Mid-way insertion not possible!!\n";
                delete temp;
                return;
            }
            int count = 0;
            Node* thead = head;
            while (count < pos - 1) {
                thead = thead->next;
                count++;
            }
            Node* nextnode = thead->next;
            thead->next = temp;
            temp->next = nextnode;
        }
        size++;
    }

    // Deletion at given position
    void remove(int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid position!!\n";
            return;
        }

        if (pos == 0) {
            Node* thead = head;
            head = head->next;
            if (size == 1) {
                tail = nullptr;
            }
            delete thead;
        } else {
            Node* thead = head;
            for (int i = 0; i < pos - 1; ++i) {
                thead = thead->next;
            }
            Node* toDelete = thead->next;
            thead->next = toDelete->next;
            if (toDelete == tail) {
                tail = thead;
            }
            delete toDelete;
        }
        size--;
    }

    // Display list
    void display() {
        if (size != 0) {
            Node* thead = head;
            while (thead != nullptr) {
                cout << thead->val << "->";
                thead = thead->next;
            }
            cout << "Null\n";
        } else {
            cout << "Empty List\n";
        }
    }
};

int main() {
    LinkedList* ll = new LinkedList();

    ll->insert(0, 10);
    ll->insert(1, 20);
    ll->insert(2, 30);
    ll->insert(3, 40);

    ll->remove(2); // Delete node at position 2 (value 30)
    ll->display(); // Expected Output: 10->20->40->Null

    delete ll; // Clean up the heap
    return 0;
}
