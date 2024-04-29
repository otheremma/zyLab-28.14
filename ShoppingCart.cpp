#include <iostream>
#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {}

ShoppingCart::ShoppingCart(string name, string date) : customerName(name), currentDate(date) {}

string ShoppingCart::GetCustomerName() const {
    return customerName;
}

string ShoppingCart::GetDate() const {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string name) {
    bool found = false;
    for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
        if (it->GetName() == name) {
            cartItems.erase(it);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
    bool found = false;
    for (auto& cartItem : cartItems) {
        if (cartItem.GetName() == item.GetName()) {
            if (!item.GetDescription().empty()) {
                cartItem.SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                cartItem.SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                cartItem.SetQuantity(item.GetQuantity());
            }
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}

int ShoppingCart::GetNumItemsInCart() {
    int totalQuantity = 0;
    for (const auto& item : cartItems) {
        totalQuantity += item.GetQuantity();
    }
    return totalQuantity;
}

double ShoppingCart::GetCostOfCart() {
    double totalCost = 0.0;
    for (const auto& item : cartItems) {
        totalCost += item.GetPrice() * item.GetQuantity();
    }
    return totalCost;
}


void ShoppingCart::PrintTotal() {
    if (cartItems.empty()) {
       cout<<endl;
        cout << "SHOPPING CART IS EMPTY" << endl;
        cout<<endl;
        cout<<"Total: $"<<GetCostOfCart()<<endl;
    } else {
   cout << endl;
        //cout << "Total:" << endl;
        for (const auto& item : cartItems) {
            cout << item.GetName() << " " << item.GetQuantity() << " @ $" << item.GetPrice() << " = $" << item.GetPrice() * item.GetQuantity() << endl;
        }
        cout << endl;
        cout << "Total: $" << GetCostOfCart() << endl;
    }
}

void ShoppingCart::PrintDescriptions() {
    if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
        cout << "Item Descriptions" << endl;
        for (const auto& item : cartItems) {
            cout << item.GetName() << ": " << item.GetDescription() << endl;
        }
    }
}
