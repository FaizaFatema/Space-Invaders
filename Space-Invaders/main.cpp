#include<SFML/Graphics.hpp>
int main()
{
	// Define the video mode (dimensions)
	sf::VideoMode videoMode = sf::VideoMode(800, 600);

	// Create a window object with specific dimensions and a title
   sf::RenderWindow window(videoMode, "SFML Window");
        while ( window.isOpen())
        {
        	sf::Event event;
        	while (window.pollEvent(event))
	        {
	         	if (event.type == sf::Event::Closed)
	        	{
			        window.close();
	         	}
	        }
            window.clear(sf::Color::Blue);
			//Green Circle
			sf::CircleShape circle(50);
			circle.setFillColor(sf::Color::Red);
			circle.setPosition(300,300);
			window.draw(circle);
			
			sf::Texture outscal_texture;
		    outscal_texture.loadFromFile("assets/textures/outscal_logo.png");

			sf::Sprite outscal_sprite;
			outscal_sprite.setTexture(outscal_texture);

			outscal_sprite.setPosition(200, 100);
			outscal_sprite.setRotation(45);
			outscal_sprite.setScale(0.5, 0.5);

			window.draw(outscal_sprite);

			sf::Font font;
			font.loadFromFile("assets/fonts/OpenSans.ttf");
			sf::Text text("Hello SFML!", font, 50);
			text.setFillColor(sf::Color::Red);
			window.draw(text);

            window.display();
        }
		
}