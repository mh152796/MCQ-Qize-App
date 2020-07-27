#include <stdio.h>
#include<conio.h>
void display();
char Q;
int c=0,w=0;
struct data
{
    char data[100];
};
int main()

{
    system("color 0F");
    struct data wc,M,R,I,S,n;
    int i;
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    FILE *file;
    char name[50]="WELCOME TO OUR PROJECT \n\n\t\t\t\t\t\tTEAM:LINUX\n";
    file=fopen("text.txt","w");
    fscanf(file,"%s",&name);
    printf("\t\t\t\t\t%s\n",name);
    fclose(file);
    strcpy(n.data,"PROJECT NAME:MCQ QIZE APP\n");
    strcpy(M.data,"Md MOSARAF-ID:192-15-2796\n");
    strcpy(S.data,"Md SALIM-ID:192-15-2880\n");
    strcpy(R.data,"Md RAJIB-ID:192-15-2826\n");
    strcpy(I.data,"Md ISMAIL-ID:192-15-2864\n");

    printf("\t\t\t\t\t%s\n",n.data);

    printf("\t\t\t\t\t%s\n",M.data);
    printf("\t\t\t\t\t%s\n",S.data);
    printf("\t\t\t\t\t%s\n",R.data);
    printf("\t\t\t\t\t%s\n",I.data);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("press c or any key to clear screen\n");
    char C,G;
    getchar();
    scanf("%c",&C);
    if(C=='c');
    {
        system("cls");
    }
    system("color 2F");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tAnswer The following Question:\n\n");
    printf("\t\t\t\t\t1-What is 2^4?.\n");
    printf("\t\t\t\t\t2-What is 6 - 2?.\n");
    printf("\t\t\t\t\t3-3-What is 4 * 4?.\n");
    printf("\t\t\t\t\t4-What is 64/4?.\n");
    printf("\t\t\t\t\t5-What is sin(90)?.\n");
    printf("\t\t\t\t\t6-What is cos(90)?.\n");
    printf("\t\t\t\t\t7-What is sqrt(16)?.\n");
    printf("\t\t\t\t\t8-Sinx/Cosx=?.\n");
    printf("\t\t\t\t\t9-sin^2(x) + cos^2(x) =?.\n");
    printf("\t\t\t\t\t10-what is derivative of ln(x)?.\n");
    printf("\t\t\t\t\t11-what is derivative of x?.\n");
    printf("\t\t\t\t\t12-what is GCD of 24 and 36?.\n");
    printf("\t\t\t\t\t13-What is Least Common Multiple(LCM) of 3 and 5?.\n");
    printf("\t\t\t\t\t14-What is Integration of x?.\n");
    printf("\t\t\t\t\t15-Factorial of 4!=?.\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("press c or any key to clear screen\n");
    getchar();
    scanf("%c",&G);
    if(G=='c');
    {
        system("cls");
    }
    system("color 4F");
    display();
    getch();
}
void display()
{
    int choice,p=0;
    char k;
    int l=1;
    while(l)
    {
        if(p==3)
        {
            printf("press c to clear screen\n");
            getchar();
            scanf("%c",&k);
        }
        if(p==3&&k=='c')
        {
            p=0;
            system("cls");
        }
        printf("Enter your question number which you want to answer Or Press 0 to see your results: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 0:
        {
            goto sos;
        }
        case 1:
        {
            p++;
            printf ("\t\t\t1-What is 2^4?\n\t\tA=12\n\t\tB=16\n\t\tC=18\n\t\tD=24\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'B')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;
            }
        }
        case 2:
        {
            p++;
            printf ("\t\t\t2-What is 6 - 2?\n\t\tA=4\n\t\tB=2\n\t\tC=6\n\t\tD=8\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'A')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;
            }
        }
        case 3:
        {
            p++;
            printf ("\t\t\t3-What is 4 * 4?\n\t\tA=2\n\t\tB=6\n\t\tC=16\n\t\tD=9\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'C')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;

            }
        }
        case 4:
        {
            p++;
            printf ("\t\t\t4-What is 64/4?\n\t\tA=16\n\t\tB=12\n\t\tC=28\n\t\tD=11\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'A')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;
            }
        }
        case 5:
        {
            p++;
            printf ("\t\t\t5-What is sin(90)?\n\t\tA=2\n\t\tB=1\n\t\tC=3\n\t\tD=7\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'B')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;
            }
        }
        case 6:
        {
            p++;
            printf ("\t\t\t6-What is cos(90)?\n\t\tA=0\n\t\tB=6\n\t\tC=5\n\t\tD=10\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'A')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;

            }
        }
        case 7:
        {
            p++;
            printf ("\t\t\t7-What is sqrt(16)?\n\t\tA=8\n\t\tB=18\n\t\tC=17\n\t\tD=4\n");
            getchar();
            scanf ("%s", &Q);
            if (Q == 'D')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;

            }
        }
        case 8:
        {
            p++;
            printf ("\t\t\t8-Sinx/Cosx=?\n\t\tA=Cosecx\n\t\tB=tanx\n\t\tC=Secx\n\t\tD=Sin2x\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'B')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;

            }
        }
        case 9:
        {
            p++;
            printf ("\t\t\t9-sin^2(x) + cos^2(x) =?\n\t\tA=5\n\t\tB=6\n\t\tC=1\n\t\tD=3\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'C')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;

            }
        }
        case 10:
        {
            p++;
            printf ("\t\t\t10-what is derivative of ln(x)?\n\t\tA=1/2x\n\t\tB=2x\n\t\tC=2/x\n\t\tD=1/x\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'D')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;
            }
        }
        case 11:
        {
            p++;
            printf ("\t\t\t11-what is derivative of x?\n\t\tA=1\n\t\tB=6\n\t\tC=5\n\t\tD=3\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'A')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;
            }
        }
        case 12:
        {
            p++;
            printf ("\t\t\t12-what is GCD of 24 and 36?\n\t\tA=24\n\t\tB=6\n\t\tC=18\n\t\tD=12/x\n");
            getchar();
            scanf ("%c", &Q);
            if (Q == 'D')
            {
                ++c;
                printf ("Correct Answer\n");
                break;
            }
            else
            {
                ++w;
                printf ("Wrong Answer\n");
                break;
            }
            case 13:
            {
                p++;
                printf ("\t\t\t13-What is Least Common Multiple(LCM) of 3 and 5?.\n\t\tA=22\n\t\tB=15\n\t\tC=16\n\t\tD=18\n");
                getchar();
                scanf ("%c", &Q);
                if (Q == 'B')
                {
                    ++c;
                    printf ("Correct Answer\n");
                    break;
                }
                else
                {
                    ++w;
                    printf ("Wrong Answer\n");
                    break;
                }
            }
            case 14:
            {
                p++;
                printf ("\t\t\t14-What is Integration of x?.\n\t\tA=x^2/4+c\n\t\tB=1+c\n\t\tC=x^2/2+c\n\t\tD=x+c\n");
                getchar();
                scanf ("%c", &Q);
                if (Q == 'C')
                {
                    ++c;
                    printf ("Correct Answer\n");
                    break;
                }
                else
                {
                    ++w;
                    printf ("Wrong Answer\n");
                    break;
                }
            }
            case 15:
            {
                p++;
                printf ("\t\t\t15-Factorial of 4!=?.\n\t\tA=24\n\t\tB=15\n\t\tC=21\n\t\tD=16\n");
                getchar();
                scanf ("%c", &Q);
                if (Q == 'A')
                {
                    ++c;
                    printf ("Correct Answer\n");
                    break;
                }
                else
                {
                    ++w;
                    printf ("Wrong Answer\n");
                    break;
                }
            }
        }
sos:
        {
            printf("\n\nTotal Mark= %d\n",c);
            printf("\nTotal Correct Answer= %d\n",c);
            printf("\nTotal Wrong Answer= %d\n",w);
            l=0;
            break;
        }
        }
    }
}
