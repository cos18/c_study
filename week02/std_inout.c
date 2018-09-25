#include <stdio.h>
int main(void){
    char text = 'v';
    printf("기본적인 printf 함수 매개변수 - 문자열 1개\n");
    printf("서식문자를 활용하면 다양한 %cariable를 출력할 수 있다.\n\n", text); // %c : 문자 서식문자 <- char
    // 함수의 기초2 : 함수의 매개변수는 고정되어 있지 않다! printf 함수만 봐더라도 매개변수가 2, 3, ... 개가 될 수 있다.
    // 참고 : 매개변수는 항상 %로 시작해서 영문자 한글자로 끝난다. 따라서 위 예제 %cariable은 '%c'ariable 

    printf("이것도 할 수 있을까?\n");
    int number = 10;
    printf("%d + %d = %d", number, 2, number+2); // %d : 정수 서식문자 <- int, long, 등...
}