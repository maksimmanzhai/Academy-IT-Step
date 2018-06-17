y = "abs"
puts y.object_id
x = "uiu" 
puts x.object_id
x = y
puts x.object_id

x.gsub(/a/, "x")
puts x.object_id
puts y.object_id