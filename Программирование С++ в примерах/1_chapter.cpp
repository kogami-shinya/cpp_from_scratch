#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void from_1_before_10();//1.1
void even_numbers(int a);//1.2
void renining_3();//1.3
void fibonachi();//1.4
void binom();//1.5
int fackt(int a);
void kminMil();//1.6
void kmAndm_in_futAndmil();//1.7
void sajinm();//1.8
void sajandarshinmandcm();//1.9
void kminh_in_minsec();//1.10
void minsec_in_kminh();//1.11
void sumnat();//1.12
void sumnatnochet();//1.13
void masschet();//1.14
void massnotchet();//1.15
void massqadr();//1.16
void qadrtwo();//1.17
//1.18 у меня сделан в 1.4
void sher();//1.19
void outmass();//1.20

int main ()
{
    //cout<<"1)";from_1_before_10();cout<<endl;
    //cout<<"2)";even_numbers(5);cout<<endl;
    //cout<<"3)";renining_3();cout<<endl;
    //cout<<"4)";fibonachi();cout<<endl;
    //cout<<"5)";binom();cout<<endl;
    //cout<<"6)";kminMil();cout<<endl;
    //cout<<"7)";kmAndm_in_futAndmil();cout<<endl;
    //cout<<"8)";sajinm();cout<<endl;
    //cout<<"9)";sajandarshinmandcm();cout<<endl;
    //cout<<"10)";kminh_in_minsec();cout<<endl;
    //cout<<"11)";minsec_in_kminh();cout<<endl;
    //cout<<"12)";sumnat();cout<<endl;
    //cout<<"13)";sumnatnochet();cout<<endl;
    //cout<<"14)";masschet();cout<<endl;
    //cout<<"15)";massnotchet();cout<<endl;
    //cout<<"16)";massqadr();cout<<endl;
    //cout<<"17)";qadrtwo();cout<<endl;
    //cout<<"19)";sher();cout<<endl;
    //cout<<"20)";outmass();cout<<endl;

    return 0;
}

void from_1_before_10()
{
    for(int i=1;i !=11;i++)
    {
        cout<<i<<" ";
    }
}
void even_numbers(int a)
{
    for(int i=1;i<a*2;i+=2)
    {
        cout<<i<<" ";
    }
}
void renining_3()
{
    int a; 
    cout<<"Vvedite chslo: "; 
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cout<<4*i+3<<" ";
    }
}
void fibonachi()
{
    int f;cout<<"Vvedite chislo vivodimih chisel fibonachi: ";cin>>f;
    int mass[f];mass[0]=1;mass[1]=1;
    for(int d=0;d<f;d++)
    {
        if(d>=2)
        {mass[d]=mass[d-1]+mass[d-2];}
        cout<<mass[d]<<" ";
    }
}
void binom()
{
    int n;
    cout<<"Nijnii index: ";cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<fackt(n)/(fackt(i)*fackt(n-i))<<endl;
    }
}
int fackt(int a)
{
    if(a == 0)
    {
        return 1;
    }
    int b=1;
    for(int i=1;i<=a;i++)
    {
        b*=i;
    }
    return b;
}
void kminMil()
{
    double km;
    const double kminmil = 0.621371;
    cout<<"Km = ";cin>>km;
    cout<<"Mil = "<<km * kminmil;
}
void kmAndm_in_futAndmil()
{
    int km,m,fut;double kmandm,mil;
    const double kminmil = 0.621371;
    const int futinmil = 5280; 
    cout<<"km = ";cin>>km;
    cout<<"m = ";cin>>m;
    kmandm = km + (double)m/100;
    mil = kmandm * kminmil;
    cout<<"mil = "<<(int)mil<<endl;
    fut = (mil - (int)mil)* futinmil;
    cout<<"fut = "<<fut;
}
void sajinm()
{
    const double sajinm = 2.16;
    int saj,m;cout<<"Vvelbite znahenie v saj: ";
    cin>>saj;cout<<"m = "<<saj*sajinm;
}
void sajandarshinmandcm()
{
    const double sajinm = 2.16;
    const double sajinarsh = 3;
    double saj,m,cm,arsh;
    cout<<"Vvelbite znahenie v saj: ";cin>>saj;
    cout<<"Vvelbite znahenie v arsh: ";cin>>arsh;
    saj = saj + (arsh/3);
    cout<<"m = "<<(int)(saj*sajinm)<<endl;
    cout<<"cm = "<<((saj*sajinm)-(int)(saj*sajinm))*100<<endl;
}
void kminh_in_minsec()
{
    int kminh;
    cout<<"Vvedite km/h: ";cin>>kminh;
    cout<<"Minsec = "<<(kminh *1000)/3600;
}
void minsec_in_kminh()
{
    int minsec;
    cout<<"Minsec vvedite: ";cin>>minsec;
    cout<<"km/h = 20"<<(minsec*3600)/1000;
}
void sumnat()
{
    int d;cout<<"Vvedite dlin: ";cin>>d;
    int pol=0;
    for(int i=0;i<=d;i++)
    {
        pol+=i;
    }
    cout<<"Output = "<<pol;
}
void sumnatnochet()
{
    int d;cout<<"Vvedite dlin: ";cin>>d;
    int pol=0;
    for(int i=0,j=1;i<d;i++,j+=2)
    {
        pol+=j;
    }
    cout<<"Output = "<<pol;
}
void masschet()
{
    int d;cout<<"Vvedite dlin: ";cin>>d;
    int mass[d];
    for(int i=0,j=0;i<d;i++,j+=2)
    {
        mass[i]=j;
        cout<<mass[i]<<" ";
    }
}
void massnotchet()
{
    int d;cout<<"Vvedite dlin: ";cin>>d;
    int mass[d];
    for(int i=0,j=1;i<d;i++,j+=2)
    {
        mass[i]=j;
        cout<<mass[i]<<" ";
    }
}
void massqadr()
{
    int d;cout<<"Vvedite dlin: ";cin>>d;
    int mass[d];
    for(int i=0,j=1;i<d;i++,j++)
    {
        mass[i]=j*j;
        cout<<mass[i]<<" ";
    }
}
void qadrtwo()
{
    int d;cout<<"Vvedite dlin: ";cin>>d;
    int mass[d];int two = 1;
    for(int i=1;i<=d;i++)
    {
        mass[i]=two;
        two*=2;
        cout<<mass[i]<<" ";
    }
}
void sher()
{
    int d;cout<<"Vvedite dlin: ";cin>>d;
    int mass[d];
    for(int i=0;i<d;i++)
    {
        if((i%2) == 0)
        {
            mass[i]=i;
            cout<<mass[i]<<" ";
        }
        else{
            mass[i]=i*i;
            cout<<mass[i]<<" ";
        }
    }
}
void outmass()
{
    int d;cout<<"Vvedite dlin: ";cin>>d;int mass[d];
    for(int i=0;i<d;i++)
        cin>>mass[i];
    for(int i=0;i<d;i++)
        cout<<mass[i]<<" ";
}