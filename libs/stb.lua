lib( "stb_image", { "libs/stb/stb_image.cc" } )
msvc_obj_cxxflags( "libs/stb/stb_image.cc", "/wd4244 /wd4456" )
gcc_obj_cxxflags( "libs/stb/stb_image.cc", "-Wno-shadow -Wno-implicit-fallthrough" )
lib( "stb_truetype", { "libs/stb/stb_truetype.cc" } )
