#include <gazebo/gazebo.hh>

namespace gazebo
{
	class WorldPluginBuildMyMap : public WorldPlugin
	{
		public: WorldPluginBuildMyMap() : WorldPlugin()
			{
				printf("Welcome to Zeynel's World!\n");
			}

		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
			{
			}
	};
	GZ_REGISTER_WORLD_PLUGIN(WorldPluginBuildMyMap)
}
