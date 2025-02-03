#include "video.h"
#include <stdio.h>
#include <string.h>

void add_video(video videos[], int *num_videos) {
    if (*num_videos >= MAX) {
        printf("Video limit reached.\n");
        return;
    }
    printf("Enter video ID: ");
    scanf("%d", &videos[*num_videos].id);
    printf("Enter video title: ");
    scanf("%s", videos[*num_videos].title);
    (*num_videos)++;
    printf("Video added successfully.\n");
}

void edit_video(video videos[], int *num_videos) {
    int id, i;
    printf("Enter video ID to edit: ");
    scanf("%d", &id);
    for (i = 0; i < *num_videos; i++) {
        if (videos[i].id == id) {
            printf("Enter new title: ");
            scanf("%s", videos[i].title);
            printf("Video updated successfully.\n");
            return;
        }
    }
    printf("Video not found.\n");
}
