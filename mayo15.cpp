#include <iostream> 
 
 using namespace std ; 

  main ()

{  

float angulo1 =0.00; 
float angulo2 =0.00; 
float respuesta = 0.00;



cout <<"programa para calcular el tercer angulo de un triangulo \n";
cout << "ingrese el primer angulo \n";
cin >>angulo1; 
cout<<"ingrese el segundo angulo \n";
cin>> angulo2; 


if ((angulo1 < 0 || angulo2 < 0) || ( angulo1>180 || angulo2>180) )
{
cout << "uno de los valores ingresados no esta permitido \n ";
}
else

 {
respuesta =180 - angulo1 - angulo2 ;
cout << "el valor del tercer angulo es :"<< respuesta << "\n"; 
}


return 0;

}
