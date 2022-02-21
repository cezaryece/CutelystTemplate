# CutelystTemplate
Example how to create Cutelyst project as server (REST backend) and connected with it Qt project as REST client.

1. Open teminal where "_createCutelystApp.sh" is placed and run 

./_createCutelystApp.sh NewAppName

where NewAppName is name of new Cutelyst app you want to create

2. Load created NewAppName project (select CMakeList.txt in NewAppName folder)

3. Edit Build Settings for NewAppName project
- remove existing cmake build step and add Custom Build Step
- browse for "_cleanAndBuildApp.sh" script as Command
- provide NewAppName as argument
- set script location as Working Ditectory

4. Edit Run Settings for NewAppName project
- Run Configuration should be "Custom Executable"
- set Executable to "_runCutelystServer.sh" script
- set Command line arguments to NewAppName
- set Working directory to folder with script
- check "run in terminal"

Now you should be able to build and run NewAppName project and get terminal window with Cutelyst server aplication running in it.
Closing terminal window you terminate application as well.

In src/NewAppName you can find classes for Cutelyst server features.
ApiV1 class is responsible for REST api requests.
If you would like to use it you should add line

new ApiV1(this)

in bool NewAppName::init()

You can replace "new Root(this)" or just add REST api as second feature.
