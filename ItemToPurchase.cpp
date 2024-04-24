#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

void ItemToPurchase::SetName(string& name){
  itemName = name;
}

void ItemToPurchase::SetDescription(string& description){
  itemDescription = description;
}

void ItemToPurchase::SetPrice(int price){
  itemPrice = price;
}

void ItemToPurchase::SetQuantiy(int quantity){
  itemQuantity = quantity;
}

string ItemToPurchase::GetName() const {
  return itemName;
}

string ItemToPurchase::GetDescription() const {
  return itemDescription;
}

int ItemToPurchase::GetPrice() const {
  return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
  return itemQuantity;
}

void ItemToPurchase::PrintItemCost() {
  cout<<"Item cost: "<<itemPrice<<endl;
}      

void ItemToPurchase::PrintItemDescription(){
  cout<<"Item Description: "<<itemDescription<<endl;
}

