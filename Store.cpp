//
// Created by fourt on 2/9/2022.
//
#include <iostream>
#include "Store.h"
#include "Order.h"
#include <string>
using namespace std;

Store::Store(){ //Default constructor to initialize the array of objects
    for (int j =0; j< 100; j++) {
        list_items[j] = Items();
    }
}


void Store::addItemToStore(Items &object) { //I added a function to add items to the array to make it easier in the main as well as able to count them to make the printing easier
    list_items[counter] = object;
    counter++;
}

ostream &operator<<(ostream &os, const Store &store) {
    os << "Store: \n"; //Print the first line outside of the loop
    for (int i=0; i < store.counter; i++) { //Loop through the counter so we don't try and print the objects that are simply there to fill the array
        auto temp = store.list_items[i]; //Create a temp variable so we can reference the data values within the object for the printing
        os << temp.getName() << ": x " << temp.getStock() << "\n";
    }
}
void Store::processOrder(Order &order) {
    for (int i=0; i < order.count; i++) { //Loop through entire order using count, unique to Order
        Items in_order = order.order_items[i]; //Create a temporary reference to item in order
        for (int j =0; j < counter; j++) { //Counter is for the store items
            Items in_store = list_items[j]; //Create a temporary reference to item in store.
            if (in_order.getId() == in_store.getId()) { //Compare Ids and if they match then lower the stock
                in_store.setStock(in_store.getStock()-1);
                list_items[j] = in_store; //Update the store with the changed Item
                break; //No need to loop through the whole store once it is found
            }
        }
    }
}