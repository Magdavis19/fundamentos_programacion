#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

void primo() {
    //Desarrolla un algoritmo que, dado un numero entero positivo, determine si es un numero primo

    int numero;
    cout << "Ingrese un numero para comprobar si es primo o no: ";
    cin >> numero;

    if (numero < 2) {
        cout << numero << " no es primo" << endl;
    } else {
        bool es_primo = true;

        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                es_primo = false;
                break;
            }
        }

        if (es_primo) {
            cout << numero << " es primo" << endl;
        } else {
            cout << numero << " no es primo" << endl;
        }
    }
}

void dieznumeros() {
    //Escribe un algoritmo que calcule el promedio de una lista de 10 numeros enteros ingresados por el usuario
    
    int numeros[10];
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    float promedio = suma / 10.0;
    cout << "El promedio de los 10 numeros es: " << promedio << endl;
}

void tienda() {
    //Implementa un programa en C++ que simule un sistema de control de inventarios de una tienda
    //El programa debe: Permitir ingresar productos con su nombre, cantidad y precio. Permitir actualizar el inventario y calcular el total de la venta
    
   
 
    cout << "Bienvenido a su tienda virtual" << endl;

    vector<string> productos;
    float total = 0;

    while (true) {
        string nombre;
        cout << "Ingrese el nombre del producto (o 'q' para terminar): ";
        cin >> nombre;

        if (nombre == "q" || nombre == "Q") {
            break;
        }

        int cantidad;
        float precio;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        cout << "Ingrese el precio: ";
        cin >> precio;

        float subtotal = cantidad * precio;
        total += subtotal;

        productos.push_back(nombre + ": " + to_string(cantidad) + " x $" + to_string(precio) + " = $" + to_string(subtotal));
    }

    cout << "\nResumen de compra:" << endl;
    for (const string& producto : productos) {
        cout << producto << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal a pagar: $" << total << endl;
}

void gestion_estudiantes() {
	//Desarrolla un programa en C++ que gestione las calificaciones de un grupo de estudiantes.
	//El programa debe: Permitir ingresar el nombre del estudiante y sus calificaciones en tres asignaturas
	//Calcular el promedio de cada estudiante y mostrar si estan aprobados o no (promedio >= 3.0)

    vector<string> estudiantes;
    
    while (true) {
        string nombre;
        cout << "Ingrese el nombre del estudiante (o 'fin' para terminar): ";
        cin >> nombre;

        if (nombre == "fin" || nombre == "FIN") {
            break;
        }

        float suma = 0;
        for (int i = 0; i < 3; i++) {
            float calificacion;
            cout << "Ingrese la calificación de la asignatura " << i + 1 << ": ";
            cin >> calificacion;
            suma += calificacion;
        }

        float promedio = suma / 3.0;
        string estado = (promedio >= 3.0) ? "Aprobado" : "Reprobado";

        estudiantes.push_back(nombre + ": Promedio " + to_string(promedio) + ", " + estado);
    }

    cout << "\nResultados:" << endl;
    for (const string& estudiante : estudiantes) {
        cout << estudiante << endl;
    }
}

int main() {
    primo();
    dieznumeros();
    tienda();
    gestion_estudiantes();
    return 0;
}
