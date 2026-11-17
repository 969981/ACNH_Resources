
bool FUN_02b141c4(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0x13) {
    iVar1 = *(int *)(&DAT_0417f1bc + (long)(int)param_1 * 4);
  }
  else {
    iVar1 = -1;
  }
  if (param_2 < 0x13) {
    iVar2 = *(int *)(&DAT_0417f1bc + (long)(int)param_2 * 4);
  }
  else {
    iVar2 = -1;
  }
  return iVar2 <= iVar1;
}

