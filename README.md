<p align="center"><img src="docs/assets/repository-hero.svg" width="1200" alt="University Management UI" /></p>

# University Management UI

A compact Qt Widgets application for adding, searching and updating student information. It uses separate dialogs connected to the main window through Qt signals and slots.

[Overview](#overview) · [Repository files](https://github.com/AbdulRahmanEssamAbozaid/QT-app/tree/master)

## Overview

<p align="center"><img src="docs/assets/repository-flow.svg" width="1000" alt="Add / find / update → Main window → In-memory lists" /></p>

## Features in the code

- Add a roll number, student name and subject through the add dialog.
- Search student information by roll number.
- Update a student's subject through the update dialog.
- Show operation results with Qt message boxes.

## Open in Qt Creator

Open [CMakeLists.txt](CMakeLists.txt) and choose a Qt 6 Widgets desktop kit with a C++17 compiler. The project requires CMake 3.16 or newer. Qt 6 is the documented build path because the current source list adds the dialog implementations in that branch.

## Build with CMake

```bash
cmake -S . -B build -DCMAKE_PREFIX_PATH="/path/to/Qt/6.x/gcc_64"
cmake --build build --parallel 1
```

Run the generated `1-University-Management-System` target from Qt Creator or your platform's build output directory. Replace the Qt installation path with your actual kit.

## Source map

| Files | Role |
| --- | --- |
| `mainwindow.*` | Connects dialogs and manages the record lists. |
| `addbox.*` | Add-student dialog. |
| `findbox.*` | Search dialog. |
| `updatebox.*` | Subject-update dialog. |
| `*.ui` | Qt Designer forms. |

## Current behavior

Records are held in process-wide QStringLists and last for the running application session. Search/update share a `found` flag in the current implementation, so check repeated failed searches when testing the UI. No runtime or persistence test was performed during this documentation update.
