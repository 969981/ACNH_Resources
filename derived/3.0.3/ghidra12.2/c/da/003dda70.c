
bool FUN_003dda70(long param_1)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x10);
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    do {
      if ((short)piVar2[-1] == 0x4003) {
        return *piVar2 != 0;
      }
      uVar1 = uVar1 - 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 != 0);
  }
  return false;
}

