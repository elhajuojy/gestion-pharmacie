#include <stdio.h>
#include <time.h>

typedef struct
{
    int jour;
    int mois;
    int annee;

} date;




date main () {
   time_t now = time(NULL);
   
   
//    struct tm *gm_time = gmtime(&now);
   struct tm *gm_time = localtime(&now);
   printf("%d",gm_time);
   date today ;
   today.jour = gm_time->tm_mday;
   today.mois = gm_time->tm_mon+1;
   today.annee = gm_time->tm_year+1900;
//    printf("%d\n",gm_time->tm_hour);
//    printf("%d\n",gm_time->tm_min);
//    printf("%d/%d/%d",today.jour,today.mois,today.annee);
    
    return today;
}