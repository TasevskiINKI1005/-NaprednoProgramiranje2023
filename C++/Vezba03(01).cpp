/* asctime example */
#include <stdio.h> /* printf */
#include <time.h>  /* time_t, struct tm, time, localtime, asctime */

int main()
{
    time_t rawtime;      // дефинираме променлива од тип time_t за чување на моменталното време
    struct tm *timeinfo; // дефинираме pointer од тип struct tm за чување на форматираното време

    time(&rawtime);                                            // го добиваме моменталното време и го зачувуваме во променливата rawtime
    timeinfo = localtime(&rawtime);                            // го конвертираме времето во локално време и го зачувуваме во timeinfo
    printf("The current date/time is: %s", asctime(timeinfo)); // го прикажуваме форматираното време на екранот со помош на asctime функцијата

    return 0;
}
/*Прво, го вклучуваме stdio.h и time.h header-ите. stdio.h ни е потребен за printf функцијата, а time.h за работа со време и датум.

Потоа, во функцијата main дефинираме променлива rawtime од тип time_t. Оваа променлива ќе ја користиме за чување на моменталното време.

Следно, дефинираме pointer timeinfo од тип struct tm. Оваа променлива ќе ја користиме за чување на форматираното време, кое ќе го добиеме со помош на localtime функцијата.

Со помош на time функцијата, го зачувуваме моменталното време во rawtime променливата.

Со помош на localtime функцијата, го конвертираме rawtime во локално време, кое го зачувуваме во timeinfo.

И на крај, го прикажуваме форматираното време со помош на printf и asctime функциите.

Кога ќе го извршиме овој програм, ќе добиеме форматиран излез на екранот, кој го прикажува моменталното локално време.
*/