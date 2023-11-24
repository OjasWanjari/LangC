#include <stdio.h>
int main() {
    for(int i=1;i<=25;i++){
        if(i%3==0){
        printf("%d\n", i);
        }
    }
    int count=26;
    while (count<=50) {
        if(count%3==0){
        printf("%d\n", count);
        }
        count++;
    }
    return 0; 
}