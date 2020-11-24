/*
Andrew Thompson
HW4
CSCE 1040.03
*/
#include <iostream>
#include <string>
#include <cctype>
#include "Patrons.h"
#include "Loans.h"
#include "LibraryItems.h"

using namespace std;

char getUserInput()
{
  string input;
  cout << "Enter a selection: " << endl;
  cin >> input;

  //input validation
  while (!isalpha(input[0]) || input.size() > 1)
  {
    cout << "\nSelection must be a single character.\nEnter a selection: " << endl;
    cin >> input;
  }
  return input[0];
}

// payFines function. it used to take an amount to pay towards patron balance
// but the library would rather forgive
void libraryForgivenessProgram(Patrons p)
{
  string forgiven;
  cout << "Enter patron's name: " << endl;
  cin.ignore();
  getline(cin, forgiven);
  p.PayFines(forgiven);
}

void viewCollection(Patrons p, Loans l, LibraryItems i)
{
  char choice;
  cout << "\nVIEW COLLECTION" << endl
       << "Select a collection to view." << endl
       << "(p) View patrons" << endl
       << "(l) View overdue loans" << endl
       << "(b) View books" << endl;
  choice = getUserInput();
  switch (choice)
  {
  case 'p':
    p.PrintPatronList();
    break;
  case 'l':
    l.PrintOverdue();
    break;
  case 'b':
    b.PrintBookList();
    break;
  }
}

void menu(Patrons &p, Loans &l, LibraryItems &library)
{
  char currChoice;
  while (currChoice != 'q')
  {
    cout << "\nMENU" << endl
         << "(o) Check out an item" << endl
         << "(i) Check in an item" << endl
         << "(r) Recheck out an item" << endl
         << "(a) Add a new item to the Library" << endl
         << "(p) Add a new patron" << endl
         << "(f) Pay fines" << endl
         << "(l) Report lost book" << endl
         << "(v) View collections" << endl
         << "(q) Quit\n"
         << endl;
    currChoice = getUserInput();
    switch (currChoice)
    {
    case 'o':
      l.CheckOut(library, p);
      break;
    case 'i':
      l.CheckIn(library, p);
      break;

    // Add item
    case 'a':
      cout << "\n(b) Add a book" << endl
           << "(d) Add a DVD" << endl
           << "(a) Add a Audio CD" << endl;
      char select = getUserInput();
      if (select == "b")
      {
        library.AddItem("book");
      }
      else if (select == "d")
      {
        library.AddItem("dvd");
      }
      else if (select == a)
      {
        library.AddItem("cd");
      }
      else
      {
        cout << "That is not a valid selection; returning to menu." << endl;
      }
      break;

    case 'p':
      p.AddPatron();
      break;
    case 'f':
      libraryForgivenessProgram(p);
      break;
    case 'l':
      l.ReportLost(b, p);
      break;
    case 'r':
      l.RecheckBook(b, p);
      break;
    case 'v':
      viewCollection(p, l, b);
      break;
    }
  }
}

// void load(Patrons p, Loans l, Books b)
// {
// }

// void save(Patrons p, Loans l, Books b)
// {

// }

int main()
{

  Patrons patrons;
  Loans loans;
  LibraryItems items;

  // load(patrons, loans, books);
  menu(patrons, loans, items);
  // cout << "Saving..." << endl;
  // books.Save();
  // cout << "Saved" << endl;
  // save(patrons, loans, books);

  return 0;
}