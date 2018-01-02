# timt
timt is a CLI time tracking tool.

## Installation

There is not yet a makefile, but installation isn't this hard:

1. `git clone` this repo
2. Compile the code: `g++ main.cpp classes.h classes.cpp -o timt`
3. Move the bin to /bin: `sudo mv timt /bin/`
4. Create the directory for your tasks: `mkdir ~/.timt/`
5. Profit.

## Usage
### Setting up
Create a new task:
```
timt new taskname
```

### Tracking time
Start tracking time:
```
timt start taskname
```
Stop tracking time:
```
timt stop taskname
```

### Report
Show report for a task:
```
timt report taskname
```
Show report for a task in a specific month:
```
timt report taskname MM YY
```

## TODO
- [ ] Allow users to filter report on specific periods of time.
- [ ] Implement exception handling.
- [ ] Create makefile.
- [ ] Implement `list` function.
- [ ] Code completion with TAB
