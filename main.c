#include <stdio.h>
#include <windows.h>
#include "myfun1.h"

int main(int argc, char* argv[]) {
    fflush(stdin);
    fflush(stdout);
    SetConsoleOutputCP(CP_UTF8);
    integer r;
    integer x1,y1,x2,y2;
    printf("Podaj promień r: ");
    scanf("%"PRId32"",&r);
    if (r < 0){
        puts("Niepoprawne dane – promień musi być liczbą dodatnią!\n");
        system("pause");
        exit(EXIT_FAILURE);
    }
    printf("\nPodaj współrzędne punktu (x1,y1): ");
    scanf("%"PRId32"%"PRId32"", &x1, &y1);
    printf("Podaj współrzędne punktu (x2,y2): ");
    scanf("%"PRId32"%"PRId32"", &x2, &y2);
    printf("\nPole koła o promieniu r: %"PRId32" wynosi: %.3lf\n\n", r, area(r));
    printf("Odległość między punktami: (%"PRId32", %"PRId32") (%"PRId32", %"PRId32") wynosi: %.3f\n\n",
            x1,y1,x2,y2, distance(x1,y1,x2,y2) );
    fflush(stdin);
    getchar();
    return 0;
}