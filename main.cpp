
#include <iostream>
using namespace std;

int main() 
{

       string makanan [2]={"soto","rawon"};
       int   harga [2]={15000,20000};
       int i;
       int porsi[2];
       string ulang;
    do {
        int total= 0;
    for(i=0;i<2;i++)
    {
      cout<<"makanan" <<endl;
      cout<<makanan[i] <<endl;
      cout<<"harga" <<endl;
      cout<<harga[i]<<endl;
      cout<<"porsi : ";
      cin>>porsi[i];
        total=harga[i]*porsi[i];
      cout<<"************_____________************" <<endl;
    }
    cout<<"total pesanan:"<<total <<endl;
    cout<<total<<endl;
    cout<<"anda mau mengulang. tekan y atau Y";
    cin>> ulang;
    cout<< endl;
    
    }while(ulang=="y" || ulang=="Y");
    return 0;
    system("pause");
}
