#include <iostream>

void variablenAusgabe(int parameter){
  std::cout << "Ausgabe der Variable " << parameter << std::endl;
}

void ausgabeMeinArray(int anzahl,int array[]){
  for (int index = 0; index < anzahl; index++)
  {
    std::cout << "index " << index << ": " << array[index] << std::endl;
  }
}

int komplexeberechnung(int var_1, int var_2){
  int neue_var = var_1 * 5;
  int resultat = neue_var * var_2;
  return resultat;
}

float floatFunktion(float float_1, float float_2){
  float ergebnis = float_1 * (float_2 + 1);
  return ergebnis;
}

bool boolFunktion(int int_1, int int_2, int int_3){
  if ((int_1 < int_2) && (int_2 < int_3))
  {return true;}
  else
  {return false;}
}

int main()
{
  // --- Kapitel 4 ---
  // Einfuehrung
  std::cout << "---###---" << std::endl;
  std::cout << "Kapitel 4: Funktionen" << std::endl;

  int meine_var = 5;
  variablenAusgabe(meine_var);

  int var_1 = 4;
  int var_2 = 3;

  int ergebnis = komplexeberechnung(var_1, var_2);
  variablenAusgabe(ergebnis);

  // Challenge 1: void-Funktion
  std::cout << "---###---" << std::endl;
  std::cout << "Challenge 1: void-Funktion" << std::endl;

  int anzahlArray = 7;
  //int testArray[anzahlArray] = {};
  int testArray[7] = {};
  ausgabeMeinArray(anzahlArray, testArray);

  // Challenge 2: float-Funktion
  std::cout << "---###---" << std::endl;
  std::cout << "Challenge 2: float-Funktion" << std::endl;

  float testFloat_1 = 5.7;
  float testFloat_2 = 4.2;
  float float_ergebnis = floatFunktion(testFloat_1, testFloat_2);
  std::cout << "Float-Ergebnis: " << float_ergebnis << std::endl;

  // Challenge 3: bool-Funktion
  std::cout << "---###---" << std::endl;
  std::cout << "Challenge 3: bool-Funktion" << std::endl;

  int bool_1 = 3;
  int bool_2 = 5;
  int bool_3 = 7;
  bool boolTest = boolFunktion(bool_1, bool_2, bool_3);
  std::cout << "Wahr oder falsch? " << boolTest << std::endl;

  bool_1 = 6;
  boolTest = boolFunktion(bool_1, bool_2, bool_3);
  std::cout << "Wahr oder falsch? " << boolTest << std::endl;

  bool_2 = 8;
  boolTest = boolFunktion(bool_1, bool_2, bool_3);
  std::cout << "Wahr oder falsch? " << boolTest << std::endl;

  bool_3 = 9;
  boolTest = boolFunktion(bool_1, bool_2, bool_3);
  std::cout << "Wahr oder falsch? " << boolTest << std::endl;

  std::cout << "---###---" << std::endl;
  std::cout << "Programmende" << std::endl;
  std::cout << "---###---" << std::endl;
  return 0;
}