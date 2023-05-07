#ifndef RULE_30_HEADER_H_INCLUDED
#define RULE_30_HEADER_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;
namespace CellularSpace
{
    const int argc_error = -1;
    const int conver_error_strin = -2;


    typedef int* TypeArray;

    int String_conversion(string strWord);
    TypeArray Allocat_Memory(int array_size);

    void Rand_Numbers(int array_1[], int array_size_1);
    void Get_Values_arr(int array_2[], int array_size_2);
    void Print_row(int array_3[], int array_size_3);
    void Simulation(int array_4[], int array_size_4, int roundss);
}


#endif // RULE_30_HEADER_H_INCLUDED
