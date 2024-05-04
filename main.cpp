#include <iostream>
#include <filesystem>
#include <windows.h>
#include <fstream>
using namespace std;

int cantidad;
void agregar_texto() {

    }

   void crear_archivos() {
    string nombre = "archivo" ;


    cout <<"ingrese la cantidad de archivos que desea crear"<<endl;
    cin>>cantidad;
    if (cantidad % 2 == 0){
        cout<<"Cantidad de archivos par"<<endl;
        for (int i=0;i<cantidad;i++) {
            ofstream file;
            file.open("C:/Users/jrodr/Desktop/par/"+nombre+to_string(i+1)+".txt");
            agregar_texto();
            for (int j = 0; j < i+1; ++j) {
                file << "linea "<<j+1 << endl;
            }
                file.close();


        }
    }else {
        cout<<"Cantidad de archivos impar"<<endl;
        for (int i=0;i<cantidad;++i) {
            ofstream file;
            file.open("C:/Users/jrodr/Desktop/impar/"+nombre+to_string(i+1)+".txt");
            agregar_texto();
            for (int j = 0; j < i+1; ++j) {
                file << "linea "<<j+1 << endl;
            }
            file.close();


        }
    }cout<<"Archivos creados con exito"<<endl;
    }



int main(){
    crear_archivos();
    return 0;
}

