//searching an element in a 2-D array using linear search

#include<stdio.h>

int main(){
  int rows, columns, srchElement, count=0;

  //enter the order of matrix
  printf("Enter the number of Row and Column: \n");
  scanf("%d %d", &rows, &columns);
  printf("\n");

  //create a 2D array of the same order
  int arr[rows][columns];

  //Take inputs into the 2D array
  printf("Enter %d elements: \n", (rows*columns));
  printf("\n");
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      scanf("%d", &arr[i][j]);
      if(j==columns-1){
        printf("\n");
      }
    }
  }

  //Enter the search element
  printf("Enter the element to get the position: \n");
  scanf("%d", &srchElement);

  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(arr[i][j] == srchElement){

        // if match found ,it search the position
        printf("(%d, %d) \n", i, j);
        count++;
      }
    }
  }

  //If count remains 0, it means the array doesn't had the search element

  if(count==0)
    printf("Not found \n");

  return 0;
}
