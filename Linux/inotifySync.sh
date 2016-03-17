#!/bin/bash
EVENTPATH="./A"
MSG=".inotifyms"
inotifywait -rqm --timefmt '%Y%m%d%H%M%S' --format '%T,%w%f,%e' -e modify,create,delete,attrib,moved_to,moved_from $EVENTPATH | while read FL
do
    echo FL
    rsync -avz ./A/ ./B/
done
