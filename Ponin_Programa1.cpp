#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
    int dia, mes;
    string signo  = "", respuesta;
    float invitados, total_invitados;
    bool controlmes = true, controlrta = false;
    cout << "Ingrese su dia de nacimiento: "; cin >> dia;
    cout << "Ingrese su mes de nacimiento: "; cin >> mes;

    if ((mes < 1) || (mes > 12) || (dia < 1) || (dia > 31)){                    //Controla que el dia y el mes esten dentro del rango posible 
           cout << "Fecha INCORRECTA, Intentelo denuevo";                       //Si los datos estan fuera del rango muestra un cartel y termino el programa
           return 0;
     } else if ((mes == 2) && (dia > 29)) {                                     //Se controla que el mes dos no sobrepase la cantidad de 29 dias
                cout << "Cantidad de dias erroneo para dicho Mes";
                return 0;
     } else if (((mes == 4)||(mes == 6)||(mes == 9)||(mes == 11)) && (dia > 30)) { //Se controla que los meses que poseen 30 dias no sobrepasen ese numero
                cout << "Cantidad de dias erroneo para dicho Mes";
                return 0;
     } else if (((mes == 1) ||(mes == 3) ||(mes == 5) ||(mes == 7)||(mes == 8) ||(mes == 10)|| (mes == 12)) && (dia > 31)){ //Se controla que los meses que poseen 31 dias no sobrepasen ese numero
                cout << "Cantidad de dias erroneo para dicho Mes";
                return 0;
     }

    if ((mes == 1) && (dia >= 21) || (mes == 2) && (dia <= 19)){                 // Para cada signo controla sus rangos de mes y dias y asigno a la variable signo el que corresponde
         signo = "Acuario";
    }
    if ((mes == 2) && (dia >= 20) || (mes == 3) && (dia <= 20)){
         signo = "Picis";
    }
    if ((mes == 3) && (dia >= 21) || (mes == 4) && (dia <= 19)){
         signo = "Aries";
    }
    if ((mes == 4) && (dia >= 20) || (mes == 5) && (dia <= 20)){
         signo = "Tauro";
    }
    if ((mes == 5) && (dia >= 21) || (mes == 6) && (dia <= 21)){
         signo = "Geminis";
    }
    if ((mes == 6) && (dia >= 22) || (mes == 7) && (dia <= 22)){
         signo = "Cancer";
    }
    if ((mes == 7) && (dia >= 23) || (mes == 8) && (dia <= 23)){
         signo = "Leo";
    }
    if ((mes == 8) && (dia >= 24) || (mes == 9) && (dia <= 22)){
         signo = "Virgo";
    }
    if ((mes == 9) && (dia >= 23) || (mes == 10) && (dia <= 22)){
         signo = "Libra";
    }
    if ((mes == 10) && (dia >= 23) || (mes == 11) && (dia <= 22)){
         signo = "Escorpio";
    }
    if ((mes == 11) && (dia >= 23) || (mes == 12) && (dia <= 21)){
         signo = "Sagitario";
    }
    if ((mes == 12) && (dia >= 22) || (mes == 1) && (dia <= 20)){
         signo = "Capricornio";
    }
    cout << "Tu Signo es: " << signo << endl;                                                 // Muestro por pantalla el signo

    cout << "Te Gusta Festejar tu Cumpleaños? :(si/no)"; cin >> respuesta;

    if ((respuesta == "Si")||(respuesta == "sI")||(respuesta == "si")||(respuesta == "SI")){ // Verifico si la respuesta ingresada corresponde con las conbinaciones posibles de "si"
        cout << "Que bueno!!" << endl;
        controlrta = true;                                                                   //Modifico la variable de control de respuesta para no mostrar el cartel de ERROR

     }
     if ((respuesta == "No")||(respuesta == "nO")||(respuesta == "no")||(respuesta == "NO")){ // Verifico si la respuesta ingresada corresponde con las conbinaciones posibles de "no"
         cout << "Que Lastima" << endl;
         controlrta = true;                                                                    //Modifico la variable de control de respuesta para no mostrar el cartel de ERROR
     } 
     
     if (controlrta == false)                                                                  //Si la variable de control es falsa muestra el cartel de ERROR
           cout << "Respuesta incorrecta, intentelo nuevamente! Solo se permite si/no" << endl; 

    cout << "Cuantas personas vas a invitar a tu cumpleaños? :"; cin >> invitados;

    total_invitados = round(sqrt(pow(invitados,4)));

    cout << "La raiz cuadrada de invitados a elevados a la cuarta redondeado es: " << total_invitados;

   
    return 0;
}

