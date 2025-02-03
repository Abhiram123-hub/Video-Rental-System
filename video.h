#ifndef VIDEO_H
#define VIDEO_H
#define MAX 100

typedef struct {
    int id;
    char title[50];
} video;

void add_video(video videos[], int *num_videos);
void edit_video(video videos[], int *num_videos);
void list_videos(video videos[], int *num_videos);
void delete_video(video videos[], int *num_videos);

#endif
