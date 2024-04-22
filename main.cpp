// Repository Link: https://github.com/otheremma/zyLab-28.14.git
//Group Members: Emma Stammeyer
//

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
      case 'a':
         
      theCart.AddItem();
      break;
      case 'd':
      theCart.RemoveItem(NEED PARAMETER);
      break;
      case 'c':
      theCart.SetQuantity(NEED PARAMETER);
      break;
      case 'i':
      theCart.PrintDescriptions();
      break;
      case'o':
      theCart.PrintTotal();
      break;
      case 'q':
      break;
  } 
}

int main() {
string name, date;
   cout<<"Enter customer's name: ";
   cin>>name;
   cout<<endl;
   cout<<name<<endl;
   cout<<"Enter today's date: ";
   cin>>date;
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
