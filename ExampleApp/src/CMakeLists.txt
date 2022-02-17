file(GLOB_RECURSE ExampleApp_SRCS *.cpp *.h)

set(ExampleApp_SRCS
    ${ExampleApp_SRCS}
    ${TEMPLATES_SRC}
)

# Create the application
add_library(ExampleApp SHARED ${ExampleApp_SRCS})

# Link to Cutelyst
target_link_libraries(ExampleApp
    Cutelyst::Core
    Qt5::Core
    Qt5::Network
)

