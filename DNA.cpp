#include<iostream>
#include<windows.h>
#include<string>
#include<windows.h>
using namespace std ;
void type(string in)
{
    for (int i=0 ; i<in.size() ;i++ )
    {
        cout<<in[i];
        Sleep(50);
    }
}
int main()
{
    string seq;
    type("\nTo indicate the input form , please use the flowing prefixes") ;
    while (1)
    {
        type("\n[D] to input DNA seq");
        type("\n[R] to input RNA seq\n");
        char prefix ;
        cin>>prefix ;
        cout<<"please enter sequence : " ;
        cin>>seq ;

        if (prefix=='D' or prefix=='d')
        {
            string comp=seq , rna=seq ;
            for (int i=0 ; i<seq.size() ; i++ )
            {
                if (seq[i]=='a'or seq[i]=='A')
                {
                    rna[i]='U';
                    comp[i]='T';
                }
                else if (seq[i]=='t'or seq[i]=='T')
                {
                    rna[i]='A' ;
                    comp[i]='A' ;

                }
                else if (seq[i]=='c'or seq[i]=='C')
                {
                    rna[i]='G' ;
                    comp[i]='G' ;
                }
                else if (seq[i]=='g'or seq[i]=='G')
                {
                    rna[i]='C' ;
                    comp[i]='C' ;
                }
                else
                {
                    cout<<"please check your DNA seq";
                    goto inputerror ;
                }


            }
            cout<<"\n"<<"The RNA seq = "<<rna<<"\n"<<"The complementary DNA seq = " <<comp ;
inputerror: ;

        }
        else if (prefix=='R' or prefix=='r')
        {
            string dna=seq , comp=seq ;
            for(int i=0 ; i<seq.size() ; i++ )
            {
                if (seq[i]=='a'or seq[i]=='A')
                {
                    dna[i]='T';
                    comp[i]='A';
                }
                else if (seq[i]=='u'or seq[i]=='U')
                {
                    dna[i]='A' ;
                    comp[i]='T' ;

                }
                else if (seq[i]=='c'or seq[i]=='C')
                {
                    dna[i]='G' ;
                    comp[i]='C' ;
                }
                else if (seq[i]=='g'or seq[i]=='G')
                {
                    dna[i]='C' ;
                    comp[i]='G' ;
                }
                else
                {
                    cout<<"please check your RNA seq";
                    goto inputerror1 ;
                }
            }
            cout<<"\n"<<"DNA seq = "<<dna<<"\n"<<"the complementary DNA seq = " <<comp ;
            inputerror1: ;
        }
        else
        {
            cout<<"please check your prefix";
        }
        cout<<endl<<endl<<endl ;

    }
}
