#!/usr/bin/expect
set timeout 30
spawn  inotifywait -rqm --timefmt '%Y%m%d%H%M%S' --format '%T,%w%f,%e' -e modify,create,delete,attrib,moved_to,moved_from "./be/" | while read FL
do
    echo FL
    rsync -avz --exclude "*/CMakeFiles/" --exclude "*/gen_src/" --exclude "*/build/" /home/john/Work/trunk/be/ yuanwenxing@192.168.8.189:/home/yuanwenxing/XCloud_V4/trunk/be/
done
expect ":"
send "ubuntu\r"
interact