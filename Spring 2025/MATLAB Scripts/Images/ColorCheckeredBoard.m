clear all
close all
clc

%Three 2D matrices
red = [255 0;0 0];
gre = [0 255;0 0];
blu = [0 0;255 0];

%Concatenate the three matrices into a single 3D matrix
%img = cat(3,red,gre,blu);
img(:,:,1) = red;
img(:,:,2) = gre;
img(:,:,3) = blu;

imshow(img)
truesize(gcf,[100 100])