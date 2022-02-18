//
// Created by fourt on 2/9/2022.
//
#include <iostream>
#include "Order.h"


//Currently, no functionality for limiting order based on what is in/out of stock


Order::Order() {//Default constructor to initialize the array of objects
    for (int k =0; k< 10; k++) {
        order_items[k] = Items();
    }
}

double Order::getTotalPrice(Items array[]) {
    total_price=0.0;
    for (int i=0; i < count; i++) {
        Items temp = array[i]; //Since we assume add item to order is used, no worries about using count here
        total_price += temp.getPrice();
    }
    return total_price;
}

void Order::addItemToOrder(Items &object) { //I added a function to add items to the array to make it easier in the main as well as able to count them to make the printing easier
    order_items[count] = object;
    count++;
}


