/*

Andrew Thompson
HW3
CSCE 1040.03

*/
#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "LibraryItem.h"

using namespace std;

class Book ::public LibraryItem
{
private:
  string author;
  int isbn;

public:
  // Constructor -- status defaults to "In"
  Book(string a, string t, int is, int d, float cost);
  ~Book();

  // Set/Get functions
  void SetAuthor(string name);
  string GetAuthor();

  void SetISBN(int isbn);
  int GetISBN();

  void Print();
};

#endif
