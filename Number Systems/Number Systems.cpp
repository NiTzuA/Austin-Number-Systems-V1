#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

/* TO DO LIST: 

1. Converter (Decimal)
    1.1 Decimal to Binary
    1.2 Decimal to Octal 
    1.3 Decimal to Hexadecimal

2. Converter (Binary)
    2.1 Binary to Octal             DONE
    2.2 Binary to Decimal           DONE
    2.3 Binary to Hexadecimal

3. Converter (Octal)
    3.1 Octal to Binary
    3.2 Octal to Decimal
    3.3 Octal to Hexadecimal

4. Converter (Hexadecimal)
    4.1 Hexadecimal to Binary
    4.2 Hexadecimal to Octal
    4.3 Hexadecimal to Decimal

5. Practice Problems (Decimal)
    5.1 Decimal to Binary
    5.2 Decimal to Octal
    5.3 Decimal to Hexadecimal

6. Practice Problems (Binary)
    6.1 Binary to Octal
    6.2 Binary to Decimal
    6.3 Binary to Hexadecimal

7. Practice Problems (Octal)
    7.1 Octal to Binary
    7.2 Octal to Decimal
    7.3 Octal to Hexadecimal

8. Practice Problems (Hexadecimal)
    8.1 Hexadecimal to Binary
    8.2 Hexadecimal to Octal
    8.3 Hexadecimal to Decimal

9. Practice Problems (Random)

*/

void conBin() {

    int binary = 0;
    int octal = 0;
    int decimal = 0;
    int hexadecimal = 0;
    int modBin = 0;
    int modDec = 0;

    cout << "Convert from Binary to ______:" << endl
        << "\n[1] Octal" << endl
        << "[2] Decimal" << endl
        << "[3] Hexadecimal" << endl
        << "[4] End Program" << endl;

    char choice;
    choice = _getch();

    if (choice == '1') {
        system("cls");
        cout << "Enter a Binary Number: ";
        cin >> binary;

        // Conversion begins here.
        
        modBin = binary;
        int i = 0;

        do {
            modBin = binary % 10;
            decimal += modBin * pow(2, i);
            binary /= 10;
            i++;
        } while (binary != 0);

        modDec = decimal;
        i = 0;

        do {
            modDec = decimal % 8;
            octal += modDec * pow(10, i);
            decimal /= 8;
            i++;
        } while (decimal != 0);
        
        cout << "\nConverted number is: " << octal;
    } 
    else if (choice == '2') {
        system("cls");

        cout << "Enter a Binary Number: ";
        cin >> binary;

        // Conversion begins here.

        modBin = binary;
        int i = 0;

        do {
            modBin = binary % 10;
            decimal += modBin * pow(2, i);
            binary /= 10;
            i++;
        } while (binary != 0);

        cout << "\n\nConverted number is: " << decimal;

    }
    else if (choice == '3') {
        system("cls");


    }
    else if (choice == '4') {
        system("cls");


    }
    else {

    }

}

int main()
{
    char loop = 'y';
    conBin();

    /*while (loop == 'y') {

        system("cls");
        
        cout << "Welcome to Austin's Number System Converter!" << endl
            << "Please select the number on your keyboard to select your desired action." << endl
            << "\n[1] Convert From Binary" << endl
            << "[2] Convert From Octal" << endl
            << "[3] Convert From Decimal" << endl
            << "[4] Convert From Hexadecimal" << endl
            << "[5] Binary Practice Conversions" << endl
            << "[6] Octal Practice Conversions" << endl
            << "[7] Decimal Practice Conversions" << endl
            << "[8] Hexadecimal Practice Conversions" << endl;

        char choice;
        choice = _getch();

        
        system("cls");

        cout << "Would you like to use the program again? (y/n):" << endl;
        loop = _getch();
        
    }*/
    
}
