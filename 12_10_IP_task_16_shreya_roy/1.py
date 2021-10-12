# 1. Perform all morphology and thresholding operations on image provided along with this message.
# Follow the following steps:


# a. Apply all morphology operations on the given image (morphology.jpg)
import cv2
import numpy as np

img = cv2.imread(r"img/morphology.jpg")

kernel = np.ones((5, 5), np.uint8)

img_erosion = cv2.erode(img, kernel, iterations=1)
img_dilation = cv2.dilate(img_erosion, kernel, iterations=1)



# b. Apply all thresholding techniques taught in today's session on the given image (thresholding.jpg)
import cv2

img = cv2.imread(r"img/thresholding.jpeg", cv2.IMREAD_GRAYSCALE)
img = cv2.resize(img, (400, 400))

ret, simple_thresh = cv2.threshold(img, 150, 255, cv2.THRESH_BINARY)
ret, simple_thresh1 = cv2.threshold(img, 150, 255, cv2.THRESH_BINARY_INV)

adaptive_thresh = cv2.adaptiveThreshold(
    img, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, 5, 2
)
adaptive_thresh0 = cv2.adaptiveThreshold(
    img, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY_INV, 5, 2
)
adaptive_thresh1 = cv2.adaptiveThreshold(
    img, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 5, 2
)
adaptive_thresh2 = cv2.adaptiveThreshold(
    img, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV, 5, 2
)

# c. Save all image using cv2.imwrite() function and create a PR with your code along with output images in separate folder.

cv2.imwrite(r"output/1/morphology-eroded.jpg", img_erosion)
cv2.imwrite(r"output/1/morphology-dilated.jpg", img_dilation)

cv2.imwrite(r"output/1/simple_thresh.jpg", simple_thresh)
cv2.imwrite(r"output/1/simple_thresh_inv.jpg", simple_thresh1)

cv2.imwrite(r"output/1/adapt_mean_thresh.jpg", adaptive_thresh)
cv2.imwrite(r"output/1/adapt_mean_inv_thresh.jpg", adaptive_thresh0)

cv2.imwrite(r"output/1/adapt_guass_thresh.jpg", adaptive_thresh1)
cv2.imwrite(r"output/1/adapt_guass_inv_thresh.jpg", adaptive_thresh2)