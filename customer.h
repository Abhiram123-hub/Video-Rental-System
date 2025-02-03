#ifndef CUSTOMER_H
#define CUSTOMER_H
#define MAX 100

typedef struct {
    int id;
    char name[50];
} customer;

void add_customer(customer customers[], int *num_customers);
void edit_customer(customer customers[], int *num_customers);
void list_customers(customer customers[], int *num_customers);
void delete_customer(customer customers[], int *num_customers);

#endif
