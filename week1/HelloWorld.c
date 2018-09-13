// <- 주석 : 컴퓨터가 C언어를 읽어올때 읽지 않는 줄을 미리 설정하는 문법

/* 
한줄만 선택할 때에는 //를 사용하지만
여러줄을 선택할 때에는 이렇게 /에 *을 붙어 범위를 만든다.
*/

#include <stdio.h> // 전처리기(#include) : 컴파일 하기 "전" 처리하라~는 의미
                    // stdio.h (Standard Input and Output) : 기본적인 입&출릭을 지원하는 함수들이 정의되어 있는 파일.
int main(void){ // 이 코드는 'main'이라는 함수를 정의하는 것이다. Also main함수 정의 스코프의 시작.  basic_function.md(함수의 기초) 참고!
    printf("Hello World!");
    return 0;
}