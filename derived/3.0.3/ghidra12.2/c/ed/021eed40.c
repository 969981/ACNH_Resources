
/* WARNING: Removing unreachable block (ram,0x021eef9c) */
/* WARNING: Removing unreachable block (ram,0x021eef68) */
/* WARNING: Removing unreachable block (ram,0x021eef50) */
/* WARNING: Removing unreachable block (ram,0x021eef8c) */
/* WARNING: Removing unreachable block (ram,0x021ef2b4) */
/* WARNING: Removing unreachable block (ram,0x021ef5a8) */
/* WARNING: Removing unreachable block (ram,0x021ef55c) */
/* WARNING: Removing unreachable block (ram,0x021ef56c) */
/* WARNING: Removing unreachable block (ram,0x021ef5b8) */

undefined8
FUN_021eed40(undefined4 *param_1,long param_2,undefined4 *param_3,int *param_4,uint param_5,
            uint param_6,uint param_7,undefined1 *param_8)

{
  float *pfVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  ushort uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined4 *puVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  uint *puVar27;
  uint uVar28;
  undefined8 *puVar29;
  long lVar30;
  byte *pbVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined *local_5750;
  undefined4 local_5748;
  undefined4 uStack_5744;
  uint *local_5740;
  undefined4 local_5738;
  undefined4 local_5734;
  undefined *local_5730;
  undefined8 local_5728;
  undefined **local_5720;
  undefined **local_5718;
  undefined *local_5710;
  uint local_5708;
  uint local_5704;
  undefined8 *local_5700;
  ushort *puStack_56f8;
  undefined8 local_56f0;
  undefined8 uStack_56e8;
  undefined *local_56e0;
  undefined8 uStack_56d8;
  undefined *local_56d0;
  undefined8 uStack_56c8;
  undefined1 local_56c0;
  undefined8 local_56b8;
  long lStack_56b0;
  undefined *local_56a8;
  undefined4 local_56a0;
  undefined4 local_569c;
  byte local_5698;
  undefined *local_5690;
  undefined1 *puStack_5688;
  undefined4 local_5680;
  undefined1 local_567c [31];
  undefined1 local_565d;
  int local_5658;
  undefined4 local_5654;
  ushort local_5650;
  undefined1 auStack_564e [2];
  ushort uStack_564c;
  ushort uStack_564a;
  ushort local_5648;
  ushort local_5646;
  undefined1 local_5644 [12];
  ulong local_5638;
  undefined1 *local_5630;
  undefined8 local_5628;
  undefined **appuStack_5620 [3];
  undefined1 local_5608 [8];
  undefined1 auStack_5600 [8];
  undefined8 local_55f8 [3];
  undefined1 local_55e0 [8];
  undefined1 local_55d8 [8];
  undefined8 local_55d0 [3];
  undefined1 local_55b8 [8];
  undefined1 local_55b0 [8];
  undefined8 local_55a8 [3];
  undefined1 local_5590 [8];
  undefined1 auStack_5588 [8];
  undefined8 local_5580 [3];
  undefined1 local_5568 [8];
  undefined1 local_5560 [8];
  undefined8 local_5558 [3];
  undefined1 local_5540 [8];
  undefined *local_5538 [2600];
  undefined *local_3f8;
  undefined8 local_3f0;
  undefined1 *local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined1 auStack_3b0 [72];
  undefined1 auStack_368 [528];
  undefined *puStack_158;
  undefined8 local_150;
  undefined1 *local_148;
  ulong local_140;
  undefined4 local_138;
  undefined1 auStack_134 [68];
  undefined *local_f0;
  undefined *puStack_e8;
  uint local_e0;
  uint uStack_dc;
  undefined *local_d8;
  uint local_d0;
  uint local_cc;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  
  local_f0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_e8 = PTR_DAT_04bb2010 + 0x10;
  lVar26 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar26 == 0) {
    local_d0 = 0;
    local_cc = 0;
    uVar28 = 0x10;
    uVar15 = 0x10;
  }
  else {
    local_d0 = *(uint *)(lVar26 + 0xd88);
    local_cc = *(uint *)(lVar26 + 0xd8c);
    uVar15 = *(uint *)(lVar26 + 0xd98);
    uVar28 = *(uint *)(lVar26 + 0xd9c);
  }
  local_e0 = local_d0;
  if ((int)uVar15 <= (int)local_d0) {
    local_e0 = uVar15;
  }
  if ((int)local_d0 <= (int)uVar15) {
    local_d0 = uVar15;
  }
  uStack_dc = local_cc;
  if ((int)uVar28 <= (int)local_cc) {
    uStack_dc = uVar28;
  }
  if ((int)local_cc <= (int)uVar28) {
    local_cc = uVar28;
  }
  local_5608[0] = 0;
  local_5630 = auStack_5600;
  local_5644._0_8_ = 0x1500000019;
  appuStack_5620[2] = &local_3f8;
  local_5638 = 0x20d;
  local_5628 = 0;
  appuStack_5620[0] = (undefined **)0x0;
  appuStack_5620[1] = (undefined **)0x0;
  lVar26 = 0x50;
  do {
    *(undefined4 *)(auStack_564e + lVar26 + 1) = 0;
    ppuVar2 = (undefined **)((long)local_5538 + lVar26);
    *(undefined4 *)(auStack_564e + lVar26 + -2) = 0;
    *(undefined8 *)(local_5644 + lVar26 + -4) = 0;
    *(undefined8 *)(local_5644 + lVar26 + 4) = 0;
    *(undefined8 *)(local_5644 + lVar26 + 0xc) = 0;
    *(undefined1 *)((long)appuStack_5620 + lVar26 + -0x10) = 0;
    *(undefined4 *)((long)appuStack_5620 + lVar26 + -8) = 0;
    *(undefined4 *)((long)appuStack_5620 + lVar26 + -5) = 0;
    *(undefined8 *)((long)appuStack_5620 + lVar26 + 0x10) = 0;
    local_5608[lVar26] = 0;
    *(undefined4 *)(auStack_5600 + lVar26) = 0;
    *(undefined4 *)(auStack_5600 + lVar26 + 3) = 0;
    local_55e0[lVar26] = 0;
    *(undefined8 *)((long)local_55f8 + lVar26) = 0;
    *(undefined4 *)(local_55d8 + lVar26 + 3) = 0;
    *(undefined4 *)(local_55d8 + lVar26) = 0;
    *(undefined8 *)((long)local_55d0 + lVar26 + 0x10) = 0;
    local_55b8[lVar26] = 0;
    *(undefined4 *)(local_55b0 + lVar26) = 0;
    *(undefined4 *)(local_55b0 + lVar26 + 3) = 0;
    *(undefined8 *)((long)local_55a8 + lVar26 + 0x10) = 0;
    local_5590[lVar26] = 0;
    *(undefined4 *)(auStack_5588 + lVar26) = 0;
    *(undefined4 *)(auStack_5588 + lVar26 + 3) = 0;
    *(undefined8 *)((long)local_5580 + lVar26) = 0;
    local_5568[lVar26] = 0;
    *(undefined4 *)(local_5560 + lVar26 + 3) = 0;
    *(undefined4 *)(local_5560 + lVar26) = 0;
    local_5540[lVar26] = 0;
    *(undefined8 *)((long)local_5558 + lVar26) = 0;
    *(undefined8 *)((long)appuStack_5620 + lVar26) = 0;
    *(undefined8 *)((long)appuStack_5620 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_55f8 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_55f8 + lVar26 + 0x10) = 0;
    *(undefined8 *)((long)local_55d0 + lVar26) = 0;
    *(undefined8 *)((long)local_55d0 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_55a8 + lVar26) = 0;
    *(undefined8 *)((long)local_55a8 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_5580 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_5580 + lVar26 + 0x10) = 0;
    *(undefined8 *)((long)local_5558 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_5558 + lVar26 + 0x10) = 0;
    lVar26 = lVar26 + 0x118;
  } while (ppuVar2 != appuStack_5620[2]);
  local_3f0 = 0x110000020d;
  local_3e0 = 0x19ffffffff;
  local_3d8 = 0x15;
  uStack_564c = 0x20;
  uStack_564a = 0x20;
  local_5648 = 0xe7;
  local_5646 = 0xcb;
  local_3e8 = auStack_3b0;
  local_3d0 = 0;
  local_3f8 = PTR_DAT_04bc1998 + 0x10;
  local_5650 = 0x20;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  auStack_564e = (undefined1  [2])0x20;
  local_d8 = puStack_e8;
  memset(auStack_368,0,0x20d);
  puVar3 = PTR_DAT_04bb2ab0;
  local_150 = 0x110000020d;
  local_140 = 0x19ffffffff;
  local_138 = 0x15;
  puStack_56f8 = (ushort *)((long)&local_56f0 + 4);
  puStack_158 = PTR_DAT_04bb96d8 + 0x10;
  local_148 = auStack_134;
  local_5658 = -1;
  local_5654 = 0;
  local_56f0._0_4_ = 0x10;
  local_56e0._0_4_ = (uint)(uint3)local_56e0;
  uVar28 = (uint)(byte)*PTR_DAT_04bb9cf0;
  local_56f0._4_4_ = 0x72746e45;
  uStack_56e8._0_4_ = 0x65636e61;
  uStack_56e8._4_4_ = uStack_56e8._4_4_ & 0xffffff00;
  uVar15 = (uint)(byte)PTR_DAT_04bb9cf0[1];
  local_5700 = (undefined8 *)(PTR_DAT_04bb2ab0 + 0x10);
  lVar26 = FUN_02917a1c(&local_5700);
  lVar24 = *(long *)PTR_DAT_04bb2720;
  if (lVar24 == 0) {
    puVar29 = &DAT_055c04a0;
  }
  else {
    puVar29 = &DAT_055c04a0;
    if (*(long *)(lVar24 + 0x330) != 0) {
      puVar29 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar24 + 0x338));
      iVar14 = FUN_006bd550(*puVar29,0);
      puVar29 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar29 = &DAT_055c04a0;
      }
    }
  }
  uVar20 = FUN_02b64e40(&local_5654,*(undefined4 *)(puVar29 + 7));
  fVar32 = 0.0;
  if ((uVar20 & 1) != 0) {
    local_5700 = (undefined8 *)CONCAT44(local_5700._4_4_,local_5654);
    lVar24 = *(long *)PTR_DAT_04bb46b0;
    if (lVar24 == 0) {
LAB_021ef118:
      lVar30 = 0;
    }
    else {
      puVar29 = *(undefined8 **)(lVar24 + 0x10);
      if ((*(byte *)(lVar24 + 0x453) & 1) != 0) {
        if (((puVar29 != (undefined8 *)0x0) && ((long *)puVar29[0x26] != (long *)0x0)) &&
           (lVar24 = (**(code **)(*(long *)puVar29[0x26] + 0x38))(), lVar24 != 0))
        goto LAB_021ef10c;
        goto LAB_021ef118;
      }
      lVar24 = (**(code **)(*(long *)*puVar29 + 0x38))();
      if (lVar24 == 0) goto LAB_021ef118;
      lVar24 = lVar24 + 0x70;
LAB_021ef10c:
      if (9 < (uint)local_5700) goto LAB_021ef118;
      lVar30 = lVar24 + 0x1962d8 + ((ulong)local_5700 & 0xffffffff) * 0x10d8;
      if (9 < (uint)local_5700) {
        lVar30 = lVar24 + 0x1962d8;
      }
    }
    local_5700 = (undefined8 *)(puVar3 + 0x10);
    local_56e0._0_4_ = (uint)(uint3)local_56e0;
    local_56f0._0_4_ = 0x10;
    puStack_56f8 = (ushort *)((long)&local_56f0 + 4);
    local_56f0._4_4_ = 0x72746e45;
    uStack_56e8._0_4_ = 0x65636e61;
    uStack_56e8._4_4_ = uStack_56e8._4_4_ & 0xffffff00;
    lVar24 = FUN_02917a1c(&local_5700);
    if (lVar24 != 0) {
LAB_021ef150:
      fVar33 = 0.0;
      iVar14 = -1;
      if ((lVar30 != 0) && (lVar24 != 0)) {
        if ((*(long **)(lVar30 + 0x28) == (long *)0x0) ||
           (puVar29 = (undefined8 *)**(long **)(lVar30 + 0x28), puVar29 == (undefined8 *)0x0)) {
          uVar20 = 0;
        }
        else {
          uVar20 = (**(code **)*puVar29)();
          uVar20 = uVar20 & 0xffffffff;
        }
        local_5700 = (undefined8 *)((ulong)local_5700 & 0xffffffff00000000);
        cVar7 = *(char *)(*(long *)(lVar30 + 0x10) + *(long *)(lVar30 + 8) + 0x1c4);
        iVar14 = (int)cVar7;
        local_5658 = (int)cVar7;
        *param_4 = local_5658;
        lVar21 = FUN_0265c2a0(iVar14);
        if (lVar21 == 0) {
          pbVar31 = PTR_DAT_04bb9cf0;
        }
        else if ((*(long **)(lVar21 + 0x28) == (long *)0x0) ||
                (puVar29 = (undefined8 *)**(long **)(lVar21 + 0x28), puVar29 == (undefined8 *)0x0))
        {
          pbVar31 = (byte *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
        }
        else {
          uVar22 = (**(code **)*puVar29)();
          pbVar31 = (byte *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
          if ((uVar22 & 1) != 0) {
            if (*(long *)(lVar21 + 0x28) != 0) {
              puVar29 = *(undefined8 **)(*(long *)(lVar21 + 0x28) + 8);
              if (puVar29 != (undefined8 *)0x0) {
                (**(code **)*puVar29)();
              }
            }
          }
        }
        uVar28 = (uint)*pbVar31;
        uVar15 = (uint)pbVar31[1];
        FUN_020fd7d8(pbVar31);
        fVar32 = (float)NEON_ucvtf(*(undefined4 *)(lVar24 + 0x20));
        fVar33 = *(float *)(lVar24 + 0x24) + *(float *)(lVar24 + 0x1c) * 0.5 + 0.0;
        pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                          ((ulong)(long)(fVar32 * 11930465.0) >> 0x18 & 0xff) * 0x10);
        fVar34 = (float)((uint)(long)(fVar32 * 11930465.0) & 0xffffff) * 5.9604645e-08;
        fVar32 = *(float *)(lVar24 + 0xc) + fVar33 * (*pfVar1 + fVar34 * pfVar1[1]);
        fVar33 = *(float *)(lVar24 + 0x14) + fVar33 * (pfVar1[2] + fVar34 * pfVar1[3]);
        if ((((uVar20 & 1) != 0) && (*(long *)(lVar30 + 0x28) != 0)) &&
           (puVar29 = *(undefined8 **)(*(long *)(lVar30 + 0x28) + 8), puVar29 != (undefined8 *)0x0))
        {
          (**(code **)*puVar29)();
        }
      }
      goto LAB_021ef210;
    }
    lVar24 = *(long *)PTR_DAT_04bb2720;
    if ((lVar24 != 0) && (*(long *)(lVar24 + 0x330) != 0)) {
      puVar29 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar24 + 0x338));
      iVar14 = FUN_006bd550(*puVar29,0);
      if (((iVar14 == 0x758f7eaf) &&
          ((*(long *)PTR_DAT_04bb2720 != 0 &&
           (lVar21 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar21 != 0)))) &&
         (*(int *)(lVar21 + 0x260) != 0)) {
        lVar24 = 0;
        if (*(long *)(lVar21 + 600) != 0) {
          lVar24 = *(long *)(lVar21 + 600) + -0x40;
        }
        goto LAB_021ef150;
      }
    }
  }
  iVar14 = -1;
  fVar33 = 0.0;
LAB_021ef210:
  if (((uVar28 < 0x23) && (uVar20 = (ulong)uVar28, uVar15 <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
     (((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0 &&
      (((param_7 & 1) != 0 || (uVar22 = FUN_02663fa0(&local_5658), (uVar22 & 1) != 0)))))) {
    if ((param_6 & 1) == 0) {
      local_565d = 0;
      local_5680 = 0x20;
      puStack_5688 = local_567c;
      local_567c[0] = 0;
      local_5690 = PTR_DAT_04bb2028 + 0x10;
      FUN_038d1270(&local_5690,"-----");
      FUN_038d1270(&local_5690,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar20 * 8 + 0xb0),uVar15
                  );
      local_56a0 = 0;
      lVar24 = *(long *)PTR_DAT_04bb2720;
      if (lVar24 == 0) {
        puVar29 = &DAT_055c04a0;
      }
      else {
        puVar29 = &DAT_055c04a0;
        if (*(long *)(lVar24 + 0x330) != 0) {
          puVar29 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar24 + 0x338));
          iVar14 = FUN_006bd550(*puVar29,0);
          puVar29 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar14 != 0x758f7eaf) {
            puVar29 = &DAT_055c04a0;
          }
        }
      }
      local_569c = *(undefined4 *)(puVar29 + 7);
      local_5698 = FUN_017baf44();
      local_5698 = local_5698 & 1;
      local_56a8 = PTR_DAT_04bb3140 + 0x10;
      local_56b8 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      local_5700 = (undefined8 *)((ulong)local_5700 & 0xffffffff00000000);
      lStack_56b0 = *(long *)PTR_DAT_04bb27c8 + 0x28;
      lVar24 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      if (lVar24 == 0) {
        uVar15 = (uint)(ushort)local_5644._0_2_;
        uVar17 = 0;
        uVar16 = 0;
        uVar28 = (uint)(ushort)local_5644._4_2_;
      }
      else {
        uVar16 = *(uint *)(lVar24 + 0x20);
        if ((int)local_e0 < (int)uVar16) {
          uVar15 = local_5644._0_4_ + uVar16;
        }
        else {
          uVar28 = local_5644._0_4_ + local_e0;
          iVar14 = *(int *)(lVar24 + 0x30) + 1;
          uVar15 = uVar28;
          if (iVar14 <= (int)uVar28) {
            uVar15 = *(int *)(lVar24 + 0x30) + 1;
          }
          uVar16 = iVar14 - local_5644._0_4_;
          if ((int)uVar28 <= iVar14) {
            uVar16 = local_e0;
          }
        }
        uVar17 = *(uint *)(lVar24 + 0x24);
        if ((int)uStack_dc < (int)uVar17) {
          uVar28 = local_5644._4_4_ + uVar17;
        }
        else {
          uVar28 = local_5644._4_4_ + uStack_dc;
          iVar14 = *(int *)(lVar24 + 0x34) + 1;
          uVar17 = iVar14 - local_5644._4_4_;
          if ((int)uVar28 <= iVar14) {
            uVar17 = uStack_dc;
          }
          if (iVar14 <= (int)uVar28) {
            uVar28 = *(int *)(lVar24 + 0x34) + 1;
          }
        }
      }
      uStack_564c = (ushort)uVar16;
      local_5648 = (ushort)uVar15;
      uStack_564a = (ushort)uVar17;
      local_5646 = (ushort)uVar28;
      local_5650 = uStack_564c;
      if ((uVar15 & 0xffff) <= (uVar16 & 0xffff)) {
        local_5650 = local_5648;
      }
      auStack_564e = (undefined1  [2])uStack_564a;
      if ((uVar28 & 0xffff) <= (uVar17 & 0xffff)) {
        auStack_564e = (undefined1  [2])local_5646;
      }
      memset(auStack_368,2,0x20d);
      memset(local_148,0,(long)local_150._4_4_ << 2);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_035a4230(&local_5650);
      uVar12 = local_5650;
      local_56f0 = &local_56b8;
      uStack_56e8 = PTR_DAT_04bbc1a0 + 0x10;
      local_56c0 = 0;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      uStack_56d8 = 0;
      uStack_56c8 = 0;
      local_5700 = (undefined8 *)(PTR_DAT_04bc1990 + 0x10);
      puStack_56f8 = &local_5650;
      local_56e0 = puVar3;
      local_56d0 = puVar3;
      if (local_5638 != 0) {
        uVar20 = 0;
        iVar14 = local_5644._0_4_ + (uint)local_5650;
        uVar15 = (uint)(ushort)auStack_564e;
        uVar22 = local_5638;
        uVar28 = (uint)local_5650;
        do {
          iVar8 = uVar28 - local_5650;
          if (-1 < iVar8) {
            if (iVar8 < (int)local_5644._0_4_) {
              iVar9 = uVar15 - (ushort)auStack_564e;
              if (-1 < iVar9) {
                if ((iVar9 < (int)local_5644._4_4_) && (local_5630 != (undefined1 *)0x0)) {
                  (*(code *)*local_5700)
                            (&local_5700,
                             local_5630 + (long)(iVar8 + local_5644._0_4_ * iVar9) * 0x28);
                  uVar22 = local_5638;
                }
              }
            }
          }
          uVar20 = uVar20 + 1;
          bVar13 = uVar28 + 1 == iVar14;
          if (bVar13) {
            uVar15 = uVar15 + 1;
          }
          uVar16 = (uint)uVar12;
          if (!bVar13) {
            uVar16 = uVar28 + 1;
          }
          uVar28 = uVar16;
        } while (uVar20 < uVar22);
      }
      FUN_035a56c0(&local_5650,0);
      uVar15 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0) & 0xffff;
      uVar28 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0) & 0xffff;
      local_5608[0] = 1;
      FUN_035a8968(&local_5650,uVar15,uVar28);
      FUN_035a81f0(&local_5650,uVar15,uVar28,0);
      uVar28 = local_e0;
      puVar11 = PTR_DAT_04bb43c0;
      local_5608[0] = 0;
      uVar15 = local_cc + 1;
      local_5708 = local_e0;
      local_5704 = uStack_dc;
      if (uVar15 != uStack_dc) {
        puVar4 = PTR_DAT_04bb2010 + 0x10;
        puVar5 = PTR_DAT_04bc0510 + 0x10;
        puVar6 = PTR_DAT_04bbc1a0 + 0x10;
        local_5720 = &puStack_e8;
        local_5718 = &local_d8;
        local_5710 = puVar3;
        do {
          local_5728 = 0;
          local_5730 = puVar4;
          puVar23 = (undefined4 *)FUN_01a5190c(&local_56a8,0,&local_5710,&local_5730);
          local_5738 = *puVar23;
          local_5734 = puVar23[1];
          lVar24 = *(long *)puVar11;
          uVar16 = FUN_0277d6c4(&local_5738);
          if (*(long *)puVar11 != 0) {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar24 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
              uVar20 = FUN_0277e158(&local_5738);
              if ((uVar20 & 1) == 0) {
                local_5740 = (uint *)0x0;
                lVar24 = *(long *)puVar11;
                local_5748 = local_5738;
                uStack_5744 = local_5734;
                local_5750 = puVar5;
                uVar16 = FUN_0277d6c4(&local_5748);
                puVar25 = (uint *)0x0;
                if (*(long *)puVar11 == 0) {
joined_r0x021efce4:
                  if ((param_5 & 1) == 0) goto LAB_021efce8;
LAB_021ef994:
                  uVar16 = 0;
                  if (((puVar25 != (uint *)0x0) && (uVar17 = *puVar25, uVar17 != 0)) &&
                     (puVar25 != (uint *)(ulong)uVar17)) {
                    puVar27 = (uint *)((long)puVar25 - (long)(ulong)uVar17);
                    uVar16 = 0;
                    if (*puVar27 != 0) {
                      uVar16 = puVar27[1];
                      if ((uVar16 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
                        lVar24 = 0xc;
                        if (*(char *)((long)puVar27 + 10) != '\0') {
                          lVar24 = 0x1c;
                        }
                        lVar24 = (long)puVar27 + lVar24 + (ulong)(ushort)puVar27[2] * 8;
                        if (lVar24 != 0) {
                          uVar17 = 0;
                          if ((ulong)uVar16 != 0) {
                            uVar17 = (uint)((ulong)((long)puVar25 - lVar24) / (ulong)uVar16);
                          }
                          if (*puVar27 <= uVar17) {
                            uVar17 = 0xffffffff;
                          }
                          if ((uVar17 < *(uint *)PTR_DAT_04bc0048) &&
                             (uVar16 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc0048 + 8) +
                                              (long)(int)uVar17 * 2), uVar16 < 0x52))
                          goto LAB_021efa24;
                        }
                      }
                      uVar16 = 0;
                    }
                  }
LAB_021efa24:
                  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar16);
                  if (3 < uVar16 - 0x1e) goto LAB_021efd80;
LAB_021efa38:
                  local_c8 = (undefined *)0x3e6;
                  FUN_0277d4ac(&local_c8);
                  uVar17 = FUN_0277d7b4(&local_5738,&local_c8);
                  uVar16 = uVar17;
                  do {
                    local_90 = 0;
                    local_98 = local_5738;
                    uStack_94 = local_5734;
                    lVar24 = *(long *)puVar11;
                    local_a0 = PTR_DAT_04bc0510 + 0x10;
                    uVar18 = FUN_0277d6c4(&local_98);
                    if (*(long *)puVar11 != 0) {
                      lVar24 = *(long *)(lVar24 + 0x57e58);
                      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                      if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                        lVar24 = *(long *)PTR_DAT_04bc0428;
                        uVar18 = FUN_0277d6c4(&local_5738);
                        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                        if (uVar18 < *(uint *)(lVar24 + 0x1d8)) {
                          lVar24 = *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8);
                          if (lVar24 != 0) {
                            local_90 = lVar24;
                          }
                        }
                      }
                    }
                    local_b8 = 0;
                    puStack_c0 = PTR_DAT_04bb2010 + 0x10;
                    local_a8 = 0;
                    local_c8 = puVar6;
                    local_b0 = puStack_c0;
                    iVar14 = FUN_01ae98d0(&local_a0);
                    FUN_01afb7fc(&local_a0,&local_c8,iVar14);
                    if (lVar26 != 0) {
                      uVar20 = (ulong)((float)iVar14 * 90.0 * 11930465.0);
                      pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar20 >> 0x18 & 0xff) * 0x10);
                      fVar34 = (float)((uint)uVar20 & 0xffffff) * 5.9604645e-08;
                      fVar33 = (float)((local_a8._4_4_ - local_b8._4_4_) + 1);
                      fVar32 = -(fVar33 * 0.5) - 1.0;
                      if ((uVar16 & 1) == 0) {
                        fVar32 = fVar33 * 0.5 + 1.0;
                      }
                      fVar33 = (float)local_5728._4_4_ * 5.0 +
                               ((float)local_b8._4_4_ * 5.0 + (float)local_a8._4_4_ * 5.0 + 5.0) *
                               0.5 + fVar32 * 5.0 * (pfVar1[2] + fVar34 * pfVar1[3]);
                      fVar32 = (*pfVar1 + fVar34 * pfVar1[1]) * fVar32 * 5.0 +
                               (float)(int)local_5728 * 5.0 +
                               ((float)(int)local_b8 * 5.0 + (float)(int)local_a8 * 5.0 + 5.0) * 0.5
                      ;
                      uVar18 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
                      if ((uint)local_5650 <= (uVar18 & 0xffff)) {
                        if (((uVar18 & 0xffff) <=
                             (((uint)local_5650 + (uint)(ushort)local_5644._0_2_) - 1 & 0xffff)) &&
                           (uVar10 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0),
                           (uint)(ushort)auStack_564e <= (uVar10 & 0xffff))) {
                          if (((uVar10 & 0xffff) <=
                               (((uint)(ushort)auStack_564e + (uint)(ushort)local_5644._4_2_) - 1 &
                               0xffff)) &&
                             (uVar18 = (uVar18 - local_5650) +
                                       *(int *)((long)appuStack_5620[2] + 0x1c) *
                                       (uVar10 - (ushort)auStack_564e),
                             (*(uint *)(appuStack_5620[2][2] + (long)((int)uVar18 >> 5) * 4) >>
                              (ulong)(uVar18 & 0x1f) & 1) != 0)) {
                            *param_1 = local_5738;
                            param_1[1] = local_5734;
                            *(int *)(param_2 + 8) = (int)local_5728;
                            *(int *)(param_2 + 0xc) = local_5728._4_4_;
                            uVar19 = FUN_01ae98d0(&local_5750);
                            *param_3 = uVar19;
                            if (((uVar17 ^ 1 | uVar16) & 1) == 0 && param_8 != (undefined1 *)0x0) {
                              *param_8 = 1;
                              return 1;
                            }
                            return 1;
                          }
                        }
                      }
                    }
                    uVar18 = uVar17 & uVar16;
                    uVar16 = (uVar17 ^ 1) & uVar16;
                  } while ((uVar18 & 1) != 0);
                }
                else {
                  lVar24 = *(long *)(lVar24 + 0x57e58);
                  uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if (*(uint *)(lVar24 + 0x1d8) <= uVar16) {
                    puVar25 = (uint *)0x0;
                    goto joined_r0x021efce4;
                  }
                  puVar25 = (uint *)0x0;
                  if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar16 * 8) == 0)
                  goto joined_r0x021efce4;
                  lVar24 = *(long *)PTR_DAT_04bc0428;
                  uVar16 = FUN_0277d6c4(&local_5738);
                  uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if (*(uint *)(lVar24 + 0x1d8) <= uVar16) {
                    puVar25 = (uint *)0x0;
                    goto joined_r0x021efce4;
                  }
                  puVar25 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar16 * 8);
                  if (puVar25 == (uint *)0x0) goto joined_r0x021efce4;
                  local_5740 = puVar25;
                  if ((param_5 & 1) != 0) goto LAB_021ef994;
LAB_021efce8:
                  if (puVar25 != (uint *)0x0) {
                    puVar27 = (uint *)((long)puVar25 - (ulong)*puVar25);
                    if ((((*puVar25 != 0) && (puVar27 != (uint *)0x0)) && (*puVar27 != 0)) &&
                       ((uVar16 = puVar27[1], uVar16 != 0 && ((ulong)(ushort)puVar27[2] != 0)))) {
                      lVar24 = 0xc;
                      if (*(char *)((long)puVar27 + 10) != '\0') {
                        lVar24 = 0x1c;
                      }
                      lVar24 = (long)puVar27 + lVar24 + (ulong)(ushort)puVar27[2] * 8;
                      if (lVar24 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar16 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar25 - lVar24) / (ulong)uVar16);
                        }
                        if (*puVar27 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if ((uVar17 < *(uint *)PTR_DAT_04bc0048) &&
                           (*(short *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar17 * 2) ==
                            0x1d)) goto LAB_021efa38;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_021efd80:
          if ((int)local_5708 < *(int *)(local_5718 + 1)) {
            local_5708 = local_5708 + 1;
          }
          else {
            local_5704 = local_5704 + 1;
            local_5708 = *(uint *)(local_5720 + 1);
          }
        } while ((uVar28 != local_5708) || (uVar15 != local_5704));
      }
    }
    else if ((param_5 & 1) == 0) {
      local_5700 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
      puStack_56f8 = (ushort *)0x406d86b;
      uVar20 = FUN_027490f0(iVar14,&local_5700);
      if ((uVar20 & 1) != 0) {
        return 1;
      }
    }
    else {
      local_5700 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
      puStack_56f8 = (ushort *)0x406d86b;
      uVar15 = FUN_027490f0(iVar14,&local_5700);
      if ((uVar15 >> 1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

