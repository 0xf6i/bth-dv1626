cmake_minimum_required(VERSION 3.26)
project(bth-dv1626)

set(CMAKE_CXX_STANDARD 17)

add_executable(bth-dv1626 main.cpp
        modules/module1/tasks1/minutesToSeconds.h
        modules/module1/tasks1/minutesToSeconds.h
        modules/module1/tasks1/convertMilesToKilometer.h
        modules/module1/tasks1/multiplication.h
        modules/module1/tasks1/division.h
        modules/module1/tasks1/canDivideBySeven.h
        modules/module1/tasks1/timeCalculator.h
        modules/module1/tasks1/nameLength.h
        modules/module1/tasks1/charCounter.h
        modules/module1/tasks2/countdown.h
        modules/module1/tasks2/divideByThree.h
        modules/module1/tasks2/wordCounter.h
        modules/module1/tasks2/leapYearChecker.h
        modules/module1/tasks2/dieRoller.h
        modules/module1/tasks2/gameTwentyOne.h
        modules/module1/tasks2/occuranceCounter.h
        modules/module1/tasks3/spaceCounter.h
        lectures/lecture2/lecture_a.h
        modules/module1/tasks3/vowelCounter.h
        modules/module1/tasks3/rockPaperScissor.h
        lectures/lecture_assignments/t1/t1m1/functions.h
        lectures/lecture2/lecture_b.h
        lectures/lecture_assignments/t1/t1m2/functions.cpp
        lectures/lecture_assignments/t1/t1m2/functions.h
)