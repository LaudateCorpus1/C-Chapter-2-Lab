~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Name: Santiago de Jesus Villalobos-Gonzalez
//Program Description: Mid-Term Question #3
//Course: CS 102 - Introduction to Programming C++
//Due Date: Monday July 14th, Midnight 

//"https://gist.github.com/dillmo/9141528"

//From ‘Problem Set 3 Question 12 solution by Dillon Morse’, created in 2013 on GitHub Gist, as file ‘12.cpp’ I have linked their modified work, as the foundation for this midterm above. 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double get_balance() {
  double balance;
  cout << "What is your account's balance?" << '\n';
  cin >> balance;
  return balance;
}

int get_checks_written() {
  int checks_written;
  cout << "How many checks have you write?" << '\n';
  cin >> checks_written;
  return checks_written;
}

double compute_charges(double balance, int checks_written) {
  double fees = 0;
  if (balance < 500) {
    fees = fees + 25;
  }

  if (checks_written < 10) {
    fees = fees + 1.0 * checks_written;
  } else if (checks_written < 30) {
    fees = fees + 0.75 * checks_written;
  } else if (checks_written < 50) {
    fees = fees + 0.50 * checks_written;
  } else {
    fees = fees + 0.25 * checks_written;
  }

  return fees;
}

int main() {
  double balance = get_balance();
  int checks_written = get_checks_written();
  double charges;

  // Input validation
  if (checks_written < 0) {
    cout << "Cannot accept a negative number of checks written. " <<
            "The transaction will not complete." << '\n';
  } else {
    // Input validation
    if (balance < 0) {
      cout << "Warning: your account is overdrawn." << '\n';
    }
    
    charges = compute_charges(balance, checks_written);

    cout << "Service fees: $" << charges << '\n';
  }

  // Necessary to prevent warnings from some compilers.
  // I'm not keeping the program running in a paused state because I am running
  // it from a CLI, so letting it close is most convenient.
  return 0;
}
