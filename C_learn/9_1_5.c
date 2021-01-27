#include<stdio.h>
int main(){
    int i;
    const int *p1 = &i;//所指的东西不能被修改
    int const* p2 = &i;//所指的东西不能被修改
    int *const p3 = &i;//指针不能被修改
    // 判断哪个被const了的标志是const在*的前面还是后面
}

// 转换 总是可以把一个非const的值转换成const的
    // void f(const int* x);
    // int a = 15;
    // f(&a);       //ok
    // const int b =a;

    // f(&b);       //ok
    // b = a +1;    //error!


// const数组
// const int a[] = {1,2,3,4,5,6};
// 数组变量已经是const的指针了，这里的const表明数组的每个单元都是const int
// 所以必须通过初始化进行赋值

//保护数组值
// 因为数组传入函数时传递的是地址，所以那个函数内部可以修改数组的值
// 为了保护数组不被函数破坏，可以设置参数const
// int sum(const int a[],int length);