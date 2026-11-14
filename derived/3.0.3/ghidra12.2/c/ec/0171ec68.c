
long FUN_0171ec68(undefined4 *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 local_14;
  
  local_14 = *param_1;
  uVar2 = FUN_0171ed40(&local_14);
  if (DAT_0524a598 != 0) {
    uVar1 = (uint)uVar2 & 0xffff;
    if ((int)*(uint *)(DAT_0524a598 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0524a598 + 0xb0) != 0) &&
           (puVar3 = *(uint **)(*(long *)(DAT_0524a598 + 0xb0) + 8), puVar3 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0524a598 + 200) <= uVar1 ||
           (*(char *)(*(long *)(DAT_0524a598 + 0xd0) + (uVar2 & 0xffff)) != '\0')))) &&
         (((uVar1 < *puVar3 && (puVar3[1] != 0)) && ((ushort)puVar3[2] != 0)))) {
        iVar4 = 0xc;
        if (*(char *)((long)puVar3 + 10) != '\0') {
          iVar4 = 0x1c;
        }
        return (ulong)(puVar3[1] * uVar1 + (uint)(ushort)puVar3[2] * 8 + iVar4) + (long)puVar3;
      }
    }
    else if (uVar1 < *(uint *)(DAT_0524a598 + 0x1c0)) {
      if (*(uint *)(DAT_0524a598 + 0x1b0) <= uVar1) {
        uVar1 = 0;
      }
      return *(long *)(*(long *)(DAT_0524a598 + 0x1b8) + (ulong)uVar1 * 8);
    }
  }
  return 0;
}

