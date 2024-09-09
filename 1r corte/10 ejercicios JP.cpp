#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void calculadora() {
    cout << "Primer punto" << endl;

    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
   
    float division;
    if (b != 0) {
        division = static_cast<float>(a) / b;
    } else {
        cout << "Error: Division por cero no permitida." << endl;
        return; 
    }

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "La division es: " << division << endl;
    cout << endl;
}

void temperatura() {
    cout << "Segundo punto" << endl;

    int grados;
    cout << "Inserte su temperatura a convertir: ";
    cin >> grados;
    
    int temperatura = ((grados * 9 / 5) + 32);
    
    cout << "Su temperatura en Fahrenheit es de: " << temperatura << endl;
    cout << endl;
}

void par() {
    cout << "Tercer punto" << endl;

    int num;
    cout << "Ingrese el numero que quiere determinar si es par o impar: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }
    cout << endl;
}

void edad1() {
    cout << "Cuarto punto" << endl;

    int ano_nacimiento;
    cout << "Ingrese su ano de nacimiento: "; 
    cin >> ano_nacimiento;

    int edad_actual = 2024 - ano_nacimiento;

    cout << "Su edad actual es: " << edad_actual << endl;
    cout << endl;
}

void mayor() {
    cout << "Quinto punto" << endl;

    int num1, num2, num3;
    cout << "Ingrese primer numero: "; 
    cin >> num1;
    cout << "Ingrese segundo numero: "; 
    cin >> num2;
    cout << "Ingrese tercer numero: "; 
    cin >> num3;
    
    if (num1 >= num2 && num1 >= num3) { 
        cout << "El numero mayor es: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) { 
        cout << "El numero mayor es: " << num2 << endl;       
    } else { 
        cout << "El numero mayor es: " << num3 << endl; 
    }
    cout << endl;
}

void descuento() {
    cout << "Sexto punto" << endl;

    int precio;
    cout << "Ingrese precio de producto: "; 
    cin >> precio;

    if (precio >= 100) {
        float descuento = precio * 0.15;
        float precio_descuento = precio - descuento;
        cout << "El precio de su producto con el descuento es de: " << precio_descuento << endl;
    } else {
        cout << "El precio de su producto es de: " << precio << endl;
    }
    cout << endl;
}

void promedio() {
    cout << "Septimo punto" << endl;

    int nota1, nota2, nota3;
    cout << "Ingrese su primera nota: "; 
    cin >> nota1;
    cout << "Ingrese su segunda nota: "; 
    cin >> nota2;
    cout << "Ingrese su tercera nota: "; 
    cin >> nota3;

    float promedio = (nota1 + nota2 + nota3) / 3.0;
    
    cout << "El promedio de sus notas es de: " << promedio << endl;
    cout << endl;
}

void juego() {
    cout << "Octavo punto" << endl;

    cout << "Presiona cualquier tecla para empezar el juego: ";
    cin.ignore();
    cin.get();

    int numero_aleatorio = rand() % 10 + 1;

    int adivinanza;
    cout << "Adivina el numero (entre 1 y 10): ";
    cin >> adivinanza;

    while (adivinanza != numero_aleatorio) {
        if (adivinanza < numero_aleatorio) {
            cout << "Tu adivinanza es menor que el numero correcto. Intenta de nuevo!" << endl;
        } else {
            cout << "Tu adivinanza es mayor que el numero correcto. Intenta de nuevo!" << endl;
        }

        cout << "Adivina el numero (entre 1 y 10): ";
        cin >> adivinanza;
    }

    cout << "Felicidades! Adivinaste correctamente. El numero era " << numero_aleatorio << "." << endl;
    cout << endl;
}

void numero() {
    cout << "Noveno punto" << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << i << endl;
    }
    cout << endl;
}

void vocaless() {
    cout << "Decimo punto" << endl;

    cin.ignore();
    string texto;
    cout << "Ingresa una cadena de texto: ";
    getline(cin, texto);

    string vocales = "aeiou";
    int contador = 0;

    for (char letra : texto) {
        char letraLower = tolower(letra);
        if (vocales.find(letraLower) != string::npos) {
            contador++;
        }
    }

    cout << "La cadena contiene " << contador << " vocales." << endl;
}

int main() {
    calculadora();
    temperatura();
    par();
    edad1();
    mayor();
    descuento();
    promedio();
    juego();
    numero();
    vocaless();

    return 0; 
}
