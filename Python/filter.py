from PIL import Image,ImageFilter 

before = Image.open("a.webp")
after = before.filter(ImageFilter.BoxBlur(100))
after.save("out.webp")