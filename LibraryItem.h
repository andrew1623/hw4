#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>
#include <ctime>
class LibraryItem
{
private:
  int ID;
  float cost;
  char status;
  string title;
  time_t loanPeriod;

public:
  LibraryItem();
  LibraryItem(float c, string t, time_t time);
  virtual ~LibraryItem();
  int GetID();
  void SetID(int id);
  float GetCost();
  void SetCost(float c);
  char GetStatus();
  void SetStatus(char s);
  void SetTitle(string title);
  string GetTitle();
  time_t GetLoanPeriod();
  void SetLoanPeriod(time_t time);
  string GetStatusString(char s);
  void virtual Print();
};
#endif