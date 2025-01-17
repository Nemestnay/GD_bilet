//
// Created by alena on 12.10.22.
//
#include <iostream>
#include <cstring>
using namespace std;

char poezda[] [100] = {
        "Санкт-Петербург,Москва,2022-10-13T05:30,2022-10-13T09:18,751А,1743 руб.",
        "Санкт-Петербург,Москва,2022-10-13T06:40,2022-10-13T10:45,755А,1743 руб.",
        "Санкт-Петербург,Москва,2022-10-13T09:00,2022-10-13T13:03,759А,2850 руб.",
        "Санкт-Петербург,Москва,2022-10-13T09:10,2022-10-13T13:11,761А,1855 руб.",
        "Санкт-Петербург,Москва,2022-10-13T12:44,2022-10-13T16:44,767А,2081 руб.",
        "Санкт-Петербург,Москва,2022-10-13T12:54,2022-10-13T16:54,769А,2081 руб.",
        "Санкт-Петербург,Москва,2022-10-13T14:38,2022-10-13T18:37,771А,3039 руб.",
        "Санкт-Петербург,Москва,2022-10-13T16:38,2022-10-13T20:43,775А,2081 руб.",
        "Санкт-Петербург,Москва,2022-10-13T16:48,2022-10-13T20:53,777А,2165 руб.",
        "Санкт-Петербург,Москва,2022-10-13T19:00,2022-10-13T23:05,779А,2165 руб.",
        "Санкт-Петербург,Москва,2022-10-13T19:10,2022-10-13T23:15,781А,3165 руб.",
        "Москва,Санкт-Петербург,2022-10-13T05:53,2022-10-13T09:55,754А,2081 руб.",
        "Москва,Санкт-Петербург,2022-10-13T06:50,2022-10-13T11:00,756А,2047 руб.",
        "Москва,Санкт-Петербург,2022-10-13T09:35,2022-10-13T13:38,760А,2988 руб.",
        "Москва,Санкт-Петербург,2022-10-13T09:45,2022-10-13T13:48,762А,2047 руб.",
        "Москва,Санкт-Петербург,2022-10-13T13:30,2022-10-13T17:55,768А,3039 руб.",
        "Москва,Санкт-Петербург,2022-10-13T13:40,2022-10-13T18:05,770А,2081 руб.",
        "Москва,Санкт-Петербург,2022-10-13T15:30,2022-10-13T19:27,772А,2165 руб.",
        "Москва,Санкт-Петербург,2022-10-13T15:40,2022-10-13T19:37,774А,2081 руб.",
        "Москва,Санкт-Петербург,2022-10-13T17:30,2022-10-13T21:32,776А,2251 руб.",
        "Москва,Санкт-Петербург,2022-10-13T17:40,2022-10-13T21:53,778А,2251 руб.",
        "Москва,Санкт-Петербург,2022-10-13T20:45,2022-10-13T00:48,784А,3165 руб."
};

char ms[][6] [100] {
        {"Санкт-Петербург","Москва","2022-10-13T05:30","2022-10-13T09:18","751А","1743 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T06:40","2022-10-13T10:45","755А","1743 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T09:00","2022-10-13T13:03","759А","2850 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T09:10","2022-10-13T13:11","761А","1855 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T12:44","2022-10-13T16:44","767А","2081 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T12:54","2022-10-13T16:54","769А","2081 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T14:38","2022-10-13T18:37","771А","3039 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T16:38","2022-10-13T20:43","775А","2081 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T16:48","2022-10-13T20:53","777А","2165 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T19:00","2022-10-13T23:05","779А","2165 руб."},
        {"Санкт-Петербург","Москва","2022-10-13T19:10","2022-10-13T23:15","781А","3165 руб."},

        {"Москва","Санкт-Петербург","2022-10-13T05:53","2022-10-13T09:55","754А","2081 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T06:50","2022-10-13T11:00","756А","2047 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T09:35","2022-10-13T13:38","760А","2988 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T09:45","2022-10-13T13:48","762А","2047 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T13:30","2022-10-13T17:55","768А","3039 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T13:40","2022-10-13T18:05","770А","2081 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T15:30","2022-10-13T19:27","772А","2165 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T15:40","2022-10-13T19:37","774А","2081 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T17:30","2022-10-13T21:32","776А","2251 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T17:40","2022-10-13T21:53","778А","2251 руб."},
        {"Москва","Санкт-Петербург","2022-10-13T20:45","2022-10-13T00:48","784А","3165 руб."}
};


void poezd(char *people) {
    time_t now = time(0);
    int y = rand() % 7;
    time_t onWeek = now + y * 60 * 24 * 60;
    tm *ltm = localtime(&onWeek);
    int year = 1900 + ltm->tm_year;
    int month = 1 + ltm->tm_mon;
    int day =  ltm->tm_mday;



    int x = abs(rand() * 13) % 22;
    for (int i=0; i < 6; i++) {
        if (i == 2 or i == 3) {
            ms[x][i][3] = char(year % 10 + 48);
            ms[x][i][2] = char((year / 10) % 10 + 48);
            ms[x][i][1] = char((year / 100) % 10 + 48);
            ms[x][i][0] = char(year / 1000  + 48);
            ms[x][i][5] = char(month / 10  + 48);
            ms[x][i][6] = char(month % 10  + 48);
            ms[x][i][8] = char(day / 10  + 48);
            ms[x][i][9] = char(day % 10  + 48);
        }
        strcat(people, ms[x][i]);
        strcat(people,",");
    }
}