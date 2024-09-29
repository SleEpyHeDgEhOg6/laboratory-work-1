#include <iostream>

using namespace std;

int main() {
    //double cara=0.5; // экономия 50%
    //double carb=0.3; // экономия 30%
    //double carc=0.2; // экономия 20%
    double Nuc=1.0;  // исходное значение 100%
    double cara,carb,carc;
    cout<<"cara:";
    cin>>cara;
    cout<<"carb:";
    cin>>carb;
    cout<<"carc:";
    cin>>carc;

    double Nnew=Nuc*(1-cara)*(1-carb)*(1-carc); //расчет нового расхода топлива 
    double ot=Nuc-Nnew; //рассчет фактической экономии

    
    std::cout<<"Исходное значение:"<<Nuc<<std::endl;
    std::cout<<"Расход с экономией:"<<Nnew<<std::endl;
    std::cout<<"Фактическая экономия:"<<ot<<std::endl;
    return 0;
}
