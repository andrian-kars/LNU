#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

struct money
{
    int grn;
    float kop;
    double sum;
    double sumToPay;
};

vector<string> split(const string& s, char delim);

int result() {
    money result;
    result.grn = 0;
    result.kop = 0;
    result.sum = 0;
    result.sumToPay = 0;
    string path = "test.txt";

    ifstream fin;
    fin.open(path);
    if (!fin.is_open())
    {
        cout << "Fucked up to open the file";
    }
    else
    {
        cout << "File is opened\n";
        string str;
        while (!fin.eof()) {
            str = "";
            getline(fin, str);

            vector<string> v = split(str, ' ');
            result.grn += stoi(v[0]) * stoi(v[2]);
            result.kop += stoi(v[1]) * stoi(v[2]);
        }
    }
    fin.close();
    result.sum = result.grn + (result.kop / 100);
    result.sumToPay = round((result.grn + (result.kop / 100)) * 10) / 10;
    cout << result.sum << "\n";
    cout << result.sumToPay << "\n";
    int arr[2] = { result.sum, result.sumToPay };
    return *arr;
}