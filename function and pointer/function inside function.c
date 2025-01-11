#include<stdio.h>
void three(){//8
    printf("three\n");//9
    return;//10
}
void two(){//5
    printf("two\n");//6
    three();//7
    return;//11
}
void one(){//2
    printf("one\n");//3
    two();//4
    return;//12
}
int main(){//0
    one();//1
    return 0;//13
}