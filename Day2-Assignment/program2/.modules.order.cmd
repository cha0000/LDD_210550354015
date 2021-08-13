cmd_/home/chakri/DeviceDrivers/d2program2/modules.order := {   echo /home/chakri/DeviceDrivers/d2program2/module1.ko; :; } | awk '!x[$$0]++' - > /home/chakri/DeviceDrivers/d2program2/modules.order
