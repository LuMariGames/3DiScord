#ifndef DISCORDAPP_HPP
#define DISCORDAPP_HPP



#include "3dsTouch.hpp"
#include "3dsPad.hpp"
#include "3dsIME.hpp"
#include "Discord.hpp"
#include "3dsGUI.hpp"


class DiscordApp{
	
	public:
		void Start();
		void loadUserDataFromFile();
		void saveUserDataToFile(std::string m , std::string p , std::string t);
		
	private:
		D3DSGUI D3dsGUI;
		Discord discord;
		D3DSIME D3dsIME;
		D3DSPad D3dsPad;
		D3DSTouch D3dsTouch;
		int clicked = -1;
		int scrolled = -1;
		int D3DSState = 0;
	
};



#endif




