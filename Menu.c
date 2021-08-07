#include "Graphlib.h"

int main(){
    FILE* source;
    source = fopen("dothi.txt", "r");
    if (source == NULL){
        printf("Error!\n");
        exit(1);
    }
    Graph graph = createGraph();
    int choice;
    int flag = 0;
    do{
        printf("=====================================\n");
        printf("1. \n");
        printf("2. \n");
        printf("3. \n");
        printf("4. \n");
        printf("5. \n");
        printf("6. \n");
        printf("=====================================\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        if (choice <= 0 || choice >= 7) printf("Nhap khong hop le!\n");
        else if (choice >=1 && choice <=6){
            switch(choice){
                case 1:
                    if (!flag){
                        flag = 1;

                    }
                    else printf(" ");
                    break;
                case 2:
                    if (flag){

                    }
                    else printf(" ");
                    break;
                case 3:;
                    break;
                case 4:;
                    break;
                case 5:
                    break;
                case 6: printf("Ban da thoat chuong trinh!\n");
                    break;
            }
        }
    }while(choice != 6);
    fclose(source);
    return 1;
}