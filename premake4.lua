solution "project euler"
 configurations { "debug", "release" }
 
 targetdir "./build/"
 location  "./projfiles/"
 
 configuration "debug"
  flags { "Symbols" }
  objdir "./build/obj/debug/"
  
 configuration "release"
  flags { "Optimize" }
  objdir "./build/obj/release/"
 
 project "pe-001"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-001.cpp" }
 
 project "pe-002"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-002.cpp" }
 
 project "pe-003"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-003.cpp" }
 
 project "pe-005"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-005.cpp" }
