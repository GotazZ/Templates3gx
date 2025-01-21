#include "Menu.hpp"
#include <3ds.h>
#include <3ds.h>
#include "CTRPluginFramework.hpp"
#include <cstring>
#include <string>

namespace CTRPluginFramework
{
        static MenuEntry *AddArg(void *arg, MenuEntry *entry)
        {
            if (entry != nullptr)
                entry->SetArg(arg);
            return (entry);
        }

        static MenuEntry *EntryWithHotkey(MenuEntry *entry, const Hotkey &hotkey)
        {
            if (entry != nullptr)
            {
                entry->Hotkeys += hotkey;
                entry->SetArg(new std::string(entry->Name()));
                entry->Name() += " " + hotkey.ToString();
                entry->Hotkeys.OnHotkeyChangeCallback([](MenuEntry *entry, int index)
                {
                    std::string *name = reinterpret_cast<std::string *>(entry->GetArg());

                    entry->Name() = *name + " " + entry->Hotkeys[0].ToString();
                });
            }
            return (entry);
        }

        static MenuEntry *EntryWithHotkey(MenuEntry *entry, const std::vector<Hotkey> &Hotkeys)
        {
            if (entry != nullptr)
            {
                for (const Hotkey &hotkey : Hotkeys)
                    entry->Hotkeys += hotkey;
            }
            return (entry);
        }

        void InitMenu(PluginMenu &menu)
        {
            
        }
    }