# My Module Subscribe
* mymodule.h 파일 생성
* mymodule.cpp 파일 생성
* CMakeLists.txt 생성
* Kconfig 생성

# 빌드 설정
```bash
> make px4_sitl boardconfig
> make px4_fmu-v3 boardconfig
examples---> mymodule
```

# 빌드 & 업로드
```bash
> make px4_fmu-v3
> make px4_fmu-v3 upload
```

# 확인
* system console 실행
```bash
> picocom /dev/ttyUSB0 -b 57600
nsh> help
mymodule
....

nsh> mymodule

```
