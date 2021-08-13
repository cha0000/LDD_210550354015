cmd_/home/chakri/DeviceDrivers/hello/modules.order := {   echo /home/chakri/DeviceDrivers/hello/hello.ko; :; } | awk '!x[$$0]++' - > /home/chakri/DeviceDrivers/hello/modules.order
