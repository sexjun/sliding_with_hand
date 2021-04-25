#include <gui/screen1_screen/Screen1View.hpp>
#include <gui_generated/common/SimConstants.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();

	container1.setPosition(0, -SIM_HEIGHT, 661, 250);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::handleClickEvent(const ClickEvent& evt)
{
	//if (evt.getType() == touchgfx::ClickEvent::PRESSED)
	//{
	//	// SIM_HEIGHT ¸ß¶È
	//	// SIM_WIDTH ¿í¶È
	//	if (count < (-1) * SIM_HEIGHT)
	//	{
	//		count = -SIM_HEIGHT;
	//	}
	//	else if (count > SIM_HEIGHT)
	//	{
	//		count = 0;
	//	}
	//	container1.moveTo(0, count);
	//}

	//touchgfx_printf("click: %d \r\n", count);
}

void Screen1View::handleDragEvent(const DragEvent& evt)
{
	count += evt.getDeltaY();
	container1.moveTo(0, count);
	touchgfx_printf("click: %d \r\n", count);
}


