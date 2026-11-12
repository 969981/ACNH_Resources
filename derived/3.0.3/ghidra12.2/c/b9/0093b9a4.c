
ulong FUN_0093b9a4(undefined8 param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  uint *puVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  ushort uVar18;
  int iVar19;
  uint *puVar20;
  ushort *puVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  if (DAT_05292338 == 0) {
    return 7;
  }
  if (DAT_05aed670 == 0) {
    return 7;
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return 7;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                     (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar6 = FUN_006bd550(*puVar8,0);
  puVar5 = PTR_DAT_04bb43c0;
  if (iVar6 != 0x758f7eaf) {
    return 7;
  }
  if (DAT_05aed670 == 0) {
    return 7;
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return 7;
  }
  if (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) == 0) {
    return 7;
  }
  psVar4 = (short *)PTR_DAT_04bb37e0;
  if (DAT_05292338 != 0) {
    psVar4 = (short *)(DAT_05292338 + 0xe60);
  }
  if (*psVar4 == -2) {
    return 7;
  }
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(psVar4);
  lVar22 = *(long *)puVar5;
  if (lVar22 == 0) {
    return 7;
  }
  lVar23 = *(long *)(lVar23 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
  if (*(uint *)(lVar23 + 0x1d8) <= uVar7) {
    return 7;
  }
  if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return 7;
  }
  local_78 = 0;
  local_80 = *(undefined4 *)psVar4;
  uStack_7c = *(undefined4 *)(psVar4 + 2);
  local_88 = &PTR_FUN_04a36b50;
  uVar7 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar22 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(psVar4);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (uVar7 < *(uint *)(lVar22 + 0x1d8)) {
        lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8);
        if (lVar22 != 0) {
          local_78 = lVar22;
        }
      }
    }
  }
  uVar7 = FUN_01b020f0(&local_88);
  puVar5 = PTR_DAT_04bb46d0;
  uVar9 = FUN_017c0910(*(undefined8 *)PTR_DAT_04bb46d0,uVar7);
  if ((uVar9 & 1) == 0) {
    return 7;
  }
  if (DAT_05292338 == 0) {
    iVar6 = 0;
    iVar16 = 0;
    iVar19 = 0x10;
    iVar13 = 0x10;
  }
  else {
    iVar6 = *(int *)(DAT_05292338 + 0xd88);
    iVar16 = *(int *)(DAT_05292338 + 0xd8c);
    iVar13 = *(int *)(DAT_05292338 + 0xd98);
    iVar19 = *(int *)(DAT_05292338 + 0xd9c);
  }
  iVar3 = iVar6;
  if (iVar13 <= iVar6) {
    iVar3 = iVar13;
  }
  if (iVar6 <= iVar13) {
    iVar6 = iVar13;
  }
  iVar13 = iVar16;
  if (iVar19 <= iVar16) {
    iVar13 = iVar19;
  }
  if (iVar16 <= iVar19) {
    iVar16 = iVar19;
  }
  if (*param_2 < (float)iVar3 * 5.0) {
    return 7;
  }
  if ((float)iVar6 * 5.0 + 5.0 <= *param_2) {
    return 7;
  }
  if (param_2[2] < (float)iVar13 * 5.0) {
    return 7;
  }
  if ((float)iVar16 * 5.0 + 5.0 <= param_2[2]) {
    return 7;
  }
  lVar22 = *(long *)puVar5;
  uVar1 = (iVar6 - iVar3) + 1;
  uVar2 = (iVar16 - iVar13) + 1;
  uVar17 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x200);
  if ((uVar17 < *(uint *)(lVar22 + 0x1e0)) &&
     (puVar14 = *(uint **)(*(long *)(lVar22 + 0x1e8) + (long)(int)uVar17 * 8),
     puVar14 != (uint *)0x0)) {
    uVar17 = *puVar14;
    uVar15 = 0;
    if ((uVar17 != 0) && (puVar14 != (uint *)(ulong)uVar17)) {
      puVar20 = (uint *)((long)puVar14 - (long)(ulong)uVar17);
      uVar15 = 0;
      if (*puVar20 != 0) {
        uVar17 = puVar20[1];
        if ((uVar17 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
          lVar22 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar22 = 0x1c;
          }
          lVar22 = (long)puVar20 + lVar22 + (ulong)(ushort)puVar20[2] * 8;
          if (lVar22 != 0) {
            uVar10 = 0;
            if ((ulong)uVar17 != 0) {
              uVar10 = (uint)((ulong)((long)puVar14 - lVar22) / (ulong)uVar17);
            }
            if (*puVar20 <= uVar10) {
              uVar10 = 0xffffffff;
            }
            if ((uVar10 < DAT_05292fd8) &&
               (uVar15 = *(ushort *)(DAT_05292fe0 + (long)(int)uVar10 * 2), uVar15 < 2))
            goto LAB_0093bcd4;
          }
        }
        uVar15 = 0;
      }
    }
LAB_0093bcd4:
    uVar18 = 0;
    uVar17 = *puVar14;
    if ((uVar17 != 0) && (puVar14 != (uint *)(ulong)uVar17)) {
      puVar20 = (uint *)((long)puVar14 - (long)(ulong)uVar17);
      uVar18 = 0;
      if (*puVar20 != 0) {
        uVar17 = puVar20[1];
        if ((uVar17 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
          lVar22 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar22 = 0x1c;
          }
          lVar22 = (long)puVar20 + lVar22 + (ulong)(ushort)puVar20[2] * 8;
          if (lVar22 != 0) {
            uVar10 = 0;
            if ((ulong)uVar17 != 0) {
              uVar10 = (uint)((ulong)((long)puVar14 - lVar22) / (ulong)uVar17);
            }
            if (*puVar20 <= uVar10) {
              uVar10 = 0xffffffff;
            }
            if ((uVar10 < DAT_05292fe8) &&
               (uVar18 = *(ushort *)(DAT_05292ff0 + (long)(int)uVar10 * 2), uVar18 < 2))
            goto LAB_0093bd78;
          }
        }
        goto LAB_0093bd74;
      }
    }
  }
  else {
    uVar15 = 0;
LAB_0093bd74:
    uVar18 = 0;
  }
LAB_0093bd78:
  if (((uVar15 == 0) || (0xd < uVar1)) || ((1 << (ulong)(uVar1 & 0x1f) & 0x3300U) == 0)) {
    uVar17 = 4;
  }
  else {
    uVar17 = 4;
    if ((uVar2 & 0xfffffffa) == 8) {
      uVar17 = 5;
    }
  }
  uVar10 = uVar17;
  if ((uVar18 != 0) && (uVar10 = 5, (uVar2 & 0xfffffffe) != 0x14 && (uVar1 & 0xfffffffe) != 0x14)) {
    uVar10 = uVar17;
  }
  uVar1 = *(uint *)(DAT_04cf8698 + 0xde0);
  if (0 < (int)uVar1) {
    iVar6 = 0;
    lVar22 = 0;
    puVar21 = *(ushort **)(DAT_04cf8698 + 0xde8);
    do {
      if ((uint)*puVar21 == (uVar7 & 0xffff)) {
        if ((-1 < iVar6) && (iVar6 < *(int *)(DAT_04cf8698 + 0xe20))) {
          lVar12 = *(long *)(DAT_04cf8698 + 0xe28) - lVar22;
          lVar23 = lVar12 + (ulong)uVar10 * 0x28;
          if (5 < uVar10) {
            lVar23 = lVar12;
          }
          if (*(long *)(lVar23 + 0x20) != 0) {
            lVar22 = (*(long *)(DAT_04cf8698 + 0xe28) + (ulong)uVar10 * 0x28) - lVar22;
            if (5 < uVar10) {
              lVar22 = lVar12;
            }
            lVar22 = lVar22 + 8;
            goto LAB_0093be8c;
          }
        }
        break;
      }
      lVar22 = lVar22 + -0xf0;
      iVar6 = iVar6 + 1;
      puVar21 = puVar21 + 1;
    } while ((ulong)uVar1 * 0xf0 + lVar22 != 0);
    lVar22 = 0;
LAB_0093be8c:
    uVar9 = 0;
    do {
      if ((uint)(*(ushort **)(DAT_04cf8698 + 0xde8))[uVar9] == (uVar7 & 0xffff)) {
        if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(DAT_04cf8698 + 0xe20))) {
          lVar12 = *(long *)(DAT_04cf8698 + 0xe28) + (uVar9 & 0xffffffff) * 0xf0;
          lVar23 = lVar12 + (ulong)uVar10 * 0x28;
          if (5 < uVar10) {
            lVar23 = lVar12;
          }
          lVar23 = *(long *)(lVar23 + 0x20);
          goto LAB_0093bef0;
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
    lVar23 = 0;
LAB_0093bef0:
    if (lVar22 != 0) goto LAB_0093bf64;
  }
  iVar6 = FUN_0180e2d0(7);
  if (iVar6 == 2) {
    uVar10 = 0;
  }
  else if (iVar6 == 3) {
    uVar10 = 1;
  }
  else {
    if (iVar6 != 4) {
      return 7;
    }
    uVar9 = FUN_0180e4c0();
    uVar10 = 2;
    if ((uVar9 & 1) != 0) {
      uVar10 = 3;
    }
  }
  lVar22 = FUN_0095a080(DAT_04cf8698,uVar7,uVar10);
  lVar23 = FUN_0095a160(DAT_04cf8698,uVar7,uVar10);
  if (lVar22 == 0) {
    uVar9 = FUN_017c0740(*(undefined8 *)puVar5,uVar7);
    return uVar9;
  }
LAB_0093bf64:
  if (DAT_05292338 == 0) {
    fVar24 = 40.0;
    fVar26 = 40.0;
  }
  else {
    fVar24 = *(float *)(DAT_05292338 + 0xd74);
    fVar26 = *(float *)(DAT_05292338 + 0xd7c);
  }
  fVar24 = *param_2 - fVar24;
  fVar25 = param_2[2];
  if (((uVar10 - 4 < 2) || (uVar10 < 2)) && (uVar9 = FUN_0180e4c0(), (uVar9 & 1) != 0)) {
    fVar27 = -fVar24;
    fVar24 = fVar25 - fVar26;
  }
  else {
    fVar27 = fVar25 - fVar26;
  }
  if (lVar23 != 0) {
    fVar27 = fVar27 - (float)*(int *)(lVar22 + 0x10) * 5.0;
    fVar24 = fVar24 - (float)*(int *)(lVar22 + 0xc) * 5.0;
    uVar7 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
    if (-1 < (int)uVar7) {
      if (*(uint *)(lVar22 + 4) <= uVar7) {
        return 7;
      }
      uVar1 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
      if ((int)uVar1 < 0) {
        return 7;
      }
      if (*(uint *)(lVar22 + 8) <= uVar1) {
        return 7;
      }
      pbVar11 = (byte *)(lVar23 + (ulong)(uVar7 + *(uint *)(lVar22 + 4) * uVar1) * 4);
      fVar24 = fVar24 + (float)(int)uVar7 * -5.0;
      fVar27 = fVar27 + (float)(int)uVar1 * -5.0;
      fVar26 = fVar24 + fVar27 + -5.0;
      if (0.0 <= fVar27 - fVar24) {
        if (0.0 <= fVar26) {
          pbVar11 = pbVar11 + 2;
        }
        else {
          pbVar11 = pbVar11 + 1;
        }
      }
      else if (0.0 <= fVar26) {
        pbVar11 = pbVar11 + 3;
      }
      return (ulong)*pbVar11;
    }
  }
  return 7;
}

