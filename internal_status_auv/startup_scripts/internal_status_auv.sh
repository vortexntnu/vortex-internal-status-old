# Determine the directory where the script is located
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"

cd $SCRIPT_DIR
cd ../../../../.. # Go back to workspace
source install/setup.bash
ros2 launch internal_status_auv internal_status_auv.launch.py
