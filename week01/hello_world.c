// <- 주석 : 컴퓨터가 C언어를 읽어올때 읽지 않는 줄을 미리 설정하는 문법

/* 
한줄만 선택할 때에는 //를 사용하지만
여러줄을 선택할 때에는 이렇게 /에 *을 붙어 범위를 만든다.
*/

#include <stdio.h> // 전처리기(#include) : 컴파일 하기 "전" 처리하라~는 의미
                    // stdio.h (Standard Input and Output) : 기본적인 입&출릭을 지원하는 함수들이 정의되어 있는 파일.
int main(void){ // 이 코드는 'main'이라는 함수를 정의하는 것이다. Also main함수 정의 스코프의 시작. basic_function.md(함수의 기초) 참고!
    printf("Hello World!"); // printf 함수를 호출하자! 매개변수는 "Hello World" basic_function.md(함수의 기초) 참고!
    /*
    Hello World!를 출력하는 함수인데, ""(큰따음표)를 감싸는 이유는? '문자열'이기 때문!!
    문자(character) vs 문자열(character "array")
    이후 2장에서 자료형을 배울꺼지만 미리 언급하자면,
    문자 자료형은 한글자만 저장 가능하지만, 문자열은 한글자 이상의 문자들을 저장할 수 있다!
    문자는 ''(작은따음표)를 활용하고, 문자열은 ""(큰따음표)를 활용한다. 잊지말자!
    */
    return 0; // 함수의 구성요소중 반환값을 의미한다. basic_function.md(함수의 기초) 참고!
}