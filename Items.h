//
// Created by fourt on 2/9/2022.
//
#pragma once
#ifndef ITEMS_H
#define ITEMS_H
using namespace std;
#include <string>
#include <ostream>

class Items {

public:

    Items();

    Items(string, long, int, double);

    friend ostream &operator<<(ostream &os, const Items &items);

    const string &getName() const;

    void setName(const string &name);

    int getStock() const;

    void setStock(int stock);

    double getPrice() const;

    void setPrice(double price);

    long getId() const;

    void setId(long id);

private:
    string name;
    int stock;
    double price;
    long id;
};


#endif //ITEMS_H
