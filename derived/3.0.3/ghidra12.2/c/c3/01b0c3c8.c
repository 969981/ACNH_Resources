
uint FUN_01b0c3c8(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar4 = *puVar6;
    if (uVar4 != 0 && puVar6 != (uint *)(ulong)uVar4) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
          goto LAB_01b0c470;
        }
      }
    }
    uVar5 = 0;
  }
LAB_01b0c470:
  if ((uVar5 == 0xb1) && (iVar3 = FUN_0277d6c4(param_1 + 8), iVar3 == 0x16a2)) {
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar4 = 0x4c7b;
    if (((uVar2 & 0xffff) < 0x800) &&
       (uVar4 = 0x4c7b,
       (*(byte *)(*(long *)PTR_DAT_04bb46f0 + ((ulong)(uVar2 >> 3) & 0x1fff) + 0xe98e0) >>
        (ulong)(uVar2 & 7) & 1) != 0)) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar4 = 0x4c7b;
  }
  return uVar4;
}

