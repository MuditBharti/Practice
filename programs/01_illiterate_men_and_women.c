#include <stdio.h>
int main() {

    float t,l,i,m,w,tm,tw,tlm,tlw,tim,tiw,p,q,tl;
    printf("Enter total population:\n ");
    scanf("%f", &t);
    printf("Enter total percentage literacy:\n ");
    scanf("%f", &l );
    printf("Enter total percentage men: \n");
    scanf("%f", &m);
    printf("Enter total percentage of literate men: \n");
    scanf("%f", &tlm);
    tl = (t*l)/100;
    tm = (m*t)/100;
    p = (tlm*t)/100;
    tim = tm - p;
    printf("Total Illiterate men: %f\n", tim);
    
    tw = t - tm;
    q = tl - p;
    tiw = tw - q;

    printf("Total Illiterate women: %f\n", tiw);
    
    return 0;
}
