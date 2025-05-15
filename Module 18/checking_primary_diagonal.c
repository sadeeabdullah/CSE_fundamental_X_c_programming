#include<stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int diagonal_val_chck = 1;
    
    //taking input of the row
    for (int i = 0; i < r; i++)
    {
        //taking input for the column
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
           
            if (i != j)
            {
                if (arr[i][j] != 0)
            {
                diagonal_val_chck = 0;
                break;
            }
            }
            
            
            
        }
        
    }

    if (r == c && diagonal_val_chck == 1)
    {
        printf("This is diagonal matrix");
    }else{
        printf("This is not diagonal matrix");
    }
    
}