clear all
close all
clc

%read image image file with imread
img = imread("Daredevil.png");

%extract size (rows by cols) from image
rows = size(img,1);
cols = size(img,2);

%create a 2D matrix full of zeros (rows by cols)
justZeros = zeros(rows,cols);

%extract red matrix from image (3D matrix)
red = img(:,:,1);
%create 3D matrix with red layer only (zero green, zero blue)
red_layer = cat(3,red,justZeros,justZeros);

figure
imshow(img)
figure
imshow(uint8(red_layer))