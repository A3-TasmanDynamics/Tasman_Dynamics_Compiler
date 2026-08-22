class CfgPatches {
    class tasdyn_compat {
        name = "Tasman Dynamics - Compatibility Layer";
        author = "Tasman Dynamics & Community"";
        requiredAddons[] = {
            "tasdyn_interaction",
            "A3_Air_F" 
        };
        units[] = {};
        weapons[] = {};
    };
};

#include "autogen_vehicles.cpp"