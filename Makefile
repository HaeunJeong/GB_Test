CC=gcc
CFLAGS=<컴파일 옵션>
LDFLAGS=<링크 옵션>
LDLIBS=<링크 라이브러리 목록>
OBJS=<Object 파일 목록>
TARGET=<빌드 대상 이름>
 
all: $(TARGET)
 
clean:
    rm -f *.o
    rm -f $(TARGET)
 
$(TARGET): $(OBJS)
$(CC) -o $@ $(OBJS)