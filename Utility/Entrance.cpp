
#include "Utility.h"
#include "IOHelper.h"

using namespace Utility;


int main(){
	string suffix = IOHelper::SplitSuffix("E:\\Image\\Image1.txt");
	string prefix = IOHelper::SplifPrefix("E:\\Image\\Image1.txt");
	string dir1 = IOHelper::SplitDirectory("E:/Image/Image1.txt");
	string dir2 = IOHelper::SplitDirectory("E:\\Image\\Image1.txt");
	string filename1 = IOHelper::SplitFilename("E:/Image/Image1.txt");
	string filename2 = IOHelper::SplitFilename("E:\\Image\\Image1.txt");
}