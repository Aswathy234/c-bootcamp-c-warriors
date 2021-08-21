#include <stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int i,j,p;
    int ans1,ans2,ans3,ans4;
    int point1,point2,point3,point4;
    int total;

    mainhome:
    system("cls");
    printf("______________________________\n\n");
    printf("   Welcome to \n");
    printf("    THE QUIZ    \n");
    printf("______________________________\n");
    printf("> Enter 1 to start the Game\n");
    printf("> Enter 0 to quit\n");
    printf("> Enter 2 to see the rules\n\n");
    scanf("%d",&i);
    
    if(i==0)
    {
        printf("The game has ended\n");
    }
    else if(i==2)
    { system("cls");
        printf("> There will be a total of 4 questions in each sections\n\n");
        printf("> You will be given 4 options and you have to press 1,2,3 or 4 for the right option\n\n");
        printf("> Each question will carry 5 points\n\n");
        printf("> For all incorrect answer you will get -1 point\n\n");
        printf("> Enter 1 to goback to mainhome\n\n");
        scanf("%d",&j);
        if(j==1)
        {
            goto mainhome;
        }
    }
    
    else if(i==1)
    
    
    {
        system("cls");
        printf("Enter 1 for Literature\n\n");
        printf("Enter 2 for Sports\n\n");
        printf("enter 3 for Science\n\n");
        scanf("%d", &p);
    }
    else
    {
        system("cls");
        printf("INVALID\n");
    }
    if(p==1)
    
    
    {
        system("cls");
        printf("1) Which is the first Harry Potter book?\n");
        printf("\t1. HP and the Goblet of fire");
        printf("\t            2. HP and the Philosopher's Stone\n");
        printf("\t3. HP and the Chamber of Secrets");
        printf("\t    4. HP and the God of Small things\n");

        printf("Enter your Answer : ");
        scanf("%d",&ans1);
        if(ans1==2)
        {
            printf("Your Answer is correct\n");
            point1=5;
            printf("You Scored %d point\n\n\n",point1);
        }
        else
        {
            printf("Your Answer is Wrong\n");
            point1=-1;
            printf("You Scored %d point\n\n\n",point1);
        }

        printf("2) Who wrote 'Where ignorance is bliss, it is folly to be wise'?\n");
        printf("\t1. Browing");
        printf("\t  2. Marx\n");
        printf("\t3. Shakespeare");
        printf("\t  4. HP and the God of Small things\n");

        printf("Enter your Answer : ");
        scanf("%d",&ans2);
        if(ans2==3)
        {
            printf("Your Answer is correct\n");
            point2=5;
            printf("You Scored %d point\n\n\n",point2);
        }
        else
        {
            printf("Your Answer is Wrong\n");
            point2=-1;
            printf("You Scored %d point\n\n\n",point2);
        }

        printf("3) 'Jane Eyre' was written by which Bronte sister?\n");
        printf("\t1. Anne");
        printf("\t          2. Charlotte\n");
        printf("\t3. Emily");
        printf("\t  4. None of the above\n");

        printf("Enter your Answer : ");
        scanf("%d",&ans3);
        if(ans3==2)
        {
           printf("Your Answer is correct\n");
           point3=5;
           printf("You Scored %d point\n\n\n",point3);
        }
        else
        {
           printf("Your Answer is Wrong\n");
           point3=-1;
           printf("You Scored %d point\n\n\n",point3);
        }

        printf("4) Who was the author of the famous storybook 'Alice Adventures in Wonderland?\n");
        printf("\t1. Rudyard kipling");
        printf("\t  2. John keats\n");
        printf("\t3. Lewis Caroll");
        printf("\t          4. H G Wells\n");

        printf("Enter your Answer : ");
        scanf("%d",&ans4);
        if(ans4==3)
        {
           printf("Your Answer is correct\n");
           point4=5;
           printf("You Scored %d point\n\n\n",point4);
        }
        else
        {
           printf("Your Answer is Wrong\n");
           point4=-1;
           printf("You Scored %d point\n\n\n",point4);
        }
        total=point1+point2+point3+point4;
        printf("YOU SCORED A TOTAL OF %d POINTS\n\n\n",total);
    }
    if(p==2)
    {
        system("cls");
        printf("1) Electra gold cup is associated with which sport?\n");
        printf("\t1. Lawn tennis");
        printf("\t            2. Table tennis\n");
        printf("\t3. Badminton");
        printf("\t            4. Football\n");

        printf("Enter your Answer : ");
        scanf("%d",&ans1);
        if(ans1==2)
        {
            printf("Your Answer is correct\n");
            point1=5;
            printf("You Scored %d point\n\n\n",point1);
        }
        else
        {
            printf("Your Answer is Wrong\n");
            point1=-1;
            printf("You Scored %d point\n\n\n",point1);
        }

        printf("2) In which among the following years, the modern olympic games were held for the first time ?\n");
        printf("\t1. 1889");
        printf("\t  2. 1896\n");
        printf("\t3. 1876");
        printf("\t  4. 1898\n");

        printf("Enter your Answer : ");
        scanf("%d",&ans2);
        if(ans2==2)
        {
            printf("Your Answer is correct\n");
            point2=5;
            printf("You Scored %d point\n\n\n",point2);
        }
        else
        {
            printf("Your Answer is Wrong\n");
            point2=-1;
            printf("You Scored %d point\n\n\n",point2);
        }

        printf("3) Kookaburras is the nickname of Hockey Team of which of the following country?\n");
        printf("\t 1. India");
        printf("\t 2. Australia\n");
        printf("\t 3. USA");
        printf("\t         4. China\n");

        printf("Enter your Answer : ");
        scanf("%d",&ans3);
        if(ans3==2)
        {
           printf("Your Answer is correct\n");
           point3=5;
           printf("You Scored %d point\n\n\n",point3);
        }
        else
        {
           printf("Your Answer is Wrong\n");
           point3=-1;
           printf("You Scored %d point\n\n\n",point3);
        }

        printf("4) Who among the following has written the cricket book 'Cricket My Style'?\n");
        printf("\t1. Sunil Gavaskar");
        printf("\t  2. Anil Kumble\n");
        printf("\t3. Kapil Dev");
        printf("\t          4. None of them\n");

        printf("Enter your Answer : ");
        scanf("%d",&ans4);
        if(ans4==3)
        {
           printf("Your Answer is correct\n");
           point4=5;
           printf("You Scored %d point\n\n\n",point4);
        }
        else
        {
           printf("Your Answer is Wrong\n");
           point4=-1;
           printf("You Scored %d point\n\n\n",point4);
        }
        total=point1+point2+point3+point4;
        printf("YOU SCORED A TOTAL OF %d POINTS\n\n\n",total);
    }
        if(p==3)
        {
        system("cls");
        
        printf("1) Which organisation is to have India's largest incubation ecosystem with 21 centres of excellence?\n");
        printf("\t1. Software technology parks of india ");
        printf("\t  2. Centre for development of advanced computing\n ");
        printf("\t3. Education and Research network");
        printf("\t  4. National information centre\n");
        printf("Enter your answer :");
        scanf("%d",&ans1);
        if(ans1==1)
        {
            printf("Your Answer is Correct\n");
            point1=5;
            printf("You scored %d point\n\n\n",point1);
        }
        else 
        {
           printf("Your Answer is Wrong\n");
           point1=-1;
           printf("You Scored %d point\n\n\n",point1);
        }
        printf("2) Name the scientist who had discovered that some molecules have mirror images?\n");
        printf("\t1. Lord Kelvin ");
        printf("\t  2. Louis Pasteur\n ");
        printf("\t3. Robert Hooke");
        printf("\t  4. Henry Moseley\n");
        printf("Enter your answer :");
        scanf("%d",&ans2);
        if(ans2==2)
        {
            printf("Your Answer is Correct\n");
            point2=5;
            printf("You scored %d point\n\n\n",point2);
        }
        else 
        {
           printf("Your Answer is Wrong\n");
           point2=-1;
           printf("You Scored %d point\n\n\n",point2);
        }
        printf("3) Until Victorian times,chocolate was thought of as a drink. When did the first chocolate bar appear?\n");
        printf("\t1. 1825 ");
        printf("\t  2. 1831\n ");
        printf("\t3. 1825");
        printf("\t          4. There is no sure date\n");
        printf("Enter your answer :");
        scanf("%d",&ans3);
        if(ans3==4)
        {
            printf("Your Answer is Correct\n");
            point3=5;
            printf("You scored %d point\n\n\n",point3);
        }
        else 
        {
           printf("Your Answer is Wrong\n");
           point3=-1;
           printf("You Scored %d point\n\n\n",point3);
        }
        printf("4) An artificial satellite revolves round the earth in circular orbit, which quantity remains constant?\n");
        printf("\t1. Angular Momentum ");
        printf("\t  2. Linear velocity\n ");
        printf("\t3. Angular Displacement");
        printf("\t  4. None of these\n");
        printf("Enter your answer :");
        scanf("%d",&ans4);
        if(ans4==1)
        {
            printf("Your Answer is Correct\n");
            point4=5;
            printf("You scored %d point\n\n\n",point4);
        }
        else 
        {
           printf("Your Answer is Wrong\n");
           point4=-1;
           printf("You Scored %d point\n\n\n",point4);
        }
        total=point1+point2+point3+point4;
        printf("YOU SCORED A TOTAL OF %d POINTS\n\n\n",total);
    }
}

