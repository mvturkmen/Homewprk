#include <stdio.h>
#include <math.h>

int main()
{

    float ciftler,tekler;
    int i,sayi;
    double sonuc;
    ciftler=0.0;
    tekler=0.0;

    for(i=1;i<=3;i++)
    {
        printf("%d. sayiyi giriniz: ",i);
        scanf("%d",&sayi);
        if(sayi%2==0)
        {
            ciftler=ciftler+sayi;
        }
        else
        {
            tekler=tekler+sayi;
        }

    }
    printf("ciftler: %f\n",ciftler);
    printf("tekler: %f\n",tekler);


    sonuc=ciftler/tekler;
    printf("ciftlerin teklere orani: %lf",sonuc);


    return 0;
}
