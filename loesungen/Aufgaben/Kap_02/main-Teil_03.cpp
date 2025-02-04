#include <iostream>

int main()
{
  // --- Kapitel 2 ---

  // Aufgabe: einfache Ausgabe
  std::cout << "---###---" << std::endl;
  std::cout << "Aufgabe: einfache Ausgabe" << std::endl;

  char meine_var_1 = 'j';
  std::cout << "Meine Variable " << meine_var_1 << std::endl;

  char meine_var_2 = 'x';
  std::cout << "Meine Variable " << meine_var_2 << std::endl;

  // int-Array
  int mein_array_int [5] = {};
  mein_array_int [1] = 15;

  // Aufgabe: Anlegen eines int-Arrays
  std::cout << "---###---" << std::endl;
  std::cout << "Aufgabe: Anlegen eines int-Arrays" << std::endl;

  int mein_array [7] = {};
  std::cout << "Mein int-Array an Index 3: " << mein_array[3] << std::endl;
  mein_array[4] = -9;
  std::cout << "Mein int-Array an Index 3: " << mein_array[3] << std::endl;
  std::cout << "Mein int-Array an Index 4: " << mein_array[4] << std::endl;

  std::cout << "---###---" << std::endl;
  std::cout << "Programmende" << std::endl;
  std::cout << "---###---" << std::endl;
  return 0;
}