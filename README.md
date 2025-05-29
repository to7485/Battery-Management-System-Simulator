## 기술 스택
- 언어: C++17 이상
- 라이브러리: STL, (선택: Boost, fmtlib, Qt, spdlog 등)
- 툴: CMake, GoogleTest (유닛 테스트), Doxygen (문서화)

## 1. 시스템 개요 및 구성도
```lua
+----------------------+
|  Sensor Simulator    | <-- 전압/전류/온도 랜덤 생성
+----------------------+

        |
        v

+----------------------+
|   BMS Core Logic     | <-- 이상 감지 알고리즘 (OVP, OCP, OTP)
+----------------------+
        |
        v
+----------------------+
|   Action Manager     | <-- 차단/알림 조치 처리
+----------------------+

        |
        v
+----------------------+
|   Logger             | <-- 로그 파일 저장
+----------------------+

        |
        v
+----------------------+
|   CLI 또는 GUI       | <-- 결과 출력, 시각화 (선택사항)
+----------------------+

```

## 2. 디렉토리 구조
```css
BMS-Simulator/
├── CMakeLists.txt
├── README.md
├── docs/
│   └── system_design.md
├── include/
│   ├── Sensor.hpp
│   ├── BMS.hpp
│   ├── ActionManager.hpp
│   ├── Logger.hpp
├── src/
│   ├── Sensor.cpp
│   ├── BMS.cpp
│   ├── ActionManager.cpp
│   ├── Logger.cpp
│   └── main.cpp
├── tests/
│   └── test_bms.cpp
└── logs/
    └── system_log.txt
```

## 3. 클래스 설계 (UML)
```lua
+-------------------+
| class Sensor      |
+-------------------+
| +readVoltage():float
| +readCurrent():float
| +readTemp():float
+-------------------+

+-------------------+
| class BMS         |
+-------------------+
| -sensor: Sensor
| +checkStatus():void
+-------------------+

+-------------------------+
| class ActionManager     |
+-------------------------+
| +disconnect():void
| +notify():void
+-------------------------+

+-------------------+
| class Logger      |
+-------------------+
| +log(message):void
+-------------------+
```