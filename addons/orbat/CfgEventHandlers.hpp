
XEH_PRESTART;
XEH_PREINIT;
XEH_POSTINIT;

class Extended_DisplayLoad_EventHandlers {
    class RscCustomInfoMiniMap {
        wmi_orbat = QUOTE(((_this select 0) displayCtrl 101) ctrlAddEventHandler [ARR_2('draw',{_this call FUNC(draw)})]);
    };
    class RscDiary {
        wmi_orbat = QUOTE(((_this select 0) displayCtrl 51) ctrlAddEventHandler [ARR_2('draw',{_this call FUNC(draw)})]);
    };
};
