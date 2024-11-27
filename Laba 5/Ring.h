#pragma once
#include <iostream>
#define RED cout<<"\033[3;31m";
#define CHIAN cout<<"\033[3;36m";
#define MAG cout<<"\033[3;36m";
#define GREEN cout<<"\033[3;32m";
#define BLUE cout<<"\033[3;34m";
#define YELLOW cout<<"\033[3;33m";
#define RESET cout<<"\033[0;37m";
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T>* prev;
    Node<T>* next;
};

template <typename T>
class Ring
{
    Node<T>* begin;
    Node<T>* current;
public:
    Ring();
    Ring(const Ring& other);
    void Push(T data);
    void Display();
    void RemoveCurrent();
    bool Empty();
    void FindMin();
    void FindMax();
    void ShowCurrent();
    bool Search();
    void RemoveAll();
    ~Ring();
};

#include "Ring.cpp"