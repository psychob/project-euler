solution "project euler"
 configurations "basic"
 flags { "Symbols" }
 
 targetdir "./build/"
 objdir    "./build/obj/"
 location  "./projfiles/"
 
 project "pe-001"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-001.cpp" }
 
 project "pe-002"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-002.cpp" }
