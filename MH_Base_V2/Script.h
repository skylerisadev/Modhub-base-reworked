#pragma once
namespace Atomic
{
	void ScriptMain();
	void ScriptImGuiMain();
}
enum Submenu : std::uint32_t
{
	Home_Menu,
	Local_Menu,

	Vehicle_Menu,

	Protection_Main,

	Online_P_List,
	Selected_P_Menu,

	SubmenuSettings,
	SubmenuSettingsHeader,
	SubmenuSettingsHeaderStaticBackground,
	SubmenuSettingsHeaderGradientBackground,
	SubmenuSettingsHeaderText,
	SubmenuSettingsSubmenuBar,
	SubmenuSettingsOption,
	SubmenuSettingsFooter,
	SubmenuSettingsDescription,
	SubmenuSettingsInput,
	Bool_Menu
};