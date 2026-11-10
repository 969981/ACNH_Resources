
int FUN_00100410(byte *param_1,byte *param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)param_1;
  if (sVar1 == *(short *)param_2) {
    do {
      if (sVar1 == 0) {
        return 0;
      }
      param_1 = param_1 + 2;
      sVar1 = *(short *)param_1;
      param_2 = param_2 + 2;
    } while (sVar1 == *(short *)param_2);
  }
  iVar2 = (uint)*param_1 - (uint)*param_2;
  if (iVar2 == 0) {
    iVar2 = (uint)param_1[1] - (uint)param_2[1];
  }
  return iVar2;
}

