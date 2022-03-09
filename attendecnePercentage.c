#include <stdio.h>
int main()
{
    int totalClass, AttenededClass;
    float AttedencePercentage;

    printf("How many classses were held  : ");
    scanf("%d", &totalClass);
    printf("How many classses the student attended: ");
    scanf("%d", &AttenededClass);
    AttedencePercentage = (AttenededClass / totalClass) * 100;

    printf("AttedencePercentage %d:", totalClass);
    printf("AttedencePercentage %.3f:", AttedencePercentage);

    return 0;
}