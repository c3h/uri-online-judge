x, y = gets.to_f, gets.to_f
x *= 3.5
y *= 7.5
media = (x + y) / 11.0
puts "MEDIA = %0.05f\n" % media.round(5)