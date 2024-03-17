#include <iostream>
#include <cmath>

using namespace std;

void convertUnit (float number, int option);

int main()
{

    double number = 0;
    int optionNumber = 0;

    cout << "\n\tBienvenido" << endl;
    cout << "\t----------" << endl;
    cout << "\nEscribe la unidad que desea convertir: "; cin >> number;
    system("cls");
    cout << "\n\tOpciones" << endl;
    cout << "\t--------" << endl;
    cout << "\n\t1. Peta (P) " << endl;
    cout << "\t2. Tera (T) " << endl;
    cout << "\t3. Giga (G) " << endl;
    cout << "\t4. Mega (M) " << endl;
    cout << "\t5. Kilo (K) " << endl;
    cout << "\t6. Mili (m) " << endl;
    cout << "\t7. Micro (u) " << endl;
    cout << "\t8. Nano (n) " << endl;
    cout << "\t9. Pico (p) " << endl;
    cout << "\t10. Femto (f) " << endl;

    // Select option

    cout << "\n\tOpcion: ";
    cin >> optionNumber;

    // Convert result

    convertUnit(number, optionNumber);

    return 0;
}

void convertUnit (float number, int option) {

    // Set of powers of the units

    int scientificNotePower[] = {15, 12, 9, 6, 3, -3, -6, -9, -12, -15};

    // Calculate

    float result = number / pow(10, scientificNotePower[option - 1]);

    cout << "\n\tResultado: " << result;

}

