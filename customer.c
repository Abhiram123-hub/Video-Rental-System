#include "customer.h"
#include <stdio.h>
#include <string.h>

void add_customer(customer customers[], int *num_customers) {
    if (*num_customers >= MAX) {
        printf("Customer limit reached.\n");
        return;
    }
    printf("Enter customer ID: ");
    scanf("%d", &customers[*num_customers].id);
    printf("Enter customer name: ");
    scanf("%s", customers[*num_customers].name);
    (*num_customers)++;
    printf("Customer added successfully.\n");
}

void edit_customer(customer customers[], int *num_customers) {
    int id, i;
    printf("Enter customer ID to edit: ");
    scanf("%d", &id);
    for (i = 0; i < *num_customers; i++) {
        if (customers[i].id == id) {
            printf("Enter new name: ");
            scanf("%s", customers[i].name);
            printf("Customer updated successfully.\n");
            return;
        }
    }
    printf("Customer not found.\n");
}

void list_customers(customer customers[], int *num_customers) {
    for (int i = 0; i < *num_customers; i++) {
        printf("ID: %d, Name: %s\n", customers[i].id, customers[i].name);
    }
}

void delete_customer(customer customers[], int *num_customers) {
    int id, i, j;
    printf("Enter customer ID to delete: ");
    scanf("%d", &id);
    for (i = 0; i < *num_customers; i++) {
        if (customers[i].id == id) {
            for (j = i; j < *num_customers - 1; j++) {
                customers[j] = customers[j + 1];
            }
            (*num_customers)--;
            printf("Customer deleted successfully.\n");
            return;
        }
    }
    printf("Customer not found.\n");
}
