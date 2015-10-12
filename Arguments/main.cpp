/// App using the Arugments class
#include <iostream>

#include "Arguments.h"


int main( int argc, char* argv[] )
{
    using namespace std;

    try
    {
        Arguments args(argc, argv);
		Arguments args2(args);
		Arguments args3(args);
		args3 = args2;
		
		//Arguments args3(3,{"nume1" , "nume2", "nume3"});
		
        cout << "Name of the application: " <<
            args.appName() << endl;
		cout << args.count() << endl;
        for ( int i = 0; i < args.count(); ++i )
        {
            cout << args[i] << endl;
        }
		
		cout << "=========================" << endl;
		cout << "Name of the application: " <<
            args2.appName() << endl;
		cout << args2.count() << endl;
        for ( int i = 0; i < args2.count(); ++i )
        {
            cout << args2[i] << endl;
        }
		
		cout << "=========================" << endl;
		cout << "Name of the application: " <<
            args3.appName() << endl;
		cout << args3.count() << endl;
        for ( int i = 0; i < args3.count(); ++i )
        {
            cout << args3[i] << endl;
        }
    }
	
    /// This will catch throws from the try block with an integer param
    catch (int e)
    {
        cerr << "Construction error occured..." << endl;
    }
    /// This will catch throws from the try block with a size_t param
    catch (size_t e)
    {
        cerr << "Out of range error occured ..." << endl;
    }

    cout << "Ending application... " << endl;
    return 0;
}

/* int main( int argc, char* argv[] )
{
    using namespace std;

    try
    {
        Arguments args(argc, argv);

        cout << "Name of the application: " <<
            args.appName() << endl;

        for ( int i = 0; i < args.count(); ++i )
        {
            cout << args[i] << endl;
        }
    }
    /// This will catch throws from the try block with an integer param
    catch (int e)
    {
        cerr << "Construction error occured..." << endl;
    }
    /// This will catch throws from the try block with a size_t param
    catch (size_t e)
    {
        cerr << "Out of range error occured ..." << endl;
    }

    cout << "Ending application... " << endl;
    return 0;
} */
