//
// Created by Franco on 29/04/2024.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node{
    int data;
    Node* next;
};

class list{
private:
    Node* head;
public:
    list(): head(nullptr){}
    void push_front(int valor){
        Node* NewNode = new Node(valor);
        NewNode ->next = head;
        head = NewNode;
    }

    void bubblesort(list& lista_ordenada) {
        if(lista_ordenada.head == nullptr || lista_ordenada.head->next == nullptr){
            return;
        }
        bool swapped = true;

        Node* current;

        while ()
    }
    void printeo() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

};
/*
void bubblesort(vector<int>& vec_orde){
    int n = vec_orde.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<=n-1; j++){
            if(vec_orde[j]>vec_orde[j+1]){
                swap(vec_orde[j], vec_orde[j+1]);
            }
        }
    }
}

int main(){
    vector<int> vec = {64,25,12,22,11};
    for(int num:vec){
        cout<<num<<" ";
    }
    cout<<endl;

    bubblesort(vec);
    for(int num:vec){
        cout<<num<<" ";
    }
    cout<<endl;

}*/
