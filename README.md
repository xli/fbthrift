
reproduce steps:
1. install Docker on laptop (not devserver), can use personal account or not login
2. make dock: this will build image, server and client binary
3. at the end of "make dock", it starts and login the docker container, run "make jmtest-server" to start server
4. run "docker ps" to find the running docker container id
5. run "docker exec -it <container id> /bin/bash
6. run "make jmtest-client"
