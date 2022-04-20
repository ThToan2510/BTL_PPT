setwd("c:/users/nttoa/desktop")
load("flights.rda")
View(flights)
data <- flights
data <- na.omit(data)
dataUA <- subset(data, carrier == "UA")
dataAA <- subset(data, carrier == "AA")
dataDL <- subset(data, carrier == "DL")
################################
summary(dataUA)
summary(dataAA)
summary(dataDL)
plot(dataUA)
plot(dataAA)
plot(dataDL)
############################### Doan code nay gianh cho may yeu khong the load noi dung lieu qua lon
##Neu may dap ung duoc xu ly du lieu lon thi co the thay the bang doan code duoi day:
#summary(data)
#plot(data)
##############################
attach(data)
hist(year)
hist(month)
hist(day)
hist(dep_time)
hist(dep_delay)
hist(arr_time)
hist(arr_delay)
hist(flight)
hist(air_time)
hist(distance)
hist(hour)
hist(minute)
boxplot(dep_delay~carrier, outline=FALSE)
anovatest <- aov(dep_delay~carrier,data=data)
summary(anovatest)
data2 <- data[,c(1,2,3,4,5,6,7,8,11,14,15,16)]
plot(data2)
line <- lm(arr_delay~year+month+day+dep_time+dep_delay+arr_time+flight+air_time+distance+hour+minute)
op <- par(mfrow=c(2,2))
plot(line)
summary(line)



