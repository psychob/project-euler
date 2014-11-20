solution "project euler"
 configurations { "debug", "release" }
 
 targetdir "./build/"
 location  "./projfiles/"
 
 configuration "debug"
  flags { "Symbols" }
  objdir "./build/obj/"
  targetsuffix "-d"
  
 configuration "release"
  flags { "Optimize" }
  objdir "./build/obj/"
  targetsuffix "-r"
 
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
 
 project "pe-006"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-006.cpp" }
 
 project "pe-008"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-008.cpp" }
 
 project "pe-010"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-010.cpp" }

 project "pe-016"
  kind     "ConsoleApp"
  language "c++"
  files  { "pe-016.cpp" }
