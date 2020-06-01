#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
void ads(int);
void gk(int);
void ck(int);
void bw(int);
void main()
{ clrscr();
int ch,n;
textcolor(CYAN);
cprintf("                     *********WELCOME TO QUIZ ADDA*********");
textcolor(BLUE);
cprintf("                                                                         Created By Team Alpha");
cout<<"\n\n";
textcolor(YELLOW);
cprintf("Here Are The Following Categories:");
cout<<"\n\n1.GENERAL KNOWLEDGE\n2.CRICKET\n3.BOLLYWOOD\n4.ADS\n5.Exit\n";
cout<<"\n\n";
textcolor(CYAN);
cprintf("                      ######### RULES FOR THIS QUIZ #########");
cout<<"\n\n";
cout<<"\n1.YOU HAVE ONLY 5 QUESTIONS TO ANSWER IN EACH CATEGORY.";
cout<<"\n2.ALL QUESTION ARE COMPULSORY TO ANSWER.";
cout<<"\n3.FOR EVERY CORRECT ANSWER 4marks WILL BE AWARDED.";
cout<<"\n4.FOR EVERY WRONG ANSWER 1marks WILL BE DEDUCTED.";
cout<<"\n5.If YOU WANT TO SKIP THE QUESTION THEN PRESS 0.";
cout<<"\n6.THIS QUIZ IS CREATED BY TEAM ALPHA.COPYING OR PLAGIARATING THIS CODING IN ANY MANNER IS NOT A NOBLE CAUSE TO WRITE SOMETHING !!!";
textcolor(BLUE);
cprintf("                                                                                                   @Team Alpha");
cout<<"\n\n";
textcolor(YELLOW);
cprintf("Enter Choice");
textcolor(WHITE);
cprintf(":-");
cin>>ch;
switch(ch)
{
 case 1:gk(n);
       break;
 case 2:ck(n);
      break;
 case 3:bw(n);
     break;
 case 4:ads(n);
     break;
 case 5:exit(0);
 default:cout<<"\n\nWrong Choice\n";
}
getch();
}
void gk(int)
{ clrscr();
int q,m=0;
textcolor(CYAN);
cprintf("		                    A MIND WITHOUT KNOWLEDGE IS LIKE");
cprintf("                                                      A BODY WITHOUT A SOUL");
textcolor(YELLOW);
cprintf("                                                           Welcome In G.K. Adda");
cout<<"\n\n1.WHO IS THE PRESENT PRESIDENT OF INDIA?\n\n";
cout<<"1.PRANAB MUKHERJEE\t\t2.NARENDRA MODI\n3.PRATIBHA PATIL\t\t4.MANMOHAN SINGH\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==1)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=-1;
}
cout<<"\n2.WHAT IS THE EXPANSION OF 'R.A.W.'?\n\n";
cout<<"1.RESEARCH AND ANALYSIS WING\t\t2.RAMDEV AANATH WELFARE\n3. RIGHT ANSWERING WIDGET\t\t4.RIGHTS AGAINT WRESTLING\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==1)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n3.WHO INVENTED BALL PEN?\n\n";
cout<<"1.WATERMAN\t\t2.C. BIRO\n3.RODEO BALLEY\t\t4.BALLING BANSO\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==2)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n4.WHAT IS THE PRESENT HEIGHT OF MT. EVEREST?\n\n";
cout<<"1.8848m\t\t2.8850m\n3.8851m\t\t4.8894m\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==3)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n5.WHO HAVE COPYRIGHT OF THIS QUIZ?\n\n";
cout<<"1.AMAN & ABHISHEK\t\t2.SUJEET & SUDHANSHU\n3.DIKSHA & SNEHA\t\t4.AXELBOND LTD.\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==4)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\nTotal Marks\t"<<m;
if(m==20)
cout<<"\nEXECELLENT\n";
else if(m>=10)
cout<<"\nGOOD\n";
else
cout<<"\nPOOR NEED MORE PRACTICE.....!!!!\n";
textcolor(CYAN);
cprintf("                                 THANKS FOR PLAYING");
}
void ck(int)
{ clrscr();
int q,m=0;
textcolor(CYAN);
cprintf("		                TO ME, CRICKET IS A SIMPLE GAME. KEEP IT");
cprintf("                                             SIMPLE AND JUST GO OUT AND PLAY");
textcolor(YELLOW);
cprintf("                                                    Welcome To Cricket Adda");
cout<<"\n\n1.WHICH SOUTH AFRICAN CRICKETER WAS NICKNAMED ZULU BECAUSE OF HIS FLUENCY IN THE LANGUAGE..??\n\n";
cout<<"1.LANCE KLUSENER\t\t2.BRIAN McMILLAN\n3.DE VILLARS\t\t\t4.AMLA\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==1)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=-1;
}
cout<<"\n2.IN WHICH COUNTRY WAS THE FIRST INTERNATIONAL CRICKET MATCH PLAYED IN 1844..??\n\n";
cout<<"1.CANADA\t\t2.U.S.A\n3.SOUTH AFRICA\t\t4.ENGLAND\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==2)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n3.SHILPA SHETTY IS ASSOCIATED WITH WHICH FRANCHISE IN IPL..??\n\n";
cout<<"1.CSK\t\t2.KKR\n3.DD\t\t4.RR\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==4)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n4.WHO FOUNDED YouWeCan, A CHARITY DEDICATED TO RAISING AWARENESS OF CANCER..??\n\n";
cout<<"1.GLENN-McGRATH\t\t2.MS DHONI\n3.YUVRAJ SINGH\t\t4.SACHIN\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==3)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n5.WHICH CRICKET IS PART OF BAND CALLED 'SIX AND OUT'..??\n\n";
cout<<"1.S.RAINA\t\t\t2.BRETT LEE\n3.RICKEY PONTING\t\t4.SHANE WWARNE\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==2)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\nTotal Marks\t"<<m;
if(m==20)
cout<<"\nEXECELLENT\n";
else if(m>=10)
cout<<"\nGOOD\n";
else
cout<<"\nPOOR NEED MORE PRACTICE.....!!!!\n";
textcolor(CYAN);
cprintf("                                 THANKS FOR PLAYING");
}
void bw(int)
{ clrscr();
int q,m=0;
textcolor(CYAN);
cprintf("		                LITERATURE GAVE US MANY ASPECT OF ENTERTAINMENT");
cprintf("                       CINEMA IS ONE OF THE BEST OF IT & BOLLYWOOD IS AT THE TOP FOR US");
textcolor(YELLOW);
cprintf("                                      Welcome To Bollywood Adda");
cout<<"\n\n1.WHICH 2008 FILM WAS BASED ON THE LIFE OF 'SUPER CHOR' DEVENDRA SINGH,\nAKKA BUNTY..??\n\n";
cout<<"1.OYE LUCKY LUCK OYE!\t\t2.JAB WE MET\n3.MURDER\t\t\t4.KRRISH\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==1)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=-1;
}
cout<<"\n2.WHICH DIRECTOR WILL APPEAR IN BOMBAY VELVET AS KAIZAD KHAMBATTA,A PARSI MEDIA MOGUL..??\n\n";
cout<<"1.ANURAG KASHYAP\t\t2.KARAN JOHAR\n3. RANBIR KAPOOR\t\t4.PRAKASH JHA \n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==2)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n3.AISHWARYA RAI STARRED OPPOSITE WHICH STAR IN THE MOVIE 'ROBOT'..??\n\n";
cout<<"1.ABHISHEK\t\t2.C. HRITHIK\n3.SHARRUKH\t\t4.RAJNIKANTH\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==4)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n4.WHICH OF THE BOLLYWOOD MOVIE FOLLOWS THE HOLLYWOOD MOVIE 'BONNIE AND CLYDE'..??\n\n";
cout<<"1.RA-ONE\t\t\t2.HUM TUM\n3.BUNTY AUR BABLI\t\t4.STAR WARS\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==3)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n5.WHICH BOLLYWOOD ACTOR STARS IN AN INDIAN REMAKE OF THE HIT AMERICAN T.V.\nSERIES '24'..??\n\n";
cout<<"1.ABHISHEK\t\t2.ANIL KAPOOR\n3.KATRINA\t\t4.JAMES BOND\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==2)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\nTotal Marks\t"<<m;
if(m==20)
cout<<"\nEXECELLENT\n";
else if(m>=10)
cout<<"\nGOOD\n";
else
cout<<"\nPOOR NEED MORE PRACTICE.....!!!!\n";
textcolor(CYAN);
cprintf("                                 THANKS FOR PLAYING");
}
void ads(int)
{ clrscr();
int q,m;
textcolor(CYAN);
cprintf("		                    Creative Without Strategy Is Called Art");
cprintf("                                       Creative With Strategy Is Called Advertising");
textcolor(YELLOW);
cprintf("                                               Welcome In Ads Adda");
cout<<"\n\n1.'Desh Ka Namak' Is The Tagline Of......?\n\n";
cout<<"1.Annapurna\t\t2.Tata Salt\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==2)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=-1;
}
cout<<"\n2.Shahid Kapoor And Ayesha Takia Featured In Which Of These Brand ad...?\n\n";
cout<<"1.Complan\t\t2.Bournvita\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==1)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n3.'Rule The Change' Is The Tagline Of Which Moblie Company In Hyderabad....??\n\n";
cout<<"1.Micromax\t\t2.Celkon\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==2)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n4.Which Brand Is Started 'Taller,Stronger,Sharper' Campaign....??\n\n";
cout<<"1.Horlicks\t\t2.Boost\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==1)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\n5.Tagline Of GOOGLE Is...??\n\n";
cout<<"1.Don't Be Evil\t\t2.No Tagline\n";
textcolor(BLUE);
cprintf("ANSWER:-");
cin>>q;
if(q==1)
{ textcolor(GREEN);
cprintf("Correct Answer    +4");
m=m+4;
}
else if(q==0)
{ cout<<"Question Is Skipped";
}
else
{ textcolor(RED);
cprintf("Wrong Answer        -1");
m=m-1;
}
cout<<"\nTotal Marks\t"<<m;
if(m==20)
cout<<"\nEXECELLENT\n";
else if(m>=10)
cout<<"\nGOOD\n";
else
cout<<"\nPOOR NEED MORE PRACTICE.....!!!!\n";
textcolor(CYAN);
cprintf("                                 THANKS FOR PLAYING");
}
