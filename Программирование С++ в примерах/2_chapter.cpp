#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>

void num_2_1();
void num_2_2();
void num_2_3();
void num_2_4();
void num_2_5();//Обработка исключений
void num_2_6();
void sum_for();//2.1
void sum_do_while();//2.2
void delitel();//2.3
void NOD();//2.4
void natur_ln();//2.5
    double powi(double,int);
void num_sin();//2.6
    long long fuckt(int);
void num_cos();//2.7
void num_sh();//2.8
void num_ch();//2.9
void expression();//2.10
void usl_oper();//2.11
void usl_int();//2.12
void sqrt_double();//2.13
void discr();//2.14
int sum_del(signed int);//2.15
void fibon();//2.16
void rund_mass();//2.17
void obr_mass();//2.18
void mass_opr_1();//2.19
void mass_opr_2();//2.20

using namespace std;

int main(int argc,char* argv[])
{
    //num_2_1();//switch,case,break,default
    //num_2_2();//rand
    //num_2_3();
    //num_2_4();//Цикл по коллекции
    //num_2_5();//try,throw,catch
    //num_2_6();//goto
    //break позволяет закончить цикл полность.Есть еще continue, который позволяет досрочно завершить не весь оператор цикла, а только текущую итерацию.
    /*Задачи из домашнего задания 2-й главы*/
    //cout<<"1)";sum_for();cout<<endl;
    //cout<<"2)";sum_do_while();cout<<endl;
    //cout<<"3)";delitel();cout<<endl;
    //cout<<"4)";NOD();cout<<endl;
    //cout<<"5)";natur_ln();cout<<endl;
    //cout<<"6)";num_sin();cout<<endl;
    //cout<<"7)";num_cos();cout<<endl;
    //cout<<"8)";num_sh();cout<<endl;
    //cout<<"9)";num_ch();cout<<endl;
    //cout<<"10)";expression();cout<<endl;
    //cout<<"11)";usl_oper();cout<<endl;
    //cout<<"12)";usl_int();cout<<endl;
    //cout<<"13)";sqrt_double();cout<<endl;
    //cout<<"14)";discr();cout<<endl;
    //cout<<"15)";cout<<sum_del(-1)<<endl;
    //cout<<"16)";fibon();cout<<endl;
    //cout<<"17)";rund_mass();cout<<endl;
    //cout<<"18)";obr_mass();cout<<endl;
    //cout<<"19)";mass_opr_1();cout<<endl;
    //cout<<"20)";mass_opr_2();cout<<endl;

    return 0;
}

void num_2_1()
{
    int num,k;
    for(k=1;k<=5;k++)
    {
        cout<<"Укажите число от 1 до 3: ";
        cin>>num;
        switch(num){
            case 1:
                cout<<"Это единица (1)"<<endl;
                break;
            case 2:
                cout<<"Это двойка (2)"<<endl;
                break;
            case 3:
                cout<<"Это тройка (3)"<<endl;
                break;
            default:
                cout<<"Я не знаю такое число (-)"<<endl;   
        }
    }
}
void num_2_2()
{
    int num;
    srand(2);
    for(int k=1;k<=10;k++)
    {
        num=2+rand()%7;
        switch(num)
        {
            case 3:
            case 6:
                cout<<num<<" :делится на тройку"<<endl;
                break;
            case 2:
            case 4:
            case 8:
                cout<<num<<" :cтепень двойки"<<endl;
                break;
            case 5:
                cout<<num<<" :делится на 5"<<endl;
                break;
            case 7:
                cout<<num<<" :делится на 7"<<endl;
        }
    }
}
void num_2_3()
{
    int num,k;
    for(k=1;k<=5;k++)
    {
        cout<<"Укажите число от 1-го до 3-х";
        cin>>num;
        if(num==1)
        {cout<<"Это единица (1)"<<endl;}
        else{
            if(num==2)
            {cout<<"Это двойка (2)"<<endl;}
            else{
                if(num==3){cout<<"Это тройка (3)"<<endl;}
                else{
                    cout<<"Я не знаю это число."<<endl;
                }
            }
        }
    }
}
void num_2_4()
{
    srand(2);
    int nums[12];
    cout<<"Массив случайных чисел:\n";
    for(int &x: nums)
    {
        x=rand()%10;
        cout<<x<<" ";
    }
    cout<<endl;
    int leng=0;
    for(int &x:nums)
    {leng++;}
    cout<<"Размер массива:"<<leng<<endl;
    cout<<"Полученный массив:\n|";
    for(int x=0;x<leng;x++)
    {
        cout<<nums[x]<<"|";
    }
}
void num_2_5()
{
    cout<<"Решение уравнения Ax = B\n";
    double A,B;
    cout<<"A = ";cin>>A;
    cout<<"B = ";cin>>B;
    try{
        if(A!=0){
            throw (A);//Данная часть кода 
        }
        if(B!=0)
        {
            throw "Not rechen";
        }
        cout<<"Решение - любое число(1)"<<endl;
    }
    catch(double e)
    {
        cout<<"Решение уравнения:(2)"<<B/e<<endl;
    }
    catch(const char* e){
        cout<<e<<"(3)"<<endl;
    }
}
void num_2_6()
{
    int n=10,s=0,k=1;
    start://Метка
    s+=k*k;
    if(k<n)
    {
        k++;
        goto start; 
    }
    cout<<"Сумма квадратов чисел от 1 до "<<n<<": "<<s<<endl;
}
void sum_for()
{
    int num,g=0;cin>>num;
    for(int i=1,j=1;i<=num;i++,j+=2)
    {
        g+=j;
    }
    cout<<"Полученная сумма нечетных натуральных чисел: "<<g<<endl;
}
void sum_do_while()
{
    int num,h=0,j=0,i=1;cin>>num;
    do{
        i++;j+=2;
        h+=j;
    }while(i<=num);
    cout<<"Полученная сумма четеых натуральных чисел: "<<h<<endl;
}
void delitel()
{
    int num,null;cout<<"Take num: ";cin>>num;null=num;
    try{
        if(num>0)
        {
            do{
                int y=0;
                y=num%null;
                if(y==0)
                {
                    cout<<null;
                }
                null--;
            }while(null!=0);
        }
        else
        {
            throw "Unsognet num";
        }
    }
    catch(const char* a){
        cout<<a;
    }
}
void NOD()
{
    int A,B,Q,R;cout<<"Write nod: ";
    cout<<"A = ";cin>>A;cout<<"B = ";cin>>B;
    if(A<B){int save;save = A;A = B;B = save;}
    if((A==0 && B!=0)||(A!=0 && B==0))
    {
        if(A!=0){cout<<"NOD = "<<A<<endl;return;}
        else{cout<<"NOD = "<<B<<endl;return;}
    }
    try{
        if(A==0 && B==0)
        {
            throw 1;
        }
        else if(A<0 || B<0)
        {
            throw 2;
        }
    }
    catch(int a)
    {
        cout<<"Error:"<<a<<endl;
        return;
    }
    do{
        R = A % B;
        Q = (A - R)/B;
        A=B;if(R!=0){B=R;}
        }while(R!=0);
        cout<<"NOD = "<<B<<endl;
}
double powi(double num,int step)
{
    double result=num;
    if(step == 0)
    return 1;
    for(int i=1;i<step;i++)
    {
        result*=num;
    }
    return result;
}
void natur_ln()
{
    double x,q=1,ln;int k=1;cout<<"x = ";cin>>x;ln=0;
    try{
        if(x <= (-1) || x > 1)
        {
            throw 1;
        }
    }
    catch(int a)
    {
        cout<<"Error: "<<a<<endl;
        return;
    }
    do{
        ln+=(powi(-1,k+1)*powi(x,k))/k;
        k++;
    }while(k<=100);
    cout<<"ln ="<<ln<<endl;
    cout<<"ln in funck ="<<log(x+1)<<endl;
}
long long fuckt(int a)
{
    int fuckt=1;
    if(a==0){return 1;}
    for(int i=a;i!=0;i--)
    {fuckt*=i;}
    return fuckt;
}
void num_sin()
{
    //sin(5) ~ -0.958924
    //sin(6) ~ -0.279415
    const double pi = 3.14159265359;
    double si_r=0,k=0,y=0,sign = 0,x,xx; 
    cout<<"sin = ";cin>>x;sign = x/(2*pi);sign = sign - (int)sign;  xx=x;//Coхранения значения для проверки
    y=x/pi;
    if(y>=1 || y<=-1){y=y-(int)y; x=y*pi;}
    do{
        si_r+=(((powi(-1,k))*(powi(x,(2*k)+1)))/(fuckt(2*k+1)));
        k++;
    }while(k<=5);
    if((sign>0 && sign>0.5) || (sign<0 && sign<-0.5)){
            si_r*=-1;cout<<"*";
    }
    cout<<"sin row = "<<si_r;
    cout<<" | sint in funck = "<<sin(xx)<<endl;//Проверка с уже заранее написанной функцией
}
void num_cos()
{
    const double pi = 3.14159265359;
    double co_r=0,k=0,y=0,sign = 0,x,xx; 
    cout<<"cos = ";cin>>x;sign = x/(2*pi);sign = sign - (int)sign;  xx=x;//Coхранения значения для проверки
    y=x/pi;
    if(y>=1 || y<=-1){y=y-(int)y; x=y*pi;}
    do{
        co_r+=(((powi(-1,k))*(powi(x,2*k)))/(fuckt(2*k)));
        k++;
    }while(k<=5);
    if((sign>0 && sign>0.5) || (sign<0 && sign<-0.5)){
            co_r*=-1;
    }
    cout<<"cos row = "<<co_r;
    cout<<" | cos in funck = "<<cos(xx)<<endl;//Проверка с уже заранее написанной функцией
}
void num_sh()
{
    double sh_r=0,k=0,x,xx; 
    cout<<"sh = ";cin>>x;xx=x;//Coхранения значения для проверки

    do{
        sh_r+=(((powi(x,2*k+1)))/(fuckt(2*k+1)));
        k++;
    }while(k<=5);
    cout<<"sh row = "<<sh_r;
    cout<<" | sh in funck = "<<sinh(xx)<<endl;//Проверка с уже заранее написанной функцией
}
void num_ch()
{
    double ch_r=0,k=0,x,xx; 
    cout<<"ch = ";cin>>x;xx=x;//Coхранения значения для проверки

    do{
        ch_r+=(((powi(x,2*k)))/(fuckt(2*k)));
        k++;
    }while(k<=5);
    cout<<"ch row = "<<ch_r;
    cout<<" | ch in funck = "<<cosh(xx)<<endl;//Проверка с уже заранее написанной функцией
}
void expression()
{
    long double exp_r=0,k=0,y=0,x; 
    cout<<"(exp(x)-1)/x=? \n"<<"x = ";cin>>x;
    try{
        if(x>=5 || x<=-5)
        {
            throw "К сожелению такое значение будет иметь большое отклонение от правильного значения";
        }
    }
    catch(const char* a){
        cout<<a<<endl;
        return;
    }
    do{
        exp_r+=(((powi(x,k)))/(fuckt(k+1)));
        cout<<exp_r<<endl;
        k++;
    }while(k<=11);
    cout<<"(exp(x)-1)/x= not funck "<<exp_r;
    cout<<" | (exp(x)-1)/x in funck = "<<(exp(x)-1)/x<<endl;
}
void usl_oper()
{
    //Напишите программу для решения уравнения вида Ax=B, используя вложенные условные операторы.
    int A,B;cout<<"Ax=B"<<endl;cout<<"A =";cin>>A;
    cout<<"B =";cin>>B;
    if(A==0)
    {
        if(B==0)
        {
            cout<<"Решение может быть любое число(1)"<<endl;
        }
        else
        {
            cout<<"Нет решения(2)"<<endl;
        }
    }
    else{
        cout<<"x = "<<(double)B/A<<endl;
    }
}
void usl_int()
{
    //Напиши программу для решения уравнения вида Ax=B на множестве целых чисел: параметры A и B являются целыми числами и решение x также должно быть числом.
    double A,B,C;cout<<"Ax=B"<<endl;cout<<"A =";cin>>A;cout<<"B =";cin>>B;C=B/A;
    try{
        if(A==(int)A && B ==(int)B)
        {
            if(A!=0 && C==(int)C)
            {
                throw A;
            }
            if(B!=0 || C!=(int)C)
            {
                throw "Решения нет(1)";
            }
            cout<<"Решение - любое число(2)"<<endl;
        }
        else{
            throw "Решения нет(1)";
        }
    }
    catch (double e)
    {
        cout<<"Решение уравнения(3): "<<B/e<<endl;
    }
    catch (const char* e)
    {
        cout<<e<<endl;
    }
}
void sqrt_double()
{
    double c,k=0;
    for(double i=1;i<=100;i++)
    {
        for(double j=1;j<=100;j++)
        {
            c=powi(i,2)+powi(j,2);c=sqrt(c);
            if(c==(int)c && c<=100)
            {cout<<i<<"^2+"<<j<<"^2="<<c<<"^2 "<<endl;k++;}
        }
    }
}
void discr()
{
    //1-й вариант решения
    double D,x1,x2,A,B,C;;cout<<"Ax^2+Bx+C=0"<<endl;
    cout<<"A=";cin>>A;cout<<"B=";cin>>B;cout<<"C=";cin>>C;
    D=powi(B,2)-4*A*C;
    cout<<"D = "<<D<<endl;
    try{
        if(D>=0)
        {
            throw D;
        }
        else{
            throw "Нет действительных корней";
        }
    }
    catch(double e)
    {
        x1=(-B+sqrt(D))/(2*A);
        x2=(-B-sqrt(D))/(2*A);
        cout<<fixed;cout.precision(1);//Для измененяи выводимых знаков после запятой
        cout<<"x1 = "<<x1<<endl;
        if(x1!=x2)
        cout<<"x2 = "<<x2<<endl;
    }
    catch(const char* e)
    {
        cout<<e<<endl;
    }
    //2-й вариант решения
        /*if(D>=0)
        {
            x1=(-B+sqrt(D))/(2*A);
            x2=(-B-sqrt(D))/(2*A);
            cout<<fixed;cout.precision(1);//Для измененяи выводимых знаков после запятой
            cout<<"x1 = "<<x1<<endl;
            if(x1!=x2)
            cout<<"x2 = "<<x2<<endl;
        }
        else{
            cout<<"Нет действительных корней"<<endl; 
        }*/
}
int sum_del(signed int a)
{
    //Напишите программу с функцией, которая для своего целочисленного аргумента возвращает результатом сумму делителей.
    if(a<0){cout<<"Нет решения с ";return a;}
    double res=0,k=1,h;
    do{
        h=a/k;
        if(h==(int)h)
        {res+=k;}
        k++;
    }while(k <= a);
    return res;
}
void fibon()
{
    int f;cout<<"Введите число от 1-го до 10-ти ";cin>>f;
    if(f>10 || f<1)
    {cout<<"Не в заданном диапазоне(3)"<<endl;return;}
    //1-й способ решения
    switch(f)
    {
        case 1:
        case 2:
        case 3:
        case 5:
        case 8:
        cout<<"Является числом Фибоначи(1)"<<endl;
        break;
        default:
        cout<<"Не является числом Фибоначи(2)"<<endl;
    }
    //2-й способ решения 
    if(f==1 || f==2 || f==3 || f==5 || f==8)
    {cout<<"Является числом Фибоначи(1)"<<endl;}
    else
    {cout<<"Не является числом Фибоначи(2)"<<endl;}
}
void rund_mass()
{
    //Напишите программу, в которой сохдается и заполняется случайными числами массив.Затем массив сортируется в порядке убывания значений элементов.
    srand(3);
    cout<<"Введите количество элементов ";int i;cin>>i;
    int mass[i];
    for(int &y: mass)
    {y=rand()%i;}
    for(int y=0;y<i;y++){cout<<mass[y]<<" ";}//Вывод полученного массива
    for(int x=1;x<=i-1;x++)
    {
        for(int y=0;y<i-x;y++)
        {
            if(mass[y]<mass[y+1])
            {
            int save=mass[y];
            mass[y]=mass[y+1];
            mass[y+1]=save;
            }
        } 
    }
    cout<<"Отсортированный массив: ";
    for(int y=0;y<i;y++){cout<<mass[y]<<" ";}
}
void obr_mass()
{
    srand(4);
    cout<<"Введите количество элементов ";int i;cin>>i;
    int mass[i];int leng=0;
    for(int &y:mass)
    {y=rand()%i;}
    for(int y=0;y<i;y++){cout<<mass[y]<<" ";}cout<<endl;//Вывод полученного массива
    for(int &l:mass){leng++;}
    leng = leng - 1;
    for(int s=0;s<(i/2);s++)
    {
        int save = mass[leng];
        mass[leng]=mass[s];
        mass[s]=save;
        leng--;
    }
    cout<<"Полученный массив: ";for(int y=0;y<i;y++){cout<<mass[y]<<" ";}cout<<endl;   
}
void mass_opr_1()
{
    srand(4);
    cout<<"Введите количество элементов ";int i;cin>>i;
    int mass[i];int lang = 0,h=0;//{7,2,5,3,1,8,4}
    for(int &y:mass){y=1+rand()%i;}
    for(int &r: mass){lang++;}
    cout<<"1)";for(int t=0;t<lang;t++){cout<<mass[t]<<" ";}cout<<endl;
    for(int t=0;t<lang;t++){
        if((double)mass[t]/2!=mass[t]/2)
        {
            h++;
        }
    }
    int right=lang--;
    for(int t=0;t<h;t++)
    {
        if((double)mass[t]/2==mass[t]/2)
        {
            for(int g=lang;g>h-1;g--)
            {
                if((double)mass[g]/2!=mass[g]/2)
                {
                    int save = mass[g];
                    mass[g] = mass[t];
                    mass[t] = save;
                }
            }
        }
    }
    cout<<"2)";for(int t=0;t<lang+1;t++){cout<<mass[t]<<" ";}cout<<endl;
    for(int t=1;t<h+1;t++)
    {
        for(int y=0;y<h-t;y++)
        {
            if(mass[y]>mass[y+1])
            {
                int save = mass[y];
                    mass[y] = mass[y+1];
                    mass[y+1] = save;
            }
        }
    }
    cout<<"3)";for(int t=0;t<lang+1;t++){cout<<mass[t]<<" ";}cout<<endl;
    for(int t=1;t<h+1;t++)
    {
        for(int y=h;y<lang;y++)
        {
            if(mass[y]>mass[y+1])
            {
                int save = mass[y];
                    mass[y] = mass[y+1];
                    mass[y+1] = save;
            }
        }
    }
    cout<<"4)";for(int t=0;t<lang+1;t++){cout<<mass[t]<<" ";}cout<<endl;
}
void mass_opr_2()
{
    srand(4);
    cout<<"Введите количество элементов ";int i;cin>>i;
    int mass[i];int lang = 0,h=0;
    for(int &y:mass){y=1+rand()%i;}
    for(int &r: mass){lang++;}
    cout<<"1)";for(int t=0;t<lang;t++){cout<<mass[t]<<" ";}cout<<endl;
    for(int t=0;t<lang;t++){
        if((double)mass[t]/2==mass[t]/2)
        {
            h++;
        }
    }
    int right=lang--;
    for(int t=0;t<h;t++)
    {
        if((double)mass[t]/2!=mass[t]/2)
        {
            for(int g=lang;g>h-1;g--)
            {
                if((double)mass[g]/2==mass[g]/2)
                {
                    int save = mass[g];
                    mass[g] = mass[t];
                    mass[t] = save;
                }
            }
        }
    }
    cout<<"2)";for(int t=0;t<lang+1;t++){cout<<mass[t]<<" ";}cout<<endl;
    for(int t=1;t<h+1;t++)
    {
        for(int y=0;y<h-t;y++)
        {
            if(mass[y]<mass[y+1])
            {
                int save = mass[y];
                    mass[y] = mass[y+1];
                    mass[y+1] = save;
            }
        }
    }
    cout<<"3)";for(int t=0;t<lang+1;t++){cout<<mass[t]<<" ";}cout<<endl;
    for(int t=1;t<lang - h;t++)
    {
        for(int y=h;y<lang;y++)
        {
            if(mass[y]>mass[y+1])
            {
                int save = mass[y];
                    mass[y] = mass[y+1];
                    mass[y+1] = save;
            }
        }
    }
    cout<<"4)";for(int t=0;t<lang+1;t++){cout<<mass[t]<<" ";}cout<<endl;
}