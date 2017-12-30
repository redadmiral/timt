#timt
timt is a time tracking tool. It tracks the amount of time spent on work for various customers and different tasks for each customer. It also provides a handy summary.


##Usage
###Setting up
Create a new customer:
```
timt new customer customername
```
Assign the customer a task:
```
timt new task taskname@customername
```

###Tracking time
Start tracking time:
```
timt start taskname
```
Stop tracking time:
```
timt stop taskname
```

###Report
Show everything:
```
timt report
```
Show report for all tasks of one customer:
```
timt report customername
```
Show report for one specific task:
```
timt report customername taskname
```

##TODO
- [ ] Allow users to report on specific periods of time
