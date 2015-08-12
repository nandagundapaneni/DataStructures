//
//  NodeDefinitions.cpp
//  DataStructures
//
//  Created by Nanda Gundapaneni on 8/11/15.
//  Copyright (c) 2015 Nanda Gundapaneni. All rights reserved.
//

#include <stdio.h>


class Node_LL
{
    private:
        int data;
        Node_LL* next_node;
    
    public:
        Node_LL(){};
        void setData(int data);
        void setNext(Node_LL* next);
        int getData();
        Node_LL* getNextNode();
    
};

void Node_LL:: setData(int data)
{
    data = data;
}
void Node_LL::setNext(Node_LL* next)
{
    next_node = next;
}

int Node_LL::getData()
{
    return data;
}

Node_LL* Node_LL::getNextNode()
{
    return next_node;
}
