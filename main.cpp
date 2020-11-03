#include <iostream>
#include <cmath>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    for (int i = 0; i < 256; ++i)
        cout<<i<<' '<<static_cast<char>(i)<<' ';
    cout << endl;


    unsigned char a;
    cin>>a;
    if ((a>=48) && (a<=57))
        cout<<"VVedina cifra" << endl;
    else if ((a>=65) && (a<=122))
        cout<<"VVedina bukva"<< endl;
    else cout<<"Simvol neizvesten"<< endl;

    int x;
    cin>>x;
    switch (x%5){
        case 0:
            cout<<-1<< endl;
            break;
        case 1:
            cout<<x-1<< endl;
            break;
        case 2:
            cout<<5<< endl;
            break;
        case 3:
            cout<<-x<< endl;
            break;
        case 4:
            cout<<pow(x, -2)<< endl;
            break;
    }

    int i, y;
    double s, pogreshnost = 0.01;
    cin>>y;
    for (int l = 2; l<7; l++ ) {
        s=y;
        i=1;
        double y2=y;
        int znak = -1;
        int f=1;
        int y1=y;
        while (std::abs(sin(y)-s)>=pogreshnost){
            f= f*(2*i+1) * (2*i);
            y2=y2*y1*y1;
            s=s+znak*y2/f;
            znak = -znak;
            i++;
        }
        cout<<pogreshnost<<' '<<i<<endl;
        pogreshnost/=10;
    }
    return 0;

}
