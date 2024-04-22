#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

void SetName(name){
  itemName = name;
}

void SetDescription(description){
  itemDescription = description;
}

void SetPrice(price){
  itemPrice = price;
}

void SetQuantiy(quantity){
  itemQuantity = quantity;
}

string GetName(){
  return itemName;
}

string GetDescription(){
  return itemDescription;
}

int GetPrice(){
  return itemPrice;
}

int GetQuantity(){
  return itemQuantity;
}

void PrintItemCost(){
  //cout item cost
}      

void PrintItemDescription(){
  //cout item description
}

