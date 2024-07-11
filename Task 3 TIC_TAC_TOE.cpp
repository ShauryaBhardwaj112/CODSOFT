#include<iostream>
#include<ctime>
#include<random>
using namespace std;
char board[9]={'' , '' , ' ' , 'X' , 'O' , '' , ' ' , ' ' , ' '};
void show_board();
void get_X_player();
void get_O_player();
void get_comp_choice();
int count_board(char symbol);
char check_winner();

void computer_vs_player();
void player_vs_player();

int main(){
  computer_vs_player();
  
    return 0;


}

void get_comp_choice(){
	sreand(time(0));
	int choice;
	do {
		choice=rand()%10;
		
	}while(board[choice]!=' ');
	board[choice]='o'; // making comp char always O
	
}

void get_X_player(){
	while(true) {  // run while run infinte times
	cout<< "Select Your position From 1-9 on a board : ";
	int choice;
	cin>>choice;
	choice--;
	if(choice<0 || choice>8){
		cout<<"Please select choice in Between 1-9"<<endl;
		
	}
	else if(board[chocie!= ' ']){
	cout<<"please Select an Empty Position "<<endl;
	}
	else{
	board[choice]='X';
	break;
	}
 }
	
}

int count_board(char symbol){
	int total=0;
	for(int i=0;i<9 ;i++){
		if(board[i]==symbol)
		total+=1;
	}
	return total;
}

void get_O_player(){
	while(true) {  // run while run infinte times
	cout<< "Select Your position From 1-9 on a board : ";
	int choice;
	cin>>choice;
	choice--;
	if(choice<0 || choice>8){
		cout<<"Please select choice in Between 1-9"<<endl;
		
	}
	else if(board[chocie!= ' ']){
	cout<<"please Select an Empty Position "<<endl;
	}
	else{
	board[choice]='O';
	break;
	}
 }
	
}


char check_winner(){
	if(board[0]== board[1] && board[1]==board[2] && board[0] != ' ')
	return board[0];
	if(board[3]== board[4] && board[4]==board[5] && board[3] != ' ')
	return board[3];
	if(board[6]== board[7] && board[7]==board[8] && board[6] != ' ')
	return board[6];
	
	if(board[0] == board[3] && board[3]==board[6] && board[0]!= ' ')
	return board[0];
	if(board[1] == board[4] && board[7]==board[1] && board[1]!= ' ')
	return board[1];
	if(board[2] == board[5] && board[5]==board[8] && board[2]]!= ' ')
	return board[2];
	
	if(board[0]==board[4] && board[4]==board[8] &&board[0]!=' ')
	return board[0];
	if(board[2]==board[4] && board[4]==board[6] &&board[2]!=' ')
	return board[2];
	if (count_board('X')+count_board('O') <9)
	return 'C';
	else
	return 'D';
	
	
}

void computer_vs_player(){
	string player_name;
	cout<<"Enter the name of the player : "<<;
	cin>>player_name;
	while(true){
		system("cls");
		show_board();
		if(count_board('X')== count_board('O')){
			cout<<plyer_name<<" 's turn "<<endl;
			get_X_player();
			
		}
		else{
			get_comp_choice();
			
		}
		char winner = check_winner():
			if(winner=='X'){
				system("cls");
				show_board();
				cout<<player_name<<" won the game. "<<endl;
				break;
			}
			else if(winner == 'O'){
				system("cls");
				show_board();
				cout<<" Computer won the Game. "<<endl;
				
			}
			else if( winner =='D'){
				cout<< " Game is Draw "<<endl;
				break;
			}
	}
}

void show_board(){
    cout<<"   "<< "    |   "<< "    |   "<<endl;
    cout<<"   "<< board[0] << "   |   "<< board[1]<< "   |   "<<board[2]<<endl;
    cout<<"   "<< "    |   "<< "    |   "<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"   "<< "    |   "<< "    |   "<<endl;
    cout<<"   "<< board[3] << "   |   "<< board[4]<< "   |   "<<board[5]<<endl;
    cout<<"   "<< "    |   "<< "    |   "<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"   "<< "    |   "<< "    |   "<<endl;
    cout<<"   "<< board[6] << "   |   "<< board[7]<< "   |   "<<board[8]<<endl;
    cout<<"   "<< "    |   "<< "    |   "<<endl;
}
