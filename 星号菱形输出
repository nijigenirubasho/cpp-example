#include <iostream>

void repeat_output(char ch,int i)
{
    for(int x=0; x<i; x++)
        std::cout<<ch;
}

void a_line(int i,int j)
{
    repeat_output(' ',i-j);
    repeat_output('*',2*j-1);
    std::cout<<'\n';
}

int main()
{
    for(;;)
    {
        int i,j;
        std::cin>>i;
        if(i<0)
            break;
        for(j=1; j<i+1; j++)
            a_line(i,j);
        for(j-=2; j>0; j--)
            a_line(i,j);
    }
    return 0;
}
