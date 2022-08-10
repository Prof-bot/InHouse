class RscStandardDisplay;
class RscText;
class RscTitle;
class RscToolboxButton;
class RscCombo;
class RscButtonMenu;
class RscButtonMenuCancel: RscButtonMenu {};
class RscButtonMenuOK: RscButtonMenu {};
class RscBackgroundGUI;
class RscBackgroundGUITop;
class RscPicture;
class RscSlider;
class RscDisplayAttributes {
    class Controls {
        class Background;
        class Title;
        class Content;
        class ButtonOK;
        class ButtonCancel;
    };
};
class RscControlsGroupNoScrollbars;
class RscAttributeText: RscControlsGroupNoScrollbars
{
    class controls
    {
        class Title;
    };
};
#include "WMI_RscAttributeLoadout.hpp"
#include "WMI_RscAttributeFaction.hpp"
#include "WMI_RscAttributeRetroactive.hpp"
#include "RscDisplayArsenal.hpp"
#include "WMI_RscDisplayAttributesModuleAIGear.hpp"
#include "gearSelector.hpp"
