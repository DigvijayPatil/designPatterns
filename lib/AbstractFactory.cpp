#include <AbstractFactory.hpp>

void AbstractFactoryfunction()
{
	ThemeFactory* lightFactory = new LigheThemeFactory();
	Button* lightButton = lightFactory->createButton();
	Checkbox* lightCheckbox = lightFactory->createCheckbox();

	lightButton->render();
	lightCheckbox->render();

	ThemeFactory* darkFactory = new DarkThemeFactory();

	Button* darkButton = darkFactory->createButton();
	Checkbox* darkCheckbox = darkFactory->createCheckbox();

	darkButton->render();
	darkCheckbox->render();
}
