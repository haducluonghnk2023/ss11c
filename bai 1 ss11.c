#include<stdio.h>
int main(){
	int numbers[]={6,3,5,8,2};
	int size = sizeof(numbers)/sizeof(int);
	do{
		printf("*****************MENU****************\n");
		printf("1. In cac gia tri phan tu cua mang\n");
		printf("2. Su dung insertion sort sap xep mang giam dan va in ra\n");
		printf("3. Su dung selection sort sap xep mang tang dan va in ra\n");
		printf("4. Su dung bubble sort sap xep mang giam dan va in ra\n");
		printf("5. Thoat\n");
		printf("Lua chon cua ban\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<size;i++){
					printf("numbers[%d]=",i,numbers[i]);
					scanf("%d",&numbers[i]);
				}
				break;
			case 2:
				for(int i=1;i<size;i++){
					int j=i-1;
					int current = numbers[i];
					while(j>=0 && current > numbers[j]){
						numbers[j+1]=numbers[j];
						j--;
					}
					numbers[j+1]=current ;
				}
				for(int i=0;i<size;i++){
					printf("numbers[%d]=%d\n",i,numbers[i]);
				}
				break;
			case 3:
				for(int i=0;i<size;i++){
		
						int min=i;
		
							for(int j=i+1;j<size;j++)
							{
								if(numbers[min]>numbers[j])
							{
								min=j;
							}
		
							}
							if(numbers[min] !=numbers[i])
							{
							int temp = numbers[min];
		 					numbers[min]=numbers[i];
							numbers[i]=temp;
								}
		
							}
							for(int i=0;i<size;i++)
							{
								printf("numbers[%d]=%d\n",i,numbers[i]);
							}
	
				break;
			case 4:
				for(int i = 0 ; i < size - 1 ; i++){
					for(int j = 0 ; j < size - i - 1 ; j++){
						if(numbers[j] < numbers[j+1]){
							int temp = numbers[j];
							numbers[j] = numbers[j+1];
							numbers[j+1] = temp;		
						}
					}
				}
    				for(int i = 0; i < size ; i++){
						printf("numbers[%d]=%d\n",i,numbers[i]);
					}

				break;
			case 5:
				exit(0);
				default :
					printf("vui long chon tu 1-5\n");
				break;
		}
	}while(1==1);
}
