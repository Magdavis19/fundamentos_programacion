#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <cctype>    

using namespace std;

void tipo_triangulo() {
	//o	Desarrolla un programa en C++ que determine el tipo de triángulo (equilátero, isósceles o escaleno) dado el valor de sus tres lados ingresados por el usuario.
  
    float lado1, lado2, lado3;

    cout << "Ingrese el valor del primer lado: ";
    cin >> lado1;
    cout << "Ingrese el valor del segundo lado: ";
    cin >> lado2;
    cout << "Ingrese el valor del tercer lado: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "El triangulo es equilatero" << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "El triangulo es isosceles" << endl;
    } else {
        cout << "El triangulo es escaleno" << endl;
    }
}

void impuesto() {
	//o	Escribe un programa que calcule el impuesto sobre la renta de una persona basado en su ingreso anual. El programa debe aplicar diferentes tasas de impuestos dependiendo de la cantidad ingresada, utilizando sentencias if-then-else.
  
   float ingreso, impuesto_anadido, impuesto_total;

    cout << "Inserte su ingreso anual: ";
    cin >> ingreso;

    if (ingreso <= 10000) {
        cout << "Su impuesto es de un 5%" << endl;
        impuesto_anadido = ingreso * 0.05;
    } else if (ingreso <= 30000) {
        cout << "Su impuesto es de un 15%" << endl;
        impuesto_anadido = ingreso * 0.15;
    } else if (ingreso <= 60000) {
        cout << "Su impuesto es de un 30%" << endl;
        impuesto_anadido = ingreso * 0.30;
    } else {
        cout << "Su impuesto es de un 45%" << endl;
        impuesto_anadido = ingreso * 0.45;
    }

    impuesto_total = ingreso - impuesto_anadido;
    cout << "El impuesto anadido es de: " << impuesto_anadido << endl;
    cout << "El impuesto total que debe pagar es de: " << impuesto_total << endl;
}

void dia_semana() {
	//o	Crea un programa en C++ que convierta un número del 1 al 7 en el día de la semana correspondiente (1 para Lunes, 2 para Martes, etc.). Utiliza la sentencia switch para implementar esta funcionalidad.
	
    int numero;

    cout << "Ingrese un numero del 1 al 7" << endl;
    cout << "El numero: ";
    cin >> numero;

    switch (numero) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miercoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sabado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default: cout << "Error, el numero no corresponde a ningun dia de la semana" << endl; break;
    }
}

void nota() {
	//o	Desarrolla un programa que reciba una calificación numérica (entre 0 y 100) y la convierta en una calificación en letras (A, B, C, D, F) usando una sentencia switch.
//o	Define rangos de notas para cada letra (por ejemplo, 90-100 para A, 80-89 para B, etc.) y asegúrate de manejar correctamente cualquier valor fuera del rango permitido.

    int nota;

    cout << "Ingrese su nota: ";
    cin >> nota;

    if (nota <= 100 && nota >= 90) {
        cout << "Su nota es una A" << endl;
    } else if (nota <= 89 && nota >= 80) {
        cout << "Su nota es una B" << endl;
    } else if (nota <= 79 && nota >= 70) {
        cout << "Su nota es una C" << endl;
    } else if (nota <= 69 && nota >= 60) {
        cout << "Su nota es una D" << endl;
    } else if (nota <= 59 && nota >= 0) {
        cout << "Su nota es una F" << endl;
    } else {
        cout << "Error, la nota que dio no es valida" << endl;
    }
}

void costo_envio() {
	//o	Crea un programa que calcule el costo de envío de un paquete basado en su peso y destino. Usa estructuras de selección anidadas para determinar el costo. Considera diferentes rangos de peso (por ejemplo, menos de 1 kg, entre 1 y 5 kg, más de 5 kg) y diferentes zonas de destino (nacional, internacional).
	
    int peso;
    string destino;
    int pagar = 0, pagar2 = 0, total;

    cout << "Ingrese el peso del paquete en kg: ";
    cin >> peso;

    if (peso <= 10) {
        cout << "Usted debera pagar 5000 adicional" << endl;
        pagar = 5000;
    } else if (peso <= 50) {
        cout << "Usted debera pagar 10000 adicional" << endl;
        pagar = 10000;
    } else {
        cout << "Usted debera pagar 15000 adicional" << endl;
        pagar = 15000;
    }

    cout << "Ingrese el destino del paquete (nacional/internacional): ";
    cin.ignore(); 
    getline(cin, destino);

    if (destino == "nacional") {
        cout << "Usted debera pagar 20000 adicional" << endl;
        pagar2 = 20000;
    } else {
        cout << "Usted debera pagar 30000 adicional" << endl;
        pagar2 = 30000;
    }

    total = pagar + pagar2;
    cout << "El total a pagar es de: " << total << endl;
}

void evaluar_candidato() {
	
	//o	Escribe un programa que evalúe a los candidatos para un puesto de trabajo en función de tres criterios: nivel de experiencia (en años), nivel educativo (secundaria, técnico, universitario), y habilidades (certificación en competencias específicas). Utiliza estructuras de selección anidadas para decidir si un candidato califica para el puesto, es rechazado, o está en consideración.
	
    cout << "Evaluacion de candidatos para el puesto de trabajo" << endl;

    int experiencia;
    string nivel_educativo;
    string habilidades_certificadas;

    cout << "Ingrese los anos de experiencia: ";
    cin >> experiencia;
    cin.ignore(); 

    cout << "Ingrese el nivel educativo (secundaria, tecnico, universitario): ";
    getline(cin, nivel_educativo);
 
    transform(nivel_educativo.begin(), nivel_educativo.end(), nivel_educativo.begin(), ::tolower);

    cout << "¿Tiene certificacion en competencias especificas? (si/no): ";
    getline(cin, habilidades_certificadas);

    transform(habilidades_certificadas.begin(), habilidades_certificadas.end(), habilidades_certificadas.begin(), ::tolower);

    if (experiencia >= 5) {
        if (nivel_educativo == "universitario") {
            if (habilidades_certificadas == "si") {
                cout << "Califica para el puesto." << endl;
            } else {
                cout << "Esta en consideracion." << endl;
            }
        } else if (nivel_educativo == "tecnico") {
            cout << "Esta en consideracion." << endl;
        } else {
            cout << "Rechazado debido al nivel educativo." << endl;
        }
    } else if (experiencia >= 3) {
        if (nivel_educativo == "universitario" && habilidades_certificadas == "si") {
            cout << "Esta en consideracion." << endl;
        } else {
            cout << "Rechazado por falta de experiencia o habilidades certificadas." << endl;
        }
    } else {
        cout << "Rechazado por falta de experiencia." << endl;
    }
}

void gestor_ventas() {
	//o	Desarrolla un programa en C++ que simule un sistema básico de gestión de ventas para una tienda. El programa debe permitir al usuario:
	//Ingresar la cantidad y el precio de varios productos.
	//Calcular el total de la venta.
	//Aplicar descuentos basados en el monto total de la compra (por ejemplo, un 5% de descuento para compras mayores a 100 unidades monetarias, 10% para compras mayores a 200, etc.).
	//Utiliza estructuras condicionales if-then-else y switch para implementar la lógica de los descuentos y para manejar diferentes tipos de productos y precios.
	//Muestra un resumen detallado de la venta, incluyendo la lista de productos comprados, el total bruto, el descuento aplicado, y el total neto.

    vector<string> ventas;
    float total = 0, descuento = 0, descuentofinal = 0;

    cout << "Bienvenido al gestor de tiendas" << endl;

    while (true) {
        string nombre_producto;
        int cantidad;
        float precio;

        cout << "Ingrese el nombre del producto (o 'q' para finalizar): ";
        cin >> nombre_producto;

        if (nombre_producto == "q") {
            break;
        }

        cout << "Ingrese la cantidad del producto: ";
        cin >> cantidad;
        cout << "Ingrese el precio del producto: ";
        cin >> precio;

        float acumulador = cantidad * precio;
        total += acumulador;

        if (total >= 200) {
            descuento = total * 0.10;
            descuentofinal = total - descuento;
            cout << "El descuento es del 10%" << endl;
        } else if (total >= 100) {
            descuento = total * 0.05;
            descuentofinal = total - descuento;
            cout << "El descuento es del 5%" << endl;
        } else {
            descuento = 0;
            descuentofinal = total;
        }

        ventas.push_back(nombre_producto + ": " + to_string(cantidad) + " x $" + to_string(precio) + " = $" + to_string(acumulador));
    }

    cout << "\nResumen de compra:" << endl;
    for (const string& venta : ventas) {
        cout << venta << endl;
    }

    cout << "\nTotal antes del descuento: $" << total << endl;
    cout << "Total a pagar despues del descuento: $" << descuentofinal << endl;
}

int main() {
    tipo_triangulo();
    impuesto();
    dia_semana();
    costo_envio();
    evaluar_candidato();
    gestor_ventas();
    return 0;
}

