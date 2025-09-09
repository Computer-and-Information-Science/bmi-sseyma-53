#include <iostream>
using namespace std;

int main() {
 
    // declaring variables

    int inches;
    inches = 61;

    int weight;
    weight = 130;

    double kgweight = weight*0.453592;

    double heightM = inches*0.0254;

    double BMI = kgweight/(heightM*heightM);

    cout << "The BMI for this person is : " << 
    BMI << "." << endl;

}
