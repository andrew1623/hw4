/*
Andrew Thompson
HW4
CSCE 1040.03
*/
#include <iostream>
#include <cstdlib>
#include "LibraryItem.h"

srand(time(NULL));

int createID()
{
  int id;
  id = rand() % 10000 + 1;
  return id;
}

LibraryItem::LibraryItem()
{
  ID = createID();
  cost = 0;
  status = 'i';
  title = "";
  loanPeriod = 0;
}
LibraryItem::LibraryItem(float c, string t, time_t time)
{
  // Test if these need to be here
  ID = createID();
  status = 'i';
  // ^^^^^^

  cost = c;
  title = t;
  loanPeriod = time;
}

virtual LibraryItem::~LibraryItem() {}

int LibraryItem::GetID()
{
  return ID;
}
void LibraryItem::SetID(int id)
{
  this->id = id;
}

void LibraryItem::SetTitle(string title)
{
  this->title = title;
}
string LibraryItem::GetTitle()
{
  return title;
}

void LibraryItem::SetCost(float c)
{
  this->cost = c;
}
float LibraryItem::GetCost()
{
  return cost;
}

void LibraryItem::SetStatus(char s)
{
  this->status = status;
}
char LibraryItem::GetStatus()
{
  return status;
}

time_t LibraryItem::GetLoanPeriod()
{
  return loanPeriod;
}
void LibraryItem::SetLoanPeriod(time_t time)
{
  this->loanPeriod = time;
}

string LibraryItem::GetStatusString(char s)
{
  string statusString;
  switch (status)
  {
  case 'i':
    statusString = "In";
    break;
  case 'o':
    statusString = "Out";
    break;
  case 'r':
    statusString = "Repair";
    break;
  case 'l':
    statusString = "Lost";
    break;
  }
  return statusString;
}