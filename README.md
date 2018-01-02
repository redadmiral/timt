# timt
timt is a time tracking tool. It tracks the amount of time spent on work for various customers and different tasks for each customer. It also provides a handy summary.


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
Show report for task:
```
timt report taskname
```
Show report for task for a specific month:
```
timt report taskname MMYY
```

## TODO
- [ ] Allow users to filter report on specific periods of time.
- [ ] Implement exception handling.
- [ ] Create makefile
