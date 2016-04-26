//
//  main.c
//  2016
//
//  Created by MDM IOS DEV  on 07/03/16.
//  Copyright (c) 2016 AEG. All rights reserved.
//
/*
#include <stdio.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
*/

//Teniendo en cuenta la estructura del anterior ejercicio realizar otro que nos solicite un numero por pantalla y utilizando la estructura de control selectiva simple decir si en positivo,negativo o cero.

//int numero1;
//
//printf("escribe un numero\n");
//scanf("%d",&numero1);
//
//if (numero1<0)
//    printf("el numero es negativo");
//    if(numero1>0)
//         printf("el numero es positivo");
//    if(numero1==0)
//         printf("el numero es cero");
//    
    
    //escribir un numero y decir si es par o impar
    
    
//    int numero1;
//    
//    printf("escribe un numero\n");
//    scanf("%d",&numero1);
//    
//    
//
//    if (numero1%2==0)
//        printf("el numero es par");
//        else
//             printf("el numero es impar");
   
    
    //cambiar de metros a kilometros
    
//    int opc;
//    float distancia,cambio;
//    
//       printf("si quieres pasar de m a km introduce 1,si quieres pasar de km a m introduce 2 \n");
//        scanf("%d",&opc);
//    
//    
//        if (opc==1)
//        {
//            printf("escribe una distancia \n");
//            scanf("%f",&distancia);
//            cambio=distancia/1000;
//            printf("%.3f",cambio);
//        }
//           else if (opc==2)
//           {
//               printf("escribe una distancia \n");
//               scanf("%f",&distancia);
//               cambio=distancia*1000;
//    printf("%.3f",cambio);
//           }
    
    
    //hacer un programa que al introducir dos numeros, si son iguales multiplicarlos,si el primero es mayor que el segundo sumarlos y si no restarlos
    
    
//    int num1,num2,resul;
//    
//    printf("escribe un numero\n");
//    scanf("%d",&num1);
//    
//    printf("escribe otro numero\n");
//    scanf("%d",&num2);
//    
//    if (num1==num2)
//    {
//        resul=num1*num2;
//    printf("el resultado es %d",resul);
//    }
//    else if(num1>num2)
//    {
//        resul=num1+num2;
//        printf("el resultado es %d",resul);
//    }
//    else if(num1<num2)
//    {
//        resul=num1-num2;
//        printf("el resultado es %d",resul);
//    }
//    
//    
    
    //introducir 3 lados de un triangulo y decir si es equilatero,isosceles y escaleno
    
//    int num1,num2,num3;
//    
//       printf("escribe un lado\n");
//       scanf("%d",&num1);
//    
//        printf("escribe otro lado\n");
//        scanf("%d",&num2);
//    
//    printf("escribe otro lado\n");
//    scanf("%d",&num3);
//    
//       if (num1==num2 && num2==num3)
//       {
//
//        printf("el triangulo es equilatero");
//       }
//        else if(num1==num2 || num1==num3 || num2==num3)
//        {
//            
//            printf("el triangulo es isosceles");
//        }
//        else
//        {
//            printf("el triangulo es escaleno");
//       }
    
    
    
    
    
//    char dia;
//    printf("Elige un día de la semana: \n Lunes = L\n \n Martes = M\n \n Miercoles = X\n \n Jueves = J\n \n Viernes = V\n \n Sabado = S\n \n Domingo = D\n");
//    
//    scanf("%c",&dia);
//    switch (dia)
//    {
//        case 'L':
//            printf("el dia es Lunes");
//            break;
//            
//        case 'M':
//            printf("el dia es Martes");
//            break;
//            
//        case 'X':
//            printf("el dia es Miercoles");
//            break;
//            
//        case 'J':
//            printf("el dia es Jueves");
//            break;
//            
//        case 'V':
//            printf("el dia es Viernes");
//            break;
//            
//        case 'S':
//            printf("el dia es Sabado");
//            break;
//            
//        case 'D':
//            printf("el dia es Domingo");
//            break;
//            
//        default:
//            printf("error\n");
//            break;
//            
//    }
    
    
    //hacer una calculadora
    
    
//    int num1,num2;
//    printf("introduce un numero");
//    
//    scanf("%d",&num1);
//    
//    
//    printf("introduce otro numero");
//    
//    scanf("%d",&num2);
//    
//    
//    printf("si quieres sumar introduce +;\n si quieres restar introduce -;\n si quieres multiplicar introduce *;\n si quieres dividir introduce / \n");
//           
//    scanf("%c",&opc);
//        switch (dia)
//        {
//            case 'L':
//                printf("el dia es Lunes");
//                break;
//    
//           case 'M':
//                printf("el dia es Martes");
//               break;
//    
//            case 'X':
//                printf("el dia es Miercoles");
//                break;
//    
//            case 'J':
    //            printf("el dia es Jueves");
    //            break;
    //
    //        case 'V':
    //            printf("el dia es Viernes");
    //            break;
    //
    //        case 'S':
    //            printf("el dia es Sabado");
    //            break;
    //
    //        case 'D':
    //            printf("el dia es Domingo");
    //            break;
    //            
    //        default:
    //            printf("error\n");
    //            break;
    //            
    //    }

    
    
    //crear un programa que de a escoger entre 5 formas geometricas y una vez elegida pida los datos necesarios para calcular su area.
    
//    int num1;
//    float area,lado,altura,lado2,base,perimetro,apotema,radio;
//    
//    printf("introduce un 1 si quieres hayar el area de un cuadrado o rectangulo,\n2 si quieres hayar el area de un triangulo,\n3 si quieres hayar el area de un trapecio,\n4 si quieres hayar el area de un poligono regular,\n5 si quieres hayar el area de un ciculo \n");
//    
//    scanf("%d",&num1);
//    
//    switch (num1)
//    
//    {
//                        case 1:
//        printf("introduce un lado\n");
//    scanf("%f",&lado);
//        printf("introduce el otro lado\n");
//    scanf("%f",&lado2);
//        
//            area=lado*lado2;
//            printf("el area es %.3f",area);
//            break;
//        case 2:
//            printf("introduce la base\n");
//            scanf("%f",&base);
//            printf("introduce la altura\n");
//            scanf("%f",&altura);
//            
//            area=base*altura/2;
//            printf("el area es %.3f",area);
//            break;
//        case 3:
//            printf("introduce la base\n");
//            scanf("%f",&base);
//            printf("introduce la altura\n");
//            scanf("%f",&altura);
//            printf("introduce el lado2\n");
//            scanf("%f",&lado2);
//            
//            area=(base+lado2/2)*altura;
//            printf("el area es %.3f",area);
//            break;
//            
//        case 4:
//            printf("introduce el perimetro\n");
//            scanf("%f",&perimetro);
//            printf("introduce el apotema\n");
//            scanf("%f",&apotema);
//            
//            area=perimetro*apotema/2;
//            printf("el area es %.3f",area);
//            break;
//            
//        case 5:
//            printf("introduce el radio\n");
//            scanf("%f",&radio);
//            
//            
//            area=3,1416*(radio*radio);
//            printf("el area es %.3f",area);
//            break;
//            
//            
//        default:
//                    printf("error\n");
//                       break;
//    }
    
   
    //
    
    
    
    
    
    
    
    
    
    /*char op;
    int sal;
    int sdes;
    int h;
    
    printf("introduce las horas trabajadas\n");
    scanf("%d",&h);*/
    
    
    
    /*char c;
    
    c='a';
    
    while (c<='z')
    {
        printf("C vale: %d\n", c);
        c++;
        
    }*/
    
   /* int i,n;
    printf("Intruduce el numero de la tabla que te interese: \n");
    scanf("%d",&n);
    
    i=1;
    
    while(i<=10)
    {
        printf("\n %d*%d=%d\n", n,i,n*i);
        i++;
    }*/
    /*
    int i,n;
    printf("Intruduce el numero de la tabla que te interese: \n");
    scanf("%d",&n);
    
    i=1;
    
    while(i<=5)
    {
        printf("\n %d+%d=%d\n", n,i,n+i);
        i++;
    }
    */
    
    //pares sumarlos , impares multiplica , diferentes nada , pares 50 limite , impares 150 limite
    //
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    ///
    /*
    
    int vect[5]={3,5,7,9,2}, i,n, b=0,p=0;
    printf("Teclea el valor a buscar");
    scanf("%i",&n);
    
    for (i=0;i<5;i++)
    {
        if (vect[i]==n)
        {
            b=1;
            p=1;
        }
        
    }
        
        
        
    
    return 0;
}
     */
    
    //
    //  main.c
    //  EstructurasDeControl
    //
    //  Created by MDM IOS DEV  on 05/04/16.
    //  Copyright (c) 2016 AEG. All rights reserved.
    //
    /*
     #include <stdio.h>
     */
    /*//Ejemplo
     void suma();
     void resta();*/
    
    
    
    
    
    
    /*
     
     
     
     int main(int argc, const char * argv[])
     {
     */
    // insert code here...
    /*
     printf("Hello, World!\n");*/
    
    /* //Ejemplo
     int a=2;
     int b=2;
     
     (a==b) ? suma():resta();
     
     
     
     suma();
     resta();
     */
    
    //Ejercicio1 indicar un numero por pantalla e indicar si es positivo,negativo o cero;
    /*#include <stdio.h>
     
     //Ejer1
     void Positivo(){printf("el numero es positivo\n");};
     void Negativo(){printf("el numero es negativo\n");};
     void Cero(){printf("el numero es cero\n");};
     
     
     int main(int argc, const char * argv[])
     {
     printf("indicar un numero por pantalla e indicar si es positivo,negativo o cero\n\n");
     
     int num;
     
     printf("Introduce un numero\n");
     scanf("%i",&num);
     */
    /*
     if(num>0)
     printf("el numero es positivo\n");
     else if(num<0)
     printf("el numero es negativo\n");
     else if(num==0)
     printf("el numero es 0\n");
     */
    
    /*
     if(num>0)
     Positivo();
     else if(num<0)
     Negativo();
     else if(num==0)
     Cero();
     
     return 0;
     }
     */
    /*
     //ejercicio2
     //Ejercicio2
     
     void Par(){printf("el numero es par\n");};
     void Impar(){printf("el numero es impar\n");};
     
     int main(int argc, const char * argv[])
     {
     
     printf("Decir si el numero introducido es par o impar\n");
     
     int num;
     
     printf("Introduce un numero\n");
     scanf("%i",&num);
     
     if(num%2==0)
     Par();
     else if(num%2!=0)
     Impar();
     return 0;
     }
     */
    /**///Ejercico3
    //Convertir de kms a m o a la inversa
    /*
     #include <stdio.h>
     
     //Ejercicio3
     
     float km;
     float m;
     int opcion;
     
     void Multiplicar(){
     printf("Introduce los km que quieres convertir a m\n");
     scanf("%f",&km);
     m=km*1000;
     printf("%0.3f km son %0.3f m\n",km,m );
     }
     void Dividir(){
     printf("Introduce los m que quieres convertir a km\n");
     scanf("%f",&m);
     km=m/1000;
     printf("%0.3f m son %0.3f km\n",m,km );
     }
     
     
     
     int main(int argc, const char * argv[])
     {
     printf("Convertir de kilometros a metros y de metros a kilometros");
     
     
     int opcion;
     
     printf("Si quieres convertir de km a m introduce 1.\nSi quieres convertir de m a km introduce 2.\n");
     scanf("%i",&opcion);
     if(opcion==1)
     Multiplicar();
     else if(opcion==2)
     Dividir();
     return 0;
     }
     */
    
    
    //Ejercicio4
    //Introducir el año en que nacistes y decir si es bisiesto o no
    /*#include <stdio.h>
     //Ejercicio 4
     //int ano;
     
     
     int main(int argc, const char * argv[])
     {
     printf("Introducir el año en que nacistes y decir si es bisiesto o no\n\n");
     
     int ano;
     
     printf("Introduce tu año de nacimiento\n");
     scanf("%i%",&ano);
     
     if(ano%4==0)
     printf("El año es bisiesto\n");
     else if(ano%4!=0)
     printf("El año no es bisiesto\n");
     return 0;
     }
     */
    //Ejercicio5
    //solicitar dos numeros ,si son iguales los multiplicamos,si el primero es mayor que el segundo se restan y si el primero es menor que el segundo que se sumen
    /*#include <stdio.h>
     //Ejercicio 5
     int total;
     
     void Multiplicar(int num1,int num2)
     {
     total=num1*num2;
     printf("Los dos numeros introducidos son iguales y el resultado de su multiplicacion es %d\n",total);
     };
     void Restar(int num1,int num2){
     total=num1-num2;
     printf("El primer numero es mayor que el segundo y la resta del primero menos el segundo es %d\n",total);
     };
     void Sumar(int num1,int num2){
     total=num1+num2;
     printf("El primer numero es menor que el segundo y la suma es %d\n",total);
     };
     
     
     
     int main(int argc, const char * argv[])
     {
     printf("solicitar dos numeros ,si son iguales los multiplicamos,si el primero es mayor que el segundo se restan y si el primero es menor que el segundo que se sumen\n\n");
     
     int num1;
     int num2;
     int total;
     
     printf("introduce dos numeros\n");
     scanf("%i%i",&num1,&num2);
     
     if (num1==num2)
     {
     total=num1*num2;
     printf("Los dos numeros introducidos son iguales y el resultado de su multiplicacion es %d\n",total);
     }
     else if(num1>num2)
     {
     total=num1-num2;
     printf("El primer numero es mayor que el segundo y la resta del primero menos el segundo es %d\n",total);
     }
     else if(num1<num2)
     {
     total=num1+num2;
     printf("El primer numero es menor que el segundo y la suma es %d\n",total);
     }
     */
    /*
     int num1;
     int num2;
     int total;
     
     printf("introduce dos numeros\n");
     scanf("%i%i",&num1,&num2);
     
     if (num1==num2)
     {
     Multiplicar(num1,num2);
     }
     else if(num1>num2)
     {
     Restar(num1,num2);
     }
     else if(num1<num2)
     {
     Sumar(num1,num2);
     }
     return 0;
     }
     */
    //Ejercicio6
    //Introducir los 3 lados de un triangulo,comparar si todos son iguales,si dos son iguales e imprimir el tipo de triangulo que es
    /*
     #include <stdio.h>
     
     //ejercicio6
     
     void Triangulo(num1,num2,num3){
     if(num1==num2 && num1==num3)
     printf("El triangulo es equilatero");
     else if((num1==num2 && num1!=num3) || (num2==num3 && num2!=num1) || (num1==num3 && num1!=num2))
     printf("El triangulo es isosceles");
     else if(num1!=num2 && num1!=num3)
     printf("El triangulo es escaleno");
     }
     
     
     int main(int argc, const char * argv[])
     {
     printf("Introducir los 3 lados de un triangulo,comparar si todos son iguales,si dos son iguales e imprimir el tipo de triangulo que es");
     
     int nume1,nume2,nume3;
     
     printf("introduce tres numeros");
     scanf("%d%d%d",&nume1,&nume2,&nume3);
     
     Triangulo(nume1,nume2,nume3);
     return 0;
     }
     */
    
    //ejercicio7
    //introducir la inicial de un dia de la semana y decir que numero de dia es
    /*
     #include <stdio.h>
     void seleccion();
     
     
     int main(int argc, const char * argv[])
     {
     printf("introducir la inicial de un dia de la semana y decir que numero de dia es\n\n");
     
     char dia;
     
     printf("Introduce la inicial de un dia de la semana\n");
     scanf("%c",&dia);
     
     switch (dia) {
     case 'l':
     printf("Es el primer dia de la semana\n");
     break;
     case 'm':
     printf("Es el segundo dia de la semana\n");
     break;
     case 'x':
     printf("Es el tercer dia de la semana\n");
     break;
     case 'j':
     printf("Es el cuarto dia de la semana\n");
     break;
     case 'v':
     printf("Es el quinto dia de la semana\n");
     break;
     case 's':
     printf("Es el sexto dia de la semana\n");
     break;
     case 'd':
     printf("Es el septimo dia de la semana\n");
     break;
     
     
     default:
     break;
     }
     
     
     return 0;
     }
     */
    
    //hacer calculadora con funciones
    /*
     #include <stdio.h>
     
     
     int total;
     
     int suma(int num1,int num2)
     {
     total=num1+num2;
     return total;
     }
     int resta(int num1,int num2)
     {
     total=num1-num2;
     return total;
     }
     int multiplicacion(int num1,int num2)
     {
     total=num1*num2;
     return total;
     
     }
     int division(int num1,int num2)
     {
     total=num1/num2;
     return total;
     }
     
     
     int main(int argc, const char * argv[])
     {
     int num1,num2;
     char operacion;
     
     printf("Hacer una calculadora con funciones\n\n");
     
     #pragma mark recoger datos
     
     printf("Introduce el simbolo de la operacion que quieres hacer\n");
     scanf("%c",&operacion);
     
     printf("Introduce un numero\n");
     scanf("%i",&num1);
     
     
     printf("Introduce otro numero\n");
     scanf("%i",&num2);
     
     #pragma mark
     
     #pragma mark llamadas a la funcion
     if(operacion=='+')
     suma(num1,num2);
     else if(operacion=='-')
     resta(num1,num2);
     else if (operacion=='*')
     multiplicacion(num1,num2);
     else if (operacion=='/')
     division(num1,num2);
     #pragma mark
     
     #pragma mark recoger el resultado de la funcion
     
     printf("%i\n",total);
     
     #pragma mark
     
     
     
     
     return 0;
     }
     */
    
    //cacular el area de 4 formas geometricas
    /*
     #include <stdio.h>
     
     
     
     float pi=3.1416,total;
     
     float cuadrado(float num1)
     {
     total=num1*num1;
     return total;
     }
     float triangulo(float num1,float num2)
     {
     total=num1*num2/2;
     return total;
     }
     float circulo(float num1)
     {
     total=pi*num1*num1;
     return total;
     
     }
     float cubo(float num1)
     {
     total=num1*num1*4;
     return total;
     }
     
     
     int main(int argc, const char * argv[])
     {
     float num1,num2;
     int forma_geometrica;
     
     printf("Calcular el area de 4 formas geometricas\n\n");
     
     #pragma mark recoger datos
     
     printf("Si quieres calcular el area de un cuadrado introduce 1\nSi quieres calcular el area de un triangulo introduce 2\nSi quieres calcular el area de un circulo introduce 3\nSi quieres calcular el area de un cubo introduce 4\n");
     scanf("%i",&forma_geometrica);
     
     
     #pragma mark
     
     #pragma mark llamadas a la funcion
     
     if(forma_geometrica==1)
     {
     printf("Introduce el lado\n");
     scanf("%f",&num1);
     cuadrado(num1);
     }
     else if(forma_geometrica==2)
     {
     printf("Introduce la base\n");
     scanf("%f",&num1);
     printf("Introduce la altura\n");
     scanf("%f",&num2);
     triangulo(num1,num2);
     }
     else if(forma_geometrica==3)
     {
     printf("Introduce el radio\n");
     scanf("%f",&num1);
     circulo(num1);
     }
     else if(forma_geometrica==4)
     {
     printf("Introduce el lado\n");
     scanf("%f",&num1);
     cubo(num1);
     }
     
     #pragma mark
     
     #pragma mark recoger el resultado de la funcion
     printf("El area es %.3f\n",total);
     
     
     #pragma mark
     
     
     
     
     return 0;
     }
     */
    //introducir las horas trabajadas
    //introducir el puesto que desempeña
    //Indicar el salario real.Si gana mas de 5000€ a la semana reducir su salario en un 23%(impuestos).
    //imprimir su salario bruto,el neto y lo que paga de impuestos.
    
    //Director      60
    //Gerente       45
    //Supervisor    30
    //Ejecutivo     15
    //Secretario    8
    /*
     #include <stdio.h>
     
     
     
     int main(int argc, const char * argv[])
     {
     printf("introducir las horas trabajadas a la semana\nintroducir el puesto que desempeña/nIndicar el salario real.Si gana mas de 5000€ a la semana reducir su salario en un 23%(impuestos)./nimprimir su salario bruto,el neto y lo que paga de impuestos.\n");
     
     float horas,salario,salariored,impuestos;
     char puesto;
     
     
     printf("Introduce el puesto que desempeñas\nD-Director\t600\nG-Gerente\t450\nS-Supervisor\t300\nE-Ejecutivo\t150\nX-Secretario\t80\n");
     scanf("%c",&puesto);
     printf("Introduce las horas trabajadas a la semana\n");
     scanf("%f",&horas);
     
     
     
     switch (puesto) {
     case 'D':
     salario=horas*600;
     if (salario>5000)
     {
     impuestos=salario*0.23;
     salariored=salario-impuestos;
     printf("El salario sin impuestos es %0.3f.\nEl salario reducido es %0.3f.\nLos impuestos son %0.3f.\n",salario,salariored,impuestos);
     }
     else
     {
     printf("El salario es %0.3f,no supera los 5000 y no se aplica ninguna reduccion\n",salario);
     }
     break;
     case 'G':
     salario=horas*450;
     if (salario>5000)
     {
     impuestos=salario*0.23;
     salariored=salario-impuestos;
     printf("El salario sin impuestos es %0.3f.\nEl salario reducido es %0.3f.\nLos impuestos son %0.3f.\n",salario,salariored,impuestos);
     }
     else
     {
     printf("El salario es %0.3f,no supera los 5000 y no se aplica ninguna reduccion\n",salario);
     }
     break;
     case 'S':
     salario=horas*300;
     if (salario>5000)
     {
     impuestos=salario*0.23;
     salariored=salario-impuestos;
     printf("El salario sin impuestos es %0.3f.\nEl salario reducido es %0.3f.\nLos impuestos son %0.3f.\n",salario,salariored,impuestos);
     }
     else
     {
     printf("El salario es %0.3f,no supera los 5000 y no se aplica ninguna reduccion\n",salario);
     }
     break;
     case 'E':
     salario=horas*150;
     if (salario>5000)
     {
     impuestos=salario*0.23;
     salariored=salario-impuestos;
     printf("El salario sin impuestos es %0.3f.\nEl salario reducido es %0.3f.\nLos impuestos son %0.3f.\n",salario,salariored,impuestos);
     }
     else
     {
     printf("El salario es %0.3f,no supera los 5000 y no se aplica ninguna reduccion\n",salario);
     }
     break;
     case 'X':
     salario=horas*80;
     if (salario>5000)
     {
     impuestos=salario*0.23;
     salariored=salario-impuestos;
     printf("El salario sin impuestos es %0.3f.\nEl salario reducido es %0.3f.\nLos impuestos son %0.3f.\n",salario,salariored,impuestos);
     }
     else
     {
     printf("El salario es %0.3f,no supera los 5000 y no se aplica ninguna reduccion\n",salario);
     }
     break;
     
     default:
     break;
     }
     
     
     return 0;
     }
     */
    
    
    
    
    /*
     #include <stdio.h>
     
     
     
     int main(int argc, const char * argv[])
     {
     float precio,preciotot,preciored;
     int cantidad;
     
     
     printf("Introduce el precio de la camiseta\n");
     scanf("%f",&precio);
     
     printf("Introduce la cantidad de camisetas que has comprado\n");
     scanf("%i",&cantidad);
     
     preciotot=precio*cantidad;
     
     if(cantidad>=3)
     preciored=preciotot-preciotot*.2;
     else
     preciored=preciotot-preciotot*.1;
     
     printf("El precio es %0.3f\n",preciored);
     
     return 0;
     }
     */
    
    /*
     
     #include <stdio.h>
     
     struct Pizza
     {
     int tam;
     float precio;
     char ing[3][15];
     };
     
     
     int main(int argc, const char * argv[])
     {
     
     
     
     struct Pizza pedidos[10];
     
     int indice=0,opc,cont,i;
     do{
     do{
     printf("******PIZZAS******");
     printf("1.Hacer pedido\n2.Mostrar\n3.Salir\n\n¿Que desea hacer?:");
     scanf("%d",&opc);
     
     }while(opc!=1 && opc !=2 &&opc!=3);
     
     
     //*********ESCOGER TAMAÑO************
     
     if(opc==1)
     {
     printf("\n tamaño de su pizza?\n\n\n\n");
     printf("1.Pequeña\n2.Mediana\n3.Grande\n\n\nOpcion:\t");
     scanf("%d",&pedidos[indice].tam);
     
     //**********APLICAR PRECIO
     }
     if (pedidos[indice],tam==1)
     pedidos[indice].precio=45;
     
     if(pedidos[indice],tam==2)
     pedidos[indice].precio=70;
     else pedidos[indice].precio=100;
     
     //**********ESCOGER INGREDIENTES**********
     
     cont=0;
     do{
     printf("\n ingredientes de su pizza?(maximo 3)\t");
     printf("1.Jamon\n2.Bacon\n3.Queso\n4.Aceitunas\n5.Salchicha\n6.Extra queso\n7.Listo\n\n\nAgregar ingredientes:");
     scanf("%d",&i);
     
     if(i==1)strcpy(pedidos[indice],ing(cont),"Jamon");
     if(i==2)strcpy(pedidos[indice],ing(cont),"Bacon");
     if(i==3)strcpy(pedidos[indice],ing(cont),"Queso");
     if(i==4)strcpy(pedidos[indice],ing(cont),"Aceitunas");
     if(i==5)strcpy(pedidos[indice],ing(cont),"Salchichas");
     if(i==6)strcpy(pedidos[indice],ing(cont),"Extra queso");
     
     printf("\ningrediente agregado");
     
     cont++;
     
     }while(cont<3&&opc !=7");
     
     printf("Esta listo su pedido");
     indice++;
     
     }
     if(opc==2)
     {
     for(i=0;i<indice;i++)
     {
     printf("%d precio %.2f\n",pedidos[i],tam,pedidos[i].precio);
     }
     }
     }while(opc!=3);
     }
     
     
     return 0;
     }
     */
    
    /*
     #include <stdio.h>
     
     int opc;
     
     struct agenda
     {
     char nombre;
     int edad;
     float estatura,peso;
     }alumno[5];
     
     void introDatos()
     {
     
     int i;
     for(i=1;i<4;i++)
     {
     printf("COMENZAMOS.......\n");
     printf("INTRODUCE EL NOMBRE DEL ALUMNO %i\n",i);
     scanf("%s",&alumno[i].nombre);
     printf("INTRODUCE LA EDAD DEL ALUMNO %i\n",i);
     scanf("%i",&alumno[i].edad);
     printf("INTRODUCE LA ESTATURA DEL ALUMNO %i\n",i);
     scanf("%f",&alumno[i].estatura);
     printf("INTRODUCE EL PESO DEL ALUMNO %i\n",i);
     scanf("%f",&alumno[i].peso);
     }
     }
     
     void impDatos()
     {
     
     int i;
     for(i=1;i<4;i++)
     {
     
     printf("%i - EL NOMBRE DEL ALUMNO ES %c\n",i,alumno[i].nombre);
     
     printf("%i - LA EDAD DEL ALUMNO ES %i\n",i,alumno[i].edad);
     
     printf("%i - LA ESTATURA DEL ALUMNO ES %0.2f\n",i,alumno[i].estatura);
     
     printf("%i - EL PESO DEL ALUMNO ES %0.2f\n",i,alumno[i].peso);
     
     }
     }
     void impDato()
     {
     int opc,i;
     
     printf("Selecciona el numero de alumno que quieres ver\n");
     scanf("%i",&opc);
     
     if(opc>0&&opc<4)
     {
     
     printf("%i - EL NOMBRE DEL ALUMNO ES %c\n",opc,alumno[opc].nombre);
     
     printf("%i - LA EDAD DEL ALUMNO ES %i\n",opc,alumno[opc].edad);
     
     printf("%i - LA ESTATURA DEL ALUMNO ES %0.2f\n",opc,alumno[opc].estatura);
     
     printf("%i - EL PESO DEL ALUMNO ES %0.2f\n",opc,alumno[opc].peso);
     }
     else
     printf("No entra\n");
     
     }
     
     
     void mainMenu()
     {
     int opc;
     
     printf("OPCION 1 - INTRODUCIR DATOS\n");
     printf("OPCION 2 - IMPRIMIR TODOS LOS DATOS\n");
     printf("OPCION 3 - IMPRIMIR EL DATO SOLICITADO\n");
     printf("Introduce una opcion: \n");
     scanf("%i",&opc);
     
     switch (opc) {
     case 1:
     introDatos();
     break;
     case 2:
     impDatos();
     break;
     case 3:
     impDato();
     break;
     
     default:
     break;
     }
     }
     
     
     int main(int argc, const char * argv[])
     {
     
     do
     {
     mainMenu();
     }
     while (opc<=4);
     {
     printf("No hay mas alumnos\n");
     }
     
     return 0;
     }
     */
    /*
     #include <stdio.h>
     
     void introducirdatos();
     void imprimirdatos();
     
     void introducirdatos()
     {
     for (int i=0;i<5;i++)
     {
     printf("Introduce los datos de 5 alumnos");
     printf("Introduce los datos del alumno");
     scanf("%s%s%s%f",&alumno[i].nombrec.nombre,&alumno[i].nombrec.apellidomat,&alumno[i].nombrec.apellidopat,&alumno[i].estatura);
     printf("Introduce las 3 notas\n");
     for (int j=0;j<3;j++)
     {
     scanf("%i",&alumno[i].calificacion[j]);
     }
     }
     }
     
     struct agenda
     {
     char nombre;
     int edad;
     float estatura,peso;
     }alumno[5];
     
     struct alumno[5]
     {
     char nombre,apellidomat,apellidopat;
     
     }nombrec;
     
     int main(int argc, const char * argv[])
     {
     
     
     return 0;
     }
     */
    /*
     #include <stdio.h>
     #define max 10
     
     //********Variables Globales********
     int i,j,n,op;
     
     //********Variables Globales********
     
     struct datos
     {
     char nombre[15];
     char apellipat[15];
     char apellimat[15];
     
     };
     
     typedef struct direccion
     {
     struct datos usuario;
     int telefono[3];
     }persona;
     
     void menu();
     persona IPersona[max];
     void IniciV()
     {
     
     
     for(i=0 ; i<max; i++)
     {
     IPersona[i].usuario.nombre[0] = '\0';
     IPersona[i].usuario.apellipat[0] = '\0';
     IPersona[i].usuario.apellimat[0] = '\0';
     for(j=0; j<3; i++)
     {
     IPersona[i].telefono[j] = 0;
     }
     }
     
     }
     
     void AgregarD()
     {
     
     i=0;
     printf("Cuantos personas quieres introducir?\n");
     scanf("%d", &n);
     
     while(i<n)
     {
     printf("Introduce el nombre, apellido pat, apellido mat\n");
     scanf("%s\n%s\n%s", IPersona[i].usuario.nombre,IPersona[i].usuario.apellipat, IPersona[i].usuario.apellimat);
     for(j=0 ; j<3; j++)
     {
     printf("Introduce un num de telefono\n");
     scanf("%i", &IPersona[i].telefono[j]);
     
     }
     i++;
     }
     
     menu();
     
     }
     
     void ImprimiD()
     {
     
     printf("Nombre\tTelefono1\tTelefono2\tTelefono3\n");
     
     for (i=0; i<n; i++)
     {
     printf("%s\t\t\t%i\t\t\t%i\t\t\t%i\n", IPersona[i].usuario.nombre, IPersona[i].telefono[0],IPersona[i].telefono[1],IPersona[i].telefono[2]);
     
     }
     menu();
     }
     
     void finish()
     {
     printf("Cerrando programa, por favor espere...\n");
     
     }
     
     void menu()
     {
     do{
     printf("1:Introduce datos\n2:Mostrar Datos\n3:Salir\n");
     scanf("%i",&op);
     
     switch (op) {
     case 1:
     AgregarD();
     break;
     case 2:
     ImprimiD();
     break;
     case 3:
     finish();
     break;
     default:
     printf("Introduce una opcion correcta\n");
     break;
     }
     
     }while((op =! 3));
     
     
     }
     int main(int argc, const char * argv[])
     {
     //Almacenar en una estructura nombre y apellidos de una persona, crear otra que contenga el nombre y tres numero de telefono,almacenarlo en un array e iniciarlizarlo, agregar datos y mostrarlos usando el tipo de dato definido por el usuario(yo).
     
     menu();
     return 0;
     }
     */
    
    /*
     #include <stdio.h>
     #define max 10
     
     //********Variables Globales********
     int i,j,n,op;
     
     //********Variables Globales********
     
     struct datos
     {
     char nombre[15];
     char apellipat[15];
     char apellimat[15];
     
     };
     
     typedef struct direccion
     {
     struct datos usuario;
     int telefono[3];
     }persona;
     
     void menu();
     persona IPersona[max];
     void IniciV()
     {
     
     
     for(i=0 ; i<max; i++)
     {
     IPersona[i].usuario.nombre[0] = '\0';
     IPersona[i].usuario.apellipat[0] = '\0';
     IPersona[i].usuario.apellimat[0] = '\0';
     for(j=0; j<3; i++)
     {
     IPersona[i].telefono[j] = 0;
     }
     }
     
     }
     
     void AgregarD()
     {
     
     i=0;
     printf("Cuantos personas quieres introducir?\n");
     scanf("%d", &n);
     
     while(i<n)
     {
     printf("Introduce el nombre, apellido pat, apellido mat\n");
     scanf("%s\n%s\n%s", &IPersona[i].usuario.nombre, &IPersona[i].usuario.apellipat, &IPersona[i].usuario.apellimat);
     for(j=0 ; j<3; j++)
     {
     printf("Introduce un num de telefono\n");
     scanf("%i", &IPersona[i].telefono[j]);
     
     }
     i++;
     }
     
     menu();
     
     }
     
     void ImprimiD()
     {
     
     printf("Nombre\tTelefono1\tTelefono2\tTelefono3\n");
     
     for (i=0; i<n; i++)
     {
     printf("%s\t%i\t%i\t%i\n", IPersona[i].usuario.nombre, IPersona[i].telefono[0],IPersona[i].telefono[1],IPersona[i].telefono[2]);
     
     }
     menu();
     }
     
     void finish()
     {
     printf("Cerrando programa, por favor espere...\n");
     
     }
     
     void menu()
     {
     do{
     printf("1:Introduce datos\n2:Mostrar Datos\n3:Salir\n");
     scanf("%i",&op);
     
     switch (op) {
     case 1:
     AgregarD();
     break;
     case 2:
     ImprimiD();
     break;
     case 3:
     finish();
     break;
     default:
     printf("Introduce una opcion correcta\n");
     break;
     }
     
     }while((op =! 3));
     
     
     }
     int main(int argc, const char * argv[])
     {
     //Almacenar en una estructura nombre y apellidos de una persona, crear otra que contenga el nombre y tres numero de telefono,almacenarlo en un array e iniciarlizarlo, agregar datos y mostrarlos usando el tipo de dato definido por el usuario(yo).
     
     menu();
     return 0;
     }
     */
    
    
    /*
     
     */
    //menu en el main,elegir numero del 1 al 10,si es positivo sumar dos veces, que tenga 4 operadores,
    //Ejercicio obligatorio con funciones sin parametros
    //Sacar un menu con 4 opciones
    //Suma,resta multiplicacion y division
    //Solicitar un numero y si es par elegir entre sumar o restar
    //Si es impar elegir entre multiplicar o dividir
    //pedir el numero con el que realizar la operacion
    //imprimir el resultado
    /*
     #include <stdio.h>
     
     int num1,num2,opcion,total;
     void recoge2();
     
     void sumar()
     {
     total=num1+num2;
     }
     void restar()
     {
     total=num1-num2;
     }
     void multiplicar()
     {
     total=num1*num2;
     }
     void dividir()
     {
     total=num1/num2;
     }
     void menu1()
     {
     
     printf("Introduce un 1 si quieres sumar\nIntroduce un 2 si quieres restar\n");
     scanf("%i",&opcion);
     recoge2();
     switch (opcion) {
     case 1:
     sumar();
     break;
     case 2:
     restar();
     break;
     
     default:
     break;
     }
     }
     
     void menu2()
     {
     
     printf("Introduce un 1 si quieres multiplicar\nIntroduce un 2 si quieres dividir\n");
     scanf("%i",&opcion);
     recoge2();
     switch (opcion) {
     case 1:
     multiplicar();
     break;
     case 2:
     dividir();
     break;
     
     default:
     break;
     }
     }
     void recoge1()
     {
     
     printf("Introduce un numero para hacer la operacion\n");
     scanf("%d",&num1);
     }
     void recoge2()
     {
     
     printf("Introduce otro numero para hacer la operacion\n");
     scanf("%d",&num2);
     }
     
     int main(int argc, const char * argv[])
     {
     recoge1();
     if(num1%2==0)
     menu1();
     
     else if (num1%2!=0)
     menu2();
     
     
     
     printf("El resultado es %d\n",total);
     return 0;
     }
     */
    /*
     #include <stdio.h>
     float area();
     float sumabases();
     
     int main(int argc, const char * argv[])
     {
     printf("%.3f\n",area());
     return 0;
     }
     float sumabases()
     {
     float bm;
     float BM;
     
     printf("Dame la base menor");
     scanf("%f",&bm);
     printf("Dame la base mayor");
     scanf("%f",&BM);
     
     return (bm+BM);
     
     }
     float area()
     {
     float h;
     printf("Dame la altura\n");
     scanf("%f",&h);
     
     return sumabases() * h/2;
     }
     */
    /*
     #include <stdio.h>
     
     int main(int argc, const char * argv[])
     {
     int *punt;
     int x=7;
     int y=5;
     // printf("%d/n",punt);
     //  printf("%d/n",*punt);
     punt=&x;
     printf("punt = %d\n",punt);
     printf("*punt = %d\n",*punt);
     *punt=4;
     printf("%d,%d",x,y); //¿Qué imprime este printf?
     
     
     return 0;
     }
     */
    /*
     #include <stdio.h>
     int main(int argc, const char * argv[])
     {
     int *punt;
     int x=7;
     int y=5;
     punt=&x;
     x=4;
     printf("%d, %d",*punt,y);// ¿qué imprime este printf?
     
     return 0;
     }
     */
    /*
     #include <stdio.h>
     int main(int argc, const char * argv[])
     {
     int *punt;
     int x=7;
     int y=5;
     punt=&x;
     x=4;
     punt=&y;
     printf("%d, %d",*punt,x); //¿Qué imprime este printf?
     return 0;
     }
     */
    /*
     #include <stdio.h>
     int main(int argc, const char * argv[])
     {
     
     int *punt;
     int x=7;
     int y=5;
     punt=&x;
     *punt=3;
     punt=&y;
     *punt=x;
     x=9;
     printf("%d, %d",*punt,x); //¿Qué imprime este printf?
     return 0;
     }
     */
    /*
     #include <stdio.h>
     int main(int argc, const char * argv[])
     {
     int *punta, *puntb;
     int x=7;
     int y=5;
     punta=&x;
     *punta=3;
     puntb=&y;
     *puntb=x;
     x=9;
     printf("%d,%d",*puntb,x);//que imprime este printf?
     
     return 0;
     }
     */
    /*
     #include <stdio.h>
     int main(int argc, const char * argv[])
     {
     
     int *punta, *puntb;
     int x=7;
     int y=5;
     punta=&x;
     *punta=3;
     puntb=&y;
     *puntb=x;
     x=9;
     printf("%d, %d",*puntb, *punta); // ¿qué imprime?
     
     return 0;
     }
     */
    /*
     #include <stdio.h>
     int main(int argc, const char * argv[])
     {
     int *punta, *puntb;
     int x=7;
     int y=5;
     punta=&x;
     *punta=3;
     puntb=&y;
     *puntb=x;
     x=9;
     puntb=punta;
     printf("%d, %d",*puntb, y); // ¿qué imprime?
     return 0;
     }
     */
    /*
     #include <stdio.h>
     int main(int argc, const char * argv[])
     {
     int *punt,i;
     int x[5]={1,2,3,4,5};
     punt=x;
     printf("punt = %d,*punt, = %d,x = %d\n",punt,*punt,x);
     *punt=9;
     printf("punt = %d,*punt, = %d,x = %d\n",punt,*punt,x);
     for(i=0;i<5;i++){
     printf("%d,\n",x[i]); // ¿qué imprime?
     printf("punt = %d,*punt, = %d,x = %d\n",punt,*punt,x);}
     return 0;
     }
     */
    /*
     #include <stdio.h>
     
     void mainMenu();
     float solicitarValores();
     float sumar(float x,float y);
     float restar(float x,float y);
     float multiplicar(float x,float y);
     float dividir(float x,float y);
     void total(float a);
     
     
     
     float solicitarprimerValor(){
     
     float num1;
     
     printf("Introduce un numero");
     scanf("%f",&num1);
     
     return num1;
     
     }
     
     float solicitarsegundoValor(){
     
     float num2;
     
     printf("Introduce otro numero");
     scanf("%f",&num2);
     
     return num2;
     
     }
     
     
     float sumar(float x,float y){
     float total;
     total=x+y;
     return total;
     }
     
     float restar(float x,float y){
     float total;
     total=x-y;
     return total;
     }
     float multiplicar(float x,float y){
     float total;
     total=x*y;
     return total;
     }
     
     float dividir(float x,float y){
     float total;
     total=x/y;
     return total;
     }
     
     
     void total1(float a){
     
     printf("El total es %.3f",a);
     }
     
     
     int main(int argc, const char * argv[])
     {
     int opc;
     
     printf("Opcion 1 suma\nOpcion 2 resta\nOpcion 3 multiplicacion\nOpcion 4 division");
     scanf("%d",&opc);
     
     float num1, num2,total;
     
     num1 = solicitarprimerValor();
     num2 = solicitarsegundoValor();
     
     switch (opc) {
     case 1:
     total=sumar(num1,num2);
     total1(total);
     break;
     case 2:
     total=restar(num1,num2);
     total1(total);
     break;
     case 3:
     total=multiplicar(num1,num2);
     total1(total);
     break;
     case 4:
     total=dividir(num1,num2);
     total1(total);
     break;
     default:
     break;
     }
     
     
     
     
     
     
     
     return 0;
     }
     */
/*
#include <stdio.h>
    
    void leer();
    int num[10],i,total=0,resul,mayor=0,menor=0;
    
    void leer()
    {
        
        for(i=1;i<=10;i++)
        {
            printf("Introduce el valor\n");
            scanf("%i",&num[i]);
            
            if(i==1)
            {
                mayor=num[i];
                menor=num[i];
            }
            if(num[i]>mayor)
                mayor=num[i];
            
            if(num[i]<menor)
                menor=num[i];
        }
        printf("El valor mayor introducido es %i\n",mayor);
        printf("El valor menor introducido es %i\n",menor);
        
        
        //printf("resul en leer vale %i\n",resul);
        
        
    }
    
    int promedio(int total)
    {
        for(i=1;i<=10;i++)
        {
            total=total+num[i];
            //printf("%i\n",total);
        }
        printf("la suma de todos los valores introducidos es %i\n",total);
        total=total/10;
        
        return total;
    }
    
    
    int main(int argc, const char * argv[])
    {
        leer();
        total=promedio(total);
        printf("el promedio de todos los valores introducidos es %i\n",total);
        
        return 0;
    };
    */
/*
#include <stdio.h>

int i;
char asterisco='*';

void marco()
{
    for(i=0;i<13;i++)
    {
        printf("%c",asterisco);
        
    }
    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("%c\t\t\t%c\n",asterisco,asterisco);
    }
    for(i=0;i<13;i++)
    {
        printf("%c",asterisco);
        
    }
}
int main(int argc, const char * argv[])
{
    marco();
    return 0;
}
*/
/*
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int *apint;
    int *p_apuntador;
    float *apfloat;
    
    int dato1;
    float dato2;
    
    apint = &dato1;
    apfloat = &dato2;
    
    *apfloat = 3.2f;
    *apint = 3;
    
    printf("1Valor de dato1 = %i,Valor de &dato1=%d, Valor de *apnit=%p\n",dato1,&dato1,apint);
    
    *apint = 45;
    
    printf("2Valor de dato1 = %i,Valor de &dato1=%d, Valor de *apnit=%p\n",dato1,&dato1,apint);
    
    printf("1Valor de dato2 = %.2f,Valor de &dato2=%d, Valor de *apfloat=%p\n",dato2,&dato2,apfloat);
    
    *apfloat = 51.3f;
    
    printf("2Valor de dato2 = %.2f,Valor de &dato2=%d, Valor de *apfloat=%p\n",dato2,&dato2,apfloat);
    
    *apint = ++(*apint);
    *apfloat = --(*apfloat);
    
    printf("3Valor de dato1 = %i,Valor de &dato1=%d, Valor de *apnit=%p\n",dato1,&dato1,apint);
    
    printf("3Valor de dato2 = %.2f,Valor de &dato2=%d, Valor de *apfloat=%p\n",dato2,&dato2,apfloat);
    
    return 0;
}

*/
/*
#include <stdio.h>

#define  NULL 0

int main(int argc, const char * argv[])
{
    
    int *apint;
    
    int dato1;
    
    //apint=&dato1;
    apint = NULL;
    
    struct t_nombre {
        char nom[10];
        char apem[10];
        char apep[10];
    };
    struct t_datos
    {
    struct t_nombre nombrec;
    float edad;
};

struct t_datos *nn;
struct t_datos n;

nn=&n;
    
    printf("Leer datos: \n");
    printf("Nombre");
    
    scanf("%s",nn->nombrec.nom);
    
    printf("Apellido Materno\n");
    scanf("%s",nn->nombrec.apem);
    
    printf("Apellido Paterno\n");
    scanf("%s",nn->nombrec.apep);
    
    printf("Edad\n");
    scanf("%f",&nn->edad);
    
    //printf("%i",n.edad);
    
    printf("Mostrar Datos\n");
    
    printf("Nombre: %s\n",nn->nombrec.nom);
    printf("Apellido Materno %s\n",nn->nombrec.apem);
    printf("Apellido Paterno %s\n",nn->nombrec.apep);
    printf("Edad %.0f\n",nn->edad);
    


    return 0;
}
 */
#include <stdio.h>
//ejer14
void suma_dos(int *x, int *y, int *z)
{
    *x=*x+2;
    *y=*y+2;
    *z=*z+2;
}
void main14(void){
    int x,y,z;
    x=3;
    y=10;
    z=15;
    suma_dos (&x, &y, &z);
    printf("%d %d %d %d",x, y, z);// qué imprimirá??
}



//ejer15
void datos15(int *x, float *y, char *c)
{
    *x=8;
    *y=4.2;
    *c='g';
}
void main15(void){
    int x=9;
    float y=44.6;
    char c='a';
    datos15 (&x, &y, &c);
    printf("%d %f %c",x, y, c);// qué imprimirá??
}

//ejer16
void datos16(int *x, float *y, char *c)
{
    printf("%d %f %c",x, y, c);
    *x=8;
    *y=4.2;
    *c='g';
}
void main16(void){
    int x=9;
    float y=44.6;
    char c='a';
    datos16 (&x, &y, &c);
    printf("%d %d %f %c",x, y, c);// qué imprimirá??
}

//ejer17
void datos17(int x, float y, char c)
{
    printf("%d %f %c",x, y, c);
    x=8;
    y=4.2;
    c='g';
}
void main17(void){
    int x=9;
    float y=44.6;
    char c='a';
    datos17 (x, y, c);
    printf("%d %d %f %c",x, y, c);// qué imprimirá??
}




//ejer18
int datos18(int x, float y, char c)
{
    printf("%d %f %c",x, y, c);
    x=8;
    y=4.2;
    c='g';
    return x;
}
void main18(void){
    int x=9;
    float y=44.6;
    char c='a';
    x=datos18 (x, y, c);
    printf("%d %d %f %c",x, y, c);// qué imprimirá??
}



//ejer19
char datos19(int *x, float *y, char *c)
{
    printf("%d %f %c",x, y, c);
    *x=8;
    *y=4.2;
    *c='g';
    return 'h' ;
}
void main19(void){
    int x=9;
    float y=44.6;
    char c='a';
    c=datos19 (&x, &y, &c);
    printf("%d %d %f %c",x, y, c);// qué imprimirá??
}



int main(int argc, const char * argv[])
{
    int ejer;
    printf("EJERCICIOS DE PUNTEROS, ARRAYS Y FUNCIONES\n");
    printf("Ejercicios:\n");
    printf("introduce el numero de ejercicio que quieres ver\n");
    scanf("%i",&ejer);
    switch (ejer) {
        case 1:
            
    
    printf("Ejercicio 1: Punteros ¿Qué imprime?");
    
int *punt;
int x=7;
int y=5;
punt=&x;
*punt=4;
printf("%d, %d",x,y); //¿Qué imprime este printf?
    
    
    break;
    
        case 2:
        {
            printf("Ejercicio 2: Punteros ¿Qué imprime?");
int *punt;
int x=7;
int y=5;
punt=&x;
x=4;
printf("%d, %d",*punt,y);// ¿qué imprime este printf?
            break;
        }
        case 3:
        {
            printf("Ejercicio 3: Punteros ¿Qué imprime?");
int *punt;
int x=7;
int y=5;
punt=&x;
x=4;
punt=&y;
printf("%d, %d",*punt,x); //¿Qué imprime este printf?
            break;
        }
        case 4:
        {
            printf("Ejercicio 4: Punteros ¿Qué imprime?");
int *punt;
int x=7;
int y=5;
punt=&x;
*punt=3;
punt=&y;
*punt=x;
x=9;
printf("%d, %d",*punt,x); //¿Qué imprime este printf?
            break;
        }
        case 5:
        {
            printf("Ejercicio 5: Punteros ¿Qué imprime?");
int *punta, *puntb;
int x=7;
int y=5;
punta=&x;
*punta=3;
puntb=&y;
*puntb=x;
x=9;
            printf("%d,%d",*puntb,x);// ¿qué imprime este printf?
       
            break;
        }
        case 6:
        {
            printf("Ejercicio 6: Punteros ¿Qué imprime?");
       int *punta, *puntb;
       

int x=7;
int y=5;
punta=&x;
*punta=3;
puntb=&y;
*puntb=x;
x=9;
printf("%d, %d",*puntb, *punta); // ¿qué imprime?
            
            break;
        }
        case 7:
        {
            printf("Ejercicio 7: Punteros ¿Qué imprime?");
int *punta, *puntb;
int x=7;
int y=5;
punta=&x;
*punta=3;
puntb=&y;
*puntb=x;
x=9;
puntb=punta;
printf("%d, %d",*puntb, y); // ¿qué imprime?
            break;
        }
        case 8:
        {
            printf("Ejercicio 8: Punteros y arrays ¿Qué imprime?");
int *punt,i;
int x[5]={1,2,3,4,5};
punt=x;
*punt=9;
for(i=0;i<5;i++)
printf("%d,",x[i]); // ¿qué imprime?
            break;
        }
        case 9:
        {
            printf("Ejercicio 9: Punteros y arrays ¿Qué imprime?");
int *punt,i;
int x[5]={1,2,3,4,5};
punt=&x[0];
*punt=9;
punt[3]=7;
for(i=0;i<5;i++)
printf("%d,",x[i]); // ¿qué imprime?
            break;
        }
        case 10:
        {
            printf("Ejercicio 10: Punteros y arrays ¿Qué imprime?");
int *punt,i;
int x[5]={1,2,3,4,5};
punt=x;
*x=11;
*(punt+3)=9 ;
for(i=0;i<5;i++)
printf("%d,",x[i]); // ¿qué imprime?
            break;
        }
        case 11:
        {
            printf("Ejercicio 11: Punteros y arrays ¿Qué imprime?");
int *punt,i;
int x[5]={1,2,3,4,5};
punt=x;
*(punt+2)=9;
*(x+3)=7 ;
punt[1]=11 ;
for(i=0;i<5;i++)
printf("%d,",*(punt+i));//¿Qué imprime?
            break;
        }
        case 12:
        {
            printf("Ejercicio 12: Punteros y arrays ¿Qué imprime?");
int *punt,i;
int x[5]={1,2,3,4,5};
punt=x+4;
*(punt-2)=9;
punt--;
*(punt)=7 ;
punt[1]=11 ;
for(i=0;i<5;i++)
printf("%d,",*(x+i)); // ¿qué imprime?
            break;
        }
        case 13:
        {
            printf("Ejercicio 13: Punteros y arrays ¿Qué imprime?");
int *punt,i;
int x[5]={1,2,3,4,5};
punt=&x[0]+3;
*(punt-2)=9;
punt--;
*(punt)=7;
punt[1]=11;
punt=x;
for(i=0;i<5;i++) printf("%d,",punt[i]); // ¿qué imprime?
            
            break;
        }
        case 14:
        {
            printf("Ejercicio 14: Punteros y funciones ¿Qué imprime?\n");
            main14();
            break;
        }
        case 15:
        {
printf("Ejercicio 15: Punteros y funciones ¿Qué imprime?");
            main15();
            break;
        }
        case 16:
        {
            printf("Ejercicio 16: Punteros y funciones ¿Qué imprime?");
            break;
        }
        case 17:
        {
            printf("Ejercicio 17: Punteros y funciones ¿Qué imprime?");
            
            break;
        }
        case 18:
        {
            printf("Ejercicio 18: Punteros y funciones ¿Qué imprime?");
            
break;
        }
        case 19:
        {
            printf("Ejercicio 19: Punteros y funciones ¿Qué imprime?");
            break;
        }
            
        default:
            break;
    }
    return 0;
}

    /*
     #include <stdio.h>
     int main(int argc, const char * argv[])
     {
     return 0;
     }
     */
