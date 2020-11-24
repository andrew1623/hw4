/*

Andrew Thompson
HW4
CSCE 1040.03

*/
#ifndef CD_H
#define CD_H

#include <string>
#include "LibraryItem.h"
#include "CD.h"

using namespace std;

class CD : public LibraryItem
{
private:
  string artist;
  int tracks;
  int runtime;
  string genre;

public:
  CD();
  CD(string t, string a, int i, string cat);
  ~CD();
  string GetArtist();
  void SetArtist(string a);
  int GetTracks();
  void SetTracks(int t);
  int GetRuntime();
  void SetRuntime(int r);
  string GetGenre();
  void SetGenre(string g);
};

#endif