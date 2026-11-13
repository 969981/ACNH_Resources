
undefined4 FUN_013ee6c4(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar4 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
  if (*(uint *)(param_1 + 0x328) <= uVar4) {
    return 0;
  }
  puVar5 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar4 * 8);
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  uVar4 = *puVar5;
  if (uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4) {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
    if (((*puVar6 != 0) && (uVar4 = puVar6[1], uVar4 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_051b69d0) &&
           (uVar3 = *(ushort *)(DAT_051b69d8 + (long)(int)uVar2 * 2), uVar4 = (uint)uVar3, uVar3 < 7
           )) goto LAB_013ee770;
      }
    }
  }
  uVar4 = 0;
LAB_013ee770:
  if ((uVar4 < 7) && ((0x5dU >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
    return *(undefined4 *)(&DAT_041754dc + (long)(int)uVar4 * 4);
  }
  return 0;
}

