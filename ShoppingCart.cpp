#include <string>
#include <vector>
using namespace std;
#incldue "ShoppingCart.h"

ShoppingCart::ShoppingCart();

string ShoppingCart::GetCustormerName() const {
  return customerName;
}

string ShoppingCart::GetDate() const {
  return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item){
  //add item
}

void ShoppingCart::RemoveItem(string name){
  //remove item
}

void ShoppingCart::ModifyItem(ItemToPurchase item){
  //modify item
}

int ShoppingCart::GetNumItemsInCart(){
  //for (int i = 0; i < cartItems.size(); i++){
  //  cout << cartItems.at(i);
  //}
}

double ShoppingCart::GetCostOfCart(){
  //get cost of cartItems
}

void ShoppingCart::PrintTotal(){
  //print total
}

void ShoppingCart::PrintDescriptions(){
  //preint descriptions
}


  

  
