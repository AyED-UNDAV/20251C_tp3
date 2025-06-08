#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <cstring> // strcat

using namespace std;

const int FILAS = 5;
const int COLUMNAS = 10;

void obtenerPuntajesRendimiento(int matriz[FILAS][COLUMNAS])
{
    // Inicializa la semilla para generar números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < FILAS; ++i)
    {
        for (int j = 0; j < COLUMNAS; ++j)
        {
            matriz[i][j] = std::rand() % 10 + 1; // Números del 1 al 10
        }
    }
}
