#ifndef PHANTOMTWEAK_H
#define PHANTOMTWEAK_H

// Phantom-specific tweaks that can be applied to QWidgets. These should not
// impact the functionality of the software, but may provide minor visual
// improvements in the case that Phantom is being used as the QStyle.

namespace Phantom {
namespace Tweak {

// "_phantom_menubar_no_ruler"
//
// myMenuBar->setProperty(Phantom::Tweak::menubar_no_ruler, true);
//
// Causes a QMenuBar to not have the horizontal divider line to be drawn
// beneath it. Useful for windows where the main content widget spans the full
// width of the window, and it is already visually apparent where the menu bar
// ends on the Y axis and the widgets begin.
//
// The constant C string is provided for convenience, but you may also just use
// a string literal in your own code, if you prefer.
extern const char* const button_rounding;
extern const char* const button_gradient;
extern const char* const button_angled_displacement;
extern const char* const combobox_use_qmenu_popup;
extern const char* const menubar_no_ruler;
extern const char* const toolbutton_hover_effect;
extern const char* const widget_has_focus_frame;
extern const char* const widget_has_rounded_frame;

} // namespace Tweak
} // namespace Phantom
#endif
