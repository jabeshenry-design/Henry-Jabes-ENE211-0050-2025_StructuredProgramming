#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double PI= 3.142;
    double radius;
    double surface_area;

    printf("\n SURFACE AREA OF A SPHERE: \n");

    printf("Enter radius:");
    scanf("%lf", &radius);

    surface_area = 4 * PI *radius * radius;

    printf("Surface Area of sphere=%lf\n", surface_area);



    return 0;
}

<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<CodeBlocks_project_file>
	<FileVersion major="1" minor="6" />
	<Project>
		<Option title="SURFACE AREA OF A SPHERE" />
		<Option pch_mode="2" />
		<Option compiler="gcc" />
		<Build>
			<Target title="Debug">
				<Option output="bin/Debug/SURFACE AREA OF A SPHERE" prefix_auto="1" extension_auto="1" />
				<Option object_output="obj/Debug/" />
				<Option type="1" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-g" />
				</Compiler>
			</Target>
			<Target title="Release">
				<Option output="bin/Release/SURFACE AREA OF A SPHERE" prefix_auto="1" extension_auto="1" />
				<Option object_output="obj/Release/" />
				<Option type="1" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-O2" />
				</Compiler>
				<Linker>
					<Add option="-s" />
				</Linker>
			</Target>
		</Build>
		<Compiler>
			<Add option="-Wall" />
		</Compiler>
		<Unit filename="main.c">
			<Option compilerVar="CC" />
		</Unit>
		<Extensions>
			<lib_finder disable_auto="1" />
		</Extensions>
	</Project>
</CodeBlocks_project_file>

# depslib dependency file v1.0
1791315742 source:c:\users\admin\desktop\academics\year 2\eec 2202 structured programming\class work\surface area of a sphere\main.c
	<stdio.h>
	<stdlib.h>


<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<CodeBlocks_layout_file>
	<FileVersion major="1" minor="0" />
	<ActiveTarget name="Debug" />
	<File name="main.c" open="1" top="0" tabpos="1" split="0" active="1" splitpos="0" zoom_1="0" zoom_2="0">
		<Cursor>
			<Cursor1 position="375" topLine="0" />
		</Cursor>
	</File>
</CodeBlocks_layout_file>
