
char * FUN_001689b4(uint param_1)

{
  if (param_1 < 0xe) {
    return &DAT_041039c4 + *(int *)(&DAT_041039c4 + (long)(int)param_1 * 4);
  }
  return "unknown";
}

