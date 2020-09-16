#include <iostream>
#include <cmath>


int main() {
    using std::cin;
    using std::cout;

    for (int i = 0; i < 256; ++i)
        cout<<i<<' '<<char(i)<<' ';


    unsigned char a;
    cin>>a;
    if ((a>=48) && (a<=57))
        cout<<"VVedina cifra";
    else if ((a>=65) && (a<=122))
        cout<<"VVedina bukva";
    else cout<<"Simvol neizvesten";

    int x;
    cin>>x;
    switch (x%5){
        case 0:
            cout<<-1;
            break;
        case 1:
            cout<<x-1;
            break;
        case 2:
            cout<<5;
            break;
        case 3:
            cout<<-x;
            break;
        case 4:
            cout<<pow(x, -2);
            break;
    }

    int y, i;
    float s;
    cin>>y;
    for (int l = 2; l<7; l++ ) {
    s=y;
    i=1;
    while (std::abs(sin(y)-s)>=pow(10,-l)){
        int f=1;
        for (int j=1; j<=2*i+1; j++)
            f =f*j;
        s=s+pow(-1,i)*pow(y,2*i+1)/f;
        i++;
    }
    cout<<pow(10,-l)<<' '<<i<<std::endl;
    }
    return 0;

}