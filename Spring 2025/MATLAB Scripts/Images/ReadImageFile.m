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

%extract green matrix from image (3D matrix)
gre = img(:,:,2);
%create 3D matrix with green layer only (zero red, zero blue)
gre_layer = cat(3,justZeros,gre,justZeros);

%extract blue matrix from image (3D matrix)
blu = img(:,:,3);
%create 3D matrix with blue layer only (zero red, zero green)
blu_layer = cat(3,justZeros,justZeros,blu);

figure
imshow(img)
figure
imshow(uint8(red_layer))
figure
imshow(uint8(gre_layer))
figure
imshow(uint8(blu_layer))