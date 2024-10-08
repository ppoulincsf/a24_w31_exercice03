#include "pch.h"
#include <iostream>
#include <chrono>
#include <algorithm>
#include "../Code/Util.h" 

int main()
{
  // Initisation du tableau
  std::cout << "Initialisation du tableau avec des valeurs aléatoires ...";
  const unsigned int NB_ELEMENTS = 100;
  int* tab1 = new int[NB_ELEMENTS];
  int* tab2 = new int[NB_ELEMENTS];
  for (unsigned int i = 0; i < NB_ELEMENTS; i++)
  {
    tab1[i] = rand();
    tab2[i] = tab1[i];
  }
  std::cout << "fin" << std::endl;

  std::cout << "Début du tri avec le BubbleSort ..." << std::endl;
  auto start = std::chrono::high_resolution_clock::now();
  Util::bubbleSort(tab1, NB_ELEMENTS);
  auto end = std::chrono::high_resolution_clock::now();
  std::cout << "Fin du tri avec le BubbleSort ..." << std::endl;

  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  std::cout << "Temps d'execution du tri a bulle: " << duration.count() << " microsecondes" << std::endl;

  std::cout << "Début du tri avec le QuickSort ..." << std::endl;
  start = std::chrono::high_resolution_clock::now();
  std::sort(tab2, tab2 + NB_ELEMENTS);
  end = std::chrono::high_resolution_clock::now();
  std::cout << "Fin du tri avec le QuickSort ..." << std::endl;
  duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  std::cout << "Temps d'execution du tri rapide: " << duration.count() << " microsecondes" << std::endl;
  system("pause");

  delete[] tab1;
  delete[] tab2;
}
