// no ejecutar directamente, es un recordatorio de sintaxis y funciones basicas en c++17
#include <iostream> // etiqueta basica
#include <cmath> // matematica
#include <ctime> // para tiempo actual
#include <iomanip> // biblioteca de formato para salida, no para leer.
#include <vector> // biblioteca de funciones vector 
#include <string> // para trabajar con strings sin errores tipo concatenar y comparar.
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




// functions, void significa que no devueve valor, solo inprime o para modificar variables, puedes usar cualquier tipado. son bloques reusables

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

    std::string neim = "alvenn";
    std::string lastNeim = "qiu";
    std::string result = nombreApellido(neim, lastNeim);
    std::cout << result;




    // VARIABLESSSSSSSSSSSS
    // numeros enteros
    int cero = 0;
    int x = 10;


    // decimales
    double decis = 10.10;
    double mixed = x + cero + first::x;


    // typedefs
    holas a = 'a';
    equisde e = 20;


    // strings
    std::string sapo = "holas ";
    // al agregar [], se convierte en array, obviamente puede ser de numero o string con su tipado corrspondiente. ademas si se le pone valor numerico al parentesis tipo [5], le indicas la cantidad de elementos que tiene que tener el array.
    std::string array[] = {
        "array",
        "otro",
        "otroooo"
    };
    std::string shuxis[] = {83, 65, 72};


    // caracter individual
    char A = 'a';


    // booleanos
    bool message = true;


    // bariables constantes
    const double pi = 1.4765;
    const int three = 3;




    // conversion de tipos por ahora solo veo sirve para numeros para char y de int a double
    char codm = 100;

    int buenas = 8;
    int total = 10;
    double chengji = buenas / (double)total * 100;





    // mini programa de std::cin y cout::cout (prompt y log)
    std::string name;
    int age;

    std::cout << "whats your name?";
    std::cin >> name;
    std::cout << name;
    
    
    
    
    // getLine, es para cin, para que sea un cin capaz de leer todo el contenido escrito con espacios, ejemplo "Juan Hernandez".
    std::getLine(cin, name);
    




    // escogedor de mayor y menor y otras funciones matematicas
    double y = 4;
    double b = 23.23;
    double z;
    z = std::min(y, b);
    z = std::max(y, b);
    z = pow(2, 4); potencia
    z = sqrt(9); cuadrado
    z = abs(3); distancia positi
    z = round(b); redon cercano
    z = floor(b); redon down
    z = ceil(b); redon hacia up




    // if statement
    int edadd = 10;


    if (edadd >= 18) {
        std::cout << "entraste";
    }
    else {
        std::cout << "no entras";
    }




    // switch
      switch() {
      case 1:
      jsjsjsjs;
      break;
      default:
      djdjdj
      break;
   }




    // ternary
    int cinco = 5656;

    cinco >= 100 ? std::cout << "holaszzzz": std::cout << "my dadsss";




    // strings functions
    // parentesis no siempre es parametro, tambien significa ejecucion. //
    .length(); cantidad de caracteres
    .empty(); vacio
    .clear(); limpiar
    .append("@gmail.com"); agregar lo que sea al final
    .at(1); mostrar por indice
    .insert(0, '@'); igual que append pero indice customizado
    .find(''); buscar
    .erase(0, 3); clear pero custom indice
    




    // WHILE // si es false, termina.
    // ejemplo 1
    char continuar = 's';
    while (continuar == 's' || continuar == 'S') {
        cout << "Ejecutando programa..." << endl;
        cout << "¿Deseas continuar? (s/n): ";
        cin >> continuar;
    }
    cout << "Programa terminado" << endl;
    // ejemplo 2 cinquecento
    int dec;
    std::cin >> dec;
    while (dec--) {
    int cqt;
    std::cin >> cqt;
    std::cout << ((cqt + 99) / 100)  * 1<< '\n';
}
    
    // DO WHILE  si es false, igual mostrara 1 vez y termina , si es true, sigue.
    int nammber = 10;
    do {
        std::cout << "Do-while: " << nammber << std::endl;
    } while (nammber < 5);





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
for (int hey = 1; hey < 20; hey++) {
if (hey == 15) {
	break; // continue
}
std::cout << hey << '\n';
}




    // nested loops, un loop dentro de otro. first row, then column.
int column; 
std::cin >> column;
int rows; 
std::cin >> rows;
char karacter; 
std::cin >> karacter;

for (int i = 1; i <= column; i++) {
        for (int j = 1; j <= rows; j++) {
            std::cout << karacter;
};
            std::cout << '\n';

};





    // ramdom number generator no, but close.
    srand(time(0)); // para numeros aleatorios de de segundos desde 1970 hasta hoy. agarran numeros aleatores ahi. si no se pone esta, no importa, pero no tendra aleatorios.

    int num33 = (rand() % 6) + 1;
    std::cout << num33 << '\n';




    // sizeof(), determina el tamanio del tipado, luego lo multiplica por la determinacion de la cantidad de el array, (por ahora solo se array en este caso);

    /*
    examples
    int array[] = {23, 292, 382, 22} // 4bytes(tipado) x 5(elementos) = 20bytes; 
    */

    std::cout << "variable x es de " << sizeof(x) << "bytes" << endl;

    // ultimo std::cout para contar la cantidad de elementos en un array.
    
    std::cout << sizeof(array)/sizeof(array[0]) << '\n';




    // Fill() // rellenar con un value deseado a un rango especificado de un array, tiene 3 argumentos, 
    // el 1 es el variable con la que se trabaja,
    // el 2 es para el valor o variable tipo cantidad,
    // el 3 es para poner el valor con la que se llenara.
    // normalmente sin fill, se tendria que hacer manualmente
    std::string comidas[3] = {pizza, pizza, pizza};
    for(std::string comida : comidas) {
       std::cout << comida << '\n';
    };

    // ahora con fill y mejor tecnica
    const int tamanio = 100;
    std::string foods[tamanio];
    fill(foods, foods + tamanio, "berenjena");
    for(std::string food : foods) {
        std::cout << food;
    };

    // para dividir el contenido en 2 o 3 partes, en esta parte es un poco confuso, pero dandolo facil se explica que si se va agregando un fill, el inicio se cambia por valor dado en la primera parte, y asi sucesivamente hasta la ultima parte que agarra el valor tamanio normalmente. no se si me explique jajaja.
    const int tamanio = 99;
    std::string foods[tamanio];
    fill(foods, foods + (tamanio/3), "berenjena");
    fill(foods + (tamanio/3), foods + (tamanio/3)*2, "frijoles");
    fill(foods + (tamanio/3)*2, foods + tamanio, "tofu");
    for(std::string food : foods) {
        std::cout << food;
    };




    // multidimensional array
    // primer cuadro de row dejarlo vacio por convencion, segundo es de column, poner 3 para que sea 3 elementos por fila.
    std::string dimensioArray[][3] = {{"xbox", "xbox360", "xboxOne"},
                                      {"ps", "ps2", "ps3"},
                                      {"mediapad", "y92019", "nova5t"}};
    // se puede iterar asi, pero es menos practico
    std::cout << dimensioArray[0][0] << " ";
    std::cout << dimensioArray[1][0] << " ";
    std::cout << dimensioArray[2][2] << " ";
    //iteramos asi mejor con nested loop
    int fila = sizeof(dimensioArray)/sizeof(dimensioArray[0]);
    int columna = sizeof(dimensioArray[0])/sizeof(dimensioArray[0][0]);

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            std::cout << dimensioArray[i][j] << "";
        }
        std::cout << '\n';
    };




// Memory adress, basicamente la direccion de un elemento en codigos, para mostarlo se usa &. 
std::string broo = "bro";
std::cout << &broo << '\n';





    // console
    std::cout << "replaced, and estoy probando";
    std::cout << "mirame soy un array y tengo este value " + array[0] << '\n';


    return 0;
};