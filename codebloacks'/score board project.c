#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int choice;
typedef struct {
   char name[50];  int runs;
     int balls;    int fours;
        int sixes;
        int isOut; // 0 if not out, 1 if out
        } Player;
        typedef struct {
          char teamName[50];
            Player players[11];
             int totalRuns;
              int wickets;
               int overs;
               } Team;
               void initPlayer(Player *player, const char *name) {
                  strcpy(player->name, name);
                 player->runs = 0;
                 player->balls = 0;
                  player->fours = 0;
                   player->sixes = 0;
                     player->isOut = 0;
void initTeam(Team *team, const char *name)
{
strcpy(team->teamName, name);
team->totalRuns = 0;
        team->wickets = 0;
            team->overs = 0;
        for (int i = 0; i < 11; i++)
        {
            char playerName[50];
            sprintf(playerName, "Player %d", i + 1);
            initPlayer(&team->players[i], playerName);
            }
        }
            void displayScoreboard(Team *team)
            {
                printf("\nTeam: %s\n", team->teamName);
                printf("Total Runs: %d\n", team->totalRuns);
                    printf("Wickets: %d\n", team->wickets);
            printf("Overs: %d\n\n", team->overs);
            printf("Player\t\t      Runs\tBalls\t4s\t6s\tStatus\n");
            for (int i = 0; i < 11; i++)
            {
                    Player *player = &team->players[i];
     printf("%s\t\t%d\t%d\t%d\t%d\t%s\n", player->name, player->runs, player->balls, player->fours, player->sixes, player->isOut ? "Out" : "Not Out");
                    }
                    }
        void updateScore(Team *team, int playerIndex, int runs, int balls, int isOut)
            {
            Player *player = &team->players[playerIndex];
                player->runs += runs;
                player->balls += balls;
                    if (runs == 4)
                        player->fours++;
                if (runs == 6)
                    player->sixes++;
                if (isOut)
            {
                player->isOut = 1;
            team->wickets++;
                        }
                    team->totalRuns += runs;
                    team->overs += balls / 6;
                        }
                int main()
            {
                Team team;
                char teamName[50];
                printf("Enter team name: ");
                fgets(teamName, sizeof(teamName), stdin);
            teamName[strcspn(teamName, "\n")] = '\0';  // Remove newline character
            initTeam(&team, teamName);
        int choice;
        do
            {
            printf("\n1. Update Score\n");
                printf("2. Display Scoreboard\n");
                printf("3. Exit\n");
                printf("Enter your choice: ");
            scanf("%d", &choice);
switch (choice){
case 1:
    {
         int playerIndex, runs, balls, isOut;
                     printf("Enter player index (0-10): ");
                     scanf("%d", &playerIndex); printf("Enter runs scored: ");
                                     scanf("%d", &runs);
                                      printf("Enter balls faced: ");
                                      scanf("%d", &balls);
                                        printf("Is the player out? (1 for yes, 0 for no): ");
                                        scanf("%d", &isOut);
                                        if (playerIndex < 0 || playerIndex >= 11)
                                            {                    printf("Invalid player index. Please try again.\n");
                                        } else
                                         {
                                             updateScore(&team, playerIndex, runs, balls, isOut);

                                              }
                                               break;            }
                                                case 2:
                                                    displayScoreboard(&team);
                                                    break;
                                                       case 3:
                                                            printf("Exiting...\n");
                                                            break;
    default:
        printf("Invalid choice. Please try again.\n");
                                                                                   }
                                                                                      }while (choice != 3);
                                                                                      return 0;

                                                                                       }
