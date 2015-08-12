//
//  LinkedList.cpp
//  DataStructures
//
//  Created by Nanda Gundapaneni on 8/11/15.
//  Copyright (c) 2015 Nanda Gundapaneni. All rights reserved.
//

#include <iostream>
#include "NodeDefinitions.cpp"

using namespace std;

class LinkedList
{
    private:
        Node_LL *headNode;
    
    public:
        LinkedList()
        {
            headNode = NULL;
        }
        void printLL();
        void appendData(int data);
        void removeData(int data);
    
};


void LinkedList::printLL()
{
}

void LinkedList::appendData(int data)
{
    Node_LL* newNode = new Node_LL();
    newNode->setData(data);
    newNode->setNext(NULL);
    
    Node_LL* tempNode = headNode;
    
    if (tempNode != NULL) {
        while (tempNode->getNextNode() != NULL) {
            tempNode = tempNode->getNextNode();
        }
        
        tempNode->setNext(newNode);
        
    }else{
        headNode = newNode;
    }
    
}

void LinkedList::removeData(int data)
{
    
}
