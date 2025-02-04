#include <iostream>

int main()
{
  // --- Kapitel 2 ---
  int meine_var = -5;
  std::cout << "Meine int Variable " << meine_var << std::endl;

  uint meine_uint = 6;
  std::cout << "Meine uint Variable " << meine_var << std::endl;

  // Aufgabe: Summe variabler Werte berechnen (int)
  std::cout << "---###---" << std::endl;
  std::cout << "Aufgabe: Summe variabler Werte berechnen (int)" << std::endl;
  int meine_erste_variable = 4;
  int meine_zweite_variable = 2;
  int mein_ergebnis = meine_erste_variable + meine_zweite_variable;
  std::cout << "Ergebnis: " << mein_ergebnis << std::endl;

  // float und double
  float mein_float = -3.45;
  std::cout << "Meine float Variable " << mein_float << std::endl;

  // Aufgabe: Summe variabler Werte berechnen (float & double)
  std::cout << "---###---" << std::endl;
  std::cout << "Aufgabe: Summe variabler Werte berechnen (float)" << std::endl;
  float mein_erster_float = 4.3;
  float mein_zweiter_float = -2.8;
  float mein_ergebnis_float = mein_erster_float + mein_zweiter_float;
  std::cout << "Ergebnis: " << mein_ergebnis_float << std::endl;

  std::cout << "---###---" << std::endl;
  std::cout << "Aufgabe: Summe variabler Werte berechnen (double)" << std::endl;
  double mein_erster_double = 4.3;
  double mein_zweiter_double = -2.8;
  double mein_ergebnis_double = mein_erster_double + mein_zweiter_double;
  std::cout << "Ergebnis: " << mein_ergebnis_double << std::endl;

  std::cout << "Programmende" << std::endl;
  std::cout << "---###---" << std::endl;
  return 0;
}