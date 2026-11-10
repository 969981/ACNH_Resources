
undefined8 FUN_0017a9fc(long param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*param_3;
  do {
    uVar1 = (int)uVar3 + 1;
    if (param_2 < uVar1) {
      return 2;
    }
    bVar2 = *(byte *)(param_1 + uVar3);
    if ((bVar2 & 0xc0) != 0) {
      if ((bVar2 & 0xc0) != 0xc0) {
        return 1;
      }
      uVar1 = (int)uVar3 + 2;
      if (param_2 < uVar1) {
        return 2;
      }
      *param_3 = uVar1;
      return 0;
    }
    uVar1 = uVar1 + bVar2;
    uVar3 = (ulong)uVar1;
    if (param_2 < uVar3) {
      return 2;
    }
    *param_3 = uVar1;
  } while (bVar2 != 0);
  return 0;
}

