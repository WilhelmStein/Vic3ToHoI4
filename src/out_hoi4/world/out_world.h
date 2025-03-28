#ifndef SRC_OUTHOI4_WORLD_OUTWORLD_H
#define SRC_OUTHOI4_WORLD_OUTWORLD_H



#include <filesystem>
#include <string_view>

#include "src/configuration/configuration.h"
#include "src/hoi4_world/world/hoi4_world.h"



namespace out
{

void OutputWorld(const std::filesystem::path& output_name,
    const hoi4::World& world,
    configuration::UseStories use_stories);

}  // namespace out



#endif  // SRC_OUTHOI4_WORLD_OUTWORLD_H