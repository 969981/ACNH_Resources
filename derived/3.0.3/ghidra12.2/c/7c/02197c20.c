
/* WARNING: Removing unreachable block (ram,0x02197f54) */
/* WARNING: Removing unreachable block (ram,0x02197ea8) */
/* WARNING: Removing unreachable block (ram,0x02197e84) */
/* WARNING: Removing unreachable block (ram,0x02197e90) */
/* WARNING: Removing unreachable block (ram,0x02197eb4) */
/* WARNING: Removing unreachable block (ram,0x02197f64) */

void FUN_02197c20(undefined1 *param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined *puVar14;
  undefined *puVar15;
  byte bVar16;
  ushort uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  undefined4 uVar29;
  long lVar30;
  undefined8 *puVar31;
  uint *puVar32;
  long lVar33;
  uint uVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  uint local_5718;
  uint local_5714;
  undefined *local_56f0;
  undefined4 local_56e8;
  undefined4 uStack_56e4;
  uint *local_56e0;
  undefined8 local_56d4;
  undefined4 local_56cc;
  undefined *local_56c8;
  undefined4 local_56c0;
  undefined4 local_56bc;
  byte local_56b8;
  undefined8 *local_56b0;
  ushort *puStack_56a8;
  undefined8 *local_56a0;
  undefined *puStack_5698;
  undefined *local_5690;
  undefined8 uStack_5688;
  undefined *local_5680;
  undefined8 uStack_5678;
  undefined1 local_5670;
  undefined8 local_5668;
  long lStack_5660;
  ushort local_5658;
  undefined1 auStack_5656 [2];
  ushort uStack_5654;
  ushort uStack_5652;
  ushort local_5650;
  ushort local_564e;
  undefined1 local_564c [12];
  ulong local_5640;
  undefined1 *local_5638;
  undefined8 uStack_5630;
  undefined **local_5628 [3];
  undefined1 local_5610 [8];
  undefined1 auStack_5608 [8];
  undefined8 local_5600 [3];
  undefined1 local_55e8 [8];
  undefined1 local_55e0 [8];
  undefined8 local_55d8 [3];
  undefined1 local_55c0 [8];
  undefined1 local_55b8 [8];
  undefined8 local_55b0 [3];
  undefined1 local_5598 [8];
  undefined1 auStack_5590 [8];
  undefined8 local_5588 [3];
  undefined1 local_5570 [8];
  undefined1 local_5568 [8];
  undefined8 local_5560 [3];
  undefined1 local_5548 [8];
  undefined *local_5540 [2600];
  undefined *local_400;
  undefined8 local_3f8;
  undefined1 *local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined1 auStack_3b8 [72];
  undefined1 auStack_370 [528];
  undefined *puStack_160;
  undefined8 local_158;
  undefined8 *local_150;
  ulong local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  int local_c4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_04bb5ce0;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return;
  }
  sVar9 = *(short *)PTR_DAT_04bb6298;
  if (sVar9 == -1) {
    return;
  }
  local_5658 = 7;
  auStack_5656 = (undefined1  [2])0x0;
  puVar32 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
  if (0xff < (uint)(int)sVar9) {
    puVar32 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar32 >> 7 & 1) == 0) {
    return;
  }
  local_f4 = 0;
  uVar26 = FUN_02b67a30(&local_f4);
  if ((uVar26 & 1) == 0) {
    return;
  }
  *param_1 = 1;
  local_5658 = (ushort)local_f4;
  auStack_5656 = SUB42((uint)local_f4 >> 0x10,0);
  lVar30 = *(long *)PTR_DAT_04bb46b0;
  if (lVar30 != 0) {
    puVar31 = *(undefined8 **)(lVar30 + 0x10);
    if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
      lVar30 = (**(code **)(*(long *)*puVar31 + 0x38))();
      if (lVar30 != 0) {
        lVar30 = lVar30 + 0x70;
        goto LAB_02197d24;
      }
    }
    else if (((puVar31 != (undefined8 *)0x0) && ((long *)puVar31[0x26] != (long *)0x0)) &&
            (lVar30 = (**(code **)(*(long *)puVar31[0x26] + 0x38))(), lVar30 != 0)) {
LAB_02197d24:
      if (CONCAT22(auStack_5656,local_5658) < 10) {
        lVar37 = lVar30 + 0x1962d8 + (ulong)CONCAT22(auStack_5656,local_5658) * 0x10d8;
        if (9 < CONCAT22(auStack_5656,local_5658)) {
          lVar37 = lVar30 + 0x1962d8;
        }
        goto LAB_02197d34;
      }
    }
  }
  lVar37 = 0;
LAB_02197d34:
  lVar30 = FUN_0265c2a0(param_2);
  if ((lVar37 == 0) || (lVar30 == 0)) {
    return;
  }
  local_564c._0_8_ = 0x1500000019;
  local_5628[0] = (undefined **)0x0;
  local_5628[1] = (undefined **)0x0;
  local_5640 = 0x20d;
  local_5638 = auStack_5608;
  local_5628[2] = &local_400;
  local_5610[0] = 0;
  uStack_5630 = 0;
  lVar33 = 0x50;
  do {
    *(undefined4 *)(auStack_5656 + lVar33 + 1) = 0;
    ppuVar1 = (undefined **)((long)local_5540 + lVar33);
    *(undefined4 *)(auStack_5656 + lVar33 + -2) = 0;
    *(undefined8 *)(local_564c + lVar33 + -4) = 0;
    *(undefined8 *)(local_564c + lVar33 + 4) = 0;
    *(undefined8 *)(local_564c + lVar33 + 0xc) = 0;
    *(undefined1 *)((long)local_5628 + lVar33 + -0x10) = 0;
    *(undefined4 *)((long)local_5628 + lVar33 + -8) = 0;
    *(undefined4 *)((long)local_5628 + lVar33 + -5) = 0;
    *(undefined8 *)((long)local_5628 + lVar33 + 0x10) = 0;
    local_5610[lVar33] = 0;
    *(undefined4 *)(auStack_5608 + lVar33) = 0;
    *(undefined4 *)(auStack_5608 + lVar33 + 3) = 0;
    local_55e8[lVar33] = 0;
    *(undefined8 *)((long)local_5600 + lVar33) = 0;
    *(undefined4 *)(local_55e0 + lVar33 + 3) = 0;
    *(undefined4 *)(local_55e0 + lVar33) = 0;
    *(undefined8 *)((long)local_55d8 + lVar33 + 0x10) = 0;
    local_55c0[lVar33] = 0;
    *(undefined4 *)(local_55b8 + lVar33) = 0;
    *(undefined4 *)(local_55b8 + lVar33 + 3) = 0;
    *(undefined8 *)((long)local_55b0 + lVar33 + 0x10) = 0;
    local_5598[lVar33] = 0;
    *(undefined4 *)(auStack_5590 + lVar33) = 0;
    *(undefined4 *)(auStack_5590 + lVar33 + 3) = 0;
    *(undefined8 *)((long)local_5588 + lVar33) = 0;
    local_5570[lVar33] = 0;
    *(undefined4 *)(local_5568 + lVar33 + 3) = 0;
    *(undefined4 *)(local_5568 + lVar33) = 0;
    local_5548[lVar33] = 0;
    *(undefined8 *)((long)local_5560 + lVar33) = 0;
    *(undefined8 *)((long)local_5628 + lVar33) = 0;
    *(undefined8 *)((long)local_5628 + lVar33 + 8) = 0;
    *(undefined8 *)((long)local_5600 + lVar33 + 8) = 0;
    *(undefined8 *)((long)local_5600 + lVar33 + 0x10) = 0;
    *(undefined8 *)((long)local_55d8 + lVar33) = 0;
    *(undefined8 *)((long)local_55d8 + lVar33 + 8) = 0;
    *(undefined8 *)((long)local_55b0 + lVar33) = 0;
    *(undefined8 *)((long)local_55b0 + lVar33 + 8) = 0;
    *(undefined8 *)((long)local_5588 + lVar33 + 8) = 0;
    *(undefined8 *)((long)local_5588 + lVar33 + 0x10) = 0;
    *(undefined8 *)((long)local_5560 + lVar33 + 8) = 0;
    *(undefined8 *)((long)local_5560 + lVar33 + 0x10) = 0;
    lVar33 = lVar33 + 0x118;
  } while (ppuVar1 != local_5628[2]);
  local_3d8 = 0;
  uStack_5654 = 0x20;
  uStack_5652 = 0x20;
  local_5650 = 0xe7;
  local_564e = 0xcb;
  local_3f0 = auStack_3b8;
  local_400 = PTR_DAT_04bc1998 + 0x10;
  local_3f8 = 0x110000020d;
  local_5658 = 0x20;
  local_3d0 = 0;
  local_3e8 = 0x19ffffffff;
  auStack_5656 = (undefined1  [2])0x20;
  local_3e0 = 0x15;
  local_3c8 = 0;
  local_3c0 = 0;
  memset(auStack_370,0,0x20d);
  lVar33 = *(long *)puVar2;
  local_158 = 0x110000020d;
  local_148 = 0x19ffffffff;
  local_140 = 0x15;
  puStack_160 = PTR_DAT_04bb96d8 + 0x10;
  local_150 = &local_13c;
  if (lVar33 == 0) {
    uVar36 = 0;
    uStack_5654 = 0;
    local_5650 = 0x10;
    iVar21 = 0x10;
  }
  else {
    uStack_5654 = *(ushort *)(lVar33 + 0xd88);
    uVar36 = (uint)*(ushort *)(lVar33 + 0xd8c);
    local_5650 = *(ushort *)(lVar33 + 0xd98);
    iVar21 = *(int *)(lVar33 + 0xd9c);
  }
  uStack_5652 = (ushort)uVar36;
  local_5668 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_56a0 = &local_5668;
  puStack_56a8 = &local_5658;
  puStack_5698 = PTR_DAT_04bbc1a0 + 0x10;
  local_5690 = PTR_DAT_04bb2010 + 0x10;
  uStack_5688 = 0;
  uStack_5678 = 0;
  local_564e = (ushort)(iVar21 + 6U);
  local_5658 = uStack_5654;
  if (local_5650 <= uStack_5654) {
    local_5658 = local_5650;
  }
  local_5670 = 0;
  auStack_5656 = (undefined1  [2])uStack_5652;
  if ((iVar21 + 6U & 0xffff) <= uVar36) {
    auStack_5656 = (undefined1  [2])local_564e;
  }
  local_56b0 = (undefined8 *)(PTR_DAT_04bc1990 + 0x10);
  lStack_5660 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_5680 = local_5690;
  memset(auStack_370,2,0x20d);
  local_13c = 0;
  uStack_134 = 0;
  local_fc = 0;
  local_148 = local_148 & 0xffffffff00000000;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  uStack_104 = 0;
  FUN_035a4230(&local_5658);
  uVar17 = local_5658;
  if (local_5640 != 0) {
    uVar26 = 0;
    iVar21 = local_564c._0_4_ + (uint)local_5658;
    uVar36 = (uint)(ushort)auStack_5656;
    uVar27 = local_5640;
    uVar22 = (uint)local_5658;
    do {
      iVar13 = uVar22 - local_5658;
      if (-1 < iVar13) {
        if (iVar13 < (int)local_564c._0_4_) {
          iVar24 = uVar36 - (ushort)auStack_5656;
          if (-1 < iVar24) {
            if ((iVar24 < (int)local_564c._4_4_) && (local_5638 != (undefined1 *)0x0)) {
              (*(code *)*local_56b0)
                        (&local_56b0,local_5638 + (long)(iVar13 + local_564c._0_4_ * iVar24) * 0x28)
              ;
              uVar27 = local_5640;
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
      bVar20 = uVar22 + 1 == iVar21;
      if (bVar20) {
        uVar36 = uVar36 + 1;
      }
      uVar23 = (uint)uVar17;
      if (!bVar20) {
        uVar23 = uVar22 + 1;
      }
      uVar22 = uVar23;
    } while (uVar26 < uVar27);
  }
  fVar39 = *(float *)PTR_DAT_04bb76e8;
  fVar38 = *(float *)(PTR_DAT_04bb76e8 + 8);
  if (((fVar39 == 0.0) && (*(float *)(PTR_DAT_04bb76e8 + 4) == 0.0)) && (fVar38 == 0.0)) {
    uVar22 = 0x26;
    uVar36 = 0x1f;
  }
  else {
    uVar36 = (int)((float)(int)fVar39 / 5.0) - (uint)(fVar39 < 0.0) & 0xffff;
    uVar22 = (int)((float)(int)fVar38 / 5.0) - (uint)(fVar38 < 0.0) & 0xffff;
  }
  local_5610[0] = 1;
  FUN_035a8968(&local_5658,uVar36,uVar22);
  FUN_035a81f0(&local_5658,uVar36,uVar22,0);
  local_5610[0] = 0;
  if ((*(long **)(lVar37 + 0x28) == (long *)0x0) ||
     (puVar31 = (undefined8 *)**(long **)(lVar37 + 0x28), puVar31 == (undefined8 *)0x0)) {
    local_5714 = 0;
  }
  else {
    local_5714 = (**(code **)*puVar31)();
  }
  if ((*(long **)(lVar30 + 0x28) == (long *)0x0) ||
     (puVar31 = (undefined8 *)**(long **)(lVar30 + 0x28), puVar31 == (undefined8 *)0x0)) {
    local_5718 = 0;
  }
  else {
    local_5718 = (**(code **)*puVar31)();
  }
  local_56c0 = 0;
  lVar33 = *(long *)PTR_DAT_04bb2720;
  if (lVar33 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar33 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar33 + 0x338));
      iVar21 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar21 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_56bc = *(undefined4 *)(puVar31 + 7);
  local_56b8 = FUN_017baf44();
  local_56b8 = local_56b8 & 1;
  local_56c8 = PTR_DAT_04bb3140 + 0x10;
  if ((*(long **)(lVar37 + 0x878) == (long *)0x0) ||
     (puVar31 = (undefined8 *)**(long **)(lVar37 + 0x878), puVar31 == (undefined8 *)0x0)) {
    bVar8 = *(byte *)(*(long *)(lVar37 + 0x860) + *(long *)(lVar37 + 0x858));
  }
  else {
    uVar26 = (**(code **)*puVar31)();
    bVar8 = *(byte *)(*(long *)(lVar37 + 0x860) + *(long *)(lVar37 + 0x858));
    if ((((uVar26 & 1) != 0) && (*(long *)(lVar37 + 0x878) != 0)) &&
       (puVar31 = *(undefined8 **)(*(long *)(lVar37 + 0x878) + 8), puVar31 != (undefined8 *)0x0)) {
      (**(code **)*puVar31)();
    }
  }
  local_56d4 = 0xfffe;
  FUN_0277d4ac(&local_56d4);
  puVar15 = PTR_DAT_04bc00c8;
  puVar14 = PTR_DAT_04bb43c0;
  iVar21 = 0;
  local_56cc = 0xffff;
  uVar36 = 0;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
LAB_02198348:
  uVar26 = FUN_02198b30(&local_56d4,uVar36,*(long *)(lVar37 + 0x10) + *(long *)(lVar37 + 8));
  lVar33 = *(long *)puVar14;
  uVar22 = FUN_0277d6c4(&local_56d4);
  iVar13 = iVar21;
  if (*(long *)puVar14 != 0) {
    lVar33 = *(long *)(lVar33 + 0x57e58);
    uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
    if (((uVar22 < *(uint *)(lVar33 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) &&
       (uVar27 = FUN_0277e294(&local_56d4), (uVar27 & 1) != 0)) {
      bVar16 = local_56cc._3_1_;
      lVar33 = (long)(char)local_56cc._3_1_;
      if (local_56cc._3_1_ < 2) {
        local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)local_56cc._2_1_);
        FUN_01afbaa4(&local_90,&local_56d4,&local_f0);
        local_56e0 = (uint *)0x0;
        lVar35 = *(long *)puVar14;
        local_56e8 = (undefined4)local_90;
        uStack_56e4 = local_90._4_4_;
        local_56f0 = puVar2;
        uVar22 = FUN_0277d6c4(&local_56e8);
        if (*(long *)puVar14 != 0) {
          lVar35 = *(long *)(lVar35 + 0x57e58);
          uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
          if ((uVar22 < *(uint *)(lVar35 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
            lVar35 = *(long *)PTR_DAT_04bc0428;
            uVar22 = FUN_0277d6c4(&local_90);
            uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
            if (uVar22 < *(uint *)(lVar35 + 0x1d8)) {
              puVar32 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar22 * 8);
              if (puVar32 != (uint *)0x0) {
                local_56e0 = puVar32;
              }
            }
          }
        }
        uVar27 = FUN_01ae6020(&local_56f0);
        if ((uVar27 & 1) != 0) {
          *(int *)(param_1 + (long)iVar21 * 0x10 + 0x10) = (int)(char)local_56cc;
          *(int *)(param_1 + (long)iVar21 * 0x10 + 0x14) = (int)local_56cc._1_1_;
          if ((bVar8 & 1) != 0) {
            lVar33 = FUN_015002dc(&local_56c8,lVar33);
            iVar13 = *(int *)(lVar33 + 0xc);
            iVar24 = *(int *)(param_1 + (long)iVar21 * 0x10 + 0x14);
            *(int *)(param_1 + (long)iVar21 * 0x10 + 0x10) =
                 *(int *)(param_1 + (long)iVar21 * 0x10 + 0x10) + *(int *)(lVar33 + 8);
            *(int *)(param_1 + (long)iVar21 * 0x10 + 0x14) = iVar24 + iVar13;
          }
          *(int *)(param_1 + (long)iVar21 * 4 + 0xec8) = (int)(char)bVar16;
          if (local_56e0 == (uint *)0x0) {
            uVar22 = 0xbc;
          }
          else {
            uVar23 = *local_56e0;
            uVar22 = 0;
            if ((uVar23 != 0) && (local_56e0 != (uint *)(ulong)uVar23)) {
              puVar32 = (uint *)((long)local_56e0 - (long)(ulong)uVar23);
              uVar22 = 0;
              if (*puVar32 != 0) {
                uVar22 = puVar32[1];
                if ((uVar22 != 0) && ((ulong)(ushort)puVar32[2] != 0)) {
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar32 + 10) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar32 + lVar33 + (ulong)(ushort)puVar32[2] * 8;
                  if (lVar33 != 0) {
                    uVar23 = 0;
                    if ((ulong)uVar22 != 0) {
                      uVar23 = (uint)((ulong)((long)local_56e0 - lVar33) / (ulong)uVar22);
                    }
                    if (*puVar32 <= uVar23) {
                      uVar23 = 0xffffffff;
                    }
                    if ((uVar23 < *(uint *)puVar15) &&
                       (uVar22 = (uint)*(ushort *)(*(long *)(puVar15 + 8) + (long)(int)uVar23 * 2),
                       uVar22 < 0xbd)) goto LAB_02198554;
                  }
                }
                uVar22 = 0;
              }
            }
          }
LAB_02198554:
          iVar13 = iVar21 + 1;
          local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar22);
          if (uVar22 == 0x6b) {
            *(undefined4 *)(param_1 + (long)iVar21 * 4 + 0x1278) = 7;
          }
          else if (uVar22 == 0x6a) {
            *(undefined4 *)(param_1 + (long)iVar21 * 4 + 0x1278) = 2;
          }
          else if (uVar22 == 0x69) {
            *(undefined4 *)(param_1 + (long)iVar21 * 4 + 0x1278) = 1;
          }
          else {
            if (local_56cc._3_1_ == '\0') {
              local_80 = 0;
              lVar33 = *(long *)(lVar37 + 0x10) + *(long *)(lVar37 + 8);
              local_70 = 0;
              local_90 = puVar3;
              puStack_88 = puVar4;
              local_78 = puVar4;
              FUN_01afb480(&local_56f0,&local_90);
              local_9c = 0xfffe;
              FUN_0277d4ac(&local_9c);
              local_94 = 0xffff;
              FUN_02198b30(&local_9c,uVar36,lVar33);
              uVar22 = 0;
              bVar20 = true;
              local_80 = CONCAT44(local_80._4_4_ + local_94._1_1_,(int)local_80 + (char)local_94);
              local_70 = CONCAT44(local_70._4_4_ + local_94._1_1_,(int)local_70 + (char)local_94);
              do {
                if (uVar36 != uVar22) {
                  local_a8 = 0xfffe;
                  FUN_0277d4ac(&local_a8);
                  local_a0 = 0xffff;
                  FUN_02198b30(&local_a8,uVar22,lVar33);
                  if (local_a0._3_1_ == '\x01') {
                    local_c4 = (int)local_a0._2_1_;
                    FUN_01afbaa4(&local_f0,&local_a8,&local_c4);
                    local_b0 = 0;
                    local_b8 = (undefined4)local_f0;
                    uStack_b4 = local_f0._4_4_;
                    lVar35 = *(long *)puVar14;
                    local_c0 = PTR_DAT_04bc0510 + 0x10;
                    uVar23 = FUN_0277d6c4(&local_b8);
                    if (*(long *)puVar14 != 0) {
                      lVar35 = *(long *)(lVar35 + 0x57e58);
                      uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                      if ((uVar23 < *(uint *)(lVar35 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar23 * 8) != 0)) {
                        lVar35 = *(long *)PTR_DAT_04bc0428;
                        uVar23 = FUN_0277d6c4(&local_f0);
                        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                        if (uVar23 < *(uint *)(lVar35 + 0x1d8)) {
                          lVar35 = *(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar23 * 8);
                          if (lVar35 != 0) {
                            local_b0 = lVar35;
                          }
                        }
                      }
                    }
                    local_e0 = 0;
                    local_f0 = PTR_DAT_04bbc1a0 + 0x10;
                    puStack_e8 = PTR_DAT_04bb2010 + 0x10;
                    local_d0 = 0;
                    local_d8 = puStack_e8;
                    FUN_01afb480(&local_c0,&local_f0);
                    if ((int)local_e0 + (char)local_a0 <= (int)local_70) {
                      if ((int)local_80 <= (int)local_d0 + (char)local_a0) {
                        if (local_e0._4_4_ + local_a0._1_1_ <= local_70._4_4_) {
                          if (local_80._4_4_ <= local_d0._4_4_ + local_a0._1_1_) {
                            if (bVar20) {
                              uVar29 = 4;
                              goto LAB_02198804;
                            }
                            break;
                          }
                        }
                      }
                    }
                  }
                }
                bVar20 = uVar22 < 0xeb;
                uVar22 = uVar22 + 1;
              } while (uVar22 != 0xec);
            }
            iVar24 = FUN_01aed730(&local_56f0);
            if (iVar24 < 10000) {
              uVar27 = FUN_026b4740(*(long *)(lVar30 + 0x10) + *(long *)(lVar30 + 8),&local_56d4,0);
              piVar5 = (int *)(param_1 + (long)iVar21 * 4 + 0x1278);
              if ((uVar27 & 1) == 0) {
                *piVar5 = 6;
              }
              else if (*piVar5 == 5) {
                local_80 = 0;
                local_90 = PTR_DAT_04bbc1a0 + 0x10;
                puStack_88 = PTR_DAT_04bb2010 + 0x10;
                local_70 = 0;
                local_78 = puStack_88;
                FUN_01afb480(&local_56f0,&local_90);
                iVar24 = (int)local_80;
                iVar11 = local_80._4_4_;
                uVar22 = (int)local_80 + *(int *)(param_1 + (long)iVar21 * 0x10 + 0x10);
                iVar18 = (int)local_70;
                iVar19 = local_70._4_4_;
                uVar23 = local_80._4_4_ + *(int *)(param_1 + (long)iVar21 * 0x10 + 0x14);
                local_70._0_4_ = (int)local_70 + *(int *)(param_1 + (long)iVar21 * 0x10 + 0x10);
                local_70._4_4_ = local_70._4_4_ + *(int *)(param_1 + (long)iVar21 * 0x10 + 0x14);
                local_80 = CONCAT44(uVar23,uVar22);
                if (local_70._4_4_ - uVar23 < 0x7fffffff) {
                  uVar6 = uVar22 - 1 & 0xffff;
                  uVar7 = (int)local_70 + 2U & 0xffff;
                  iVar21 = (iVar19 - iVar11) + 1;
                  uVar25 = (uint)local_5658;
                  uVar34 = ((uint)local_5658 + (uint)(ushort)local_564c._0_2_) - 1 & 0xffff;
                  uVar12 = ((uint)(ushort)auStack_5656 + (uint)(ushort)local_564c._4_2_) - 1;
                  iVar11 = -(uint)(ushort)auStack_5656;
                  uVar28 = uVar23;
                  do {
                    if ((((((local_5658 < uVar6 || uVar25 == uVar6) && uVar6 <= uVar34) &&
                          ((uint)(ushort)auStack_5656 <= (uVar28 & 0xffff))) &&
                         ((uVar28 & 0xffff) <= (uVar12 & 0xffff))) &&
                        (uVar10 = ((uVar22 - 1) - uVar25) +
                                  *(int *)((long)local_5628[2] + 0x1c) * (iVar11 + uVar28),
                        (*(uint *)(local_5628[2][2] + (long)((int)uVar10 >> 5) * 4) >>
                         (ulong)(uVar10 & 0x1f) & 1) != 0)) ||
                       ((((uVar25 < uVar7 || local_5658 == uVar7) && uVar7 <= uVar34 &&
                         ((uint)(ushort)auStack_5656 <= (uVar28 & 0xffff))) &&
                        (((uVar28 & 0xffff) <= (uVar12 & 0xffff) &&
                         (uVar10 = (((int)local_70 + 2U) - uVar25) +
                                   *(int *)((long)local_5628[2] + 0x1c) * (iVar11 + uVar28),
                         (*(uint *)(local_5628[2][2] + (long)((int)uVar10 >> 5) * 4) >>
                          (ulong)(uVar10 & 0x1f) & 1) != 0)))))) goto LAB_02198a8c;
                    iVar21 = iVar21 + -1;
                    uVar28 = uVar28 + 1;
                  } while (iVar21 != 0);
                }
                if ((int)local_70 - uVar22 < 0x7fffffff) {
                  uVar28 = uVar23 - 1 & 0xffff;
                  uVar6 = local_70._4_4_ + 2U & 0xffff;
                  iVar21 = (iVar18 - iVar24) + 1;
                  uVar34 = (uint)(ushort)auStack_5656;
                  uVar7 = ((uint)(ushort)auStack_5656 + (uint)(ushort)local_564c._4_2_) - 1 & 0xffff
                  ;
                  iVar24 = -(uint)local_5658;
                  do {
                    if ((((uint)local_5658 <= (uVar22 & 0xffff)) &&
                        ((uVar22 & 0xffff) <=
                         (((uint)local_5658 + (uint)(ushort)local_564c._0_2_) - 1 & 0xffff))) &&
                       (((((ushort)auStack_5656 < uVar28 || uVar34 == uVar28) && uVar28 <= uVar7 &&
                         (uVar12 = iVar24 + uVar22 +
                                   *(int *)((long)local_5628[2] + 0x1c) * ((uVar23 - 1) - uVar34),
                         (*(uint *)(local_5628[2][2] + (long)((int)uVar12 >> 5) * 4) >>
                          (ulong)(uVar12 & 0x1f) & 1) != 0)) ||
                        (((uVar34 < uVar6 || (ushort)auStack_5656 == uVar6) && uVar6 <= uVar7 &&
                         (uVar12 = iVar24 + uVar22 +
                                   *(int *)((long)local_5628[2] + 0x1c) *
                                   ((local_70._4_4_ + 2U) - uVar34),
                         (*(uint *)(local_5628[2][2] + (long)((int)uVar12 >> 5) * 4) >>
                          (ulong)(uVar12 & 0x1f) & 1) != 0)))))) goto LAB_02198a8c;
                    iVar21 = iVar21 + -1;
                    uVar22 = uVar22 + 1;
                  } while (iVar21 != 0);
                }
              }
            }
            else {
              uVar29 = 3;
LAB_02198804:
              *(undefined4 *)(param_1 + (long)iVar21 * 4 + 0x1278) = uVar29;
            }
          }
        }
      }
    }
  }
  goto LAB_02198340;
LAB_02198a8c:
  *piVar5 = 0;
  param_1[1] = 1;
LAB_02198340:
  iVar21 = iVar13;
  uVar36 = uVar36 + 1;
  if ((uVar26 & 1) == 0) {
    *(int *)(param_1 + 0x1628) = iVar21;
    if ((((local_5718 & 1) != 0) && (*(long *)(lVar30 + 0x28) != 0)) &&
       (puVar31 = *(undefined8 **)(*(long *)(lVar30 + 0x28) + 8), puVar31 != (undefined8 *)0x0)) {
      (**(code **)*puVar31)();
    }
    if ((local_5714 & 1) == 0) {
      return;
    }
    if (*(long *)(lVar37 + 0x28) == 0) {
      return;
    }
    puVar31 = *(undefined8 **)(*(long *)(lVar37 + 0x28) + 8);
    if (puVar31 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar31)();
    return;
  }
  goto LAB_02198348;
}

