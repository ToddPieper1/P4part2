#include <iostream>
#include "AA.h"
#include "B.h"
#include "Store.h"
#include "Order.h"
#include <iomanip>


using namespace std;




int main() {

    //Take input
//Create the object for SectionA

//    string input_url;
//   cin >> input_url;
//    AA SectionA{input_url};
//    cout << SectionA;


   //Test set of values
//   B SectionB;
//   SectionB.setFileName("Bird");
//   SectionB.setImageType("JPEG");
//   SectionB.setImageType("invalidentry"); //Will know if the check function works if we do the invalid example after
//   SectionB.setDateCreated("November 15th, 2002");
//   SectionB.setSize(100.56);
//   SectionB.setAuthorName("Alex Trinh");
//   SectionB.setWidth(300);
//   SectionB.setHeight(200);
//   SectionB.setApertureSize("f/8");
//   SectionB.setShutterSpeed("1/666 seconds");
//   SectionB.setIsoValue(1768);
//   SectionB.setFlashEnabled(true);
//
//   cout << SectionB;


// Section C Testing start with creating store object, then creating item objects and adding to store, followed by print function

    Store store;
    Order order;

    Items Book("Book", 1, 20, 12.50);
    store.addItemToStore(Book);

    Items Colored_Pencils("Colored Pencils", 3, 11, 3.25);
    store.addItemToStore(Colored_Pencils);

    Items Coloring_Paper("Coloring Paper", 2, 24, 8.75);
    store.addItemToStore(Coloring_Paper);

    Items Markers("Markers", 6, 3, 3.00);
    store.addItemToStore(Markers);

    Items Crayons("Crayons", 4, 21, 7.00);
    store.addItemToStore(Crayons);

    Items Staples("Staples", 5, 43, 5.50);
    store.addItemToStore(Staples);

    cout<<store;

    order.addItemToOrder(Book);
    order.addItemToOrder(Colored_Pencils);
    order.addItemToOrder(Coloring_Paper);
    order.addItemToOrder(Markers);
    order.addItemToOrder(Crayons);
    order.addItemToOrder(Staples);
    order.addItemToOrder(Staples);
    order.addItemToOrder(Staples);
    store.processOrder(order);
    cout << "\n" << store;

    //cout << "Total Price: $" << fixed << setprecision(2) << order.getTotalPrice(order.order_items);
   return 0;
}
