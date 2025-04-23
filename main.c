#include <stdio.h>
#include <stdlib.h>

void update(int arr[],int size){
    int n,up;
        printf("Please input the index: ");
        scanf("%d",&n);
        printf("Please input the value: ");
        scanf("%d",&up);
        arr[n]=up;
        printf("The new array: ");
        for(int j=0;j<size;j++){
            printf("%d ",arr[j]);
        }


}

void Delete(int arr[],int size){
    int index,temp,i;
        printf("\nPlease input the index: ");
        scanf("%d",&index);

        for( i=index;i<size-1;i++){
                temp=arr[i+1];
                arr[i+1]=arr[index];
                arr[index]=temp;

        }
        arr[i]==0;
        for( int j=0;j<size-1;j++){
            if(arr[j]!=0){
            printf("After deletion %d\n",arr[j]);
            }
        }

}

void Sort(int arr[],int size){
    int temp,x;

    printf("Before sorting array: ");
    for(int i=0;i<size;i++){
         printf("%d ",arr[i]);
    }
    printf("\nwhich one you want. \n1. bubble sort\n2.selection sort\nPlease choose the option: ");
    scanf("%d",&x);

    if(x==1){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("After sorting array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
 }
    if(x==2){
        printf(" Selection Sort ami vhule gechi ");
}
}
void Search(int arr[],int size){
    int value;
    printf("\nThe value you want to search for: ");
    scanf("%d",&value);
    for(int i=0;i<size;i++){
    if(arr[i]==value){
        printf("Found at %d index",i);
        return 0;
    }

}
printf("Not found");


}

void Display(int arr[],int size){
     printf("\nCurrent array size: ");
     for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
     }
}






int main()
{
    int size,i;
    printf("Please input the array size: ");
    scanf("%d",&size);
    if(size==0){
        printf("\n\nthe size of array has not been input.\n\nPlease input the array size again: ");
        scanf("%d",&size);

    }
    else if(size<0){
        printf("\nThe size off array can't be negative.\n\nPlease input the array size again: ");
        scanf("%d",&size);
    }
    printf("\n\nthe size of array: %d\n\n",size);
    int arr[size];

    printf("please insert the value of array: ");
    for( i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe complete array you insert: ");
    for( i=0;i<size;i++){
         printf("%d ",arr[i]);

    }
    while(1){
    printf("\nwhat were you trying to do: \n1. Update\n2. Delete\n3. Sort\n4. Search\n5. Display\n6. Exit\nYour chosses option: ");
    int option;
    scanf("%d",&option);
    if(option==1){
            update(arr, size);


    }
    else if(option==2){
            Delete(arr, size);

    }

    else if(option==3){
            Sort(arr,size);


    }
    else if(option==4){
            Search(arr, size);
            break;

    }
    else if(option==5){
            Display(arr, size);
    }
    else if(option==6){
            printf("Exit the program execution");
            break;

    }

 }

}





