#include <iostream>
#include <fstream>
#include <string>
using namespace std;
fstream list1;
char path[] = "my list.txt";
struct Producer
{
    double Barcode;
    string name;
    int thenumber;

};
void insert (Producer bd)
{
    list1.open(path, ios::out | ios::app);
    list1 << bd.Barcode << "\t\t" << bd.name << "\t\t" << bd.thenumber << "\t\t" << endl;
    list1.close();
}
int main()
{
    Producer myproducer;
    cout << "enter barcode\n";
    cin >> myproducer.Barcode;
    cout << "enter name\n";
    cin >> myproducer.name;
    cout << "enter the number\n";
    cin >> myproducer.thenumber;
    insert(myproducer);
    return 0;
}