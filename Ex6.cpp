//
// Created by Aarón Timaná on 29/04/2024.
//
//
// Created by Franco on 29/04/2024.
//

#include <iostream>
#include <vector>

using namespace std;

struct Node{
    int data;
    Node* next;
    //Node (int, Node*) : data(0), next(nullptr){};
};

class list{
private:
    Node* head;
public:
    list(): head(nullptr){};

    void push_front(int valor){
        //Node* NewNode = new Node(valor, nullptr);
        Node* NewNode = new Node;
        NewNode->data=valor;
        NewNode->next = head;
        head = NewNode;
    }

    void bubblesort() {
        if(head == nullptr || head->next == nullptr){
            return;
        } else {
            Node* ptr1, *ptr2;
            int temp;
            for(ptr1 = head; ptr1->next!= nullptr;ptr1=ptr1->next){
                for(ptr2 = ptr1->next; ptr2!= nullptr;ptr2=ptr2->next){
                    if(ptr1->data > ptr2->data){
                        temp = ptr1->data;
                        ptr1->data = ptr2->data;
                        ptr2->data=temp;
                    }
                }
            }
        }
    }
    void printeo() {
        cout<<"\nLista ordenada xd:"<<endl;
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
    }

    ~list(){
        Node* temp;
        while (head!= nullptr){
            temp=head;
            head=head->next;
            delete temp;
        }
    }

};

int main() {
    list list1;
    list1.push_front(6);
    list1.push_front(7);
    list1.push_front(5);
    list1.push_front(1);
    list1.push_front(20);
    list1.push_front(0);

    list1.printeo();
    //
    list1.bubblesort();
    list1.printeo();

    return 0;
}
