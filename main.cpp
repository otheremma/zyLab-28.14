// Repository Link: https://github.com/otheremma/zyLab-28.14.git
//Group Members: Emma Stammeyer
// Abigail Rojas

#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   cout<<"MENU"<<endl;
   cout<<"a - Add item to cart"<<endl;
   cout<<"d - Remove item from cart"<<endl;
   cout<<"c - Change item quantity"<<endl;
   cout<<"i - Output items' descriptions"<<endl;
   cout<<"o - Output shopping cart"<<endl;
   cout<<"q - Quit"<<endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   switch (option){
      case 'a':{
         cout<<"ADD ITEM TO CART"<<endl;
         cout<<"Enter the item name: "<<endl;
         string item;
         getline(cin, item);
         cout<<endl;
         cout<<"Enter the item description: "<<endl;
         string description;
         getline(cin, description);
         cout<<endl;
         cout<<"Enter the item price: "<<endl;
         int price;
         cin>>price;
         cout<<endl;
         cout<<"Enter the item quantity: "<<endl;
         int quantity;
         cin>>quantity;
         cout<<endl;
         ItemToPurchase item1(name,description,price,quantity);
         theCart.AddItem(item1);
      break;}
      case 'd':{
         cout<<"REMOVE ITEM FROM CART"<<endl;
         cout<<"Enter name of item to remove: "<<endl;
         string item;
         getline(cin, item);
         theCart.RemoveItem(item);
      break;}
      case 'c':{
         cout<<"CHANGE ITEM QUANTITY"<<endl;
         cout<<"Enter the item name: "<<endl;
         string item;
         getline(cin, item);
         cout<<"Enter the new quantity: "<<endl;
         int quantity;
         cin>>quantity;
         ItemToPurchase item1(item," ",0,quantity);
         ModifyItem(item1);
         //FIX WHEN FUNCTION IS DONE
      break;}
      case 'i':{
         cout<<"OUTPUT ITEMS' DESCRIPTIONS"<<endl;
         cout<<theCart.GetCustomerName()<<"'s Shopping Cart - "<<theCart.GetDate()<<endl;
         cout<<"Number of Items: "<<theCart.GetNumItemsInCart()<<endl;
         cout<<endl;
         theCart.PrintDescriptions();
         cout<<endl;
         cout<<endl;
         theCart.PrintTotal();
         cout<<endl;
      break;}
      case'o':{
         cout<<"OUTPUT SHOPPING CART"<<endl;
         cout<<theCart.GetCustomerName()<<"'s Shopping Cart - "<<theCart.GetDate()<<endl;
         cout<<"Number of Items: "<<theCart.GetNumItemsInCart()<<endl;
         cout<<endl;
         theCart.PrintDescriptions();
         cout<<endl;
         cout<<endl;
         theCart.PrintTotal();
         cout<<endl;
      break;}
      case 'q':{
      break;}
  } 
}

int main() {
string name, date;
   cout<<"Enter customer's name: ";
   getline(cin, name);
   cout<<endl;
   cout<<name<<endl;
   cout<<"Enter today's date: ";
   getline(cin, date);
   cout<<endl;
   cout<<date<<endl;

   cout<<"Customer name: "<<name<<endl;
   cout<<"Today's date: "<<date<<endl;
   new ShoppingCart cart(name,date);

   printMenu();
   char option;
   cout<<"Choose an option: ";
   cin>>option;
   while(option=!'q'||option=!'o'||option=!'i'||option=!'c'||option=!'d'||option=!'a'){
      cout<<"Choose an option: ";
      cin>>option;
   }
   (while option=='o'||option=='i'||option=='c'||option=='d'||option=='a'){
      ExecuteMenu(option, cart);
   }
   if(option=='q'){
      ExecuteMenu(option, cart);
   }
   
   

   
   
   
   return 0;
}
