#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WelcomeMessagePlugin : public WorldPlugin
  {
    public: WelcomeMessagePlugin() : WorldPlugin()
    {
      printf("Welcome to Mike's living room and Gazebo World!\n");
    }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
      // This function can be used to load parameters from the SDF file.
    }
  };

  // Register this plugin with the simulator
  GZ_REGISTER_WORLD_PLUGIN(WelcomeMessagePlugin)
}

