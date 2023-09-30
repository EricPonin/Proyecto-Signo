#include <iostream>
#include <string>
using namespace std;

int main(){
    int dia, mes;
    string signo = "Fecha INCORRECTA, intentelo denuevo", respuesta;    //A la variable signo se le asigno por defecto un mensaje de error para mostrar si se ingresan datos erroneos
       
    cout << "Ingrese su dia de nacimiento: "; cin >> dia;
    cout << "Ingrese su mes de nacimiento: "; cin >> mes;

    switch (mes)                              //Segun el mes ingresado por el usuario busca el intervalo de dias que corresponde a su signo
    {
    case 1: if ((dia > 0)&&(dia < 21)){
                signo = "capricornio";
              }
            if ((dia > 21)&&(dia < 31)){
                signo = "Acuario";
              }
             break;
    case 2: if ((dia > 0)&&(dia < 21)){
                signo = "Acuario";
              }
            if ((dia > 21)&&(dia < 29)){
                signo = "Picis";
              }
             break;
    case 3: if ((dia > 0)&&(dia < 21)){
                signo = "Picis";
              }
            if ((dia > 21)&&(dia < 31)){
                signo = "Aries";
              }
             break;
    case 4: if ((dia > 0)&&(dia < 20)){
                signo = "Aries";
              }
            if ((dia > 20)&&(dia < 31)){
                signo = "Tauro";
              }
             break;
    case 5: if ((dia > 0)&&(dia < 21)){
                signo = "Tauro";
              }
            if ((dia > 20)&&(dia < 32)){
                signo = "Geminis";
              }
             break;
    case 6: if ((dia > 0)&&(dia < 22)){
                signo = "Geminis";
              }
            if ((dia > 21)&&(dia < 31)){
                signo = "Cancer";
              }
             break;
    case 7: if ((dia > 0)&&(dia < 23)){
                signo = "Cancer";
              }
            if ((dia > 22)&&(dia < 32)){
                signo = "Leo";
              }
             break;
    case 8: if ((dia > 0)&&(dia < 24)){
                signo = "Leo";
              }
            if ((dia > 23)&&(dia < 32)){
                signo = "Virgo";
              }
             break;
    case 9: if ((dia > 0)&&(dia < 25)){
                signo = "Virgo";
              }
            if ((dia > 21)&&(dia < 31)){
                signo = "Libra";
              }
             break;
    case 10: if ((dia > 0)&&(dia < 23)){
                signo = "Libra";
              }
            if ((dia > 22)&&(dia < 31)){
                signo = "Escorpio";
              }
             break;
    case 11: if ((dia > 0)&&(dia < 23)){
                signo = "Escorpio";
              }
            if ((dia > 22)&&(dia < 31)){
                signo = "Sagitario";
              }
             break;
    case 12: if ((dia > 0)&&(dia < 22)){
                signo = "Sagitario";
              }
            if ((dia > 21)&&(dia < 32)){
                signo = "Capricornio";
              }
             break;
    
    default:
          cout << "Mes incorrecto" << endl;
        break;
    }
    cout << "Su signo del sodiaco es: " << signo << endl;    //Muestra por consola el signo del usuario.

return 0;
}