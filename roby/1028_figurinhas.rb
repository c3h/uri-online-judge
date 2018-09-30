n = gets.to_i
n.times do
	i, c = gets.to_i, gets.to_i
	if i > c
		maior = i
		menor = c
	else
		maior = c
		menor = i
	end
	a = maior % menor
	if a == 0
		a = menor
	end
	puts "#{a}\n"
end