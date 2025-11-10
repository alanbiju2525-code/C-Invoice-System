#include<stdio.h>
struct product{
    char name[50];
    int quantity;
    float price,total;

};
struct customer{
    char name[50];
    int order_id;
    float total_amount;
};
int main(){
    int i,n;
    float gst,grand_total;
    struct product p[100];
    struct customer c;
    c.total_amount = 0;

    printf("\nCustomer Name:");
    scanf("%s",c.name);
    printf("Order ID : ");
    scanf("%d",&c.order_id);
    printf("Total no of products:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nProduct %d(name): ",i+1);
        scanf("%s",p[i].name);
        printf("Quantity: ");
        scanf("%d",&p[i].quantity);
        printf("price: ");
        scanf("%f",&p[i].price);
        p[i].total = p[i].quantity*p[i].price;
    }
    for(i=0;i<n;i++){
        c.total_amount += p[i].total;
    }
    gst = c.total_amount*0.05;
    grand_total = c.total_amount + gst;
    printf("\n\n");
    printf("--------------------------------------------------------\n");
    printf("                   ONLINE SHOP INVOICE                 \n");
    printf("--------------------------------------------------------\n");
    printf("Customer Name: %s\n",c.name);
    printf("Order ID     : %d\n",c.order_id);
    printf("--------------------------------------------------------\n");
    printf("Product Name\t\tQty\tPrice\t\tAmount\n");
    printf("--------------------------------------------------------\n");

    for(i=0;i<n;i++){
        printf("%s\t\t\t%d\t%0.2f\t\t%0.2f",p[i].name,p[i].quantity,p[i].price,p[i].total);
        printf("\n");
    }
    printf("--------------------------------------------------------\n");
    printf("Total Bill          : %0.2f/-\n",c.total_amount);
    printf("GST                 : %0.2f/-\n",gst);
    printf("Grand Total         : %0.2f/-\n",grand_total);
    printf("--------------------------------------------------------\n");
    printf("Thank you for shopping!");
    printf("\n\n\n");

    return 0;
}