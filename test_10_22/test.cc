 #include<iostream>
 using namespace std;
// int globalVal = 1;   //数据段
// static int staticGlobalVar = 1;  //数据段

// void Test()
// {
//     static int staticVar = 1; //数据段
//     int localVar = 1;         //栈

//     int num1[10] = {1,2,3,4};  //栈
//     char char2[] = "abcd";     
//     char* pChar3 = "abcd";
//     int* ptr1 = (int*)malloc(sizeof(int)*4);
//     int* ptr2 = (int*)calloc(4,sizeof(int));
//     int* ptr3 = (int*)realloc(ptr2,sizeof(int)*4);
//     free(ptr1);
//     free(ptr3);
// }
//template  typename

template<class T>
T Add(const T& left,const T& right)
{
    return left + right;
}

int main()
{
    int a1 = 10, a2 = 20;
    double d1 = 10.0, d2 = 20.0;
    cout << Add(a1,a2) <<endl;
    cout << Add(d1,d2) <<endl; 
    cout << Add(a1,(int)d1) <<endl;
    //cout << Add<int>(a1,d1) <<endl;
    return 0;
}