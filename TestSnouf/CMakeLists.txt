add_executable(TestSnouf
        main.cpp)

target_link_libraries(TestSnouf
        gtest
        snouf
        )

gtest_discover_tests(
        TestSnouf
)