#include <iostream>

int main()
{

  // --- Kapitel 1 ---
  // Ich bin eine Notiz.
  std::cout << "Hallo Welt!" << std::endl;
  //std::cout << "Hallo, mein Name ist JK" << std::endl;

  // --- Kapitel 2 ---
  int meine_var = -5;
  std::cout << "Meine int Variable " << meine_var << std::endl;

  uint meine_uint = 6;
  std::cout << "Meine uint Variable " << meine_var << std::endl;

  // Aufgabe: Summe variabler Werte berechnen
  std::cout << "---###---" << std::endl;
  std::cout << "Aufgabe: Summe variabler Werte berechnen" << std::endl;
  int meine_erste_variable = 4;
  int meine_zweite_variable = 2;
  int mein_ergebnis = meine_erste_variable + meine_zweite_variable;
  std::cout << "Ergebnis: " << mein_ergebnis << std::endl;

  std::cout << "Programmende" << std::endl;
  std::cout << "---###---" << std::endl;
  return 0;
}