//
// Created by fourt on 2/9/2022.
//

#ifndef ORDER_H
#define ORDER_H
#include "Store.h"
#pragma once

class Order {
public:
    Order();
    Items order_items[10];
    double getTotalPrice(Items []);
    void addItemToOrder(Items &);
    int count=0;


private:

    double total_price =0.0;
};


#endif //ORDER_H
