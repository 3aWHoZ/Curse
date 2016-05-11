#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;


class Player
{
	char name[32];
	char surname[32];
	char date[32];
	char status[32];
	char health[32];
	char salary[32];
public:
	Player(char* name, char* surname, char* date, char* status, char* health, char* salary)
	{
		strcpy_s(this->name, 32, name);
		strcpy_s(this->surname, 32, surname);
		strcpy_s(this->date, 32, date);
		strcpy_s(this->status, 32, status);
		strcpy_s(this->health, 32, health);
		strcpy_s(this->salary, 32, salary);
	}
	Player()
	{
		strcpy_s(this->name, 32, " ");
		strcpy_s(this->surname, 32, " ");
		strcpy_s(this->date, 32, " ");
		strcpy_s(this->status, 32, " ");
		strcpy_s(this->health, 32, " ");
		strcpy_s(this->salary, 32, " ");
	}



	void input(Player *player, int N)
	{
		for (int i = 0; i < N; i++)
		{
			cout << "enter  name ";
			cin >> player[i].name;
			cout << "enter  surname ";
			cin >> player[i].surname;
			cout << "enter  date ";
			cin >> player[i].date;
			cout << "enter  status ";
			cin >> player[i].status;
			cout << "enter  health ";
			cin >> player[i].health;
			cout << "enter  salary ";
			cin >> player[i].salary;
		}
	}
	void Show(Player *player, int N)
	{
		system("cls");
		cout << "Name  |" << " Surname  |" << " Date  |" << " Status  |" << " Health  |" << " Salary  |" << endl;
		for (int i = 0; i < N; i++)
		{
			cout << player[i].name << " |";
			cout.width(7);

			cout << player[i].surname << "  |";
			cout.width(7);

			cout << player[i].date << " |";
			cout.width(7);

			cout << player[i].status << " |";
			cout.width(7);
			cout << player[i].health << " |";
			cout.width(7);

			cout << player[i].salary << " |";
			cout.width(7);
			cout << endl;
		}
	}
	void Change(Player *player, int N)
	{
		int i;

		char ch_key;
		bool bmenu = true;
		while (bmenu)
		{
			cout << endl;
			cout << "*** Player menu***\n";
			cout << "1 - change name \n";
			cout << "2 - change surname \n";
			cout << "3 - change date \n";
			cout << "4 - change status \n";
			cout << "5 - change health \n";
			cout << "6 - change salary \n";
			cout << "7 - Search player by name \n";
			cout << "esc - Show changes and exit\n";

			switch ((ch_key = _getch()))
			{
			case '1':
				system("cls");
				char changename[32];
				cout << "enter number of player" << endl;
				
				cin >> i;
				cout << "enter new name " << endl;
				cin >> changename;
				
					strcpy_s(player[i].name, 32, changename);
				system("cls");

				break;

			case '2':
				system("cls");
				char changesur[32];
				cout << "enter number of player" << endl;
				
				cin >> i;
				cout << "enter new surname " << endl;
				cin >> changesur;
				
					strcpy_s(player[i].surname, 32, changesur);
				system("cls");
				break;

			case '3':
				system("cls");
				char changedate[32];
				cout << "enter number of player" << endl;
				
				cin >> i;
				cout << "enter new date " << endl;
				cin >> changedate;
				
					strcpy_s(player[i].date, 32, changedate);
				system("cls");
				break;

			case '4':
				system("cls");
				char changestatus[32];
				cout << "enter number of player" << endl;
				
				cin >> i;
				cout << "enter new status " << endl;
				cin >> changestatus;
				
					strcpy_s(player[i].status, 32, changestatus);
				system("cls");
				break;

			case '5':
				system("cls");
				char changehealth[32];
				cout << "enter number of player" << endl;
				
				cin >> i;
				cout << "enter new health " << endl;
				cin >> changehealth;
				
					strcpy_s(player[i].health, 32, changehealth);
				system("cls");

				break;

			case '6':
				system("cls");
				char changesalary[32];
				cout << "enter number of player" << endl;
			
				cin >> i;
				cout << "enter new salary " << endl;
				cin >> changesalary;
				
					strcpy_s(player[i].salary, 32, changesalary);
				system("cls");
				break;

			case '7':
				system("cls");
				char searchname[32];
				cin >> searchname;
				for (i = 0; i < N; i++)
				{
					if (searchname == player[i].name)
					{
						 player[i].Show(player, N);
					}
				}
				
				
				system("cls");
				break;

			case 27:
				system("cls");
				bmenu = false;
				cout << " exit from program \n";
				system("cls");
				break;
			default:
				system("cls");
				cout << "unsupported key was pressed\n";
				system("cls");
				break;
			}

		}
	}

	void WriteToFile(ofstream &out, Player *player, int N)
	{

		cout << "Name  |" << " Surname  |" << " Date  |" << " Status  |" << " Health  |" << " Salary  |" << endl;
		
		for (int i = 0; i<N; ++i)
		{
			out << N<< ends;
			out << player[i].name<<ends;
			out << player[i].surname << ends;
			out << player[i].date << ends;
			out << player[i].status << ends;
			out << player[i].health << ends;
			out << player[i].salary << ends;

			cout << endl;
		}
		out.close();
		

	}


	/*Player* AddAnimal(Player* Obj, const int amount)
	{
		
		if (amount == 0)
		{
			Obj = new Player[amount + 1];
		}
		else
		{
			Player* tempObj = new Player[amount + 1];
			
			for (int i = 0; i < amount; i++)
			{
				tempObj[i] = Obj[i]; 
			}
			
			delete[] Obj;
			Obj = tempObj;
			
			
		}
		return Obj;
	}*/
};
	class Game
	{
		char enemyteam[32];
		char date[32];
		char stadion[32];
		char viewers[32];
	public:
		Game(char* enemyteam, char* date, char*stadion, char* viewers)
		{
			strcpy_s(this->enemyteam, 32, enemyteam);
			strcpy_s(this->date, 32, date);
			strcpy_s(this->stadion, 32, stadion);
			strcpy_s(this->viewers, 32, viewers);
			
		}
		Game()
		{
			strcpy_s(this->enemyteam, 32, " ");
			strcpy_s(this->stadion, 32, " ");
			strcpy_s(this->date, 32, " ");
			strcpy_s(this->viewers, 32, " ");
			
		}

		void input(Game *game, int N)
		{
			for (int i = 0; i < N; i++)
			{
				cout << "enter  enemyteam ";
				cin >> game[i].enemyteam;
				cout << "enter  stadion ";
				cin >> game[i].stadion;
				cout << "enter  date ";
				cin >> game[i].date;
				cout << "enter  viewers ";
				cin >> game[i].viewers;
				
			}
		}
		void Show(Game *game, int N)
		{
			system("cls");
			cout << "enemyteam  |" << " Date  |" << " stadion  |" << " viewers  |" <<  endl;
			for (int i = 0; i < N; i++)
			{
				cout << game[i].enemyteam << " |";
				cout.width(7);

				cout << game[i].date << "  |";
				cout.width(7);

				cout << game[i].stadion << " |";
				cout.width(7);

				cout << game[i].viewers << " |";
				cout.width(7);
				
				
				cout << endl;
			}
		}
		
		void Change(Game *game, int N)
		{
			int i;

			char ch_key;
			bool bmenu = true;
			while (bmenu)
			{
				cout << endl;
				cout << "*** Game menu***\n";
				cout << "1 - change date \n";
				cout << "2 - change stadion \n";
				cout << "3 - change viewers \n";
				cout << "4 - Search Game by enemy team \n";
				cout << "esc - Show changes and exit\n";

				switch ((ch_key = _getch()))
				{
				case '1':
					system("cls");
					char changedate[32];
					cout << "enter number of Game" << endl;

					cin >> i;
					cout << "enter new date " << endl;
					cin >> changedate;

					strcpy_s(game[i].date, 32, changedate);
					system("cls");

					break;

				case '2':
					system("cls");
					char changestadion[32];
					cout << "enter number of Game" << endl;

					cin >> i;
					cout << "enter new stadion " << endl;
					cin >> changestadion;

					strcpy_s(game[i].stadion, 32, changestadion);
					system("cls");
					break;

				case '3':
					system("cls");
					char changeviewers[32];
					cout << "enter number of Game" << endl;

					cin >> i;
					cout << "enter new viewers " << endl;
					cin >> changeviewers;

					strcpy_s(game[i].viewers, 32, changeviewers);
					system("cls");
					break;

				case '4':
					system("cls");
					char searchgame[32];
					cin >> searchgame;
					for (i = 0; i < N; i++)
					{
						if (searchgame == game[i].enemyteam)
						{
							game[i].Show(game, N);
						}
					}
					system("cls");
					break;
				case 27:
					system("cls");
					bmenu = false;
					cout << " exit from program \n";
					system("cls");
					break;
				default:
					system("cls");
					cout << "unsupported key was pressed\n";
					system("cls");
					break;
				
				}
			}
		}

		void WriteToFile(ofstream &out, Game *game, int N)
		{

			cout << "enemyteam  |" << " Date  |" << " stadion  |" << " viewers  |" << endl;

			for (int i = 0; i<N; ++i)
			{
				out << N << ends;
				out << game[i].enemyteam << ends;
				
				out << game[i].date << ends;
				out << game[i].stadion << ends;
				out << game[i].viewers << ends;

				cout << endl;
			}
			out.close();


		}
	};

	class Stadion
	{
		char stadionname[32];
		char date[32];
		char numbofsits[32];
		char ticketprice[32];
	public:
		Stadion(char* stadionname, char* date, char* ticketprice, char* numbofsits)
		{
			strcpy_s(this->stadionname, 32, stadionname);
			strcpy_s(this->date, 32, date);
			strcpy_s(this->ticketprice, 32, ticketprice);
			strcpy_s(this->numbofsits, 32, numbofsits);
		}

		Stadion()
		{
			strcpy_s(this->stadionname, 32, " ");
			strcpy_s(this->date, 32, " ");
			strcpy_s(this->numbofsits, 32, " ");
			strcpy_s(this->ticketprice, 32, " ");

		}

		void input(Stadion *stadion, int N)
		{
			for (int i = 0; i < N; i++)
			{
				cout << "enter  stadionname ";
				cin >> stadion[i].stadionname;
				cout << "enter  date ";
				cin >> stadion[i].date;
				cout << "enter  numbofsits ";
				cin >> stadion[i].numbofsits;
				cout << "enter  ticketprice ";
				cin >> stadion[i].ticketprice;

			}
		}
		void Show(Stadion *stadion, int N)
		{
			system("cls");
			cout << "stadionname  |" << " Date  |" << " numbofsits  |" << " ticketprice  |" << endl;
			for (int i = 0; i < N; i++)
			{
				cout << stadion[i].stadionname << " |";
				cout.width(7);

				cout << stadion[i].date << "  |";
				cout.width(7);

				cout << stadion[i].numbofsits << " |";
				cout.width(7);

				cout << stadion[i].ticketprice << " |";
				cout.width(7);


				cout << endl;
			}
		}

		void Change(Stadion *stadion, int N)
		{
			int i;

			char ch_key;
			bool bmenu = true;
			while (bmenu)
			{
				cout << endl;
				cout << "*** Stadion menu***\n";
				cout << "1 - change numbofsits \n";
				cout << "2 - change ticketprice \n";
				
				cout << "4 - Search Stadion by name  \n";
				cout << "esc - Show changes and exit\n";

				switch ((ch_key = _getch()))
				{
				case '1':
					system("cls");
					char changesits[32];
					cout << "enter number of stadion" << endl;

					cin >> i;
					cout << "enter new numbofsits " << endl;
					cin >> changesits;

					strcpy_s(stadion[i].numbofsits, 32, changesits);
					system("cls");

					break;

				case '2':
					system("cls");
					char changeprice[32];
					cout << "enter number of stadion" << endl;

					cin >> i;
					cout << "enter new price " << endl;
					cin >> changeprice;

					strcpy_s(stadion[i].ticketprice, 32, changeprice);
					system("cls");
					break;

				

				case '3':
					system("cls");
					char searchstad[32];
					cin >> searchstad;
					for (i = 0; i < N; i++)
					{
						if (searchstad == stadion[i].stadionname)
						{
							stadion[i].Show(stadion, N);
						}
					}
					system("cls");
					break;
				case 27:
					system("cls");
					bmenu = false;
					cout << " exit from program \n";
					system("cls");
					break;
				default:
					system("cls");
					cout << "unsupported key was pressed\n";
					system("cls");
					break;
				
				}
			}
		}

		void WriteToFile(ofstream &out, Stadion *stadion, int N)
		{

			cout << "stadionname  |" << " Date  |" << " numbofsits  |" << " ticketprice  |" << endl;

			for (int i = 0; i<N; ++i)
			{
				out << N << ends;
				out << stadion[i].stadionname << ends;

				out << stadion[i].date << ends;
				out << stadion[i].numbofsits << ends;
				out << stadion[i].ticketprice << ends;

				cout << endl;
			}
			out.close();


		}
	};
	
	
	int N;
	int main()
	{
		

		Player *player = new Player[N];
		Stadion *stadion = new Stadion[N];
		Game *game = new Game[N];
		ofstream out("database1.txt");
		ofstream out2("database2.txt");
		ofstream out3("database3.txt");
		
		char rd;
		bool bmenu = true;
		while (bmenu)
		{
			cout << endl;
			cout << "***  FOOTBALL TEAM ***\n";
			cout << "***  Menu ***\n";
			cout << "1 - Player menu  \n";
			cout << "2 - Game menu  \n";
			cout << "3 - Stadion menu  \n";
			cout << "esc -  exit\n";

			switch ((rd = _getch()))
			{
			case '1':
				system("cls");
				cout << "enter number of players :";
				cin >> N;
				
				player->input(player, N);


				player->Show(player, N);



				player->Change(player, N);
				player->Show(player, N);

				player->WriteToFile(out, player, N);


				system("cls");

				break;
			case '2':
				system("cls");
				cout << "enter number of games :";
				cin >> N;
				
				
				game->input(game, N);


				game->Show(game, N);



				game->Change(game, N);
				game->Show(game, N);

				game->WriteToFile(out2, game, N);


				system("cls");

				break;
			case '3':
				system("cls");

				cout << "enter number of stadions :";
				cin >> N;
				
				stadion->input(stadion, N);


				stadion->Show(stadion, N);



				stadion->Change(stadion, N);
				stadion->Show(stadion, N);

				stadion->WriteToFile(out3, stadion, N);


				system("cls");

				break;
			case 27:
				system("cls");
				bmenu = false;
				cout << " exit from program \n";
				system("cls");
				break;
			default:
				system("cls");
				cout << "unsupported key was pressed\n";
				system("cls");
				break;
			}
		}
		
		
		for (int i = 0; i < N; i++)
		{
			delete[] player;
		}
		for (int i = 0; i < N; i++)
		{
			delete[] game;
		}
		for (int i = 0; i < N; i++)
		{
			delete[] stadion;
		}
		return 0;
	}
