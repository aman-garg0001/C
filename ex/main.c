#include <stdio.h>
#include <stdlib.h>


int main()
{
    int zippo[4][2]={{2,4},{6,8},{1,3},{5,7}};

    printf("zippo=%p,zippo+1=%p\n",zippo,zippo+1);
    printf("zippo[0]=%p,zippo[0]+1=%p\n",zippo[0],zippo[0]+1);
    printf("*zippo=%p,*zippo+1=%p\n",*zippo,*zippo+1);



    return 0;
}







