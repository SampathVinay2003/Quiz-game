/*
C Programming Project.
By Team:Coding Champs

Written By:Kadiyala Jitesh,Indraganti Venkata Sampath Vinay and Yash Rai.
*/

#include<stdio.h>
//declaring global structure
struct play
{
            char name[20];    //name of player
            int score;       //player score
            int rat;        //star ratings
}p;

//declaration of user defined functions
void start();
void help();
void about();

void main()
{
    //declaration of variable
    int chc=0;


    printf("\t\t_________________________________________________________________________\n");
    printf("\n\t\t**************************** WELCOME TO *********************************\n");//declaration
    printf("\n\t\t                                 THE                                       ");//of
    printf("\n\n\t\t************************** THE TALENT QUIZ ******************************\n");//heading statrmrnt
    printf("\t\t_________________________________________________________________________\n");

    //input statement
    printf("\nPress 1 to START Quiz\nPress 2 for INSTRUCTIONS\nPress 3 to know ABOUT US\nPress 0 to QUIT\n>>");
    scanf("%d",&chc);

    //switch chc to opt for given options
    switch(chc)
    {
        case 1:
        start();
        break;


        case 2:
        help();
        break;

        case 3:
        about();
        break;

          default:
          exit(1);
    }//end switch

  getch();
}//return main

void help()//defining the help function
{
     int chc;//variable

     //statements
     printf("\n\n ************************* GAME INSTRUCTIONS *************************");
     printf("\n ---------------------------------------------------------------------");
     printf("\n >> There will be a total of 12 questions in this Quiz.");
     printf("\n >> All Questions are from various Categories of General Knowledge.");
     printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");
     printf("\n    right option and 0 for a Hint related to that question.");
     printf("\n >> During a question on pressing any other Number Key then the given");
     printf("\n    5 options will be considered as a Wrong Answer for that question. ");
     printf("\n                              So, BE CAREFUL!!");
     printf("\n >> And on pressing any key other than the number key will result in ending the game");
     printf("\n >> Each question is of +5 Value.");
     printf("\n >> There is no negative Value for any Wrong Answers.");
     printf("\n >> The questions will appear one after another and player can not go");
     printf("\n    back or switch the Questions.");



    printf("\n\n ************************* ALL THE BEST!! ******************************\n\n");


    printf("\n  1 = START QUIZ\n  2 = INSTRUCTIONS\n  3 = ABOUT US\n  0 = QUIT\n");
    printf("\n>>");//input
    scanf("%d",&chc);

    switch(chc)
    {
        case 1:
        start();
        break;


        case 2:
        help();
        break;

        case 3:
        about();
        break;

          default:
          exit(1);
    }//end switch
}//end help

void about()//defining the about function
{
    int ch;//variable

    //statements
    printf("\n\n **************************** ABOUT US **********************************");
    printf("\n\n This program is a Talent Quiz Game comprising of 12 questions with Hints.");
    printf("\n created as a programming assignment for Introduction to Programming Class.");
    printf("\n\n By: Kadiyala Jitesh.                    Id:B420029");
    printf("\n     Indraganti Venkata Sampath Vinay.   Id:B420025");
    printf("\n     Yash Rai.                           Id:B420067");
    printf("\n\n ***************************** ENJOY!! ***********************************");

     printf("\n\n\n  1=START QUIZ\n  2=INSTRUCTIONS\n  3=ABOUT US\n  0=QUIT\n");
    printf("\n>>");
    scanf("%d",&ch);//input

    switch(ch)
    {
        case 1:
        start();
        break;


        case 2:
        help();
        break;

        case 3:
        about();
        break;

          default:
          exit(1);
     }//end switch
}//end about

void start()//defining the start function
{
        //declaration of variables
        int ans;
        int count=0;
        char rating[20];


        printf("\nYour Name Please: ");
        scanf("%s",p.name);//input name of player




        printf("\n\n*******************LET'S PLAY THE QUIZ WITH '%s'*************************** \n\n", p.name);//

        //display of questions with options
        printf("Q(1).NAME THE LIVING ORGANISM THAT CAN LIVE WITHOUT DRINKING WATER FOR ITS ENTIRE LIFESPAN ? \n\n 1.RATTLE SNAKE \t 2.KANGAROO RAT\n\n 3.IGUANA\t\t 4.LEECH\n\n");

        printf("Your Answer: ");
        scanf("%d",&ans);//input for answer or hint

        if(ans==2)
        {
            printf("CORRECT ANSWER! +5 points\n\n");
            ++count;

        }//end if

        else if (ans==0)//provided hint
        {
            printf("\n\nHint:Trapping with snap traps is probably the most efficient method to catch them.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);//input for final answer

            if(ans==2)
            {
                printf("CORRECT ANSWER!! +5 points\n\n");
                ++count;

            }
        else
            {
                printf("Wrong Answer! Correct answer is 2.KANGAROO RAT\n\n");
            }
        }//end else if
        else
        {
            printf("Wrong Answer! Correct answer is 2.KANGAROO RAT\n\n");
        }//end else

        printf("\nQ(2).THE LARGEST CRUISE SHIP IN THE WORLD IS ?\n\n 1.OASIS OF SEAS\t2.SYMPHONY OF SEAS \n\n 3.TITANIC\t\t4.HARMONY OF SEAS\n\n");
        printf("Your Answer: ");
        scanf("%d",&ans);

        if(ans==2)
        {
            printf("CORRECT ANSWER! +5 points\n\n");

                ++count;

        }

        else if (ans==0)
        {
            printf("\n\nHint:It was built in France in the year 2018.And is owned and operated by Royal Caribbean International\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==2)
            {
                printf("CORRECT ANSWER!! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 2.SYMPHONY OF SEAS\n\n");
            }
        }
        else
        {
            printf("Wrong Answer! Correct answer is 2.SYMPHONY OF SEAS\n\n");
        }

        printf("Q(3).THE WORLD'S BIGGEST LIBRARY IS ?\n\n 1.LIBRARY OF CONGRESS\t2.LENIN LIBRARY\n\n 3.BRITISH LIBRARY\t4.NEWYORK PUBLIC LIBRARY\n\n");

        printf("Your answer: ");
        scanf("%d",&ans);

        if(ans==1)
        {
            printf("CORRECT ANSWER! +5 points\n\n");

                ++count;
        }

        else if (ans==0)
        {
            printf("\n\nHint:It is Located in the United States of America.And was founded by John Adams.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==1)
            {
                printf("CORRECT ANSWER!! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 1.LIBRARY OF CONGRESSn\n");
            }
        }
        else
        {
            printf("Wrong Answer! Correct answer is 1.LIBRARY OF CONGRESSn\n");
        }


        printf("Q(4).THE FIRST PRIME MINISTER OF BRITAIN IS ? \n\n 1.ROBERT WALPOLE\t2.GEORGE SLACK\n\n 3.ORWINCH BISMARK\t4.GAMAYEIL NASEEK\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
        else if (ans==0)
        {
            printf("\n\nHint:He resigned as a consequence of his perceived mis-handling in dealing with the War of Jenkins' Ear.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==1)
            {
                printf("CORRECT ANSWER!! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 1.ROBERT WALPOLE\n\n");
            }


            }
        else
        {
            printf("Wrong Answer! Correct answer is 1.ROBERT WALPOLE\n\n");
        }

        printf("Q(5).THE WORLDS BIGGEST CRICKET STADIUM IS ? \n\n 1.MELBOURNE CRICKET GROUND\t2.PERTH STADIUM\n\n 3.MOTERA STADIUM\t\t4.EDEN GARDENS\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==3)
        {
            printf("CORRECT ANSWER! +5 points\n\n");

                ++count;
        }
         else if (ans==0)
        {
            printf("\n\nHint:The stadium is located in India.And its name was later changed to Narendra Modi Stadium.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==3)
            {
                printf("CORRECT ANSWER!! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 3.MOTERA STADIUM\n\n");
            }

        }
        else
        {
            printf("Wrong Answer! Correct answer is 3.MOTERA STADIUM\n\n");
        }

        printf("Q(6).WHICH IS THE FIRST VIDEO GAME IN WORLD ? \n\n 1.SPACE RACE\t2.SUPER MARIO \n\n 3.PONG\t\t4.PAC MAN   \n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==3)
        {
            printf("CORRECT ANSWER! +5 points\n\n");

                ++count;
        }
        else if (ans==0)
        {
            printf("\n\nHint:It was manufactured by Atari and was originally released in 1972.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==3)
            {
                printf("CORRECT ANSWER! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 3.PONG\n\n");
            }

        }
        else
        {
            printf("Wrong Answer! Correct answer is 3.PONG\n\n");
        }

        printf("Q(7).THE MOVIE WHICH WON THE MOST OSCARS IS/ARE  \n\n 1.TITANIC               \t2.BEN-HUR\n\n 3.THE LORD OF THE RINGS       \t4.ALL OF THESE\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("CORRECT ANSWER! +5 points\n\n");

                ++count;
        }
        else if (ans==0)
        {
            printf("\n\nHint:Number of Oscars received by this/these movies is 11.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==4)
            {
                printf("CORRECT ANSWER!! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 4.ALL OF THESE\n\n");
            }

        }
        else
        {
            printf("Wrong Answer! Correct answer is 4.ALL OF THESE\n\n");
        }

        printf("Q(8).THE WORLDS FIRST REVOLVER WAS MADE BY WHICH AMMO UNIT?\n\n 1.COLT  \t2.MOSSBERG  \n\n 3.REMINGTON \t4.SMITH&WESSON\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
          else if (ans==0)
        {
            printf("\n\nHint:The ammo unit is also known as the Single Action Army, SAA.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==1)
            {
                printf("CORRECT ANSWER!! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 1.COLT\n\n");
            }

        }
        else
        {
            printf("Wrong answer! Correct answer is 1.COLT\n\n");
        }

        printf("Q(9).THE WORLDS BIGGEST MAMMAL IS ? \n\n 1.BENGAL TIGER \t\t2.BLUE WHALE\n\n 3.WHITE AFRICAN ELEPHANTS\t4.HIPPOPOTAMUS\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("CORRECT ANSWER! +5 points\n\n");

                ++count;
        }
        else if (ans==0)
        {
            printf("\n\nHint:It is a Carnivorous mammal which can weigh up to 170 tonnes.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==2)
            {
                printf("CORRECT ANSWER! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 2.BLUE WHALE\n\n");
            }

        }
        else
        {
            printf("Wrong Answer! Correct answer is 2.BLUE WHALE\n\n");
        }

        printf("Q(10).THE COUNTRY WITHOUT MOSQUITOS IS ? \n\n 1.FRANCE  \t2.ITALY \n\n 3.SPAIN  \t4.ICELAND\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct! +5 points\n\n");

                ++count;
        }
         else if (ans==0)
        {
            printf("\n\nHint:This country was added in the European Union in the year 2004. \n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==4)
            {
                printf("CORRECT ANSWER! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 4.ICELAND\n\n");
            }
        }

        else
        {
            printf("Wrong Answer! Correct answer is 4.ICELAND\n\n");
        }

        printf("Q(11).THILLANA IS A FORMAT OF ? \n\n 1.KUCHIPUDI\t        2.ODISSI\n\n 3.BHARATHATYARN\t4.KATHAK\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==3)
        {
            printf("CORRECT ANSWER! +5 points\n\n");

                ++count;
        }
         else if (ans==0)
        {
            printf("\n\nHint:This Indian classical dance originated in Tamil Nadu.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==3)
            {
                printf("CORRECT ANSWER! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 3.BHARATHATYARN\n\n");
            }
        }
        else
        {
            printf("Wrong Answer! Correct answer is 3.BHARATHATYARN\n\n");
        }

        printf("Q(12).IN ONE DAY INTERNATIONAL CRICKET, WHICH TEAM HAVE RIAZ POONAWALA AND SHAUKAT DUKANWALA REPRESENTED ?\n\n 1.KENYA\t2.U.A.E\n\n 3.CANADA\t4.IRAN\n\n");
        printf("Your answer: ");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("CORRECT ANSWER! +5 points\n\n");

                ++count;
        }
        else if (ans==0)
        {
            printf("\n\nHint:Both of these Cricketers were born in India and immigrated to this Country.\n");
            printf("Your Answer: ");
            scanf("%d",&ans);

            if(ans==2)
            {
                printf("CORRECT ANSWER! +5 points\n\n");
                ++count;

            }
            else
            {
                printf("Wrong Answer! Correct answer is 2.U.A.E\n\n");
            }
        }
        else
        {
            printf("Wrong Answer! Correct answer is 2.U.A.E\n\n");
        }


        //counting number of correct answers and rating of player
        if(count > 0)
        {
            printf("\n\t\tTHANK YOU.FOR PLAYING WITH US '%s'.",p.name);
            printf("\n\t\tYOU SCORED: %d POINTS of KNOWLEDGE", count*5);

                p.score=count*5;

                if(p.score >= 60)
                {
                    printf("\n\nYOUR STAR RATING: * * * * *.  CONGRATULATIONS!!You are a born GENIUS.");
                    p.rat=5;
                }
                else if(p.score >= 40 && p.score < 60)
                {
                    printf("\n\nYOUR STAR RATING: * * * *.  Ohhh!!You were so close.");
                    p.rat=4;
                }
                else if(p.score >= 20 && p.score < 40)
                {
                    printf("\n\nYOUR STAR RATING: * * *.  Not Bad.You could have done better.");
                  p.rat=3;
                }
                else if(p.score >= 10 && p.score < 20)
                {
                    printf("\n\nYOUR STAR RATING: * *. Work Hard thats the only way.");
                    p.rat=2;
                }
                else if(p.score < 10)
                {
                    printf("\n\nYOUR STAR RATING: *.Maybe your Luck is just not with you today ");
                     p.rat=1;
                }

        }//end if
        else
        {
            printf("\n\t\tTHANK YOU.FOR PLAYING WITH US '%s'.",p.name);
            printf("\n\t\tYOU SCORED: %d POINT.", count*5);
            printf("\n\n\t\tYou Are Not DEFEATED when you Lose.You Are Defeated when you QUIT.");
            printf("\n\t\t BETTER LUCK NEXT TIME!!");
        }//end else
}//end start
