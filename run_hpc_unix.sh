#!/bin/bash
docker run --rm -it --mount type=bind,source=$(pwd),target=/home/dev/mnt psaberi/hpc
