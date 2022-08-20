/*This code is about giving differents operations like simple it also take different , area perimeter , 
temperature conversion . This is very useful for different operations . so use it and give your feedback!
different changes that you want!!! */
#include<stdio.h>
#include<math.h>
# define PI 3.14
# define HALF 0.5
int main()
{

    int n,k,t,num5,num4;
    float num1,num2,num3,add,sub,mul,div,rem,cel,kel,fer,area,perimeter,volume;

    printf("\n*********************************************************");
    printf("\n**********************WEL-COME***************************");
    printf("\n*********************************************************");
    main:                                                                      //to return main
    printf("\n1.Simple Arithmatic Operation");
    printf("\n2.Temperature Conversion");
    printf("\n3.Area of Objects");
    printf("\n4.Perimeter of Objects");
    printf("\n5.Volume of Objects");
    printf("\n6.Power of number");
    printf("\n7.For information about shortcuts");
    printf("\nEnter:");
    scanf("\n%d",&n);
    switch(n)
    {

        //arithmatic case
        case 1: arith:  
                printf("\n```````````````````````````````````````````````````````");                           
                printf("\n1.Addition");
                printf("\n2.Substraction");
                printf("\n3.Division");
                printf("\n4.Multiplication");
                printf("\n5.Remainder ");
                printf("\n```````````````````````````````````````````````````````");
                
                printf("\nEnter:");
                scanf("%d",&k);
                
                if(k==1)
                {
                    printf("\nEnter Num1:");
                    scanf("%f",&num1);
                    printf("\nEnter Num2:");
                    scanf("%f",&num2);
                    add=num1+num2;
                    printf("\nAddition=%f",add);
                                   
                }
                else if(k==2)
                {
                    printf("\nEnter Num1:");
                    scanf("%f",&num1);
                    printf("\nEnter Num2:");
                    scanf("%f",&num2);
                    sub=num1-num2;
                    printf("\nSubstraction=%f",sub);

 
                }
                else if(k==3)
                {
                    printf("\nEnter Num1:");
                    scanf("%f",&num1);
                    printf("\nEnter Num2:");
                    scanf("%f",&num2);
                    div=num1/num2;
                    printf("\nDivision=%f",div);

                }
                else if(k==4)
                {
                    printf("\nEnter Num1:");
                    scanf("%f",&num1);
                    printf("\nEnter Num2:");
                    scanf("%f",&num2);
                    mul=num1*num2;
                    printf("\nMultiplication=%f",mul);
                }
                else if(k==5)
                {
                    printf("\nEnter Num1:");
                    scanf("%d",&num5);
                    printf("\nEnter Num2:");
                    scanf("%d",&num4);
                    rem=num5 % num4;
                    printf("\nRemainder=%f",rem);
                }
                else
                {
                    goto wrong;
                }
                printf("\n```````````````````````````````````````````````````````");
                printf("\nEnter:");
                scanf("%d",&t);
                if(t==8)
                {
                    goto arith;
                }
                if(t==9)
                {
                    goto main;
                }
                if(t==10)
                {
                     printf("\nTHANK YOU!!!");
                }
            
                break;

    case 2: 
            //temperature case
           temp:
           printf("\n```````````````````````````````````````````````````````");
           printf("\n1.Celcius to kelvin:");
            printf("\n2.kelvin to celcuis:");
            printf("\n3.celcius to farenhit:");
            printf("\n4.Farenhit to celcuis:");
            printf("\n```````````````````````````````````````````````````````");
            printf("\nEnter:");
            scanf("%d",&k);
            if(k==1)
            {
                printf("\nEnter Temperature in Celcuis:");
                scanf("%f",&num1);
                kel=num1+273.15;
                printf("\nTemperature in Kelvin=%f kel",kel);
                

            }
            else if(k==2)
            {
                printf("\nEnter Temperature in Kelvin:");
                scanf("%f",&num1);
                cel=num1-273.15;
                printf("\nTemperature in Celcuis=%f cel",cel);

            }
            else if(k==3)
            {
                printf("\nEnter Temperature in Celcuis:");
                scanf("%f",&num1);
                fer=(1.8*num1)+32;
                printf("\nTemperature in Ferhnhit=%f fer",fer);
            }
            else if(k==4)
            {
                printf("\nEnter Temperature in Ferhnhit:");
                scanf("%f",&num1);
                cel=((num1-32)*5)/9;
                printf("\nTemperature in Celcuis=%f cel",cel);
                
            }
            else
            {
                goto wrong;
            }
            printf("\n```````````````````````````````````````````````````````");
            printf("\nEnter:");
                scanf("%d",&t);
                if(t==8)
                {
                    goto temp;
                }
                if(t==9)
                {
                    goto main;
                }
                if(t==10)
                {
                     printf("\nTHANK YOU!!!");
                }
            
                break;

    case 3 :    
                 //area case
                area:
                printf("\n```````````````````````````````````````````````````````");
                printf("\n1.Area of Rectangle:");
                printf("\n2.Area of Square:");
                printf("\n3.Area of Circle:");
                printf("\n4.Area of Triangle:");
                printf("\n5.Area of Parallogram");
                printf("\n```````````````````````````````````````````````````````");
                printf("\nEnter:");
                scanf("%d",&k);
                if(k==1)
                {
                    printf("\nEnter Length of Rectangle:");
                    scanf("%f",&num1);
                    printf("\nEnter Breadth of Rectangle:");
                    scanf("%f",&num2);
                    area=num1*num2;
                    printf("\nArea of Rectangle=%f sq.unit",area);
                }
                else if(k==2)
                {
                    printf("\nEnter Side of square:");
                    scanf("%f",&num1);
                    area=num1*num1;
                    printf("\nArea of Square=%f sq.unit",area);
                }
                else if(k==3)
                {
                    printf("\nEnter Radius of Circle:");
                    scanf("%f",&num2);
                    area=PI*num2*num2;
                    printf("\nArea of Circle=%f sq.unit",area);
                }
                else if(k==4)
                {
                    printf("\nEnter Height of Triangle:");
                    scanf("%f",&num1);
                    printf("\nEnter Base of Triangle:");
                    scanf("%f",&num2);
                    area=HALF*num1*num2;
                    printf("\nArea of Triangle=%f sq.unit",area);

                }
                else if(k==5)
                {
                    printf("\nEnter Base of Parallelogram:");
                    scanf("%f",&num1);
                    printf("\nEnter Height of Parallelogram:");
                    scanf("%f",&num2);
                    area=num1*num2;
                    printf("\nArea of Parallelogram=%f sq.unit",area);
                }
                else 
                {
                    goto wrong;
                }
                printf("\n```````````````````````````````````````````````````````");
                printf("\nEnter:");
                scanf("%d",&t);
                if(t==8)
                {
                    goto area;
                }
                if(t==9)
                {
                    goto main;
                }
                if(t==10)
                {
                     printf("\nTHANK YOU!!!");
                }
            
                break;

    case 4:     
                //perimeter case
                per:
                printf("\n```````````````````````````````````````````````````````");
                printf("\n1.Perimeter of Rectangle:");
                printf("\n2.Perimeter of Square:");
                printf("\n3.Perimeter of Circle:");
                printf("\n4.Perimeter of Triangle:");
                printf("\n5.Perimeter of Parallogram");
                printf("\n```````````````````````````````````````````````````````");
                printf("\nEnter:");
                scanf("%d",&k);

                if(k==1)
                {
                    printf("\nEnter Length of Rectangle:");
                    scanf("%f",&num1);
                    printf("\nEnter Breadth of Rectangle:");
                    scanf("%f",&num2);
                    perimeter=2*(num1+num2);
                    printf("\nArea of Rectangle=%f unit",perimeter);
                }
                else if(k==2)
                {
                    printf("\nEnter Side of Square:");
                    scanf("%f",&num2);
                    perimeter=4*num2;
                    printf("\nArea of Square=%f unit",perimeter);
                }
                else if(k==3)
                {
                    printf("\nEnter Radius of Circle:");
                    scanf("%f",&num2);
                    perimeter=2*PI*num2;
                    printf("\nArea of Circle=%f unit",perimeter);
                }
                else if(k==4)
                {
                    printf("\nEnter Side 1 of Triangle:");
                    scanf("%f",&num1);
                    printf("\nEnter Side 1 of Triangle:");
                    scanf("%f",&num2);
                    printf("\nEnter Side 1 of Triangle:");
                    scanf("%f",&num3);
                    perimeter=num1+num2+num3;
                    printf("\nPerimeter of Triangle=%f unit",perimeter);
                }
                else if(k==5)
                {
                    printf("\nEnter Base of Parallelogram:");
                    scanf("%f",&num1);
                    printf("\nEnter Height of Parallelogram:");
                    scanf("%f",&num2);
                    perimeter=(2*num1+num2);
                    printf("\nArea of Parallelogram=%f unit",perimeter);
                }
                else 
                {
                    goto wrong;
                }
                printf("\n```````````````````````````````````````````````````````");
                printf("\nEnter:");
                scanf("%d",&t);
                if(t==8)
                {
                    goto per;
                }
                if(t==9)
                {
                    goto main;
                }
                if(t==10)
                {
                     printf("\nTHANK YOU!!!");
                }

                 break;
    case 5:     
                //volume case
                vol:
                printf("\n```````````````````````````````````````````````````````");
                printf("\n1.Perimeter of Cuboid:");
                printf("\n2.Perimeter of Cube:");
                printf("\n3.Perimeter of Cylinder:");
                printf("\n4.Perimeter of Prism:");
                printf("\n5.Perimeter of pyramid:");
                printf("\n```````````````````````````````````````````````````````");
                printf("\nEnter:");
                scanf("%d",&k);
                if(k==1)
                {
                    printf("\nEnter length of Cuboid:");
                    scanf("%f",&num1);
                    printf("\nEnter width of Cuboid:");
                    scanf("%f",&num2);
                    printf("\nEnter height of Cuboid:");
                    scanf("%f",&num3);
                    volume=num1*num2*num3;
                    printf("\nVolume of Cuboid=%f cubic unit",volume);
                    
                }
                else if(k==2)
                {
                    printf("\nEnter length of side of Cube:");
                    scanf("%f",&num3);
                    volume=num3*num3*num3;
                    printf("\nVolume of Cube=%f cubic unit",volume);
                }
                else if(k==3)
                {
                    printf("\nEnter raduis of circular base of Cylinder:");
                    scanf("%f",&num1);
                    printf("\nEnter height of cylinder:");
                    scanf("%f",&num2);
                    volume=PI*num1*num1*num2;
                    printf("\nVolume of Cylinder=%f cubic unit",volume);
                }
                else if(k==4)
                {
                    printf("\nEnter side of prism:");
                    scanf("%f",&num1);
                    printf("\nEnter height of Prism:");
                    scanf("%f",&num2);
                    volume=num1*num1*num2;
                    printf("\nVolume of Prism=%f cubic unit",volume);
                }
                else if(k==5)
                {
                    printf("\nEnter side of Pyramid:");
                    scanf("%f",&num1);
                    printf("\nEnter height of Pyramid: ");
                    scanf("%f",&num2);
                    volume=0.3*num1*num1*num2;
                    printf("\nVolume of Pyramid=%f cubic unit",volume);

                }
                else 
                { 
                    goto wrong;
                }
                printf("\n```````````````````````````````````````````````````````");
                printf("\nEnter:");
                scanf("%d",&t);
                if(t==8)
                {
                    goto vol;
                }
                if(t==9)
                {
                    goto main;
                }
                if(t==10)
                {
                     printf("\nTHANK YOU!!!");
                }
            
                break;


    case 6:     //Power
                pow:
                printf("\n```````````````````````````````````````````````````````");
                printf("\n1.Power of any number");
                printf("\n2.Square ");
                printf("\n3.Square Root");
                printf("\n4.Cube");
                printf("\n5.Cube Root");
                printf("\n```````````````````````````````````````````````````````");
                printf("\nEnter:");
                scanf("%d",&k);
                if(k==1)
                {
                    printf("\nEnter Number:");
                    scanf("%d",&num5);
                    printf("\nWhich Power you Want:");
                    scanf("%d",&num4);
                    printf("\nPower of Given Number=%f",pow(num5,num4));
                }
                else if(k==2)
                {
                    printf("\nEnter Number:");
                    scanf("%d",&num4);
                    num5=num4*num4;
                    printf("\nSquare of %d=%d",num4,num5);
                }
                else if(k==3)
                {
                    printf("\nEnter Number:");
                    scanf("%f",&num2);
                    printf("\nSquare root of %f = %f",num2,sqrt(num2));

                }
                else if(k==4)
                {
                    printf("\nEnter Number:");
                    scanf("%d",&num4);
                    num5=num4*num4*num4;
                    printf("\nCube of %d = %d",num4,num5);
                }
                else if(k==5)
                {
                    printf("\nEnter Number:");
                    scanf("%f",&num2);
                    printf("\nCube of %f = %f",num2,cbrt(num2));
                }
                else 
                { 
                    goto wrong;
                }
                printf("\n```````````````````````````````````````````````````````");
                printf("\nEnter:");
                scanf("%d",&t);
                if(t==8)
                {
                    goto pow;
                }
                if(t==9)
                {
                    goto main;
                }
                if(t==10)
                {
                     printf("\nTHANK YOU!!!");
                }
            
                 break;


    case 7 :
            //shortcut case
            wrong:
             printf("\n*************Instruction**************");
             printf("\n1.Use only numbers!!!");
             printf("\n2.Use 8 to go for same format!!!");
             printf("\n3.Use 9 to go main menu!!!");     
             printf("\n4.Use 10 to end this program!!!");
             printf("\n```````````````````````````````````````````````````````");
             
             printf("\nEnter:");
                scanf("%d",&t);
                
                if(t==9)
                {
                    goto main;
                }
                if(t==10)
                {
                     printf("\nTHANK YOU!!!");
                }
            break;


    default :  goto wrong;
}

return 0;


} 
