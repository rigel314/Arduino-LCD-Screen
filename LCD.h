#ifndef _LCD_H
#define _LCD_H

class LCD {
protected:
	char				clock_pin,
						mosi_pin,
						mode_pin,
						reset_pin,
						enable_pin;
	static const char	command_mode = 0,
						data_mode = 1,
						END = 0,
						ASCII[0x60][5];
	
public:
	LCD(char pin1, char pin2, char pin3, char pin4, char pin5);
	
	void initialize();
	
	void clearScreen();
	
	void sendCommands(char *command);
	void sendData(char *data);
	void sendDatum(char datum);
	
	void sendPixels(char n, char m, char *data);
	void sendString(char n, char m, char *data);
	void sendScreen(char data[84][6]);
};

#endif