cmake_minimum_required(VERSION 3.16)

project(PiGUIAuto VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appPiGUIAuto
    main.cpp
)

qt_add_qml_module(appPiGUIAuto
    URI PiGUIAuto
    VERSION 1.0
    QML_FILES Main.qml
    RESOURCES assets/images/istockphoto-996396804-170667a.jpg
    QML_FILES
    QML_FILES RPM.qml
    SOURCES RPM.h RPM.cpp
    RESOURCES assets/images/istockphoto-996396804-170667a.jpg assets/images/mpg_needle_daytime_mod.PNG assets/images/mpg_needle_daytime_unmod.PNG assets/images/mpg_needle_nighttime_mod.PNG assets/images/mpg_needle_nighttime_unmod.PNG assets/images/rpm_face_daytime.PNG assets/images/rpm_face_nighttime.PNG assets/images/rpm_needle_daytime_mod.PNG assets/images/rpm_needle_daytime_unmod.PNG assets/images/rpm_needle_nighttime_mod.PNG assets/images/rpm_needle_nighttime_unmod.PNG
    RESOURCES assets/images/istockphoto-996396804-170667a.jpg assets/images/mpg_needle_daytime_2_unmod.PNG assets/images/mpg_needle_daytime_mod.PNG assets/images/mpg_needle_daytime_unmod.PNG assets/images/mpg_needle_nighttime_mod.PNG assets/images/mpg_needle_nighttime_unmod.PNG assets/images/rpm_face_daytime.PNG assets/images/rpm_face_nighttime.PNG assets/images/rpm_needle_daytime_2_unmod.PNG assets/images/rpm_needle_daytime_mod.PNG assets/images/rpm_needle_daytime_unmod.PNG assets/images/rpm_needle_nighttime_mod.PNG assets/images/rpm_needle_nighttime_unmod.PNG
    QML_FILES Slider_module.qml
    RESOURCES

)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appPiGUIAuto PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appPiGUIAuto
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appPiGUIAuto
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appPiGUIAuto
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
