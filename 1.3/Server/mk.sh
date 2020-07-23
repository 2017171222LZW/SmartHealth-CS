gcc protocol.c user.c doctor.c db_user.c db_doctor.c handler_client.c tcp_thread_server.c -o tcp_server -I /home/json-c/install/include/ -L /home/json-c/install/lib/ -ljson -lpthread -lsqlite3
