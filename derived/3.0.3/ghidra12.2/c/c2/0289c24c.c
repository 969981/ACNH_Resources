
ushort FUN_0289c24c(void)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar3 = FUN_0289c060();
  lVar4 = *(long *)PTR_DAT_04bb4700;
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x420);
  if (((uVar3 < *(uint *)(lVar4 + 0x400)) &&
      (puVar5 = *(uint **)(*(long *)(lVar4 + 0x408) + (long)(int)uVar3 * 8), puVar5 != (uint *)0x0))
     && (uVar3 = *puVar5, uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
    if (((*puVar6 != 0) && (uVar3 = puVar6[1], uVar3 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar4 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar6 + lVar4 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar4 != 0) {
        uVar1 = 0;
        if ((ulong)uVar3 != 0) {
          uVar1 = (uint)((ulong)((long)puVar5 - lVar4) / (ulong)uVar3);
        }
        if (*puVar6 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_055dca00) &&
           (uVar2 = *(ushort *)(DAT_055dca08 + (long)(int)uVar1 * 2), uVar2 < 6)) {
          return uVar2;
        }
      }
    }
  }
  return 0;
}

