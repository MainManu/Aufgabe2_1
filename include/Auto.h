#ifndef AUTO_H
#define AUTO_H
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



class Auto
{
    public:

        Auto(){
            modell = (char*)malloc(sizeof(char)*2);
            strcpy(modell," ");
            leistung = 0;
            anzTueren = 0;
        }

        Auto(char* modell, int anzTueren, int leistung){
            setAnzTueren(anzTueren);
            setLeistung(leistung);
            setModell(modell);
        }

        ~Auto(void){
            if(modell!= nullptr){
                free(modell);
            }
        }

        void setAnzTueren(int newAnzTueren){
            anzTueren = newAnzTueren;
        }

        int getAnzTueren(void)const{
            return anzTueren;
        }

        void setModell(char* newModell){
            cout << strlen(newModell) << "\n";
            if(modell == nullptr){
                modell = (char*)malloc(sizeof(char));
            }
            modell = (char*)realloc((void*)modell, strlen(newModell)+2);
            if(modell == nullptr){
                cout << "Fehler bei realloc\n";
            }
            cout << newModell;
            for(unsigned int i=0; i<strlen(newModell); i++){
                modell[i] = newModell[i];
            }
        }

        char* getModell(void)const{
            return modell;
        }

        void setLeistung(int newLeistung){
            this -> leistung = newLeistung;
        }

        int getLeistung(void)const{
            return leistung;
        }

        void ausgabe(void){
            printf("Auto Modell: %s\n mit %d ps und %d Tueren\n",modell,leistung,anzTueren);
        }

    private:
        char * modell;
        int anzTueren;
        int leistung;


};

#endif // AUTO_H
