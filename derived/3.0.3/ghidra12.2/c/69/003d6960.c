
undefined8 FUN_003d6960(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(ulong *)(param_1 + 0x178) < 0x2001) {
    uVar1 = *(ulong *)(param_1 + 0x178) + 0x900;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)(*(ulong *)(*(long *)(param_1 + 0x100) + 0x10) / uVar1);
    }
    *(uint *)(param_1 + 0x108) = uVar2;
    if (1 < (int)uVar2) {
      if (0x20 < uVar2) {
        *(undefined4 *)(param_1 + 0x108) = 0x20;
      }
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined8 *)(param_1 + 0x10c) = 0;
      return 1;
    }
  }
  return 0;
}

