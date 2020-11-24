/*
Andrew Thompson
HW4
CSCE 1040.03
*/
#ifndef LIBRARYITEMS_H
#define LIBRARYITEMS_H

#include <string>
#include <vector>
#include "Book.h"
#include "CD.h"
#include "DVD.h"
#include "LibraryItem.h"

using namespace std;

class LibraryItems
{
private:
  vector<LibraryItem> itemList;
  bool found = false;

public:
  void AddItem(string itemType);
  void EditItem(vector<LibraryItem>::iterator);
  void DeleteItem(vector<LibraryItem>::iterator it);
  // Search/Find item in itemsList
  // - returns an iterator of that item if found
  vector<LibraryItem>::iterator FindItem(string name);

  void  PrintCollection();
};

#endif