# include <stdio.h>

struct House{
    char address[50];
    float squarefeet;
    int bedroom;
    float bathroom;
    float price;
};

void main(){
    struct House house1 = {"111 Old House Rd", 1200, 3, 2.5, 120000};
    struct House house2 = {"123 White House Rd", 2500, 4, 3, 250000};
    struct House house3 = {"456 Lincoln St", 1000, 2, 1, 80199.99};

    printf("This house is located at %s, with %.2f squarefeet, %d bedroom(s), %.2f bathroom(s), and costs %.2f\n", house1.address, house1.squarefeet, house1.bedroom, house1.bathroom, house1.price);
    printf("This house is located at %s, with %.2f squarefeet, %d bedroom(s), %.2f bathroom(s), and costs %.2f\n", house2.address, house2.squarefeet, house2.bedroom, house2.bathroom, house2.price);
    printf("This house is located at %s, with %.2f squarefeet, %d bedroom(s), %.2f bathroom(s), and costs %.2f\n", house3.address, house3.squarefeet, house3.bedroom, house3.bathroom, house3.price);
}