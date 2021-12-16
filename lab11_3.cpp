#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string score;
    double N,Mean,sum=0,Zigma;
    while(getline(source,score)){
        sum += atof(score.c_str());
        N++;
        Zigma+=pow(atof(score.c_str()),2);
    }
    Mean = sum/N;
    cout << "Number of data = "<< N <<"\n";;
    cout << setprecision(3);
    cout << "Mean = "<< sum/N<< "\n";
    cout << "Standard deviation = "<<sqrt(((1/N)*Zigma)-pow(Mean,2));
}