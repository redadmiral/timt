# timt
timt is a CLI time tracking tool.


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
