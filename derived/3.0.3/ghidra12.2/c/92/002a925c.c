
long FUN_002a925c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 < *(ushort *)(param_1 + 0x10)) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x10);
    if (*(ulong *)(param_1 + 0x20) == 0xffffffffffffffff) {
      *(ulong *)(param_1 + 0x20) = (ulong)*(uint *)(param_1 + 0x18);
      param_2 = *(int *)(param_1 + 0x1c) + param_2;
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = param_2 / uVar2;
      }
      uVar3 = (ulong)(param_2 - uVar1 * uVar2);
      if (*(uint *)(param_1 + 0x18) != uVar3) goto LAB_002a92b4;
    }
    else {
      param_2 = *(int *)(param_1 + 0x1c) + param_2;
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = param_2 / uVar2;
      }
      uVar3 = (ulong)(param_2 - uVar1 * uVar2);
      if (*(ulong *)(param_1 + 0x20) != uVar3) {
LAB_002a92b4:
        return *(long *)(param_1 + 8) + uVar3 * 0x660;
      }
    }
  }
  return 0;
}

