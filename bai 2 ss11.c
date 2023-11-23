#include<stdio.h>
int main(){
	int row,col;
	int temp;
	printf("nhap so dong" );
	scanf("%d",&row);
	printf("nhap so cot ");
	scanf("%d",&col);
	int numbers[row][col];
		for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
				}
		}
	
	do{
		printf("***********MENU************\n");
		printf("1.In gia tri mang theo ma tran\n");
		printf("2. Xap xep mang co gia tri phan tu theo dong tang dan\n");
		printf("3. Sap xep mang co gia tri phan tu theo cot giam dan\n");
		printf("4. Thoat\n");
		printf("Lua chon cua ban ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			
			case 1:
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						printf("%d\t",numbers[i][j]);
						
						
					}
					printf("\n");
				}
				printf("\n");
				break;
			case 2:
					for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col - 1; j++) {
                        for (int k = j + 1; k < col; k++) {
                            if (numbers[i][j] > numbers[i][k]) {
                                int temp = numbers[i][j];
                                numbers[i][j] = numbers[i][k];
                                numbers[i][k] = temp;
                            }
                        }
                    }
                }
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        printf("%d\t", numbers[i][j]);
                    }
                    printf("\n");
                }
		    	 
				break;
			case 3:
				 for (int j = 0; j < col; j++) {
                    for (int i = 0; i < row - 1; i++) {
                        for (int k = i + 1; k < row; k++) {
                            if (numbers[i][j] < numbers[k][j]) {
                                int temp = numbers[i][j];
                                numbers[i][j] = numbers[k][j];
                                numbers[k][j] = temp;
                            }
                        }
                    }
                }
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        printf("%d\t", numbers[i][j]);
                    }
                    printf("\n");
                }
               
		
				break;
			case 4:
				exit(0);
				default:
					printf("vui long chon tu 1-4\n");
				break;
			
		}
		
	}while(1==1);
	
}
