//
// Created by fourt on 2/9/2022.
//
#include <iostream>
#include "Items.h"
using namespace std;
#include <string>

Items::Items(string name, long id , int stock, double price) { //Constructor to make items
    Items::name = name;
    Items::id = id;
    Items::stock = stock;
    Items::price = price;
}
Items::Items() = default; //Make default constructor so I can easily fill the store array


//Standard getters/setters
const string &Items::getName() const {
    return name;
}

void Items::setName(const string &name) {
    Items::name = name;
}

int Items::getStock() const {
    return stock;
}

void Items::setStock(int stock) {
    Items::stock = stock;
}

double Items::getPrice() const {
    return price;
}

void Items::setPrice(double price) {
    Items::price = price;
}

long Items::getId() const {
    return id;
}

void Items::setId(long id) {
    Items::id = id;
}

ostream &operator<<(ostream &os, const Items &items) {
    os << "Item information: \n";
    os << "Name: " << items.getName() << "\n ID: " << items.getId() << "\n Price: $" << items.getPrice() << "\n Quantity: " << items.getStock();
}
