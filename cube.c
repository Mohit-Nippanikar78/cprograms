#include<stdio.h>
void main()
{
    int rows,cols,r,c,sha1max,s1n=1,s2space=1,s2,sha2max;
    printf("Rows of box");
    scanf("%d",&rows);
    cols= rows*2;
    sha1max=rows/2;
    sha2max=rows/4;
    for(r=0; r<rows; r++)
    {
        int s1,j;
        for(c=0; c<cols; c++)
        {
            printf("@");


        }

        if( s1n>=sha1max   )
        {


            for(s1=0; s1<sha1max; s1++)
            {

                printf("\\");

            }
            if(s1n>1){

            printf("|");
            }
        }
        else
        {
            for (j = 0; j < s1n; ++j)
            {
                printf("\\");
            }
            s1n++;





        }
        printf("\n");

    }
    for(s2=0; s2<sha2max; s2++)
    {
        int spa,s1;
        for(spa=0; spa<s2space; spa++)
        {
            printf(" ");
        }
        s2space++;
        for(r=0; r<cols; r++)
        {
            printf(";");
        }

        for(s1=0; s1<sha1max; s1++){
                printf(".");




        }
        printf("\n");



    }

}
