func, nhoras, vhoras = gets.to_i, gets.to_f, gets.to_f
puts "NUMBER = #{func}\n"
sa = nhoras * vhoras
puts "SALARY = U$ %0.02f\n" % sa.round(2)