a, b, c = gets.to_f, gets.to_f, gets.to_f
a *= 2
b *= 3
c *= 5
media = (a + b + c) / 10.0
puts "MEDIA = %0.01f\n" % media.round(1)