#include <stdio.h>
void main()
{
    int valid = 1, i, j, r, c,d;
    int board[9][9] =
    {
        {7, 9, 2, 1, 5, 4, 3, 8, 6},
        {6, 4, 3, 8, 2, 7, 1, 5, 9},
        {8, 5, 1, 3, 9, 6, 7, 2, 4},
        {2, 6, 5, 9, 7, 3, 8, 4, 1},
        {4, 8, 9, 5, 6, 1, 2, 7, 3},
        {3, 1, 7, 4, 8, 2, 9, 6, 5},
        {1, 3, 6, 7, 4, 8, 5, 9, 2},
        {9, 7, 4, 2, 1, 5, 6, 3, 8},
        {5, 2, 8, 6, 3, 9, 4, 1, 7}
    };
    for (r = 0; r < 9; r++)
    {
        for (i = 1; i < 10; i++)
        {

            int present = 0;
            for (j = 0; j < 9; j++)
            {
                if (i == board[r][j])
                {
                    present = 1;
                    break;
                }
            }
            valid = (present == 1 ) ? 1 : 0;
            if(valid ==0 )break;
        }
        if(valid ==0 )break;

    }

    for (c = 0; c < 9; c++)
    {
        int numbs[9];
        for (r = 0; r < 9; r++)
        {
            numbs[r] = board[r][c];

        }
        for (i = 1; i < 10; i++)
        {

            int present = 0;
            for( j=0 ; j < 9; j++)
            {
                if (i == numbs[j])
                {
                    present = 1;
                    break;
                }
            }
            valid = present == 1 ? 1 : 0;
            if(valid ==0 )break;


        }
        if(valid ==0 )break;
        printf("\n");
    }
    // yeah problekm here
    for (c = 0; c < 9; c+=3)
    {
        if(valid ==0 )break;
        for (d = 0; d < 9; d+=3)
        {
            if(valid ==0 )break;
            printf("\n %d %d ",c,d );
            int numbs[9];
            for (r = c; r < c+3; r++)

            {
                for (i = d; i < d+3; i++)
                {
                    printf("%d",board[r][i]);
                    numbs[r] = board[r][i];
                }

            }












 int m , n ;
            for (m = 1; m< 10; m++)
            {

                int present = 0;
                for( n=0 ; n < 9; n++)
                {
                    if (m == numbs[n])
                    {
                        present = 1;
                        break;
                    }
                }
                valid = (present == 1) ? 1 : 0;
                if(valid ==0 )break;


            }


            printf("\n");
        }
    }


    printf("\n and : %d",valid);




}
