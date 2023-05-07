#include "RULE 30 HEADER.h"
#include <iostream>

using namespace std;
using namespace CellularSpace;

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        cerr << "The number of arguments is more than/ less the expected number" << endl;
        return argc_error;
    }

    int array_size = String_conversion(argv[1]);

    TypeArray my_array = Allocat_Memory(array_size);


    int option = 0;

    do
    {
        cout << "Menu options\n" << endl;
        cout << "1. Defining the number of rounds" << endl;
        cout << "2. Generating random numbers into the array" << endl;
        cout << "3. Getting values into the array manually" << endl;
        cout << "4. Starting the simulation" <<  endl;
        cout << "5. Quit the programm" << endl;

        cout << "Your choice: ";
        cin >> option;

        int number_of_rounds;
        const int & rounds = number_of_rounds;

        while(cin.fail())
        {
            cerr << "Invalid option, please try again" << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }

        switch(option)
        {
        case 1:
            {
                cout << "Defining the number of rounds the simulation should have\n" << endl;
                cout << "Enter the number of rounds: ";
                cin >> number_of_rounds;

                while(cin.fail())
                {
                    cerr << "Error please input an integer" << endl;
                    cin.clear();
                    cin.ignore(100, '\n');
                }

            }
            break;

        case 2:
            {
                Rand_Numbers(my_array, array_size);

            }
            break;

        case 3:
            {
                Get_Values_arr(my_array, array_size);

            }
            break;

        case 4:
            {
                Simulation(my_array,array_size, rounds);

            }
            break;

        case 5:
            {
                cout << "You have decided to quit the programm" << endl;
                return 0;

            }
            break;
        }

    }
    while(option != 6);

    return 0;
}
