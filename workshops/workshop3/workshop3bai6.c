#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void play_game(){
    srand(time(0));
    int secret = rand()%100 + 1;
    int guess;
    int win = 0;
    
    printf("=== GAME DOAN SO ===\n");
    printf("So tu 1 den 100, ban co 7 luot doan!\n");
    
    for(int luot=1; luot<=7; luot++){
        printf("Luot %d: ", luot);
        
        while(scanf("%d", &guess) != 1){
            printf("Nhap sai! Vui long nhap so: ");
            while(getchar() != '\n');
        }
        
        if(guess < 1 || guess > 100){
            printf("So ngoai pham vi! Nhap lai (khong mat luot)\n");
            luot--;
            continue;
        }
        
        if(guess == secret){
            printf("Chuc mung! Ban doan dung sau %d luot!\n", luot);
            win = 1;
            break;
        } else if(guess < secret){
            printf("So can tim LON HON!\n");
        } else {
            printf("So can tim NHO HON!\n");
        }
    }
    
    if(win == 0){
        printf("Ban thua! So can tim la %d\n", secret);
    }
}

int main(){
    play_game();
    return 0;
}