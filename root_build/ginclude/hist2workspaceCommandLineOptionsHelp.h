#ifndef ROOT_hist2workspaceCommandLineOptionsHelp
#define ROOT_hist2workspaceCommandLineOptionsHelp
constexpr static const char kCommandLineOptionsHelp[] = R"RAW(
usage: hist2workspace [-h] [-standard_form STANDARD_FORM]
                      [-number_counting_form NUMBER_COUNTING_FORM] [-v] [-vv]

OPTIONS:
  -h, --help                       show this help message and exit
  -standard_form                   default  model,  which  creates  an  extended PDF that interpolates between RooHistFuncs
                                   This is much faster for models with many bins and uses significantly less memory
  -number_counting_form            This was the original model in 5.28 (without patches). It uses a Poisson for each
                                   bin of the histogram.  This can become slow and memory intensive when there are many bins.
                                   
  -v                               Switch HistFactory message stream to INFO level.
  -vv                              Switch HistFactory message stream to DEBUG level.
)RAW";
#endif
