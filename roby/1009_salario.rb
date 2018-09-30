nome, salario, vendas = gets, gets.to_f, gets.to_f
bonus = vendas * (15/100.0)
puts "TOTAL = R$ %0.02f\n" % (salario + bonus).round(2)