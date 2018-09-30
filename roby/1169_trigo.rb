n = gets.to_i
n.times do
	x = gets.to_i
	g = 1
	x.times do
		g *= 2
	end
	kg = g / 12000
	puts "#{kg} kg\n"
end