## Lab 8

Before following the given instructions, [here](https://github.com/pal-robotics/tiago_simulation) you have to clone all the repositories. For to that easily, do the following after `cd`ing in to the directory where you want everything cloned. 

* Paste below script in the terminal and run. (It may require sudo access.)

```bash
#!/bin/bash

declare -A repos=(
    [urdf_test]="https://github.com/pal-robotics/urdf_test.git humble-devel"
    [pal_urdf_utils]="https://github.com/pal-robotics/pal_urdf_utils.git humble-devel"
    [launch_pal]="https://github.com/pal-robotics/launch_pal.git master"
    [pal_gazebo_worlds]="https://github.com/pal-robotics/pal_gazebo_worlds.git humble-devel"
    [play_motion2]="https://github.com/pal-robotics/play_motion2.git humble-devel"
    [pmb2_robot]="https://github.com/pal-robotics/pmb2_robot.git humble-devel"
    [pmb2_navigation]="https://github.com/pal-robotics/pmb2_navigation.git humble-devel"
    [pal_navigation_cfg_public]="https://github.com/pal-robotics/pal_navigation_cfg_public.git humble-devel"
    [tiago_robot]="https://github.com/pal-robotics/tiago_robot.git humble-devel"
    [tiago_navigation]="https://github.com/pal-robotics/tiago_navigation.git humble-devel"
    [tiago_simulation]="https://github.com/pal-robotics/tiago_simulation.git humble-devel"
    [pal_hey5]="https://github.com/pal-robotics/pal_hey5.git humble-devel"
    [pal_gripper]="https://github.com/pal-robotics/pal_gripper.git humble-devel"
    [pal_robotiq_gripper]="https://github.com/pal-robotics/pal_robotiq_gripper.git humble-devel"
    [tiago_moveit_config]="https://github.com/pal-robotics/tiago_moveit_config.git humble-devel"
)

for repo in "${!repos[@]}"; do
    url="${repos[$repo]%% *}"
    branch="${repos[$repo]#* }"
    echo "Cloning $repo with branch $branch"
    git clone --branch "$branch" "$url"
done
```

*   In the next step change the location of the import accordingly.
