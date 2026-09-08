#include <stdio.h>
void towerofHanoi(int disc, char source, char auxiliary, char destination)
{
    if (disc==1)
    {
        printf("Move disc 1 for %c -> %c\n", source, destination);
        return;
    }
    towerofHanoi(disc-1, source, destination, auxiliary);
    printf("Move disc %d from %c -> %c\n", disc,source,destination);
    towerofHanoi(disc-1, auxiliary,source,destination);
}
int main()
{
    int n=4;
    towerofHanoi(n,'A','B','C');
    return 0;
}
