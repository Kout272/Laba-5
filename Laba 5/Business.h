#pragma once
#include "Predprem.h"
#include "Tourist.h"
#include "Business.h"

class Business : public Predprem, public Tourist
{
private:
    string title;
public:
    Business();
    Business(const Business& other);
    ~Business() override;
    friend istream& operator>>(istream& in, Business& obj);
    friend ostream& operator<<(ostream& out, Business& obj);
    void shapka() override;
    void setTitle(string T);
    string getTitle();
};