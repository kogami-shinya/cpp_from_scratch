#include <iostream>
#include <string>
#include <cstdlib>//int atoi( const char * string );
#include <locale>

using namespace std;
/*
    Получаемое   "Be sure to drink your Ovadtine!" 
    исполняемое  "Or fher gb qevax lbhe Binygvar!"
*/

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");
    int key = atoi(argv[1]);//atio-переводит значение char в int и позоляет его присвоить
    if(argc != 2 || isdigit(*argv[1]) == 0){ cout<<"Error:"<< argc << endl; return 0;}
    string p;// cin>>p;
    p="Be sure to drink your Ovadtine!?;:";
    key = key % 26;
    for(int i=0; i < p.size() ;i++)
    {
        char c[p.size()];
        //с нижним регистром от 97 до 122(Доделать)
        if((int)p[i]<=122 && (int)p[i]>=97)
        {
            int prov=0; 
            c[i]=(p[i] + key);
            if((int)c[i]<=0)
            {
                prov =230 + (int)c[i];
                c[i]= prov;
            }
            if((int)c[i]>122)
            {
                c[i]-=26;
            }
            cout<<c[i];
        }
        //с верхним от 65 до 90
        else if((int)p[i]<=90 && (int)p[i]>=65)
        {
            c[i]=(p[i] + key);
            if((int)c[i]>90)
            {
                c[i]-=26;
            }
            cout<<c[i];
        }
        else 
        {
            cout<<p[i];
        }
    }
    return 0;
}