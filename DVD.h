/*
Andrew Thompson
HW4
CSCE 1040.03
*/
#ifndef DVD_H
#define DVD_H

#include <string>
#include "LibraryItem.h"

using namespace std;

class DVD : public LibraryItem
{
private:
  string category;
  int runtime; // in minutes
  string studio;
  string release;

public:
  DVD();
  DVD(float c, string t, time_t time, string cat, int run, string stud, string r);
  ~DVD();
  string GetCategory();
  void SetCategory(string c);
  int GetRuntime();
  void SetRuntime(int min);
  string GetStudio();
  void SetStudio(string s);
  string GetRelease();
  void SetRelease(string r);
  void Print();
};

#endif