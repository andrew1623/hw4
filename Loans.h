/*

Andrew Thompson
HW3
CSCE 1040.03

*/
#ifndef LOANS_H
#define LOANS_H

#include <vector>
#include "Books.h"
#include "Patrons.h"
#include "Loan.h"

class Loans
{
private:
  int count;
  vector<Loan> loansList;

public:
  Loans();
  void CheckInBook(Books bkList, Patrons pList);
  void CheckOutBook(Books bkList, Patrons pList);
  void PrintOverdue();
  void PrintLoansOfPatron(Patrons pList);
  void RecheckBook(Books bkList, Patrons pList);
  void ReportLost(Books bkList, Patrons pList);
};

#endif