#include <iostream>
#include "Header1.h"
#include <fstream>
#include <time.h>
using namespace std;

void generation(int count) {
    fstream file;
    file.open( "text.xls", std::ios::in | std::ios::out | std::ios::trunc);
    file << "ФИО,Паспортные данные,Откуда,Куда,Дата отъезда,Дата приезда,Рейс,Стоимость"<< endl;
    int c = rand(), d = rand();
    for (int i = 1; i <= count; i++){
        char people_list[1000] = "";
        srand(i);
        names(people_list);
        pasports(people_list, (i+c) % 1000000);
        poezd(people_list);
        file << people_list<< endl;
    }
    file.close();

}



int main() {
    generation(10000);
    return 0;
}
