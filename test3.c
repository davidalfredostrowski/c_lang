ubuntu@ip-172-31-47-163:~/cpp$ cat test3.c
#include<stdio.h>
void f(x);
int main() {
        f(1.7);
}
void f(x){
        printf("f accepts a value of any type\n");
}
ubuntu@ip-172-31-47-163:~/cpp$ gcc test3.c
test3.c:2:1: warning: parameter names (without types) in function declaration
    2 | void f(x);
      | ^~~~
test3.c: In function ‘f’:
test3.c:6:6: warning: type of ‘x’ defaults to ‘int’ [-Wimplicit-int]
    6 | void f(x){
      |      ^
ubuntu@ip-172-31-47-163:~/cpp$ ./a.out
f accepts a value of any type
ubuntu@ip-172-31-47-163:~/cpp$
