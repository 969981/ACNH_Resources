
ushort FUN_02b60d30(uint param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  
  lVar4 = *(long *)PTR_DAT_04bb5008;
  uVar3 = (param_1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0xff0);
  if (((uVar3 < *(uint *)(lVar4 + 0xfd0)) &&
      (puVar5 = *(uint **)(*(long *)(lVar4 + 0xfd8) + (long)(int)uVar3 * 8), puVar5 != (uint *)0x0))
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
        if ((uVar1 < DAT_05604488) &&
           (uVar2 = *(ushort *)(DAT_05604490 + (long)(int)uVar1 * 2), uVar2 < 6)) {
          return uVar2;
        }
      }
    }
  }
  return 0;
}

