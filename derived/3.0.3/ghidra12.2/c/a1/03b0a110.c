
bool FUN_03b0a110(long param_1,int *param_2,uint param_3,ushort param_4)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    do {
      iVar1 = *param_2;
      if ((*(ushort *)(param_1 + (long)iVar1 * 0x50 + 0x53c) & param_4) != 0) {
        return true;
      }
      if ((*(ushort *)(param_1 + (long)iVar1 * 0x50 + 0x53e) & param_4) != 0) {
        return true;
      }
      if ((*(ushort *)(param_1 + (long)iVar1 * 0x50 + 0x540) & param_4) != 0) {
        return true;
      }
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  if (((*(ushort *)(param_1 + 0x18ec) & param_4) == 0) &&
     ((*(ushort *)(param_1 + 0x18ee) & param_4) == 0)) {
    return (*(ushort *)(param_1 + 0x18f0) & param_4) != 0;
  }
  return true;
}

