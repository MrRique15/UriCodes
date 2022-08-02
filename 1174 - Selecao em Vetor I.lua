local vector = {}

for i=1,100 do
    vector[i] = tonumber(io.read())
    if(vector[i] <= 10) then
        print("A["..(i-1).."] = "..(vector[i]+.0))
    end
end