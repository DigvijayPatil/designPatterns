#ifndef ABS_FACTORY
#define ABS_FACTORY

#include <iostream>

using namespace std;

class Button
{
public:
	virtual void render() = 0;
};

class LightThemeButton : public Button
{
public:
	void render() override
	{
		cout << "Rendering LightThemeButton" << endl;
	}
};

class DarkThemeButton : public Button
{
	void render() override
	{
		cout << "Rendering DarkThemeButton" << endl;
	}
};

class Checkbox
{
public:
	virtual void render() = 0;
};

class LightThemeCheckbox : public Checkbox
{
public:
	void render() override
	{
		cout << "Rendering LightThemeCheckbox" << endl;
	}
};

class DarkThemeCheckbox : public Checkbox
{
public:
	void render() override
	{
		cout << "Rendering DarkThemeCheckbox" << endl;
	}
};

class ThemeFactory 
{
public:
	virtual Button* createButton() = 0;
	virtual Checkbox* createCheckbox() = 0;
};

class LigheThemeFactory : public ThemeFactory
{
public:
	Button* createButton() override
	{
		return new LightThemeButton();
	}

	Checkbox* createCheckbox() override
	{
		return new LightThemeCheckbox();
	}
};

class DarkThemeFactory : public ThemeFactory
{
public:
	Button* createButton() override
	{
		return new DarkThemeButton();
	}

	Checkbox* createCheckbox() override
	{
		return new DarkThemeCheckbox();
	}
};

#endif