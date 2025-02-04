#include <iostream>

int main()
{
  // --- Kapitel 3 ---
  // Einfuehrung
  std::cout << "---###---" << std::endl;
  std::cout << "Einfuehrung" << std::endl;
  float variable_1 = 5.7;
  //float variable_1 = 7.7;
  float variable_2 = 6.0;
  float variable_3 = 7.4;
  //float variable_3 = 5.4;

  std::cout << "if 1" << std::endl;
  if ((variable_1 < variable_2) && (variable_2 < variable_3))
  {
      std::cout << "IF Kondition ist erfolgreich" << std::endl;
  }

  std::cout << "if 2" << std::endl;
  variable_1 = 5.7;
  variable_2 = 6.0;
  variable_3 = 5.4;
  if ((variable_1 < variable_2) || (variable_2 < variable_3))
  {
    std::cout << "IF Kondition ist erfolgreich" << std::endl;
  }

  std::cout << "if 3" << std::endl;
  variable_1 = 5.7;
  variable_2 = 6.0;
  variable_3 = 5.4;
  if ((variable_1 < variable_2) && (!(variable_2 < variable_3)))
  {
    std::cout << "IF Kondition ist erfolgreich" << std::endl;
  }

  // if-else
  std::cout << "---###---" << std::endl;
  std::cout << "Einfuehrung: if-else" << std::endl;
  //variable_1 = 5.7;
  variable_1 = 6.7;
  variable_2 = 6.0;
  variable_3 = 4.3;
  if (variable_1 < variable_2)
  {
    std::cout << "IF Kondition ist erfolgreich" << std::endl;
  }
  else
  {
    std::cout << "ELSE Pfad wird ausgeführt" << std::endl;
  }

  // if-else
  std::cout << "---###---" << std::endl;
  std::cout << "Einfuehrung: if - else if - else" << std::endl;
  variable_1 = 6.7;
  variable_2 = 6.0;
  //variable_3 = 4.3;
  variable_3 = 7.3;
  if (variable_1 < variable_2)
  {
    std::cout << "IF Kondition ist erfolgreich" << std::endl;
  }
  else if (variable_1 > variable_3)
  {
    std::cout << "ELSE IF Pfad wird ausgeführt" << std::endl;
  }
  else
  {
    std::cout << "ELSE Pfad wird ausgeführt" << std::endl;
  }

  // for
  std::cout << "---###---" << std::endl;
  std::cout << "Einfuehrung: for" << std::endl;

  for (int index = 0; index < 3; index++)
  {
    std::cout << "Wert des Index: " << index << std::endl;
  }

  int array[5] = {};
  for (int index = 0; index < 5; index++)
  {
    array[index] = index * 2;
  }

  for (int index = 0; index < 5; index++)
  {
    std::cout << "index " << index << ": " << array[index] << std::endl;
  }

  // while
  std::cout << "---###---" << std::endl;
  std::cout << "Einfuehrung: while" << std::endl;

  int var = 2;
  while (var < 20)
  {
    /* code */
    std::cout << "Variable: " << var << std::endl;

    // Verdopplung der Variable
    var = var * 2;
  }
  
  // Aufgabe 1:
  std::cout << "---###---" << std::endl;
  std::cout << "Aufgabe 1" << std::endl;
  int array_a1[5] = {};
  for (int index = 0; index < 5; index++)
  {
    array_a1[index] = index * 3;
  }

  for (int index = 0; index < 5; index++)
  {
    if (array_a1[index] >= 6)
    {
      std::cout << "index " << index << ": " << array_a1[index] << std::endl;
    }
  }

  // Aufgabe 2:
  std::cout << "---###---" << std::endl;
  std::cout << "Aufgabe 2" << std::endl;

  int var_1 = 10;
  int var_2 = 2;

  while (var_2 <= var_1)
  {
    /* code */
    std::cout << "Variable 1: " << var_1 << std::endl;
    std::cout << "Variable 2: " << var_2 << std::endl;

    var_1 = var_1 + 1;
    var_2 = var_2 + 2;
  }
  

  std::cout << "---###---" << std::endl;
  std::cout << "Programmende" << std::endl;
  std::cout << "---###---" << std::endl;
  return 0;
}