#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>

int main() {
    int fd;
    struct termios tty;

    // 시리얼 포트 열기
    fd = open("/dev/ttyACM0", O_RDWR | O_NOCTTY | O_NDELAY);
    if (fd == -1) {
        perror("Failed to open the serial port");
        return -1;
    }

    // 시리얼 포트 설정 가져오기
    if (tcgetattr(fd, &tty) != 0) {
        perror("Failed to get the attributes of the serial port");
        return -1;
    }

    // Baud rate 설정 (9600bps)
    cfsetospeed(&tty, B115200);
    cfsetispeed(&tty, B115200);

    // 데이터 비트 설정 (8 bits), 패리티 없음, 정지 비트 1개
    tty.c_cflag &= ~PARENB; // 패리티 비트 없음
    tty.c_cflag &= ~CSTOPB; // 1 정지 비트
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= CS8; // 8 데이터 비트

    // 기타 옵션 설정
    tty.c_cflag |= CREAD | CLOCAL; // 수신 가능, 로컬 모드
    tty.c_lflag &= ~ICANON; // Canonical 모드 끄기
    tty.c_lflag &= ~ECHO; // 에코 끄기
    tty.c_lflag &= ~ECHOE; 
    tty.c_lflag &= ~ISIG; // 시그널 끄기

    tty.c_iflag &= ~(IXON | IXOFF | IXANY); // 소프트웨어 흐름 제어 끄기
    tty.c_oflag &= ~OPOST; // 출력 처리 끄기

    // 시리얼 포트 설정 적용
    tcsetattr(fd, TCSANOW, &tty);

    // 데이터 쓰기
    const char *data = "LED0_ON\n";
    int n_written = write(fd, data, strlen(data));
    if (n_written < 0) {
        perror("Failed to write to the serial port");
    } else {
        printf("Sent %d bytes to the serial port\n", n_written);
    }

    // // 데이터 읽기
    // char buf[256];
    // int n_read = read(fd, buf, sizeof(buf));
    // if (n_read > 0) {
    //     buf[n_read] = '\0';
    //     printf("Received: %s\n", buf);
    // } else {
    //     perror("Failed to read from the serial port");
    // }

    // 시리얼 포트 닫기
    close(fd);

    return 0;
}
