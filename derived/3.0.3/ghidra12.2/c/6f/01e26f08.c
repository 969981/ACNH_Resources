
undefined4 * FUN_01e26f08(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (DAT_053e0208 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)*(uint *)(DAT_053e0208 + 0x16ca0) < 1) {
      if (*(long *)(DAT_053e0208 + 0x16b90) == 0) {
        return &DAT_053dce00;
      }
      puVar3 = *(uint **)(*(long *)(DAT_053e0208 + 0x16b90) + 8);
      if (puVar3 == (uint *)0x0) {
        return &DAT_053dce00;
      }
      if ((uVar1 < *(uint *)(DAT_053e0208 + 0x16ba8)) &&
         (*(char *)(*(long *)(DAT_053e0208 + 0x16bb0) + (long)(int)uVar1) == '\0')) {
        return &DAT_053dce00;
      }
      if (*puVar3 <= uVar1) {
        return &DAT_053dce00;
      }
      if (puVar3[1] == 0) {
        return &DAT_053dce00;
      }
      if ((ushort)puVar3[2] == 0) {
        return &DAT_053dce00;
      }
      iVar4 = 0xc;
      if (*(char *)((long)puVar3 + 10) != '\0') {
        iVar4 = 0x1c;
      }
      puVar2 = (undefined4 *)
               ((ulong)(puVar3[1] * uVar1 + (uint)(ushort)puVar3[2] * 8 + iVar4) + (long)puVar3);
    }
    else {
      if (*(uint *)(DAT_053e0208 + 0x16ca0) <= uVar1) {
        return &DAT_053dce00;
      }
      if (*(uint *)(DAT_053e0208 + 0x16c90) <= uVar1) {
        uVar1 = 0;
      }
      puVar2 = *(undefined4 **)(*(long *)(DAT_053e0208 + 0x16c98) + (ulong)uVar1 * 8);
    }
    if (puVar2 != (undefined4 *)0x0) {
      return puVar2;
    }
  }
  return &DAT_053dce00;
}

