#include <stdio.h>

// Funzione per calcolare lárea del triangolo
double calcola_area(double lato1, double lato2, double lato3);

//Funzione per calcolare il perimetro del triangolo
double calcola_perimetro(double lato1, double lato2, double lato3);

int main(){
    double lato1, lato2, lato3;

    //Input delle dimensioni del triangolo
    printf("Inserisci la lunghezza del primo lato del triangolo: ");
    scanf("%lf", &lato1);
    printf("Inserici la lunghezza del secondo lato del triangolo: ");
    scanf("%lf", &lato2);
    printf("Inserisci la lunghezza del terzo lato del triangolo: ");
    scanf("%lf", &lato3);
    
    
    double area = calcola_area(lato1, lato2, lato3);
    double perimetro = calcola_perimetro(lato1, lato2, lato3);
    
    
    printf("L'area del triangolo é: %.2lf\n", area);
    printf("Il perimetro del triangolo é: %.2lf\n", perimetro);
    
    return 0;
    }
    double calcola_area(double lato1, double lato2, double lato3)
    {
        double semiperimetro = (lato1 + lato2 + lato3) / 2;
        double area = semiperimetro * (semiperimetro - lato1) * (semiperimetro - lato2) * (semiperimetro - lato3);
        return area;

    }

    double calcola_perimetro(double lato1, double lato2, double lato3)
    {
        double perimetro = lato1 + lato2 + lato3;
        return perimetro;
    }