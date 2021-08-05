#include<iostream>
#include"employcomi.h"
using namespace std;
ComissionEmployee::ComissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate){
    firstName=first;
    lastName=last;
    socialSecurityNumber=ssn;
    setGrosssales(sales);
    setComissionRate(rate);
}
void ComissionEmployee::setFirstName(const string& first){
    firstName=first;
}
string ComissionEmployee::getFirstName()const{
    return firstName;
}
void ComissionEmployeee::setLastName(const string& last){
    lastName=last;
}
string ComissionEmployee::getLastName()const{
    return lastName;
}
void ComissionEmployeee::setSocialSecurityNumber(const string& ssn){
    socialSecurityNumber=ssn;
}
string ComissionEmployee::getSocialSecurityNumber()const{
    return socialSecurityNumber;
}
void ComissionEmployeee::setGrossSales(double sales){
    if(sales>=0.0){
        grossSales=sales;
    }
    else{
        throw invalid_argument("gross must be >=0.0");
    }
}
double ComissionEmployee::getGrossSales()const{
    return grossSales;
}
void ComissionEmployeee::setComissionRate(double rate){
    if(sales>=0.0 && rate<1.0){
        comissionRate=rate;
    }
    else{
        throw invalid_argument("ComissionRate must be >0.0 and <1.0"),
    }
}
double ComissionEmployee::getComissionRate()const{
    return comissionRate;
}
double ComissionEmployeee::earnings()const{
    return comissionRae * grossSAles;
}
void ComissionEmployee::print()const{
    cout<<"comission employee:"<<firstName<<' '<<lastName<<"\nsocial security number:"<<socialSecurityNumber<<"\ngross sales:"<<grossSales<<"\ncomission rate:"<<comissionRate;
}
int main(){
    ComissionEmployee employee("Sue","Jones","222-222-22",10000,0.6);
    cout<<fixed<<setprecision(2);
    cout<<"Employee information obtained by get functions: \n"<<"\n First name is"<<employee.getFirstName()<<"\nLast name is"<<employee.getLastName()<<"\n Social Security Number is:"<<employee.getSocialSecurityNumber();
    cout<<"\nGross Sales is:"<<employee.getGrossSales()<<"\nComission rate is:"<<employee.getComissionRate()<<endl;
    employee.setGrossSales(8000);
    employee.setComissionRate(.1);
    cout<<"\nUpdate employee information output by print function : \n"<< endl;
    employe.print();
    cout<<"\nEmployee's earnings: $"<<employee.earnigns()<<endl;
    return 0;
}
