#include <iostream>

void variablenAusgabe(int parameter)
{
  std::cout << "Ausgabe der Variable " << parameter << std::endl;
}

void ausgabeMeinArray(int anzahl, int array[])
{
  for (int index = 0; index < anzahl; index++)
  {
    std::cout << "index " << index << ": " << array[index] << std::endl;
  }
}

int main()
{
  // --- Kapitel 5 ---
  // Praktische Aufgabe 1: Schere-Stein-Papier
  std::cout << "---###---" << std::endl;
  std::cout << "Kapitel 5: Praktische Aufgabe 1: Schere-Stein-Papier" << std::endl;

  std::cout << "User waehlt: ";
  int user_var;
  std::cin >> user_var;
  std::cout << "User input ist " << user_var << std::endl;

  std::cout << "---###---" << std::endl;
  std::cout << "Programmende" << std::endl;
  std::cout << "---###---" << std::endl;
  return 0;
}