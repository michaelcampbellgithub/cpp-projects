# Login & Registration System

Followed [this tutorial](https://www.youtube.com/watch?v=I_aWPGCaaFA) & adding some adaptations

## Setup

To run this locally, compile the binary & execute it. e.g (using gcc compiler):
```bash
g++ ./main.cpp -o main && ./main
```

## My changes (proposed):
* Exit program option
* Hash pwd in file
* Write functional tests
* Is an e2e test possible?
* Profiling/optimisation
* Dockerise

## My changes (implemented):
* Removed call to `system("PAUSE")` as `PAUSE` is a Windows command & want this to be OS-agnostic
* Delete user option
* Change pwd option
