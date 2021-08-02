~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Name: Santiago de Jesus Villalobos-Gonzalez
//Program Description: Lab #7
//Course: CS 102 - Introduction to Programming C++
//Due Date: August 1st, 2021 by Midnight

https://jesushilarioh.com/chapter-7-19-2d-array-operations-tony-gaddis-starting-out-with-c-plus-plus/

//From ‘Problem Set 3 Question 12 solution by Dillon Morse’, created in 2013 on GitHub Gist, as file ‘12.cpp’ I have linked their modified work, as the foundation for this midterm above. 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>
using namespace std;

const int ROWS = 3,
          COLUMNS = 5;

double getTotal(const double[][COLUMNS]);
double getAverage(const double[][COLUMNS]);
double getRowTotal(const double[][COLUMNS], const int);
double getColumnTotal(const double[][COLUMNS], const int);
double getHighestInRow(const double[][COLUMNS], const int);
double getLowestInRow(const double[][COLUMNS], const int);
void displayData(const double[][COLUMNS], const int, const int);

int main()
{
    double test_data[ROWS][COLUMNS] = {{0, 1, 1, 1, 1},
                                       {7, 2, 6, 2, 9},
                                       {3, 3, 3, 3, 5}};

    int row = 1,
        column = 4;

    displayData(test_data, row, column);

    return 0;
}

void displayData(const double test_data[][COLUMNS], const int row, const int column)
{
    cout << "Total = " << getTotal(test_data) << endl;
    cout << "Average = " << getAverage(test_data) << endl;
    cout << "Row #" << row << " total = " << getRowTotal(test_data, row) << endl; 
    cout << "Column #" << column << " total = " << getColumnTotal(test_data, column) << endl;
    cout << "Highest in Row #" << row << " = " << getHighestInRow(test_data, row) << endl;
    cout << "Lowest in Row #" << row << " = " << getLowestInRow(test_data, row) << endl;
    
}

double getTotal(const double array[][COLUMNS])
{
    double total = 0;
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
            total += array[row][column];
        
    }
    
    return total;
}

double getAverage(const double array[][COLUMNS])
{
    double total_array_elements = 0,
           sum;

    for(int row = 0; row < ROWS; row++)
    {
        for(int column = 0; column < COLUMNS; column++)
        {
            total_array_elements++;
            sum += array[row][column];
        }

    }
    return sum / total_array_elements;
}

double getRowTotal(const double array[][COLUMNS], const int ROW)
{
    double row_total = 0;
    // array[ROW][0]
    // array[ROW][1]
    // array[ROW][2]
    // array[ROW][3]
    // array[ROW][4]
    for(int column = 0; column < COLUMNS; column++)
        row_total += array[(ROW - 1)][column];
    
    return row_total;
}

double getColumnTotal(const double array[][COLUMNS], const int COLUMN)
{
    double column_total = 0;
    // array[0][COLUMN]
    // array[1][COLUMN]
    // array[2][COLUMN]
    // array[3][COLUMN]
    // array[4][COLUMN]
    for(int row = 0; row < ROWS; row++)
        column_total += array[row][(COLUMN - 1)];
        
    return column_total;
}

double getHighestInRow(const double array[][COLUMNS], const int ROW)
{
    // array[(ROW - 1)][0]
    // array[(ROW - 1)][1]
    // array[(ROW - 1)][2]
    // array[(ROW - 1)][3]
    // array[(ROW - 1)][4]
    double highest = array[(ROW - 1)][0];

    for(int column = 1; column < COLUMNS; column++)
    {
        if(array[(ROW - 1)][column] >= highest)
            highest = array[(ROW - 1)][column];

    }
        
    return highest;
}

double getLowestInRow(const double array[][COLUMNS], const int ROW)
{
    double lowest = array[(ROW - 1)][0];
    for(int column = 1; column < COLUMNS; column++)
    {
        if(array[(ROW - 1)][column] <= lowest)
            lowest = array[(ROW - 1)][column];
    }
    return lowest;
}