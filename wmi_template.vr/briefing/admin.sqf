
wmi_briefing_admin = "ADMIN BRIEFING<br/><br/>";


/* In this briefing page you should provide the admin with any information that will aid them doing their job.
    - If mission has no automatic ending system. All conditions for the mission ending should be mentioned here so the session host knows what to do.


*/

// Insert custom text
wmi_briefing_admin = wmi_briefing_admin + "your text here";

player createDiaryRecord ["diary", ["Admin", wmi_briefing_admin]];