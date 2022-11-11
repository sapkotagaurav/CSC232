#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include<iomanip>
#include "Node.h"


using namespace std;


template <typename T>
class Linkedlist {
	Node<T>* head;

public:


	Linkedlist() { head = NULL; }
    ~Linkedlist(){delete this;}

	void append(T);
    int search(T);
    void removebyPOs(int);
    void insertAfterValue(T,T);
    void insert_at(int,T);
    T average();
    T maximum();
    T minimum();
    


	void print();
    void deleteNode(T);
    T total();


	void deleteLastNode();
};

// template <typename T>
// void Linkedlist<T>::removebyPOs(int pos)
// {
// 	Node<T> *temp1 = head, *temp2 = NULL;
// 	int ListLen = 0;

// 	if (head == NULL) {
// 		cout << "List empty." << endl;
// 		return;
// 	}

// 	while (temp1->next != NULL) {
// 		temp1 = temp1->next;
// 		ListLen++;
// 	}

	
// 	if (ListLen < pos) {
// 		cout << "Index out of range"
// 			<< endl;
// 		return;
// 	}

// 	temp1 = head;

// 	if (pos == 0) {

// 		head = head->next;
// 		delete temp1;
// 		return;
// 	}

	
// 	while (pos-- > 0) {

// 		temp2 = temp1;

// 		temp1 = temp1->next;
// 	}

	
// 	temp2->next = temp1->next;

// 	delete temp1;
// }



// template <typename T>
// void Linkedlist<T>::append(T data)
// {
// 	Node<T>* newNode = new Node<T>(data);

// 	if (head == NULL) {
// 		head = newNode;
// 		return;
// 	}

// 	Node<T>* temp = head;
// 	while (temp->next != NULL) {

// 		temp = temp->next;
// 	}

// 	temp->next = newNode;
// }

// template <typename T>
// void Linkedlist<T>::print()
// {
// 	Node<T>* temp = head;

// 	if (head == NULL) {
// 		cout << "List empty" << endl;
// 		return;
// 	}

// 	while (temp != NULL) {
// 		cout << temp->data << " ";
// 		temp = temp->next;
// 	}
// }
// template <typename T>
// int Linkedlist<T>::search(T x){
//     Node<T>* temp = head;
//     if(head == NULL){
//         return -1;
//     }
//     int pos = 0;
//     while (temp !=NULL)
//     {
//         if (temp->data == x)
//         {
//             return pos;
//         }else{
//             pos++;
//         }
//         temp = temp->next;
        
        
//     }
//     return -1;
    
// }
// template <typename T>
// void Linkedlist<T>::deleteNode(T value){
//     int pos = this->search(value);
//     if (value !=-1)
//     {
//         this->removebyPOs(pos);
//     }
    
// }

// template <typename T>
// void Linkedlist<T>::insertAfterValue(T value,T data_to_insert){
//     int pos = search(value);
//     int temp_pos = 0;
//     Node<T>* temp=head;
//     while (temp_pos<pos)
//     {
//         temp = temp->next;
//         temp_pos++;
//     }
//     Node<T>* newnode = new Node<T>(data_to_insert);
//     newnode->next = temp->next;
//     temp->next = newnode;

    
// }

// template <typename T>
// void Linkedlist<T>::insert_at(int pos, T value){
//     int temp_pos = 0;
//     Node<T>* temp=head;
//     if (pos ==0)
//     {
//             Node<T>* newnode = new Node<T>(value);
//             newnode->next = head;
//             head = newnode;
//             return;

        
//     }
//     pos--;
    
//     while (temp_pos<pos)
//     {
//         temp = temp->next;
//         temp_pos++;
//     }
//     Node<T>* newnode = new Node<T>(value);
//     newnode->next = temp->next;
//     temp->next = newnode;
// }


// template <typename T>
// void Linkedlist<T>::deleteLastNode(){
//     Node<T>* temp = head;
//     Node<T>* secondLast = head;
// 	while(temp->next != NULL)
//         {
//             secondLast = temp;
//             temp = temp->next;
//         }
//     if (temp == head)
//     {
//         head = NULL;
//     }
//     else
//     {
//         secondLast->next = NULL;
//     }

    
    
//     delete temp;
// }

// template <typename T>
// T Linkedlist<T>::total(){
//     T sum = 0;
//     Node<T>* temp = head;
//     while (temp)
//     {
//         sum = sum + temp->data;
//         temp = temp->next;
//     }
//     return sum;
    

// }
// template <typename T>
// T Linkedlist<T>::average(){
//     T len = 0;
//     Node<T>* temp = head;
//     while (temp)
//     {
//         len = len + 1;
//         temp = temp->next;
//     }
//     return this->total()/len;
    

// }
// template <typename T>
// T Linkedlist<T>::maximum(){
//     T max = head->data;
//     Node<T>* temp = head;
//     while (temp)
//     {
//         max = max<temp->data?temp->data:max;
//         temp = temp->next;
//     }
//     return max;
    

// }
// template <typename T>
// T Linkedlist<T>::minimum(){
//     T min = head->data;
//     Node<T>* temp = head;
//     while (temp)
//     {
//         min = min<temp->data?min:temp->data;
//         temp = temp->next;
//     }
//     return min;
    

// }
 #endif