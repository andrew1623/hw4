/*

Andrew Thompson
HW3
CSCE 1040.03

*/
#include <iostream>
#include <iomanip>
#include "LibraryItem.h"
#include "Book.h"

using namespace std;

Book::Book(string t, float c, )
{
  status = 'i';
}

Book::~Book() {}

void Book::SetAuthor(string name)
{
  this->author = name;
}
string Book::GetAuthor()
{
  return author;
}

void Book::SetISBN(int isbn)
{
  this->isbn = isbn;
}
int Book::GetISBN()
{
  return isbn;
}

void Book::Print()
{

  cout << fixed << setprecision(2);
  cout << "\nBOOK" << endl
       << "Title: " << title << endl
       << "Author: " << author << endl
       << "ISBN: " << isbn << endl
       << "Cost: $" << cost << endl
       << "Status: " << statusString << endl;
}
