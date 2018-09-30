a = 1000 * (8/100.0)
b = 1500 * (18/100.0)
s = gets.to_f
if s >= 0 and s <= 2000
	puts "Isento"
elsif s > 2000 and s <= 3000
	s -= 2000
	s *= 8/100.0
	puts "R$ %0.02f\n" % s.round(2)
elsif s > 3000 and s <= 4500
	s -= 3000
	s *= 18/100.0
	s += a
	puts "R$ %0.02f\n" % s.round(2)
elsif s > 4500
	s -= 4500
	s *= 28/100.0
	s += a + b
	puts "R$ %0.02f\n" % s.round(2)
end