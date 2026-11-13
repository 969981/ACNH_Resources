
undefined8 FUN_01262200(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(int *)(param_2 + 0x24) + 1;
  uVar3 = *(uint *)(param_2 + 0x14);
  if (uVar1 != uVar3) {
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar4 = uVar2;
    do {
      if (((uVar4 < 0x120) && (uVar3 < 0x100)) &&
         ((*(uint *)(param_1 + 8 + (ulong)(uVar4 + uVar3 * 0x120 >> 5) * 4) >> (ulong)(uVar4 & 0x1f)
          & 1) != 0)) {
        return 1;
      }
      if ((int)uVar4 < *(int *)(param_2 + 0x20)) {
        uVar4 = uVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        uVar4 = uVar2;
      }
    } while ((uVar2 != uVar4) || (uVar1 != uVar3));
  }
  return 0;
}

