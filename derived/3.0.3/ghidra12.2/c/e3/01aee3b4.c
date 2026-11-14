
uint FUN_01aee3b4(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ushort uVar12;
  uint *puVar13;
  long lVar14;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_1 + 8);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
        (iVar7 = FUN_01af93e8(param_1), iVar7 != 0)) &&
       (uVar8 = FUN_01ae59b0(param_1), (uVar8 & 1) == 0)) {
      uVar8 = FUN_01ae59b0(param_1);
      bVar1 = *(byte *)(param_1 + 10) >> 2 & 1;
      if ((uVar8 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 4;
      }
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  uVar8 = FUN_01ae59b0(param_1);
  bVar2 = *(byte *)(param_1 + 10);
  bVar1 = bVar2 >> 2 & 1;
  if ((uVar8 & 1) == 0) {
    bVar1 = bVar2 & 4;
  }
  if (bVar1 != 0) {
    return 0;
  }
  puVar11 = *(uint **)(param_1 + 0x10);
  if (puVar11 == (uint *)0x0) {
    uVar12 = 0xbc;
  }
  else {
    uVar6 = *puVar11;
    uVar12 = 0;
    if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
      puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
      uVar12 = 0;
      if (*puVar13 != 0) {
        uVar6 = puVar13[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar14 != 0) {
            uVar9 = 0;
            if ((ulong)uVar6 != 0) {
              uVar9 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar6);
            }
            if (*puVar13 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < DAT_05326ec0) &&
               (uVar12 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar9 * 2), uVar12 < 0xbd))
            goto LAB_01aee540;
          }
        }
        uVar12 = 0;
      }
    }
  }
LAB_01aee540:
  if ((uVar12 & 0xfffd) == 0xa4) {
    uVar6 = *puVar11;
    uVar9 = 0;
    if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
      puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
      if ((*puVar13 != 0) && ((uVar6 = puVar13[1], uVar6 != 0 && ((ulong)(ushort)puVar13[2] != 0))))
      {
        lVar14 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar14 != 0) {
          uVar9 = 0;
          if ((ulong)uVar6 != 0) {
            uVar9 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar6);
          }
          if (*puVar13 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          if ((uVar9 < DAT_05326e60) &&
             (uVar12 = *(ushort *)(DAT_05326e68 + (long)(int)uVar9 * 2), uVar9 = (uint)uVar12,
             uVar12 < 0x1c)) goto LAB_01aee5e0;
        }
      }
      uVar9 = 0;
    }
LAB_01aee5e0:
    if ((bVar2 >> 3 & 1) == 0) {
      return (uint)(uVar9 - 0xf < 3);
    }
    return uVar9;
  }
  if ((bVar2 >> 3 & 1) == 0) {
    uVar6 = *puVar11;
    if (uVar6 == 0) {
      return 0;
    }
    if (puVar11 == (uint *)(ulong)uVar6) {
      return 0;
    }
    puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
    uVar6 = *puVar13;
    if (uVar6 == 0) {
      return 0;
    }
    uVar9 = puVar13[1];
    if (uVar9 == 0) {
      return 0;
    }
    if ((ulong)(ushort)puVar13[2] == 0) {
      return 0;
    }
    lVar14 = 0xc;
    if (*(char *)((long)puVar13 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
    if (lVar14 == 0) {
      return 0;
    }
    uVar10 = 0;
    if ((ulong)uVar9 != 0) {
      uVar10 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar9);
    }
    bVar4 = uVar10 <= uVar6;
    bVar5 = uVar6 == uVar10;
    puVar11 = &DAT_05326e60;
    goto LAB_01aee788;
  }
  uVar12 = 0x21;
  if (puVar11 != (uint *)0x0) {
    uVar6 = *puVar11;
    uVar12 = 0;
    if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
      puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
      uVar12 = 0;
      if (*puVar13 != 0) {
        uVar6 = puVar13[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar14 != 0) {
            uVar9 = 0;
            if ((ulong)uVar6 != 0) {
              uVar9 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar6);
            }
            if (*puVar13 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < DAT_05326af0) &&
               (uVar12 = *(ushort *)(DAT_05326af8 + (long)(int)uVar9 * 2), uVar12 < 0xa2))
            goto LAB_01aee700;
          }
        }
        uVar12 = 0;
      }
    }
  }
LAB_01aee700:
  if ((uVar12 == 0x21) || (puVar11 = (uint *)FUN_01ada7a0(param_1), puVar11 == (uint *)0x0)) {
    return 0xc;
  }
  uVar6 = *puVar11;
  if (uVar6 == 0) {
    return 0;
  }
  if (puVar11 == (uint *)(ulong)uVar6) {
    return 0;
  }
  puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
  uVar6 = *puVar13;
  if (uVar6 == 0) {
    return 0;
  }
  uVar9 = puVar13[1];
  if (uVar9 == 0) {
    return 0;
  }
  if ((ulong)(ushort)puVar13[2] == 0) {
    return 0;
  }
  lVar14 = 0xc;
  if (*(char *)((long)puVar13 + 10) != '\0') {
    lVar14 = 0x1c;
  }
  lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
  if (lVar14 == 0) {
    return 0;
  }
  uVar10 = 0;
  if ((ulong)uVar9 != 0) {
    uVar10 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar9);
  }
  bVar4 = uVar10 <= uVar6;
  bVar5 = uVar6 == uVar10;
  puVar11 = &DAT_05326b70;
LAB_01aee788:
  if (!bVar4 || bVar5) {
    uVar10 = 0xffffffff;
  }
  if ((uVar10 < *puVar11) &&
     (uVar12 = *(ushort *)(*(long *)(puVar11 + 2) + (long)(int)uVar10 * 2), uVar12 < 0x1c)) {
    return (uint)uVar12;
  }
  return 0;
}

