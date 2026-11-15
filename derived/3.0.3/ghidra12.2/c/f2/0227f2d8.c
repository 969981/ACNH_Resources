
/* WARNING: Removing unreachable block (ram,0x0227f48c) */

undefined8 FUN_0227f2d8(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_a0;
  float fStack_9c;
  undefined4 local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  
  local_a0 = 4.2039e-45;
  if ((*(byte *)(param_1 + 0x29c) >> 3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
    *(undefined4 *)(param_1 + 0x6b8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x6d4) = 0x3dcccccd;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar15 = &DAT_0548e140;
LAB_0227f3a8:
    if (*pbVar15 < 8) goto LAB_0227f414;
LAB_0227f3b4:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0227f40c:
      pbVar15 = &DAT_0548e168;
      goto LAB_0227f414;
    }
    lVar17 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar17 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar17 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar15 = (byte *)(lVar17 + 0x471);
      }
    }
    uVar14 = (uint)*pbVar15;
    if (7 < *pbVar15) goto LAB_0227f40c;
  }
  else {
    pbVar15 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar15 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0227f3a8;
      }
      goto LAB_0227f3b4;
    }
LAB_0227f414:
    uVar14 = (uint)*pbVar15;
    if (7 < uVar14) {
      uVar14 = 0xff;
    }
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_054f0960);
      puVar18 = &DAT_054f0958;
      if (iVar8 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar18 = &DAT_054f0958;
    }
  }
  else {
    puVar18 = (undefined8 *)(DAT_054f5738 + 0x204);
    if (uVar14 < 8) {
      puVar18 = puVar18 + uVar14;
    }
  }
  if ((*(uint *)((long)puVar18 + 4) >> 0xf & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2a4) != 0) {
    return 0;
  }
  local_a0 = 1.12104e-44;
  if (*(long *)(param_1 + 0x70) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(*(long *)(param_1 + 0x70) + 0x280);
    if (iVar8 == 8) {
      return 0;
    }
    if (iVar8 == 7) {
      return 0;
    }
  }
  local_90 = 9.80909e-45;
  local_84 = 2;
  if (iVar8 == 2) {
    return 0;
  }
  fVar29 = *(float *)(param_1 + 0x2dc);
  fVar30 = *(float *)(param_1 + 0x2e0);
  fVar31 = *(float *)(param_1 + 0x2e4);
  pfVar9 = (float *)FUN_0252d9bc(0);
  lVar17 = FUN_0252dec4(0);
  if (pfVar9 == (float *)0x0) {
    return 0;
  }
  if (lVar17 == 0) {
    return 0;
  }
  if ((1.0 <= *(float *)(param_1 + 0x33c)) ||
     (local_a0 = 7.00649e-45, (*(byte *)(param_1 + 0x29c) >> 5 & 1) != 0)) {
    *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) * 1.1;
    *(float *)(param_1 + 0x328) = *(float *)(param_1 + 0x328) * 1.1;
    *(float *)(param_1 + 0x32c) = *(float *)(param_1 + 0x32c) * 1.1;
    return 0;
  }
  uVar10 = FUN_0227ff88(param_1,pfVar9);
  puVar4 = PTR_DAT_04bb27c8;
  if ((uVar10 & 1) == 0) {
    pbVar15 = (byte *)(param_1 + 0x29c);
    *pbVar15 = *pbVar15 & 0xf7;
    *pbVar15 = *pbVar15 & 0xef;
    *pbVar15 = *pbVar15 & 0xf7;
    return 0;
  }
  fVar19 = pfVar9[1];
  fVar21 = -fVar19;
  if (0.0 <= fVar19) {
    fVar21 = fVar19;
  }
  fVar20 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1 + 0x2dc,0);
  fVar19 = -fVar20;
  if (0.0 <= fVar20) {
    fVar19 = fVar20;
  }
  fVar21 = fVar21 - fVar19;
  fVar19 = -fVar21;
  if (0.0 <= fVar21) {
    fVar19 = fVar21;
  }
  if (10.0 < fVar19) {
LAB_0227f8e8:
    *(byte *)(param_1 + 0x29c) = *(byte *)(param_1 + 0x29c) & 0xf7;
    return 0;
  }
  if (*(float *)((long)param_2 + 0x14) <= 0.5) {
    local_a0 = 4.2039e-45;
    *(byte *)(param_1 + 0x29c) = *(byte *)(param_1 + 0x29c) & 0xf7;
    lVar17 = FUN_02276ab4(param_1);
    if (lVar17 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x2d8) < 1) {
      return 0;
    }
    *(undefined4 *)(*(long *)(lVar17 + 0x278) + 0x40) = 0x200;
    return 0;
  }
  uVar14 = *(uint *)(param_2 + 3);
  if ((*(byte *)(param_1 + 0x29c) >> 4 & 1) != 0) {
    iVar8 = 0x15555560;
    iVar13 = (int)((float)(int)(uVar14 - *(int *)(param_1 + 0x6d0)) * 0.1);
    if (iVar13 < 1) {
      iVar8 = 0;
    }
    iVar16 = 0;
    if (iVar13 < 1) {
      iVar16 = -0x15555560;
    }
    iVar1 = iVar13;
    if (iVar8 <= iVar13) {
      iVar1 = iVar8;
    }
    if (iVar16 <= iVar13) {
      iVar16 = iVar1;
    }
    uVar14 = iVar16 + *(int *)(param_1 + 0x6d0);
  }
  *(uint *)(param_1 + 0x6d0) = uVar14;
  uVar10 = (ulong)(uVar14 >> 0x18);
  fVar19 = *(float *)(param_1 + 0x324);
  fVar27 = *(float *)(param_1 + 0x328);
  fVar20 = *(float *)(param_1 + 0x32c);
  fVar21 = (float)(uVar14 & 0xffffff) * 5.9604645e-08;
  fVar26 = (float)(&DAT_04199798)[uVar10 * 4] + fVar21 * (float)(&DAT_0419979c)[uVar10 * 4];
  fVar21 = (float)(&DAT_041997a0)[uVar10 * 4] + fVar21 * (float)(&DAT_041997a4)[uVar10 * 4];
  local_a0 = 5.60519e-45;
  if ((*(byte *)(param_1 + 0x29c) >> 4 & 1) == 0) {
    uVar14 = 0xfffe;
  }
  else {
    uVar14 = 0xfffb;
  }
  fVar22 = (*(float *)(param_1 + 0x2e0) - pfVar9[1]) * 0.0 +
           fVar26 * (*(float *)(param_1 + 0x2dc) - *pfVar9) +
           fVar21 * (*(float *)(param_1 + 0x2e4) - pfVar9[2]);
  if ((fVar22 < (float)(uVar14 | 0x3f7f0000)) || (fVar22 < 0.9999997)) goto LAB_0227f8e8;
  fVar22 = *(float *)(param_1 + 0x2c8);
  lVar11 = FUN_02280018(param_1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0xf0) + 0xf0))();
  if (fVar22 < *pfVar12) {
    *(byte *)(param_1 + 0x29c) = *(byte *)(param_1 + 0x29c) & 0xf7;
    *(undefined4 *)(param_1 + 0x6ec) = 0x3f4ccccd;
    return 1;
  }
  fVar22 = *(float *)((long)param_2 + 0x14) * *(float *)(param_1 + 0x6d4);
  uVar14 = *(int *)(param_1 + 0x2d8) - 1;
  if (uVar14 < 6) {
    fVar23 = *(float *)(&DAT_0417a058 + (long)(int)uVar14 * 4);
  }
  else {
    fVar23 = 2.5;
  }
  fVar23 = 2.0 / fVar23;
  lVar11 = *(long *)puVar4 + 0x28;
  fVar24 = fVar26 * fVar22 * fVar23;
  fVar22 = fVar21 * fVar22 * fVar23;
  fVar25 = fVar24 + 0.0;
  fVar28 = fVar22 + 0.0;
  *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) + fVar24;
  *(float *)(param_1 + 0x328) = fVar23 * 0.0 + *(float *)(param_1 + 0x328);
  *(float *)(param_1 + 0x32c) = fVar22 + *(float *)(param_1 + 0x32c);
  fVar24 = (float)FUN_0093b024(lVar11,param_1 + 0x2dc,0);
  local_a0 = fVar25 + fVar25 + *(float *)(param_1 + 0x2dc);
  fStack_9c = *(float *)(param_1 + 0x2e0) + 0.0;
  local_98 = fVar28 + fVar28 + *(float *)(param_1 + 0x2e4);
  fVar22 = (float)FUN_0093b024(lVar11,&local_a0,0);
  fVar24 = fVar24 - fVar22;
  fVar22 = -fVar24;
  if (0.0 <= fVar24) {
    fVar22 = fVar24;
  }
  if ((2.0 < fVar22) && (1.2 < *(float *)(param_1 + 0x33c))) {
    *(byte *)(param_1 + 0x29c) = *(byte *)(param_1 + 0x29c) & 0xf7;
    *(float *)(param_1 + 0x2dc) = fVar25 + *(float *)(param_1 + 0x2dc);
    *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x2e0) + 0.0;
    *(float *)(param_1 + 0x2e4) = fVar28 + *(float *)(param_1 + 0x2e4);
    return 0;
  }
  local_88 = fVar31 + fVar28;
  fVar32 = *(float *)(param_1 + 0x2e4);
  fVar24 = *(float *)(param_1 + 0x2dc);
  fVar31 = pfVar9[2];
  local_90 = fVar29 + fVar25;
  fStack_8c = fVar30 + 0.0;
  fVar29 = *pfVar9;
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(lVar17 + 4);
  uVar14 = FUN_006f0400(*(float *)(param_1 + 0x2dc) - *pfVar9,
                        *(float *)(param_1 + 0x2e4) - pfVar9[2]);
  iVar13 = (int)((float)(int)(uVar14 - *(int *)((long)param_2 + 0xc)) * 0.2);
  iVar8 = 0x7fffffff;
  if (iVar13 < 1) {
    iVar8 = 0;
  }
  iVar16 = 0;
  if (iVar13 < 1) {
    iVar16 = -0x7fffffff;
  }
  iVar1 = iVar13;
  if (iVar8 <= iVar13) {
    iVar1 = iVar8;
  }
  if (iVar16 <= iVar13) {
    iVar16 = iVar1;
  }
  *(int *)((long)param_2 + 0xc) = iVar16 + *(int *)((long)param_2 + 0xc);
  fVar30 = fVar27 * 0.0 + fVar19 * fVar26 + fVar20 * fVar21 + 0.3;
  if (fVar30 <= 0.0) goto LAB_0227f8e8;
  fVar29 = fVar29 - fVar24;
  fVar31 = fVar31 - fVar32;
  fVar21 = (*(float *)(param_1 + 0x2c8) / 1.2) * -3.0 + 4.0;
  fVar29 = SQRT(fVar31 * fVar31 + fVar29 * fVar29);
  fVar31 = *(float *)(param_1 + 0x6b8);
  if (fVar21 <= fVar31) {
    if (fVar21 < fVar31) {
      fVar19 = fVar31 + -0.05;
      bVar5 = false;
      bVar6 = false;
      if (fVar19 <= fVar31) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar19) && !NAN(fVar21)) {
          bVar5 = fVar19 == fVar21;
          bVar6 = fVar21 <= fVar19;
        }
      }
      if (bVar6 && !bVar5) {
        fVar21 = fVar19;
      }
      goto LAB_0227fc68;
    }
  }
  else {
    fVar19 = fVar31 + 0.05;
    bVar5 = false;
    bVar6 = false;
    if (fVar31 <= fVar19) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar19) && !NAN(fVar21)) {
        bVar5 = fVar19 < fVar21;
        bVar6 = false;
      }
    }
    if (bVar5 != bVar6) {
      fVar21 = fVar19;
    }
LAB_0227fc68:
    *(float *)(param_1 + 0x6b8) = fVar21;
  }
  fVar31 = *(float *)(param_1 + 0x2cc);
  lVar17 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar17 + 0x210) + 0xf0))(lVar17 + 0x210);
  fVar31 = (fVar31 + *pfVar9) - *(float *)(param_1 + 0x6b8);
  if (fVar31 <= fVar29) {
    if (fVar29 <= fVar31) goto LAB_0227fcc8;
    fVar30 = fVar29 - fVar30;
    bVar5 = true;
    if ((fVar31 < fVar30) && (bVar5 = false, !NAN(fVar29) && !NAN(fVar30))) {
      bVar5 = fVar29 < fVar30;
    }
  }
  else {
    fVar30 = fVar30 + fVar29;
    bVar5 = true;
    if ((fVar30 < fVar31) && (bVar5 = false, !NAN(fVar30) && !NAN(fVar29))) {
      bVar5 = fVar30 < fVar29;
    }
  }
  fVar29 = fVar31;
  if (!bVar5) {
    fVar29 = fVar30;
  }
LAB_0227fcc8:
  fVar30 = cosf((float)uVar14 * 1.4629181e-09);
  fVar31 = sinf((float)uVar14 * 1.4629181e-09);
  local_90 = local_90 - (fVar29 * fVar31 + fVar30 * 0.0);
  local_88 = local_88 - (fVar29 * fVar30 - fVar31 * 0.0);
  fStack_8c = (float)FUN_0093b024(lVar11,&local_90,0);
  if ((fVar22 <= 2.0) || (*(float *)(param_1 + 0x33c) <= 1.2)) {
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  FUN_0227cbe4(&local_a0);
  if (((CONCAT44(fStack_9c,local_a0) != 0) && ((char)local_98 != '\0')) && (local_98._1_1_ != '\0'))
  {
    uVar7 = FUN_0228ba90(CONCAT44(fStack_9c,local_a0),*(undefined4 *)(param_1 + 0x2a0),&local_90);
    uVar14 = uVar14 & (uVar7 ^ 1);
  }
  if (uVar14 == 0) {
    *(byte *)(param_1 + 0x29c) = *(byte *)(param_1 + 0x29c) & 0xf7;
    *(float *)(param_1 + 0x2dc) = fVar25 + *(float *)(param_1 + 0x2dc);
    *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x2e0) + 0.0;
    *(float *)(param_1 + 0x2e4) = fVar28 + *(float *)(param_1 + 0x2e4);
    return 0;
  }
  *(float *)(param_2 + 1) = local_88;
  *param_2 = CONCAT44(fStack_8c,local_90);
  *(float *)(param_1 + 0x2dc) = fVar25 + *(float *)(param_1 + 0x2dc);
  *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x2e0) + 0.0;
  *(float *)(param_1 + 0x2e4) = fVar28 + *(float *)(param_1 + 0x2e4);
  *(float *)(param_2 + 2) =
       SQRT(*(float *)(param_1 + 0x32c) * *(float *)(param_1 + 0x32c) +
            *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x324));
  fVar23 = 0.125 / fVar23;
  if ((fVar23 <= *(float *)(param_1 + 0x6d4)) ||
     (fVar29 = (*(float *)(param_1 + 0x2c8) + -0.4) / 0.7,
     fVar29 = *(float *)(param_1 + 0x6d4) + ((1.0 - fVar29) * 0.5 + fVar29 * 0.125) * 0.1,
     fVar23 < fVar29)) {
    fVar29 = fVar23;
  }
  *(float *)(param_1 + 0x6d4) = fVar29;
  pbVar15 = (byte *)(param_1 + 0x29c);
  *pbVar15 = *pbVar15 | 8;
  *pbVar15 = *pbVar15 | 0x10;
  return 2;
}

