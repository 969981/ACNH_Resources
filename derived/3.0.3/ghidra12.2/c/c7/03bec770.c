
ulong FUN_03bec770(long param_1,byte *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar8 = (long)(int)uVar1;
  if (uVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    do {
      lVar8 = lVar8 + -1;
      lVar9 = *(long *)(lVar5 + lVar8 * 8);
      if (*(char *)(lVar9 + 0x94) != '\0') {
        uVar4 = *(uint *)(lVar9 + 0x90);
        uVar11 = (ulong)uVar4;
        if (uVar4 != 0) {
          uVar12 = (uint)*param_2;
          if (*param_2 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = 0xffffffff;
            pbVar14 = param_2;
            do {
              pbVar14 = pbVar14 + 1;
              uVar15 = crc32b(uVar15,uVar12,0x4c11db7);
              uVar12 = (uint)*pbVar14;
            } while (uVar12 != 0);
            uVar15 = ~uVar15;
          }
          uVar13 = (ulong)(uVar4 >> 1);
          uVar4 = *(uint *)(*(long *)(lVar9 + 0x80) + uVar13 * 4);
          if (uVar4 == uVar15) {
LAB_03bec82c:
            if ((int)uVar1 < 1) {
              uVar7 = 0xffffffff;
              goto LAB_03bec870;
            }
            uVar11 = 0;
            uVar7 = 0xffffffff;
            goto LAB_03bec840;
          }
          iVar3 = 0;
          while( true ) {
            iVar2 = (int)uVar13;
            iVar10 = iVar3;
            if (uVar15 <= uVar4) {
              iVar10 = (int)uVar11;
              uVar11 = uVar13;
              iVar2 = iVar3;
            }
            iVar3 = iVar2;
            if (iVar10 == (int)uVar13) break;
            uVar13 = (ulong)((uint)((int)uVar11 + iVar3) >> 1);
            uVar4 = *(uint *)(*(long *)(lVar9 + 0x80) + uVar13 * 4);
            if (uVar4 == uVar15) goto LAB_03bec82c;
          }
        }
      }
    } while (lVar8 != 0);
  }
  return 0;
  while (uVar11 = uVar11 + 1, uVar1 != uVar11) {
LAB_03bec840:
    if (*(long *)(lVar5 + uVar11 * 8) == lVar9) {
      uVar7 = (undefined4)uVar11;
      break;
    }
  }
LAB_03bec870:
  *param_3 = uVar7;
  uVar13 = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + lVar8 * 8) + 0x88) + uVar13 * 4);
  uVar6 = *(ulong *)PTR_DAT_04bb38c8 | uVar13;
  uVar11 = uVar6 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar13) {
    uVar11 = uVar6;
  }
  return uVar11;
}

