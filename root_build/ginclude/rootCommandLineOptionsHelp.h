#ifndef ROOT_rootCommandLineOptionsHelp
#define ROOT_rootCommandLineOptionsHelp
constexpr static const char kCommandLineOptionsHelp[] = R"RAW(
usage: root [-b B] [-x X] [-e E] [-n N] [-t T] [-q Q] [-l L] [-a A]
            [-config CONFIG] [-memstat MEMSTAT] [-h HELP] [--version VERSION]
            [--notebook NOTEBOOK] [--web WEB] [--web=<browser> WEB=<BROWSER>]
            [dir] [file:data.root] [file1.C...fileN.C]

OPTIONS:
  -b                             Run in batch mode without graphics
  -x                             Exit on exceptions
  -e                             Execute the command passed between single quotes
  -n                             Do not execute logon and logoff macros as specified in .rootrc
  -t                             Enable thread-safety and implicit multi-threading (IMT)
  -q                             Exit after processing command line macro files
  -l                             Do not show the ROOT banner
  -a                             Show the ROOT splash screen
  -config                        print ./configure options
  -memstat                       run with memory usage monitoring
  -h, -?, --help                 Show summary of options
  --version                      Show the ROOT version
  --notebook                     Execute ROOT notebook
  --web                          Display graphics in a default web browser
  --web=<browser>                Display graphics in specified web browser
  [dir]                          if dir is a valid directory cd to it before executing
  [file:data.root]               Open the ROOT file data.root
  [file1.C...fileN.C]            Execute the the ROOT macro file1.C ... fileN.C
)RAW";
#endif
