#include <iostream>
#include "Table.h"

int main() {

    setlocale(LC_ALL, "Rus");
   
    Table <double> T1(7, 7); //создаем объект T1 размером 7х7
   
    T1.printArr(); //печатаем объект T1
 
    T1.getSize(); //смотрим размер объекта T1

    try {
        //заполняем объект T1
        T1(0, 0) = 3.3;
        T1(1, 1) = 7.4;
        T1(2, 2) = 9.5;
        T1(5, 4) = 10.6;
        T1[5][5] = 99;
        T1[5][6] = 88;
 
        T1.printArr(); //печатаем объект T1

        std::cout << T1(1, 1) << "\n"; //доступ к элементам объекта T1 разными операторами () и []
        std::cout << T1[5][5] << "\n";
   
        Table<double> t1(2, 3); //создаем объекты t1 и t2 размером 2х3
        Table<double> t2(2, 3);

        t2(0, 0) = 999.99; //заполняем объект t2
        t2(1, 2) = 888.88;
        t2(1, 1) = 777.77;

        std::cout << "\nОбъект t1\n";
        t1.printArr();

        std::cout << "\nОбъект t2\n";
        t2.printArr();
     
        t1 = t2; //копируем объект t2 в t1

        std::cout << "\nОбъект t1\n";
        t1.printArr();

        std::cout << "\nОбъект t2\n";
        t2.printArr();
  
        Table<double> t3(t1);  //Копируем объект t1 в t3, создавая t3
        std::cout << "\nОбъект t3\n";
        t3.printArr();
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    };

    return 0;
};