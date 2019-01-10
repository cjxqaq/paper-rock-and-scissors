#include <iostream>
#include "p_r_s.h"

int main()
{ outcome  result;prn_help();
   p_r_s player_choice, machine_choice;

   // seed the random number generator
   srand(time(NULL));
   while((player_choice = selection_by_player()) != quit)
      switch(player_choice) {
        case paper:    case rock:      case scissor:
              machine_choice = selection_by_machine();
              result = compare(player_choice,
                                            machine_choice);
              report(result);  break;
        case game: prn_game_status();  break;
        case help: prn_help();   break;
        default:
            cout<< " PROGRAMMER ERROR!\n\n";
            exit(1);
       }
  prn_game_status();
  return 0;
}
