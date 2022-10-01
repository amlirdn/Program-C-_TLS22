// Program Kasir
#include <iostream>

using namespace std;

int main()
{
    long Harga_Jual, Pajak, Harga_Total, Tunai, Kembali;
    cout << "Harga Jual : ";
    cin >> Harga_Jual;

    Pajak = Harga_Jual*0.1; 
    Harga_Total = Pajak + Harga_Jual;
    
    cout << "Harga Total : "<<Harga_Total<<endl;
    cout << "Tunai : ";
    cin >> Tunai;
    
    Kembali = Tunai - Harga_Total;
    
    cout << "Kembali : "<<Kembali<<endl;
     
    
    return 0;
}