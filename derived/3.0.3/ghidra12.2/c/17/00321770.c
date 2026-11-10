
void FUN_00321770(float param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  if (0.0 < param_1) {
    iVar2 = (int)param_1;
    lVar1 = *(long *)(param_2 + 0x28) + 0x16d0;
    if (0 < iVar2) {
      do {
        FUN_00321830(0x3f800000,param_2,0,1,0,lVar1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (0.0 < param_1 - (float)(int)(float)(int)param_1) {
      FUN_00321830(param_1 - (float)(int)(float)(int)param_1,param_2,0,1,0,lVar1);
      return;
    }
  }
  return;
}

