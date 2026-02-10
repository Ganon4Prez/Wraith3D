#include <iomanip>
#include <iostream>


/***********************
 ***********************
		WRAITH3D
***********************
*/
// TO DO
//		GnuWin32 - has wget, grep, and find. (?) can I just use Python?
//		Get Vulkan SDK
//		Get CMake for the project put together from get go

//	TO Later
//		Nvidia only - NV_command_list for OpenGL extension reuse (chap 1)
//		ARB_texture_storage immutable textures, glTexStorage/glTextureStorage
//		ARB_multi_draw_indirect, batching and instancing

int main()
{
	std::cout << "Hello, Wraith3D!";
	
	// Print versions of CUDA, C++, Compiler, DX12.
	
	//-------------------------------------------------------- OpenGL Version -------
	std::cout << "Using OpenGL Version " << glGetString(GL_VERSION) << std::endl;
	std::cout << "Using Vendor " << glGetString(GL_VENDOR) << std::endl;


	return 0;
}