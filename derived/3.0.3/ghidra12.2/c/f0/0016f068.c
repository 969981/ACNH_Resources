
int FUN_0016f068(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if (((param_2 & 1) == 0) || (*(ulong *)(param_1 + 0x920) >> 4 < 0x271)) {
    lVar2 = FUN_001689e8(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN_0016bbec();
      FUN_001676b0(lVar2,param_2,param_3);
      iVar1 = FUN_0016ca1c(param_1,lVar2);
      if (iVar1 == 0) {
        iVar1 = 0;
        if ((param_2 & 1) != 0) {
          *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + 1;
        }
      }
      else {
        FUN_001676e4(lVar2);
        FUN_001689f8(param_1 + 0x890,lVar2);
      }
    }
  }
  else {
    iVar1 = -0x388;
  }
  return iVar1;
}

