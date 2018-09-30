n = gets.to_i
n.times do
	d = 0
	c = gets.to_f
	loop do 
		d += 1
		c /= 2
		break if c <= 1
	end
	puts "#{d} dias\n"
end