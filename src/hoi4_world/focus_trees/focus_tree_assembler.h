#ifndef SRC_HOI4WORLD_NATIONALFOCUS_FOCUSTREEASSEMBLER_H
#define SRC_HOI4WORLD_NATIONALFOCUS_FOCUSTREEASSEMBLER_H



#include <vector>

#include "src/hoi4_world/focus_trees/focus_tree.h"
#include "src/hoi4_world/roles/role.h"



namespace hoi4
{

FocusTree AssembleTree(const std::vector<Role>& roles, std::string_view tag);

}  // namespace hoi4



#endif  // SRC_HOI4WORLD_NATIONALFOCUS_FOCUSTREEASSEMBLER_H