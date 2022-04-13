#include <iostream>
using namespace std;

int main(){
    /*
    jika nilai >= 90 lulus sangat memuaskan
    jika nilai >= 80 lulus memuaskan
    jika nilai >= 75 cukup
    tidak boleh > 100 di luar jangkauan
    tidak boleh < 0 di luar jangkauan
    <75 tidak lulus
    */
    int nilai;
    cout<<"masukkan nilai = "; cin>>nilai;
    
    if (nilai > 100 || nilai<0) {
    cout<<"di luar jangkauan";
}
    else if (nilai >= 90) {
        cout<<"lulus sangat memuaskan";
    }
else if (nilai >= 80) {
    cout<<"lulus memuaskan";
}
else if (nilai >= 75) {
cout<<"cukup";
}
else  {
cout<<"tidak lulus";
}



return 0;
}//end of main function
