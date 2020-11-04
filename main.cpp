#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> cadenas;
    char op;
    do {
        string cadena;
        size_t n;
        cout<<"1) Agregar al final"<<endl;
        cout<<"2) Mostrar"<<endl;
        cout<<"3) Inicializar"<<endl;
        cout<<"4) Frente"<<endl;
        cout<<"5) Ultimo"<<endl;
        cout<<"6) Ordenar"<<endl;
        cout<<"7) Insertar"<<endl;
        cout<<"8) Eliminar"<<endl;
        cout<<"9) Eliminar ultimo"<<endl;
        cout<<"0) Salir"<<endl;
        cin>>op;
        cin.ignore();

        switch(op) {
            case '1':
                cout<<"cadena: ";
                getline(cin, cadena);
                cadenas.push_back(cadena);
                cout<<endl;
                break;

            case '2':
                for(size_t i=0; i<cadenas.size(); i++)
                    cout<<cadenas[i]<<", ";

                cout<<endl<<endl;
                break;

            case '3':
                cout<<"Tam: ";
                cin>>n; cin.ignore();
                cout<<"Cadena: ";
                getline(cin, cadena);

                cadenas = vector<string>(n, cadena);
                break;

            case '4':
                if(cadenas.empty())
                    cout<<"Vector vacio"<<endl<<endl;

                else //kjdfnwkdnfj
                    cout<<cadenas.front()<<endl<<endl;
                break;

            case '5':
                if(cadenas.empty())
                    cout<<"Vector vacio"<<endl<<endl;

                else
                    cout<<cadenas.back()<<endl<<endl;
                break;

            case '6':
                sort(cadenas.begin(), cadenas.end());
                //sort(cadenas.begin(), cadenas.end(), greater<string>());
                break;

            case '7':
                cout<<"Posicion: ";
                cin>>n; cin.ignore();
                cout<<"Cadena: ";
                getline(cin, cadena);

                if(n>=cadenas.size())
                    cout<<"Posicion invalida"<<endl<<endl;

                else
                    cadenas.insert(cadenas.begin()+n, cadena);
                break;

            case '8':
                cout<<"Posicion: ";
                cin>>n; cin.ignore();

                if(n>=cadenas.size())
                    cout<<"Posicion invalida"<<endl<<endl;

                else
                    cadenas.erase(cadenas.begin()+n);
                break;

            case '9':
                if(cadenas.empty())
                    cout<<"Vector vacio"<<endl<<endl;

                else
                    cadenas.pop_back();
                break;

            case '0':
                cout<<"Hasta luego"<<endl<<endl;
                break;

            default:
                cout<<"Opcion invalida"<<endl<<endl;
                break;
        }
    }while(op != '0');

    return 0;
}
