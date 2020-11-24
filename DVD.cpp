#include <iostream>
#include <iomanip>
#include "DVD.h"

// Constructors
DVD::DVD()
{
  category = "";
  runtime = 0;
  studio = "";
  release = "";
}
DVD::DVD(float c, string t, time_t time, string cat, int run, string stud, string r)
    : LibraryItem{c, t, time},
      category{cat}, runtime{run}, studio{stud}, release{r}
{
}
// Deconstuctor
DVD::~DVD() {}

// TODO Complete print
DVD::Print() {}

// Getter / Setter functions
string DVD::GetCategory() const
{
  return category;
}

void DVD::SetCategory(string category)
{
  this->category = category;
}

int DVD::GetRuntime()
{
  return runtime;
}

void DVD::SetRuntime(int min)
{
  this->runtime = min;
}

string DVD::GetStudio()
{
  return studio;
}

void DVD::SetStudio(string s)
{
  this->studio = s;
}

string DVD::GetRelease()
{
  return release;
}

void DVD::SetRelease(string r)
{
  this->release = release;
}
