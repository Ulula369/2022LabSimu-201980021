/*
Autor:        Abel Hernández
fecha:        Mon May 16 07:59:07 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o trayectoriaCohetes.out trayectoriaCohetes.c -lm
Librerias:    stdio, math, stdlib
resumen:      Este programa analiza el comportamiento de la trayectoria vertical del
              cohete espacial 
*/

//librerias
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Definición de Constantes para los tres cohetes
float constanteG = 0.00000000006693;
float radioT = 6378000;
float masaT = 5.9736E24;
float constanteidealgasR = 287.06;
float constanteTermicaL = 0.006500000000000001;
float gravedadNivelMargo = 9.81;
float temperaturaNivelMar = 288.15;
float presionNivelMar = 101325;

float alturaInicial = 0.21; 
float alturaEnFuncionDelTiempo = 0;

//Característica del cohete Ah Mum 
float empujeCohete_1 = 30000000;
float consumoTSFC_1 = 0.0003248;
float coeficienteDeForma_1 = 61.27;
float seccionTransversal_1 = 201.6;
float masaPropulsor_1   =   110000.00000000001;
float masaInicialCombustible_1 = 1500000;


//Característica del cohete Ahau Kin 
float empujeCohete_2 = 27000000;
float consumoTSFC_2 = 0.0002248;
float coeficienteDeForma_2 = 61.27;
float seccionTransversal_2 = 201.6;
float masaPropulsor_2   =   110000.00000000001;
float masaInicialCombustible_2 = 1500000;

//Característica del cohete Chac
float empujeCohete_3 = 25000000;
float consumoTSFC_3 = 0.0002248;
float coeficienteDeForma_3 = 70.25;
float seccionTransversal_3 = 215.00;
float masaPropulsor_3   =   180000;
float masaInicialCombustible_3 = 2100000;

//Prototipar funciones cohete Ah Mum 
float masaCohete1(float masaPropulsor_1, float masaInicialCombustible_1);
float velocidadEnFuncionTiempo(float velocidad, float t);
float alturaEnFuncionTiempo(float ht);
float gravedad(float constanteG, float masaT, float radioT, float alturaInicial);
float densidadAire(float presionNivelMar, float constanteidealgasR, float temperaturaNivelMar, float constanteTermicaL, float alturaEnFuncionDelTiempo, float gravedadNivelMargo);
float friccionatmosfera(float  );

//Prototipar funciones cohete Ahau Kin 
float masaCohete1(float masaPropulsor_2, float masaInicialCombustible_2);
float velocidadEnFuncionTiempo(float velocidad, float t);
float alturaEnFuncionTiempo(float ht);
float gravedad(float constanteG, float masaT, float radioT, float alturaInicial);
float densidadAire(float presionNivelMar, float constanteidealgasR, float temperaturaNivelMar, float constanteTermicaL, float alturaEnFuncionDelTiempo, float gravedadNivelMargo);
float friccionatmosfera(float);

//Prototipar funciones cohete Chac
float masaCohete1(float masaPropulsor_3, float masaInicialCombustible_3);
float velocidadEnFuncionTiempo(float velocidad, float t);
float alturaEnFuncionTiempo(float ht);
float gravedad(float constanteG, float masaT, float radioT, float alturaInicial);
float densidadAire(float presionNivelMar, float constanteidealgasR, float temperaturaNivelMar, float constanteTermicaL, float alturaEnFuncionDelTiempo, float gravedadNivelMargo);
float friccionatmosfera(float  );




void main () {
//Características del cohete Ah Mun 
puts("---------------------------------------------------------------");
puts("---------------------------------------------------------------");
puts("\t\tDescripción del cohete Ah Mum\n");
puts("Características \t\t\t Valor \t\t\t Unidad \n");
puts("Empuje del cohete E_0 \t\t\t 3*10^7 \t\t N \n");
puts("Consumo específico del empuje TSFC \t 3.248*10^-4 \t\t Kg/N*s \n"); 
puts("Coeficiente de forma CD \t\t 61.27 \t\t\t --- \n"); 
puts("Sección transversal del cohete A \t 201.06 \t\t m^2 \n"); 
puts("Masa del propulsor m_0 \t\t\t 1.1*10^5  \t\t Kg n\n"); 
puts("Masa incial de combustible m_f0 \t 1.5*10^6  \t\t Pa \n"); 
puts("---------------------------------------------------------------\n");



//Características del cohete Ahau Kin 
puts("---------------------------------------------------------------");
puts("---------------------------------------------------------------");
puts("\t\tDescripción del cohete Ahau Kin\n");
puts("Características \t\t\t Valor \t\t\t Unidad \n");
puts("Empuje del cohete E_0 \t\t\t 2.7*10^7 \t\t N \n");
puts("Consumo específico del empuje TSFC \t 2.248*10^-4 \t\t Kg/N*s \n"); 
puts("Coeficiente de forma CD \t\t 61.27 \t\t\t --- \n"); 
puts("Sección transversal del cohete A \t 201.06 \t\t m^2 \n"); 
puts("Masa del propulsor m_0 \t\t\t 1.1*10^5  \t\t Kg n\n"); 
puts("Masa incial de combustible m_f0 \t 1.5*10^6  \t\t Pa \n"); 
puts("---------------------------------------------------------------\n");

//Se imprime en pantalla las características del cohete Chac
puts("---------------------------------------------------------------");
puts("---------------------------------------------------------------");
puts("\t\tDescripción del cohete Chac\n");
puts("Características \t\t\t Valor \t\t\t Unidad \n");
puts("Empuje del cohete E_0 \t\t\t 2.5*10^7 \t\t N \n");
puts("Consumo específico del empuje TSFC \t 2.248*10^-4 \t\t Kg/N*s \n"); 
puts("Coeficiente de forma CD \t\t 70.25 \t\t\t --- \n"); 
puts("Sección transversal del cohete A \t 215.00 \t\t m^2 \n"); 
puts("Masa del propulsor m_0 \t\t\t 1.8*10^5  \t\t Kg n\n"); 
puts("Masa incial de combustible m_f0 \t 2.1*10^6  \t\t Pa \n"); 
puts("---------------------------------------------------------------");
puts("---------------------------------------------------------------");

}


//************ Cohete Ah Mum **************

//Variación de la masa del cohete
float masaCohete(float masaPropulsor_1, float masaInicialCombustible_1)
    {
    float masaf;
    masaf = masaInicialCombustible_1 - (consumoTSFC_1*empujeCohete_1)t;
    return masaf;
    }   
 
//Aceleracion en función del tiempo
float aceleracion(float acel) 
{
    acel = empujeCohete_1 -  

}

//Velocidad en función del tiempo
float velocidadEnFuncionTiempo(float velocidad1, float t)
{
    float velInicial = 0;
    velocidad1 = velInicial + velInicial*t;
    return velocidad;
}

//Altura en función del tiempo 
float alturaEnFuncionTiempo(float ht)
{    
    ht = alturaInicial + velocidad1*t;
    return ht;
}


//Gravedad en función del tiempo  
float gravedad(float constanteG, float masaT, float radioT, float alturaInicial)
    {
    float gravedad1;
    gravedad1 = (constanteG * masaT)/((radioT + alturaInicial)pow(2) //(radioT + alturaInicial)); 
    return resp;
    }   

//Densidad en función de altura 
float densidadAire(float presionNivelMar, float constanteidealgasR, float temperaturaNivelMar, float constanteTermicaL, float alturaEnFuncionDelTiempo, float gravedadNivelMargo)
{
float densidad1;
densidad1 = (presionNivelMar/(constanteidealgasR * temperaturaNivelMar))*(1 - ((constanteTermicaL*alturaEnFuncionDelTiempo)/temperaturaNivelMar)pow((gravedadNivelMargo/(constanteidealgasR*constanteTermicaL))),2); 
return resp;
}

//Fricción de la atmosfera 
float friccionatmosfera() 
{
    1/2
}







