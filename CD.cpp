#include "CD.h"

CD::CD()
{
}

string CD::GetArtist()
{
  return artist;
}

void CD::SetArtist(string a)
{
  this->author = a;
}

string CD::GetGenre()
{
  return genre;
}

void CD::SetGenre(string g)
{
  this->genre = g;
}


int CD::GetRuntime()
{
  return runtime;
}
void CD::SetRuntime(int r)
{
  this->runtime = r;
}

int CD::GetTracks()
{
  return tracks;
}
void CD::SetTracks(int t)
{
  this->tracks = t;
}