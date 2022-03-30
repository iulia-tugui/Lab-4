//
// Created by Iulia on 22.03.2022.
//
#include <iostream>
#include "../option/option.h"
#include "../triangle/triangle.h"

void runMenu(){
    std::cout<<"1. Assign values to a triangle"<<std::endl;
    std::cout<<"2. Checks values of a triangle"<<std::endl;
    std::cout<<"3. Calculates the perimeter of a triangle"<<std::endl;
    std::cout<<"4. Calculates the area of a triangle"<<std::endl;
    std::cout<<"x. Exit"<<std::endl;
}
void assignValues(Triangle &abc){
    std::cin>>abc;
}
void checkValues(Triangle &abc){
    std::cout<<abc;
}
void perimeter(Triangle &abc){
    std::cout<<"The triangle's perimeter is: "<<abc.getPerimeter()<<std::endl;
}
void area(Triangle &abc){
    std::cout<<"The triangle's area is: "<<abc.getArea()<<std::endl;
}
void console(){
    int ok;
    char expression;
    Triangle abc;
    runMenu();
    ok = 1;
    while (ok)
    {
        expression = option();
        switch(expression){
            case '1':
            {
                assignValues(abc);
                break;
            }
            case '2':
            {
                checkValues(abc);
                break;
            }
            case '3':
            {
                perimeter(abc);
                break;
            }
            case '4':
            {
                area(abc);
                break;
            }
            case 'x':
            {
                ok=0;
                break;
            }
            default:
                std::cout<<"Optiunea este gresita!";
        }
    }
}
