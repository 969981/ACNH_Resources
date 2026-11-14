
bool FUN_01b026bc(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  
  if ((param_3 & 1) == 0) {
    puVar8 = *(uint **)(param_1 + 0x10);
    uVar6 = 0;
    if (puVar8 == (uint *)0x0) goto LAB_01b028fc;
    uVar6 = *puVar8;
    if (uVar6 != 0 && puVar8 != (uint *)(ulong)uVar6) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
      uVar6 = *puVar10;
      if (((uVar6 != 0) && (uVar2 = puVar10[1], uVar2 != 0)) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 == 0) goto LAB_01b028f8;
        uVar7 = 0;
        if ((ulong)uVar2 != 0) {
          uVar7 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar2);
        }
        bVar4 = uVar7 <= uVar6;
        bVar5 = uVar6 == uVar7;
        puVar8 = &DAT_053271b0;
LAB_01b02860:
        if (!bVar4 || bVar5) {
          uVar7 = 0xffffffff;
        }
        if ((uVar7 < *puVar8) &&
           (uVar3 = *(ushort *)(*(long *)(puVar8 + 2) + (long)(int)uVar7 * 2), uVar6 = (uint)uVar3,
           uVar3 < 5)) goto LAB_01b028fc;
      }
    }
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x10);
    uVar6 = 0;
    if (puVar8 == (uint *)0x0) goto LAB_01b028fc;
    uVar6 = *puVar8;
    if (uVar6 == 0 || puVar8 == (uint *)(ulong)uVar6) {
LAB_01b02754:
      uVar6 = 0;
    }
    else {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
      if (((*puVar10 == 0) || (uVar6 = puVar10[1], uVar6 == 0)) || ((ulong)(ushort)puVar10[2] == 0))
      goto LAB_01b02754;
      lVar1 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar1 == 0) goto LAB_01b02754;
      uVar2 = 0;
      if ((ulong)uVar6 != 0) {
        uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar6);
      }
      if (*puVar10 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if ((DAT_05326ce8 <= uVar2) ||
         (uVar3 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar2 * 2), uVar6 = (uint)uVar3,
         0x5b5 < uVar3)) goto LAB_01b02754;
    }
    if ((int)*(uint *)(DAT_0532a7e8 + 0x1c0) < 1) {
      if (((*(long *)(DAT_0532a7e8 + 0xb0) != 0) &&
          (puVar8 = *(uint **)(*(long *)(DAT_0532a7e8 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
         (((*(uint *)(DAT_0532a7e8 + 200) <= uVar6 ||
           (*(char *)(*(long *)(DAT_0532a7e8 + 0xd0) + (long)(int)uVar6) != '\0')) &&
          (((uVar6 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar8 = (uint *)((ulong)(puVar8[1] * uVar6 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                         (long)puVar8);
        if (puVar8 == (uint *)0x0) {
          uVar6 = 0;
          goto LAB_01b028fc;
        }
        goto LAB_01b02794;
      }
    }
    else if (uVar6 < *(uint *)(DAT_0532a7e8 + 0x1c0)) {
      if (*(uint *)(DAT_0532a7e8 + 0x1b0) <= uVar6) {
        uVar6 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a7e8 + 0x1b8) + (ulong)uVar6 * 8);
      uVar6 = 0;
      if (puVar8 == (uint *)0x0) goto LAB_01b028fc;
LAB_01b02794:
      uVar6 = *puVar8;
      if (uVar6 != 0 && puVar8 != (uint *)(ulong)uVar6) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar6 = *puVar10;
        if (((uVar6 != 0) && (uVar2 = puVar10[1], uVar2 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar7 = 0;
            if ((ulong)uVar2 != 0) {
              uVar7 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar2);
            }
            bVar4 = uVar7 <= uVar6;
            bVar5 = uVar6 == uVar7;
            puVar8 = &DAT_053271a0;
            goto LAB_01b02860;
          }
        }
      }
    }
  }
LAB_01b028f8:
  uVar6 = 0;
LAB_01b028fc:
  return uVar6 == param_2;
}

