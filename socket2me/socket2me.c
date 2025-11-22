#include <stdio.h>
#include <stdbool.h>
#include <string.h> // For strcmp
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int server_fd = socket(AF_INET, SOCK_STREAM, 0);
if (server_fd == -1) {
  perror == -1) {
  perror("Socket creation failed");
  return -1;
  }
}

struct sockaddr_in server_addr;
server_addr.sin_family = AF_INET;
server_addr.sin_addr.s_addr = INADDR_ANY; // Accept connections from any IP
server_addr.sin_port = htons(PORT_NUMBER); // Replace PORT_NUMBER with your desired port

if (bind(server_fd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
    perror("Bind failed");
    close(server_fd);
    exit(EXIT_FAILURE);
}
if (listen(server_fd, 3) < 0) {
    perror("Listen failed");
    close(server_fd);
    exit(EXIT_FAILURE);
}

int client_socket;
    struct sockaddr_in client_addr;
    socklen_t client_len = sizeof(client_addr);
    
while (1) {
    client_socket = accept(server_fd, (struct sockaddr *)&client_addr, &client_len);
    if (client_socket < 0) {
        perror("Accept failed");
        continue; // Try to accept another connection
    }
    
    // Handle client communication (e.g., read data, send response)
    char buffer[1024] = {0};
    read(client_socket, buffer, 1024);
    printf("Client message: %s\n", buffer);
    
    char *response = "Hello from server!";
    send(client_socket, response, strlen(response), 0);
    
    close(client_socket); // Close the client socket after handling
}

close(server_fd);
