#include "RULE 30 HEADER.h"

namespace CellularSpace
{
    int String_conversion(string strWord)
    {
        int number;
        stringstream ss {strWord};
        ss >> number;

        if(ss.fail())
        {
            cerr << "Could not convert " << number << " to integer" << endl;
            exit(conver_error_strin);
        }

        return number;
    }

    void Rand_Numbers(int array_1[], int array_size_1)
    {
        cout << "Getting random values into the initial arra\n" << endl;

        int min_value = 0;
        int max_value = 0;
        srand(time(NULL));

        cout << "Enter the minimum value: ";
        cin >> min_value;
        cout << "Enter the maximum value: ";
        cin >> max_value;

        while(cin.fail())
        {
            cerr << "\n\nError enter an integer value," << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }

        cout << "\nThe number generated into the array\n" << endl;
        for(int i = 0; i < array_size_1; i++)
        {
            array_1[i] = rand()% (max_value  - min_value + 1) + min_value;
            cout << array_1[i] << " ";
        }
        cout << "\n" << endl;
    }

    void Get_Values_arr(int array_2[], int array_size_2)
    {
        cout << "Getting numbers into the array manually\n" << endl;
        for(int i = 0; i < array_size_2; i++)
        {
            cout << "Element " << i << ": ";
            cin >> array_2[i];
        }

        cout << "\nThe numbers that were inputted by the user into the array\n" << endl;
        for(int i = 0; i < array_size_2; i++)
        {
            cout << array_2[i] << " ";
        }
        cout << "\n" << endl;
    }

    TypeArray Allocat_Memory(int array_size)
    {
        TypeArray my_array;
        my_array = new int [array_size];

        for(int i = 0; i < array_size; i++)
        {
            my_array[i] = 0;
        }
        return my_array;
    }

    void Print_row(int array_3[], int array_size_3)
    {
        for(int i = 0; i <= array_size_3; i++)
        {
            array_3[i];
        }
        array_3[array_size_3/2] = 1;

        for(int i = 0;i < array_size_3; i++)
        {
            if(array_3[i] == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    void Simulation(int array_4[], int array_size_4, int roundss)
    {
        cout << "The elements that are available on the array\n" << endl;

        for(int i = 0; i < array_size_4; i++)
        {
            cout << array_4[i] << " ";
        }
        cout << "\n" << endl;

        cout << "######################################################################################################" << endl;
        cout << "                           CELLULAR AUTOMATON RULE 30 SIMULATION                                      " << endl;
        cout << "######################################################################################################\n" << endl;

        Print_row(array_4,array_size_4);

        int new_array[array_size_4]= {0};
        int i;

        for(int n = 0; n < roundss; n++)
        {
            for(int i = 0; i < array_size_4 + 2; i++)
            {
                new_array[i] = array_4[i];
            }

            for(int i = 1; i <= array_size_4; i++)
            {
                if((new_array[i-1] == 0 && new_array[i] == 0 && new_array[i+1] == 1) ||
                   (new_array[i-1] == 0 && new_array[i] == 1 && new_array[i+1] == 0) ||
                   (new_array[i-1] == 0 && new_array[i] == 1 && new_array[i+1] == 1) ||
                   (new_array[i-1] == 1 && new_array[i] == 0 && new_array[i+1] == 0))
                {
                    array_4[i] = 1;
                }
                else
                {
                    array_4[i] = 0;
                }
            }

                array_4[0] = array_4[array_size_4];
                array_4[array_size_4+1] =array_4[1];

                for(int i = 0; i <= array_size_4; i++)
                {
                    if(array_4[i] == 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            cout << "################################################################################################" << endl;
            cout << "                             THE END OF THE SIMULATION                                          " << endl;
            cout << "################################################################################################" << endl;
            delete [] array_4;
            delete [] new_array;

    }
}
