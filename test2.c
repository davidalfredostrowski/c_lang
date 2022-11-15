ubuntu@ip-172-31-47-163:~/cpp$ cat test2.c
#include<stdio.h>
void f(x){
        printf("f accepts a value of any type\n");
}

int main(){
        f(1.7);
}

ubuntu@ip-172-31-47-163:~/cpp$ gcc test2.c
test2.c: In function ‘f’:
test2.c:2:6: warning: type of ‘x’ defaults to ‘int’ [-Wimplicit-int]
    2 | void f(x){
      |      ^
ubuntu@ip-172-31-47-163:~/cpp$ ./a.out
f accepts a value of any type
ubuntu@ip-172-31-47-163:~/cpp$
