#include <iostream>

using namespace std;

int main()
{
    int input_num;
    cout<<"palindromic primes <= ";
    cin>>input_num;
    int pp_count=0;
    for(int each=2; each<=input_num; each++)
    {
        int factorization_lst=0;
        for(int factor=1; factor<=each; factor++)
            if(each%factor==0&&!(factor>each/factor))
                factorization_lst++;
        if(factorization_lst==1)
        {
            int antitone=0,each_cpy=each;
            while(each_cpy)
            {
                antitone=antitone*10+each_cpy%10;
                each_cpy/=10;
            }
            if(antitone==each)
            {
                pp_count++;
                cout<<pp_count<<':'<<each<<endl;
            }
        }
    }
    return 0;
}
