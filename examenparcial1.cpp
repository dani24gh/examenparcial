#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

class Circulo {
float radio;

public:
    int X;
    int Y;


    Circulo(){
    radio=0.0;
    X=0;
    Y=0;
    }

    Circulo(int x2, int y2){
    radio=0.0;
    X=x2;
    Y=y2;
    }

     Circulo (int x2, int y2, float r){
    radio=r;
    X=x2;
    Y=y2;
    }

    float getRadio(){
        if (radio<0){
            cout<<"0.0";
    return radio;
    }
    }

    void setRadio(float r){
    radio=r;
        }


    float getArea(){
float area;
    area=(radio*radio)*3.1416;

    return area;

    }


    void intersects(Circulo circulo){
        float x = (x-circulo.X)*(x-circulo.X);
        float y =(y-circulo.Y)*(y-circulo.Y);
float dist=sqrt(x+y);

float cond=radio+circulo.radio;
    if(dist<cond){

        cout<<"los circulos se intersectan"<<endl;
    }
    }



};


int main (){

    Circulo circ1 ;
    Circulo circ2 (10,4);
    Circulo circ3;
    circ3.setRadio(5);
    circ3.X=2;
    circ3.Y=1;
 vector<Circulo> circle;
 circle.push_back(circ1);
  circle.push_back(circ2);
   circle.push_back(circ3);


    cout<<"Area de los circulos"<<endl;
    for( int i; i<circle.size();i++){
            circle[i].getArea();
    }



cout<<"el circulo 1 y circulo 2 "<<circ1.intersects, circ2.intersects;
cout<<"el circulo 2 y circulo 3 "<<circ2.intersects, circ3.intersects;
cout<<"el circulo 1 y circulo 3 "<<circ1.intersects, circ3.intersects;



return 0;


}
