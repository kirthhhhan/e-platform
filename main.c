#include<stdio.h>
#include<string.h>
main()
{
 static int totalCost;
 int i,j,choice,c=1,prodadd[9],prodcost[9],pay,cardno;
 for(i=0;i<9;i++)
 prodadd[i]=0;

 char custnm[200],addr[2500];
 char items[9][100]={"Nandini milk one litre",
 "Yoghurt half litre",
 "Nandini ghee one litre",
 "White bread one loaf",
 "Whole wheat bread one loaf",
 "French croissant",
 "Chicken one kg(without skin)",
 "Mutton one kg",
 "Sea food combo(prawns and sardines)"
 };
 printf("\n");
 printf("\n\n************************************************GLEN'S GROCERIES********************************************************\n\n");
 printf("Please Enter Your Name\n");
 gets(custnm);
 printf("Hello %s, Welcome to our Online Shopping Platform.\n",custnm);
 do{
  //C = 1 by default
  if(c==1){
  printf("Enter\n 1 - Dairy Products\n 2 - Baked Goods\n 3 - Fresh Meats\nAny other number to exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    int dairyprod;
    printf("WELCOME to Dairy products!!");
    printf("Enter\n 1 - Nandini milk one litre - Rs.45\n 2 - Yoghurt half litre- Rs.25\n 3 - Nandini Ghee one litre - Rs.200\nAny other number to exit\n");
    scanf("%d",&dairyprod);
    prodcost[0]=45;
    prodcost[1]=25;
    prodcost[2]=200;
    switch(dairyprod)
    {
     case 1:
     {
      int num;
      printf("You chose Nandini milk one litre worth Rs 45.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       prodadd[0]++;
       totalCost+=45;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Yoghurt half litre worth 25.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       prodadd[1]++;
       totalCost+=25;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose Nandini ghee one liter worth Rs 200 .Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       prodadd[2]++;
       totalCost+=200;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Dairy products\n");
      break;
     }
    }
    break;
   }
   case 2:
   {
    int bkdgoods;
    printf("Enter\n1 - White Bread one loaf - Rs.42\n2 - Whole Wheat Bread one loaf - Rs.50\n3 - French croissant - Rs.280\nAny other number to exit\n");
    scanf("%d",&bkdgoods);
    prodcost[3]=42;
    prodcost[4]=50;
    prodcost[5]=280;
    switch(bkdgoods)
    {
     case 1:
     {
      int num;
      printf("You chose White Bread one loaf worth Rs 42.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       prodadd[3]++;
       totalCost+=42;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose whole Wheat Bread one loaf worth Rs.50.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       prodadd[4]++;
       totalCost+=50;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose French Croissant Rs.280.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       prodadd[5]++;
       totalCost+=280;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from baked goods \n");
      break;
     }
    }
    break;
   }
   case 3:
   {
    int frshmeats;
    printf("Enter\n1 - Chicken one kg(without skin) - Rs.280\n2 - Mutton one kg - Rs.600\n3 - Seafood combo(prawns and sardine) - Rs.799\nAny other number to exit\n");
    scanf("%d",&frshmeats);
    prodcost[6]=280;
    prodcost[7]=600;
    prodcost[8]=799;
    switch(frshmeats)
    {
     case 1:
     {
      int num;
      printf("You chose to buy chicken one kg(without skin) worth Rs 280 .Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       prodadd[6]++;
       totalCost+=280;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose to buy mutton one kg worth Rs.600.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       prodadd[7]++;
       totalCost+=600;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose to buy seafood combo(prawns and sardine) worth Rs 799.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       prodadd[8]++;
       totalCost+=799;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Fresh Meats section\n");
      break;
     }
    }
    break;
   }
   default:
   {
    printf("Enter a Valid Category\n");
    break;
   }
  }
  printf("%s's cart\n",custnm);
  printf("Id\t\tItems\t\t\t\tQuantity\t\t\t\tCost\n\n");

 printf("------------------------------------------------------------------------------------------------------------------------");
  for(i=0;i<9;i++)
  {
   if(prodadd[i]!=0)
   {
    printf("%d\t\t%s\t\t\t\t%d\t\t\t%d\n\n",i,items[i],prodadd[i],(prodcost[i]*prodadd[i]));

 printf("------------------------------------------------------------------------------------------------------------------------");
   }
  }
  printf("Total Cost\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\n\n\n",totalCost);
  printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
  scanf("%d",&c);
 }
  if(c==2)
  {
   int id;
   printf("Enter id to delete item\n");
   scanf("%d",&id);
   if(id<9&&id>0){
   totalCost=totalCost-(prodcost[id]*prodadd[id]);
   prodadd[id]=0;
   }
   else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\t\t\t\t\tItems\t\t\t\t\t\t\tQuantity\t\t\t\t\t\t\t\tCost\n\n");
            for(i=0;i<9;i++)
      {
     if(prodadd[i]!=0)
      {
    printf("%d\t\t%s\t\t\t\t%d\t\t\t%d\n\n",i,items[i],prodadd[i],(prodcost[i]*prodadd[i]));

 printf("------------------------------------------------------------------------------------------------------------------------");
      }
     }
        printf("Total Cost\t\t\t\t\t%d\n\n",totalCost);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
     scanf("%d",&c);
  }
   if(c==3)
  {
   int id,quantity;
   printf("Enter id to Change quantity of an item\n");
   scanf("%d",&id);
   printf("Enter quantity to be changed of an item\n");
   scanf("%d",&quantity);
   if(id<9&&id>=0){
    if(quantity>0 && prodadd[id]>0){
        if(quantity<prodadd[id])
     {
      int dec=prodadd[id]-quantity;
      prodadd[id]=quantity;
       totalCost=totalCost-(prodcost[id]*dec);
     }
     if(quantity>prodadd[id])
     {
      int inc=quantity-prodadd[id];
      prodadd[id]=quantity;
       totalCost=totalCost+(prodcost[id]*inc);
     }
     if(quantity==prodadd[id])
     {
      prodadd[id]=quantity;
       totalCost=totalCost+0;
     }

    }
    else{
       printf("Item has no Quantity.Please Try again\n");
    }
     }
     else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\tItems\t\tQuantity\tCost\n");
            for(i=0;i<9;i++)
      {
     if(prodadd[i]!=0)
      {
    printf("%d\t\t%s\t\t\t\t%d\t\t\t%d\n\n",i,items[i],prodadd[i],(prodcost[i]*prodadd[i]));

 printf("------------------------------------------------------------------------------------------------------------------------");
      }
     }
        printf("Total Cost\t\t\t\t\t%d\n",totalCost);
        printf("If you wish to buy anything more Enter\n 1 to Add Item\n 2 to Delete Items\n 3 to Change Quantity \nAny other number to Exit\n");
     scanf("%d",&c);
  }

 }while(c==1 || c==2||c==3);
 printf("Your Final Cost is %d\n",totalCost);
 printf("Enter \n 1 debit/credit/ATM card \n 2 pay on delivery");
 printf("\nEnter a mode of payment\n");
 scanf("%d",&pay);
 if(pay==1)
 {
     printf("You have chosen debit/credit/ATM card,enter your pin no:\n");
     scanf("%d",&cardno);
     printf("Payment is successful\n");
 }
 else if(pay==2)
 {
     printf("You have chosen pay on delivery\n");
     printf("Payment is successful\n");

 }
 printf("%s Enter your shipping address ",custnm);
 printf("The shipping address is: ");
 scanf("%s",&addr);
 printf("Your order will be shipped to %s\n at %s\n in 1-2 days from the day of placing the order\n\n\n\n",custnm,addr);
 printf("\n Thank you %s for Choosing Us and Visit us again.\n",custnm);
 printf("\n");
 printf("------------------------------------------------------------------------------------------------------------------------");

}
