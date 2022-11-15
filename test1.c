
ubuntu@ip-172-31-47-163:~/cpp$ cat test1.c
#include<stdio.h>
void f(int x){
        printf("f accepts a value of type int\n");
}

int main(){
        f(1.7);
}

ubuntu@ip-172-31-47-163:~/cpp$ gcc test1.c
ubuntu@ip-172-31-47-163:~/cpp$ ./a.out
f accepts a value of type int
ubuntu@ip-172-31-47-163:~/cpp$
