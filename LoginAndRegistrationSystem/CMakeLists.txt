cmake_minimum_required(VERSION 3.14)
project(LoginAndRegistrationSystem)

set(CMAKE_CXX_STANDARD 20)

# 정확한 wxWidgets 설치 위치 지정 (Homebrew 기준)
set(wxWidgets_ROOT_DIR "/opt/homebrew/Cellar/wxwidgets")
set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/wxwidgets")

# 패키지 찾기
find_package(wxWidgets REQUIRED COMPONENTS core base)

# include 경로 추가 (필요할 경우)
include_directories(${wxWidgets_INCLUDE_DIRS})

# 매크로 처리 등 포함
include(${wxWidgets_USE_FILE})

# 실행 파일
add_executable(LoginAndRegistrationSystem
        main.cpp
        LoginConsole.cpp
        LoginConsole.h
)

# wxWidgets 링크
target_link_libraries(LoginAndRegistrationSystem ${wxWidgets_LIBRARIES})