// no ejecutar directamente, es un recordatorio de sintaxis y funciones basicas en c++17
#include <iostream> // etiqueta basica
#include <vector> // biblioteca de funciones
#include <cmath> // matematica
#include <ctime> // para tiempo actual
#include <iomanip> // biblioteca para cout y cin
using namespace std; // recomendado solo para proyectos pquenos. puede causar muchos bugs.




// global scope, si se quiere aplicar en funciones o en el main pero tienes una var ya dentro igual de nombre, poner =  ::"NombreVariable".

int saiCueco = 2021;




// namespace // para variables repetidas y su uso
namespace first {
    int x = 1;
}
// example std::cout << first::x;




// typedef
typedef char holas;
using equisde = int;




// functions, void significa que no devueve valor, solo inprime o para mod varaibles, puedes usar cualquier tipado. son bloques reusables

void happyBirthday() {

    std::cout << "HappyBirthDayToYou\n";
    std::cout << "HappyBirthDayToYou\n";
    std::cout << "HappyBirthDayToYou" << std::endl;

    // para llamarla solo poner en el main el nombre de este mismo y los parentesis(). tambien se puede poner debajo de main para comodidad. pero se tendria que declarar la funcion primero para luego ponerlo debajo, para trabajar con varibles si eres de los que ponen funciones debajo del bloque main, tendras que declarar nuevamnete los var exustentes dentro de los parametros tanto funcion como declaracion.
}




// return keyword &&
// overloaded functions, funciones con mismo nombre pero con diferentes cantidades de parametros.

string nombreApellido(string op1, string op2) {
    return op1 + op2;
};










int main() {

    happyBirthday();

    string neim = "alvenn";
    string lastNeim = "qiu";
    std::string result = nombreApellido(neim, lastNeim);
    std::cout << result;




    // bases bariables

    int cero = 0;

    int x = 10;

    holas a = 'a';

    equisde e = 20;

    std::string sapo = "holas ";

    std:: string array[] = {
        "array",
        "otro",
        "otroooo"
    };

     std:: string array2[] = {
        "array2",
        "otro2",
        "otroooo2"
    };


    std::cout << "mirame soy un array y tengo este value " + array[0] << '\n';

    double decis = 10.10;

    char A = 'a';

    bool message = true;

    double mixed = x + cero + first::x;




    // bariables constantes
    const double pi = 1.4765;
    const int three = 3;




    // conversion de tipos por ahora solo veo sirve para numeros para char y de int a double
    char codm = 100;

    int buenas = 8;
    int total = 10;
    double chengji = buenas / (double)total * 100;




    // mini programa de cin y cout
    std::string name;
    int age;

    std::cout << "whats your name?";
    std::cin >> name;
    std::cout << name;




    // escogedor de mayor y menor y otras funciones matematicas
    double y = 4;
    double b = 23.23;
    double z;
    //z = std::min(y, b);
    // z = std::max(y, b);
    // z = pow(2, 4); potencia
    // z = sqrt(9); cuadrado
    //z = abs(3); distancia positi
    // z = round(b); redon cercano
    // z = floor(b); redon down
    // z = ceil(b); redon hacia up




    // if statement
    int edadd = 10;


    if (edadd >= 18) {
        std::cout << "entraste";
    }
    else {
        std::cout << "no entras";
    }




    // switch
    /*  switch() {
      case 1:
      jsjsjsjs;
      break;
      default:
      djdjdj
      break;
   }
   */




    // ternary
    int cinco = 5656;

    cinco >= 100 ? std::cout << "holaszzzz": std::cout << "my dadsss";




    // strings functions
    // parentesis no siempre es parametro, tambien significa ejecucion. //
    /*
    .length(); cantidad de caracteres
    .empty(); vacio
    .clear(); limpiar
    .append("@gmail.com"); agregar lo que sea al final
    .at(1); mostrar por indice
    .insert(0, '@'); igual que append pero indice customizado
    .find(''); buscar
    .erase(0, 3); clear pero custom indice
    */




    /* WHILE // si es false, termina.
    1)
    char continuar = 's';
    while (continuar == 's' || continuar == 'S') {
        cout << "Ejecutando programa..." << endl;
        cout << "¿Deseas continuar? (s/n): ";
        cin >> continuar;
    }
    cout << "Programa terminado" << endl;
    2)
    int dec;
    cin >> dec;
    while (dec--) {
    int cqt;
    cin >> cqt;
    cout << ((cqt + 99) / 100)  * 1<< '\n';
}
    //
    // DO WHILE  si es false, igual mostrara 1 vez y termina , si es true, sigue.
    int nammber = 10;
    do {
        cout << "Do-while: " << nammber << endl;
    } while (nammber < 5);
    return 0;
}

*/




    // for loop = declarar variable, condicion y por ultimo ejecucion.
    // and forEach loop

    for (int i = 0; i <= 10; i++) {
        std::cout << "hola mundo\n";
    };

    // niveles para iterar un array
    // level 1 con sizeof()
    for (int j = 0; j < sizeof(array2)/sizeof(std::string); j++) {
        std::cout << array2[j] << '\n' << "lo que estoy horita aaaaaaaa" << '\n';
    };

    // level 2 con foreach loop
    for (std::string arra2 : array2) {
        std::cout << arra2 << '\n';
    };





    // break and continue = BREAK = si se cumplio, se para la loop.  CONTINUE = para saltar lo mencionado y seguir sin ello.

    /*
for (int hey = 1; hey < 20; hey++) {
if (hey == 15) {
	break; // continue
}
std::cout << hey << '\n';
}
*/




    // nested loops, un loop dentro de otro.

    /*
int column; cin >> column;
int rows; cin >> rows;
char karacter; cin >> karacter;

for (int i = 1; i <= column; i++) {
		for (int j = 1; j <= rows; j++) {
			std::cout << karacter;
}
std::cout << '\n';
}
*/




    // ramdom number generator no, but close.

    srand(time(NULL)/*0*/); // para numeros aleatorios de de segundos desde 1970 hasta hoy. agarran numeros aleatores ahi. si no se pone esta, no importa, pero no tendra aleatorios.

    int num33 = (rand() % 6) + 1;
    std::cout << num33 << '\n';




    // sizeof(), determinar el tamanio de un tipado, variable y valores.

    // ultimo std::cout para contar la cantidad de elementos en un array.

    std::cout << "variable x es de " << sizeof(x) << "bytes" << endl;
    std::cout << sizeof(array)/sizeof(std::string) << '\n';











    // console
    std::cout << "rplaced, and estoy probando commit";

    return 0;
};