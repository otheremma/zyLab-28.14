#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

ShoppingCart(string name, string date){
  
}
string GetCustomerName(){
  return customerName;
}

 string GetDate(){
   return currentDate;
 }     

void AddItem(item){
  for (int i = 0; i < cartItems.size(); i++){
    cartItems.at(i) = item;
  }
}

void RemoveItem(name){
  //remove item
}

void ModifyItem(item){
  //modify item
}
      
int GetNumItemsInCart(){
  return cartItems.size();
}

double GetCostofCart(){
  //return cost of cart
}
      
void PrintTotal(){
  for (int i = 0; i < cartItems.size(); i++){
    cout << cartItems.at(i);
  }
}      

void PrintDescriptions(){
  //cout descriptions
}
      
    
};

