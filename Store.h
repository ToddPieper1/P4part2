//
// Created by fourt on 2/9/2022.
//

#ifndef STORE_H
#define STORE_H
#pragma once

#include <string>
#include <ostream>
#include "Items.h"

class Order; //Forward declaration to allow use of pointer to Order
class Store {
public:
    Store();

    Items list_items[100];
    void addItemToStore(Items &);
    void processOrder(Order &);

    friend ostream &operator<<(ostream &os, const Store &store);

private:
    int counter=0;


};


#endif //STORE_H
