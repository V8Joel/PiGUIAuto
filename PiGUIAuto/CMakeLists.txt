cmake_minimum_required(VERSION 3.16)

project(PiGUIAuto VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)
find_package(Qt6 REQUIRED COMPONENTS Core)


qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appPiGUIAuto
    main.cpp
)

qt_add_qml_module(appPiGUIAuto
    URI PiGUIAuto
    VERSION 1.0
    QML_FILES Main.qml
    RESOURCES assets/Icons/icon-cold.png assets/Icons/icon-door-lock.png assets/Icons/icon-hazard.png assets/Icons/icon-heater.png assets/Icons/icon-locked.png assets/Icons/icon-settings.png assets/Images/Image_BMW_Silver.png
    RESOURCES assets/Icons/icon-home.png
    SOURCES Controllers/system.h Controllers/system.cpp
    RESOURCES assets/Icons/icon-unlocked.png
    QML_FILES SettingsPage.qml
    QML_FILES BottomBar.qml
    QML_FILES TopBar.qml
    RESOURCES assets/Icons/icon-battery.png assets/Icons/icon-battery-charging.png assets/Icons/icon-bluetooth-connected.png assets/Icons/icon-bluetooth-unconnected.png assets/Icons/icon-low-battery.png assets/Icons/icon-low-signal.png assets/Icons/icon-signal-mid.png assets/Icons/icon-signal-strong.png assets/Icons/icon-user.png assets/Icons/icon-wifi-connected.png assets/Icons/icon-wifi-disconnected.png
    RESOURCES assets/images/wifi.png
    RESOURCES assets/images/bluetooth.png
    RESOURCES assets/images/apple-carplay.png
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an# explicit, fixed bundle identifier manually though.

set_target_properties(appPiGUIAuto PROPERTIES
    # MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appPiGUIAuto
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appPiGUIAuto
    PRIVATE Qt6::Quick
)
target_link_libraries(appPiGUIAuto
    PRIVATE Qt6::Core
)

include(GNUInstallDirs)
install(TARGETS appPiGUIAuto
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
