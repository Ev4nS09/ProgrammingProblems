#include <stdio.h>
#include <stdlib.h>

int** permute(int* nums, int numsSize, int* returnSize)
{
    int** result = malloc(sizeof(int*) * *returnSize); 
    for(int row = 0; row < *returnSize; row++)
      result[row] = malloc(sizeof(int) * numsSize);
    
    
    for(int i = 0; i < numsSize; i++)
    {
      int current_row = *returnSize / numsSize * i;
      result[current_row][0] = nums[i]; 


      int aux = 1;
      for(int j = 0; j < numsSize; j++)
      {
        if(j == i)
          aux = 0;
        else
          result[current_row][j + aux] = nums[j];
      }


      int left_pointer = 1;

      for(int j = current_row + 1; j <= current_row + 1 + (*returnSize / numsSize) - 2; j++)
      {
        for(int k = 0; k < numsSize; k++)
        {
          if(k == left_pointer)
          {
            result[j][left_pointer] = result[j-1][left_pointer + 1];
            result[j][left_pointer + 1] = result[j-1][left_pointer];
            k++;
          }
          else
            result[j][k] = result[j-1][k];
        }
        
        if(left_pointer == numsSize - 2)
          left_pointer = 1;
        else 
          left_pointer++;
      }
      
    }
    
    return result;
}

void print_matrix(int** m, int r_size, int c_size)
{
  for(int i = 0; i < r_size; i++)
  {
    printf("[");
    for(int j = 0; j < c_size; j++)
      printf("%d, ", m[i][j]);
    printf("] ");
  }
}

int factorial(int x)
{
  int result = 1;

  for(int i = 1; i <= x; i++)
    result *= i;
  
  return result;
}

int main()
{
  int numsSize = 6;
  int nums[6] = {1,2,3,4,5,6};
  int* size1 = malloc(sizeof(int));
  *size1 = factorial(numsSize);
  printf("%d\n", factorial(numsSize));
  

  int** matrix = permute(nums, numsSize, size1);
  print_matrix(matrix, *size1, numsSize);

  for(int i = 0; i < *size1; i++)
    free(matrix[i]);

  free(size1);
  free(matrix);

  return 0;
}

