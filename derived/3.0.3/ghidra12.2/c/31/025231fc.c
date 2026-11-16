
undefined8 FUN_025231fc(byte *param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  ushort uVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  undefined8 local_a0;
  float local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  float local_88;
  undefined4 uStack_84;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar11 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar11 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar6 = *puVar11;
  }
  else {
    uVar6 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar6 == 0) {
    return 0;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return 0;
  }
  plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + ((ulong)(uVar6 >> 0x11) & 0x7ff8))
  ;
  if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar14 + 0x46) != uVar6)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar8 + 0x60))();
    if (iVar4 < 0x11) {
      uVar6 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0252330c;
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0252330c:
    uVar6 = 0;
  }
  if (plVar14 == (long *)0x0) {
    return 0;
  }
  lVar10 = plVar14[0x2a];
  uVar1 = *(uint *)(plVar14 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3770);
  if ((int)lVar10 != 1) {
    return 0;
  }
  if ((uVar5 & uVar6) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  plVar14[0x330] = 0;
  plVar14[0x331] = 0;
  plVar14[0x332] = 0;
  plVar14[0x333] = 0;
  plVar14[0x334] = 0;
  plVar14[0x335] = 0;
  plVar14[0x336] = 0;
  plVar14[0x337] = 0;
  plVar14[0x338] = 0;
  plVar14[0x339] = 0;
  plVar14[0x33a] = 0;
  *(undefined2 *)(plVar14 + 0x33b) = 0;
  plVar14[0x32c] = plVar14[0x31c];
  plVar14[0x32d] = plVar14[0x31d];
  plVar14[0x32e] = plVar14[0x31e];
  plVar14[0x32f] = plVar14[799];
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(plVar14[0xd] + 0x2b4));
  fVar17 = sinf(fVar16 * 1.4629181e-09);
  fVar16 = cosf(fVar16 * 1.4629181e-09);
  fVar19 = fVar17 * 0.0;
  fVar30 = (fVar17 + 0.0 + fVar19 * 0.0 + fVar16 * 0.0) * 10.0;
  fVar29 = (fVar16 + (fVar16 * 0.0 * 0.0 - fVar17 * 0.0) + 0.0) * 10.0;
  fVar28 = (fVar19 + (fVar19 * 0.0 + 1.0) * 0.0 + fVar16 * 0.0 * 0.0 + 0.0) * 10.0;
  fVar17 = (float)param_2 * 90.0 * 0.017453292;
  fVar16 = sinf(fVar17);
  fVar17 = cosf(fVar17);
  fVar20 = fVar16 * 0.0;
  lVar10 = plVar14[0xd];
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,param_2);
  uVar6 = *(uint *)(lVar10 + 0x2b4);
  fVar26 = (float)uVar6 * 1.4629181e-09;
  fVar19 = sinf(fVar26);
  fVar26 = cosf(fVar26);
  fVar21 = *(float *)(lVar10 + 0x278);
  fVar23 = *(float *)(lVar10 + 0x27c);
  fVar24 = *(float *)(lVar10 + 0x280);
  iVar4 = -0x40000000;
  if ((float)local_a0 != 4.2039e-45) {
    iVar4 = (uint)((float)local_a0 == 1.4013e-45) << 0x1e;
  }
  fVar25 = fVar19 * 0.0;
  fVar27 = (float)(iVar4 + uVar6) * 1.4629181e-09;
  fVar18 = sinf(fVar27);
  fVar27 = cosf(fVar27);
  fVar22 = fVar18 * 0.0;
  fVar21 = fVar21 + fVar25 * 0.0 + fVar26 * 0.0 + (fVar19 + 0.0) * -1.3 + 0.0 +
           fVar22 * 0.0 + fVar27 * 0.0 + (fVar18 + 0.0) * 1.3 + 0.0;
  fVar23 = fVar23 + (fVar25 * 0.0 + 1.0) * 0.0 + fVar26 * 0.0 * 0.0 + fVar25 * -1.3 + 0.0 +
           (fVar22 * 0.0 + 1.0) * 0.0 + fVar27 * 0.0 * 0.0 + fVar22 * 1.3 + 0.0;
  fVar19 = fVar24 + (fVar26 * 0.0 * 0.0 - fVar19 * 0.0) + fVar26 * -1.3 + 0.0 +
           (fVar27 * 0.0 * 0.0 - fVar18 * 0.0) + fVar27 * 1.3 + 0.0;
  FUN_016d73fc(&local_88,plVar14[0xd] + 0x278);
  puVar3 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_88);
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) goto LAB_02523858;
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02523858;
  local_90 = 0;
  local_a0 = PTR_DAT_04bc0510 + 0x10;
  local_98 = local_88;
  uStack_94 = uStack_84;
  uVar6 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar3 == 0) {
LAB_02523760:
    uVar12 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02523760;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(&local_88);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar11 == (uint *)0x0)) goto LAB_02523760;
    uVar6 = *puVar11;
    uVar12 = 0;
    if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
      puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
      uVar12 = 0;
      if (*puVar13 != 0) {
        uVar6 = puVar13[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar13 + lVar10 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar1 * 2),
               uVar12 < 0x52)) goto LAB_02523764;
          }
        }
        goto LAB_02523760;
      }
    }
  }
LAB_02523764:
  puVar3 = PTR_DAT_04bb2720;
  if (uVar12 == 3) {
    lVar10 = plVar14[0xd];
    fVar21 = *(float *)(lVar10 + 0x278);
    fVar23 = *(float *)(lVar10 + 0x27c);
    fVar19 = *(float *)(lVar10 + 0x280);
  }
  lVar10 = *(long *)PTR_DAT_04bb2720;
  iVar4 = 0;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x330) == 0) {
      iVar4 = 0;
    }
    else {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar7 = FUN_006bd550(*puVar9,0);
      iVar4 = 0;
      if (iVar7 == 0x758f7eaf) {
        iVar4 = 0;
        if (*(long *)puVar3 != 0) {
          lVar10 = *(long *)(*(long *)puVar3 + 0x330);
          iVar4 = 0;
          if (lVar10 != 0) {
            iVar4 = *(int *)(lVar10 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xc0) == iVar4) {
    lVar10 = plVar14[0xd];
    fVar21 = *(float *)(lVar10 + 0x278);
    fVar23 = *(float *)(lVar10 + 0x27c);
    fVar19 = *(float *)(lVar10 + 0x280);
  }
LAB_02523858:
  fVar18 = fVar20 * fVar28 + fVar30 * fVar17 + fVar29 * (fVar16 + 0.0) + 0.0 + fVar21;
  fVar24 = (fVar17 * 0.0 * fVar28 - fVar30 * fVar16) + fVar29 * fVar17 + 0.0 + fVar19;
  fVar16 = (float)(int)((int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0));
  fVar27 = (float)(int)((int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0));
  fVar26 = fVar16 * 5.0;
  local_98 = fVar27 * 5.0;
  if (fVar16 * 5.0 + 2.5 < fVar18) {
    fVar26 = fVar26 + 5.0;
  }
  if (fVar27 * 5.0 + 2.5 < fVar24) {
    local_98 = local_98 + 5.0;
  }
  local_a0 = (undefined *)
             CONCAT44((fVar20 * 0.0 + 1.0) * fVar28 + fVar30 * fVar17 * 0.0 + fVar29 * fVar20 + 0.0
                      + fVar23,fVar26);
  fVar16 = (float)FUN_0231eef4(plVar14,&local_a0,0);
  iVar4 = (int)(fVar16 * 4.0);
  *(int *)((long)plVar14 + 0x1982) = (int)((float)local_a0 * 999.99994);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)((long)plVar14 + 0x1986) = (short)iVar4;
  *(int *)(plVar14 + 0x331) = (int)(local_98 * 999.99994);
  lVar10 = plVar14[0xd];
  uVar2 = *(undefined2 *)(lVar10 + 0x2b6);
  *(int *)((long)plVar14 + 0x198c) = (int)(fVar21 * 999.99994);
  *(undefined2 *)(plVar14 + 0x330) = uVar2;
  iVar4 = (int)(fVar23 * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)(plVar14 + 0x332) = (short)iVar4;
  *(int *)((long)plVar14 + 0x1992) = (int)(fVar19 * 999.99994);
  *(int *)((long)plVar14 + 0x1996) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
  iVar4 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  if (iVar4 < -0x7fff) {
    iVar4 = -0x8000;
  }
  *(short *)((long)plVar14 + 0x199a) = (short)iVar4;
  fVar17 = *(float *)(lVar10 + 0x280);
  *(undefined1 *)((long)plVar14 + 0x19a2) = 0;
  *(int *)((long)plVar14 + 0x199c) = (int)(fVar17 * 999.99994);
  *(undefined1 *)(plVar14 + 0x334) = 1;
  *(undefined1 *)((long)plVar14 + 0x19a4) = 1;
  *(char *)((long)plVar14 + 0x19a1) = (char)param_2;
  local_a0 = (undefined *)CONCAT44(fVar16,0x68);
  plVar14[0x318] = plVar14[0x338];
  plVar14[0x319] = plVar14[0x339];
  plVar14[0x31a] = plVar14[0x33a];
  *(short *)(plVar14 + 0x31b) = (short)plVar14[0x33b];
  plVar14[0x314] = plVar14[0x334];
  plVar14[0x315] = plVar14[0x335];
  plVar14[0x316] = plVar14[0x336];
  plVar14[0x317] = plVar14[0x337];
  plVar14[0x310] = plVar14[0x330];
  plVar14[0x311] = plVar14[0x331];
  plVar14[0x312] = plVar14[0x332];
  plVar14[0x313] = plVar14[0x333];
  plVar14[0x30c] = plVar14[0x32c];
  plVar14[0x30d] = plVar14[0x32d];
  plVar14[0x30f] = plVar14[0x32f];
  plVar14[0x30e] = plVar14[0x32e];
  lVar10 = 0;
  if (plVar14[0xe] != 0) {
    lVar10 = plVar14[0xe] + 0x278;
  }
  FUN_03ebb160(lVar10,0x68);
  return 1;
}

