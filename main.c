#include <stdio.h>
#include "customer.h"
#include "video.h"

int main()
{
    int choice;
    int num_customers = 0;
    int num_videos = 0;
    customer customers[MAX];
    video videos[MAX];

    do
    {
        printf("Main Menu\n");
        printf("0. Exit Program\n");
        printf("1. Add Customer\n");
        printf("2. Edit Customer\n");
        printf("3. List Customers\n");
        printf("4. Delete Customer\n");
        printf("5. Add Video\n");
        printf("6. Edit Video\n");
        printf("7. List Videos\n");
        printf("8. Delete Video\n");
        printf("Enter number of desired choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 0:
                printf("Thank you for using the Video Rental System.\n");
                break;
            case 1:
                add_customer(customers, &num_customers);
                break;
            case 2:
                edit_customer(customers, &num_customers);
                break;
            case 3:
                list_customers(customers, &num_customers);
                break;
            case 4:
                delete_customer(customers, &num_customers);
                break;
            case 5:
                add_video(videos, &num_videos);
                break;
            case 6:
                edit_video(videos, &num_videos);
                break;
            case 7:
                list_videos(videos, &num_videos);
                break;
            case 8:
                delete_video(videos, &num_videos);
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 0);

    return 0;
}
