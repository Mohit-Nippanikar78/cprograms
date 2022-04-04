#include<stdio.h>
void main ()
{
    int r,c,rows,cols ;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    cols= (rows*2)-1;


    for(r=1; r<rows+1; r++)
    {
        for(c=1; c<cols+1; c++)
        {
            if(c > rows - r && c < rows+r)
            {
                printf("*");

            }
            else
            {

                printf(" ");
            }







        }
        printf("\n");


    }




}
