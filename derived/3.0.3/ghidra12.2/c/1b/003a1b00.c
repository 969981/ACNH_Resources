
uint FUN_003a1b00(long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x38);
  uVar4 = (uint)uVar1;
  if (param_2 == 0) {
    if (uVar1 < 2) {
      uVar4 = 1;
    }
    return uVar4;
  }
  lVar6 = (long)(int)param_2;
  lVar3 = (long)(int)param_2;
  if ((int)uVar4 < (int)(param_2 + 1)) {
    uVar4 = param_2 + 1;
  }
  puVar5 = (ushort *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x60 + 0x8a);
  do {
    lVar6 = lVar6 + 1;
    if ((long)(ulong)uVar1 <= lVar6) {
      return uVar4;
    }
    uVar2 = *puVar5;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 0x30;
  } while (*(ushort *)(*(long *)(param_1 + 0x10) + lVar3 * 0x60 + 0x2a) < uVar2);
  return param_2;
}

