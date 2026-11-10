
char * FUN_0014df00(uint param_1)

{
  if (param_1 < 100) {
    return &DAT_0410176c + *(int *)(&DAT_0410176c + (long)(int)param_1 * 4);
  }
  return "Unknown error";
}

