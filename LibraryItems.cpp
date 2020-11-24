#include <iostream>
#include "LibraryItems.h"

void LibraryItems::AddItem(string itemType)
{
  cout << "\n***Adding a new " << itemType << " to the Library***" << endl;

  cout << "Enter the cost of item: " << endl;
  float aCost;
  cin >> aCost;
  cout << "Enter title: " << endl;
  string aTitle;
  cin.ignore();
  getline(cin, aTitle);

  switch (itemType)
  {
  case "book":
    cout << "Enter name of the author: " << endl;
    string aAuthor;
    cin.ignore();
    getline(cin, aAuthor);
    cout << "Enter the ISBN number: " << endl;
    int aISBN;
    cin >> aISBN;

    // initialize a LibraryItem pointer as a Book
    LibraryItem *pItem;
    Book book(// TODO: add constructor data);
    pItem = &book;
    itemList.push_back(pItem)
    break;

  case "dvd":
    cout << "Enter category: " << endl;
    cin.ignore();
    string cat;
    getline(cin, cat);
    cout << "Enter runtime (in minutes):  " << endl;
    int minutes;
    cin >> minutes;
    cout << "Enter studio: " << endl;
    string st;
    cin.ignore();
    getline(cin, st);
    cout << "Enter release data: " << endl;
    string rd;
    cin.ignore();
    getline(cin, rd);

    // init LibItem as cd
    LibraryItem *pItem;
    CD cd(//add constructor data);
    pItem = cd;
    itemList.push_back(pItem);
    break;

  case "cd":

    break;
  }
}