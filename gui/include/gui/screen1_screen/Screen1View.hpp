#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    int count;
    /**
     * Traverse the drawables in reverse z-order and notify them of a click event.
     *
     * @param  evt The event to handle.
     */
    virtual void handleClickEvent(const ClickEvent& evt);

    /**
     * Traverse the drawables in reverse z-order and notify them of a drag event.
     *
     * @param  evt The event to handle.
     */
    virtual void handleDragEvent(const DragEvent& evt);
protected:
};

#endif // SCREEN1VIEW_HPP
