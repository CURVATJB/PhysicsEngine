#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics/RenderWindow.hpp>

#include "Level.h"
#include "TemplateConcepts.h"

class Window
{
public:

	template <typename LevelClass>
	static void loadLevel() requires Derived<Level, LevelClass>
	{
		if (m_currentLevel)
			delete m_currentLevel;

		m_currentLevel = new LevelClass();
	}

	static Level* getLevel()
	{
		return m_currentLevel;
	}

private:

	static Level* m_currentLevel;
	static sf::RenderWindow m_renderWindow;

};

#endif //WINDOW_H
