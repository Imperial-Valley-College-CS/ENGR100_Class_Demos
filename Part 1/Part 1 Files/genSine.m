function [t,y] = genSine(frequency, amplitude, time, numOfSamplesPerPeriod)
f = frequency; % Frequency of the sine wave
w = 2*pi*f; % Converting frequency to angular frequency
a = amplitude; % Amplitude of the sine wave
fs = numOfSamplesPerPeriod*f; %The sampling frequency
dt = 1/fs;
t = 0:dt:time; %length of time for plotting.
y = a*sin(w*t);
end