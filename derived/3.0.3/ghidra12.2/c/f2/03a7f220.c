
void FUN_03a7f220(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x440) == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x5d0) == '\0') {
    return;
  }
  lVar4 = *(long *)(param_4 + 0x10);
  uVar1 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(param_4 + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar1 = 0;
  }
  lVar5 = *(long *)(lVar4 + (ulong)uVar1 * 0x23c0 + 0x1fa8);
  if ((*(ushort *)(param_1 + 0x438) & 1) == 0) {
    lVar3 = 0;
    lVar2 = lVar4 + (ulong)uVar1 * 0x23c0 + 0x610;
  }
  else {
    lVar6 = lVar4 + (ulong)uVar1 * 0x23c0;
    lVar3 = 0;
    if ((*(uint *)(lVar6 + 8) & 0x800) != 0) {
      lVar3 = lVar6 + 0x1088;
    }
    lVar2 = 0;
    if ((*(uint *)(lVar6 + 8) & 0x1000) != 0) {
      lVar2 = lVar6 + 0xdd0;
    }
    if (((*(ushort *)(param_1 + 0x438) >> 1 & 1) != 0) && ((*(uint *)(lVar5 + 0xa70) >> 1 & 1) != 0)
       ) {
      lVar6 = lVar5 + 0x6d8;
      goto joined_r0x03a7f2d0;
    }
  }
  lVar6 = 0;
  if ((*(byte *)(lVar5 + 0x498) & 2) != 0) {
    lVar6 = lVar5 + 0x100;
  }
joined_r0x03a7f2d0:
  if (((lVar3 != 0) || ((*(byte *)(lVar4 + (ulong)uVar1 * 0x23c0 + 8) & 1) != 0)) &&
     (lVar2 != 0 && lVar6 != 0)) {
    FUN_03977160();
    uVar1 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x440) + 0x18) <= (uint)*(byte *)(param_3 + 8)) {
      uVar1 = 0;
    }
    *(ulong *)(param_3 + 0x48) =
         *(long *)(*(long *)(param_1 + 0x440) + 0x20) + (ulong)uVar1 * 0x970 + 0x2b0;
  }
  return;
}

