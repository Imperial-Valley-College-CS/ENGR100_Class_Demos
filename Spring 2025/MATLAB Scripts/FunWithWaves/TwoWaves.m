clear
clc

N = 10;        %number of points to plot
T = 2*pi;       %range for plotting
dt = T/N;       %difference in time interval

t = 0:dt:T;     %time vector

y1 = sin(t);    %sine wave
y2 = cos(t);    %cosine wave

figure
plot(t, y1, 'r')
hold on
plot(t, y2, 'k')
xlabel("time - sec")
ylabel("height - ft")
title("Two Waves")