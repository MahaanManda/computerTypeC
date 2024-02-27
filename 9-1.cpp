#include <iostream>
#include <string>
using namespace std;

struct computerType{
    string manufacturer;
    string model;
    string processor;
    int ram;      // in GB
    int hardDriveSize; // in GB
    int yearBuilt;
    double price;
};

void inputData(computerType& computer)
{
    cout << "Enter the manufacturer: ";
    cin >> computer.manufacturer;
    cout << "Enter the model: ";
    cin >> computer.model;
    cout << "Enter the processor: ";
    cin >> computer.processor;
    cout << "Enter the RAM in GB: ";
    cin >> computer.ram;
    cout << "Enter the hard drive size in GB: ";
    cin >> computer.hardDriveSize;
    cout << "Enter the year built: ";
    cin >> computer.yearBuilt;
    cout << "Enter the price: ";
    cin >> computer.price;
}

void outputData (const computerType& computer) 
{
    cout << "Manufacturer: " << computer.manufacturer << endl;
    cout << "Model: " << computer.model << endl;
    cout << "Processor: " << computer.processor << endl;
    cout << "RAM: " << computer.ram << " GB" << endl;
    cout << "Hard Drive Size: " << computer.hardDriveSize << " GB" << endl;
    cout << "Year Built: " << computer.yearBuilt << endl;
    cout << "Price: " << computer.price << endl;
 }

int main()
{
    computerType computer1;
    inputData(computer1);
    outputData(computer1);
}