// A baseball player’s batting average is calculated as the number of hits divided 
// by the official number of at-bats. In calculating official at-bats, walks, sacrifices, and occasions when hit by the pitch are not counted. Write a program 
// that takes an input file containing player numbers and batting records. Trips 
// to the plate are coded in the batting record as follows: H—hit, O—out, W—
// walk, S—sacrifice, P—hit by pitch. The program should output for each player 
// the input data followed by the batting average. ( Hint : Each batting record is 
// followed by a newline character.) 

#include <stdio.h>

int main()
{
    int players,i,player_number;
    char *record;

    printf("Enter total player records to be entered: ");
    scanf("%d",&players);

    for(i=1;i<=players;i++)
    {
        printf("Enter player number: ");
        scanf("%d",&player_number);

        printf("Enter scores: ");    
    }
}