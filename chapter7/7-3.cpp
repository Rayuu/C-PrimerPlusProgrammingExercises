#include<iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
using namespace std;
void show(box player)
{
	cout << "name: "<< player.maker << endl;
	cout << "height: "<< player.height << endl;
	cout << "width: "<< player.width << endl;
	cout << "length: "<< player.length << endl;
	cout << "volume: "<< player.volume << endl;
}
void volume(box * player)
{
	player->volume = player->height * player->length * player->width;
}
int main()
{
	box player;
	cout << "Please enter the name: ";
	cin.getline(player.maker,40);
	cout << "Please enter the height: ";
	cin >> player.height;
	cout << "Please enter the width: ";
	cin >> player.width;
	cout << "Please enter the length: ";
	cin >> player.length;
	volume(&player);
	show(player);
	system("pause");
	return 0;
}
