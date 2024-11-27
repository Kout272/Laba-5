#pragma once
#include <iostream>
#include <iomanip>
#include "Errors.h"
using namespace std;

class Human
{
protected:
    int age;
    string name;
    string surname;
public:
    Human();
    Human(const Human& other);
    Human(int age, string name, string surname);
    virtual ~Human();
    string getName();
    string getSurname();
    virtual void shapka();
    int getAge();
    void setAge(int A);
    void setName(string N);
    void setSurname(string S);
    friend istream& operator>>(istream& in, Human& obj);
    friend ostream& operator<<(ostream& out, const Human& obj);
};