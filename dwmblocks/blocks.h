//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/    /*Update Interval*/  /*Update Signal*/
  {"| ", "xset -q|grep LED| awk '{ if (substr ($10,5,1) == 1) print \"[RU]\"; else print \"[EN]\"; }'", 0, 1},

  {" ", "echo \"$(cat /sys/class/power_supply/BAT1/capacity)%\"", 10, 0},

  {" " , "echo \"$(top -bn1 | grep \"Cpu(s)\" | awk '{print 100 - $8\"%\"}')\"", 5, 0},

  {" " , "date '+%d.%m'", 60, 0},
  {" ", "date '+%H:%M  '", 5, 0},

};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 7;
