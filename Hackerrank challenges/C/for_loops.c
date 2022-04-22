#include <stdio.h>

char *strings[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	for (int i = a; i < b+1; i++){
          if (1 <= i && i <= 9){
              printf("%s\n", strings[i-1]);
        } else {
            if (i % 2 == 0){
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
      }

    return 0;
}