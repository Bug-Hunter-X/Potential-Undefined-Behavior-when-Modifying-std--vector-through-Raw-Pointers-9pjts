std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
  vec.push_back(i); 
}
int* ptr = &vec[0]; 
for (int i = 0; i < vec.size(); ++i) { 
  ptr[i] *= 2; 
}
//This code will work but it is not recommended to modify a vector's elements through a raw pointer obtained via &vec[0].  The vector may reallocate its internal memory, invalidating the pointer.