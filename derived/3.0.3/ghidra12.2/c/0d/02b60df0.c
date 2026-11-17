
bool FUN_02b60df0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  
  lVar4 = *(long *)PTR_DAT_04bb5008;
  uVar2 = (param_1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0xff0);
  if ((*(uint *)(lVar4 + 0xfd0) <= uVar2) ||
     (puVar5 = *(uint **)(*(long *)(lVar4 + 0xfd8) + (long)(int)uVar2 * 8), puVar5 == (uint *)0x0))
  {
    return true;
  }
  uVar2 = *puVar5;
  if (uVar2 != 0 && puVar5 != (uint *)(ulong)uVar2) {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar2);
    if (((*puVar6 != 0) && (uVar2 = puVar6[1], uVar2 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar4 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar6 + lVar4 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar4 != 0) {
        uVar1 = 0;
        if ((ulong)uVar2 != 0) {
          uVar1 = (uint)((ulong)((long)puVar5 - lVar4) / (ulong)uVar2);
        }
        if (*puVar6 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_05604488) &&
           (uVar3 = *(ushort *)(DAT_05604490 + (long)(int)uVar1 * 2), uVar3 < 6)) goto LAB_02b60ea8;
      }
    }
  }
  uVar3 = 0;
LAB_02b60ea8:
  return uVar3 < 3;
}

