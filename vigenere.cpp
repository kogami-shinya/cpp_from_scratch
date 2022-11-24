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
    if(argc != 2 || isdigit(*argv[1]) != 0){ cout<<"Error:"<< argc << endl; return 0;}
    string p, keystring = argv[1];
    int repeats = 0, character=0,x=0,y=0;
    p = "Meet me at the park at eleven am!?";
    cout<<"Meet me at the park at eleven am!?"<<endl;
    int key;
    while(x<p.size())//Нахождение количества символов в заданном предложении или тексте
    {
        if(((int)p[x]<=122 && (int)p[x]>=97) || ( (int)p[x]<=90 && (int)p[x]>=65 ))
        {
            character++;
        }
        x++;
    }
    string vigen = p;
    //cout<<"keystring.size() = "<<keystring.size() << "  " <<"character = "<<character;
    while(y < p.size())
    {
        repeats %= keystring.size();
        if(((int)p[y]<=122 && (int)p[y]>=97) || ( (int)p[y]<=90 && (int)p[y]>=65 ))
        {
            vigen[y]= (int)keystring[repeats];
            repeats++;
            y++;
        }
        else{
        vigen[y] = (int)p[y];
        y++;
        }
    }
    int v = 0;
    while(v < p.size())
    {
        cout<<vigen[v];
        v++;
    }
    cout<<endl;
    for(int i=0; i < p.size() ;i++)
    {
        char c[p.size()];
        key = (int)vigen[i] - 97;
        //с нижним регистром от 97 до 122
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
        //cout<<"key = "<<key <<" "<<"(int)vigen[i] = "<< (int)vigen[i];
    }
    
    return 0;
}