# 2. Color masking: Apply color masking technique on the image provided (masking.jpg) and save the image as mentioned in part 1.
# Follow the following steps:

import cv2
import numpy as np


img = cv2.imread(r"img/masking.jpg")
hsv = cv2.cvtColor(img, cv2.COLOR_RGB2HSV)

# a. Apply masking for Red color codes (you need to find these RGB lower and upper bond values) and save the image.

rgbl = np.array([110, 50, 50], np.uint8)
rgbh = np.array([130, 255, 255], np.uint8)
maskr = cv2.inRange(hsv, rgbl, rgbh)

cv2.imwrite(r"output/2/masked-red.jpg", maskr)

# b. Do the above for green color

rgbl = np.array([36, 25, 25], np.uint8)
rgbh = np.array([70, 255, 255], np.uint8)
maskg = cv2.inRange(hsv, rgbl, rgbh)

cv2.imwrite(r"output/2/masked-green.jpg", maskg)

# c. Do the above for blue color.

rgbl = np.array([2, 120, 0], np.uint8)
rgbh = np.array([40, 255, 255], np.uint8)
maskb = cv2.inRange(hsv, rgbl, rgbh)

cv2.imwrite(r"output/2/masked-blue.jpg", maskb)
