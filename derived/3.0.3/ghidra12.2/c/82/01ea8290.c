
/* WARNING: Removing unreachable block (ram,0x01ea8690) */
/* WARNING: Removing unreachable block (ram,0x01ea8674) */
/* WARNING: Removing unreachable block (ram,0x01ea8684) */
/* WARNING: Removing unreachable block (ram,0x01ea86b4) */
/* WARNING: Removing unreachable block (ram,0x01ea8798) */
/* WARNING: Removing unreachable block (ram,0x01ea8710) */
/* WARNING: Removing unreachable block (ram,0x01ea8720) */
/* WARNING: Removing unreachable block (ram,0x01ea87a8) */

undefined8 FUN_01ea8290(long *param_1,long param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_565c;
  undefined **local_5658;
  undefined8 local_5650;
  undefined **local_5648;
  undefined *puStack_5640;
  undefined *local_5638;
  undefined8 uStack_5630;
  undefined *local_5628;
  undefined8 uStack_5620;
  undefined1 local_5618;
  ushort local_5610;
  undefined1 auStack_560e [2];
  ushort uStack_560c;
  ushort uStack_560a;
  ushort local_5608;
  ushort local_5606;
  ushort local_5604;
  undefined2 uStack_5602;
  ushort uStack_5600;
  undefined2 uStack_55fe;
  int iStack_55fc;
  undefined *local_55f8;
  undefined8 local_55f0;
  undefined8 local_55e8;
  undefined ***apppuStack_55e0 [3];
  undefined1 local_55c8 [8];
  undefined1 auStack_55c0 [8];
  undefined8 local_55b8 [3];
  undefined1 local_55a0 [8];
  undefined1 local_5598 [8];
  undefined8 local_5590 [3];
  undefined1 local_5578 [8];
  undefined1 local_5570 [8];
  undefined8 local_5568 [3];
  undefined1 local_5550 [8];
  undefined1 auStack_5548 [8];
  undefined8 local_5540 [3];
  undefined1 local_5528 [8];
  undefined1 local_5520 [8];
  undefined8 local_5518 [3];
  undefined1 local_5500 [8];
  undefined **local_54f8 [2600];
  undefined **local_3b8;
  undefined8 local_3b0;
  undefined1 *local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 local_370 [72];
  undefined1 auStack_328 [528];
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 *local_108;
  ulong local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  
  puVar10 = PTR_DAT_04bb2010;
  lVar11 = *(long *)(param_1[1] + 0x68);
  fVar23 = *(float *)(lVar11 + 0x278);
  fVar24 = *(float *)(lVar11 + 0x280);
  fVar22 = (float)*(int *)(param_2 + 0x10) * 5.0;
  fVar20 = (float)*(int *)(param_2 + 0x14) * 5.0;
  if ((fVar22 <= fVar23) && (fVar22 = (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0, fVar23 <= fVar22)
     ) {
    fVar22 = fVar23;
  }
  if ((fVar20 <= fVar24) && (fVar20 = (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0, fVar24 <= fVar20)
     ) {
    fVar20 = fVar24;
  }
  if (4.0 < SQRT((fVar20 - fVar24) * (fVar20 - fVar24) + (fVar22 - fVar23) * (fVar22 - fVar23))) {
    if ((*(uint *)(param_1[1] + 0x750) | 2) != 3) {
      return 0;
    }
    local_a0 = 0;
    local_5650 = (ushort *)((ulong)local_5650 & 0xffffffff00000000);
    local_a8 = PTR_DAT_04bb2010 + 0x10;
    local_5658 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
    local_90 = CONCAT44((int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0),
                        (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0));
    lVar11 = *(long *)PTR_DAT_04bb2720;
    local_98 = local_a8;
    if (lVar11 == 0) {
      puVar17 = &DAT_055c04a0;
    }
    else {
      puVar17 = &DAT_055c04a0;
      if (*(long *)(lVar11 + 0x330) != 0) {
        puVar17 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
        iVar8 = FUN_006bd550(*puVar17,0);
        puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar17 = &DAT_055c04a0;
        }
      }
    }
    local_5650 = (ushort *)CONCAT44(*(undefined4 *)(puVar17 + 7),(undefined4)local_5650);
    uVar7 = FUN_017baf44();
    local_5648 = (undefined **)(CONCAT71(local_5648._1_7_,uVar7) & 0xffffffffffffff01);
    FUN_01a5033c(auStack_b0,&local_5658,0,&local_98,&local_a8);
    puVar4 = PTR_DAT_04bb43c0;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(auStack_b0);
    if (*(long *)puVar4 == 0) {
      return 0;
    }
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar9) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
      return 0;
    }
    local_55f8 = puVar10 + 0x10;
    uStack_5600 = 0;
    uStack_55fe = 0;
    iStack_55fc = 0;
    local_55f0 = (undefined1 *)0x0;
    puVar10 = PTR_DAT_04bbc1a0 + 0x10;
    local_5610 = (ushort)puVar10;
    auStack_560e = SUB82((ulong)puVar10 >> 0x10,0);
    uStack_560c = (ushort)((ulong)puVar10 >> 0x20);
    uStack_560a = (ushort)((ulong)puVar10 >> 0x30);
    local_5608 = (ushort)local_55f8;
    local_5606 = (ushort)((ulong)local_55f8 >> 0x10);
    local_5604 = (ushort)((ulong)local_55f8 >> 0x20);
    uStack_5602 = (undefined2)((ulong)local_55f8 >> 0x30);
    FUN_0277f02c(auStack_b0,&local_5610);
    if (*(int *)(param_2 + 0x20) < CONCAT22(uStack_55fe,uStack_5600) + (int)local_a0) {
      return 0;
    }
    if ((int)local_55f0 + (int)local_a0 < *(int *)(param_2 + 0x10)) {
      return 0;
    }
    if (*(int *)(param_2 + 0x24) < iStack_55fc + local_a0._4_4_) {
      return 0;
    }
    if (local_55f0._4_4_ + local_a0._4_4_ < *(int *)(param_2 + 0x14)) {
      return 0;
    }
  }
  local_55c8[0] = 0;
  local_5604 = 0x19;
  uStack_5602 = 0;
  uStack_5600 = 0x15;
  uStack_55fe = 0;
  local_55f0 = auStack_55c0;
  local_55f8 = (undefined *)0x20d;
  apppuStack_55e0[2] = &local_3b8;
  local_55e8 = 0;
  apppuStack_55e0[0] = (undefined ***)0x0;
  apppuStack_55e0[1] = (undefined ***)0x0;
  lVar11 = 0x50;
  do {
    *(undefined4 *)(auStack_560e + lVar11 + 1) = 0;
    pppuVar1 = (undefined ***)((long)local_54f8 + lVar11);
    *(undefined4 *)(auStack_560e + lVar11 + -2) = 0;
    *(undefined8 *)(auStack_560e + lVar11 + 6) = 0;
    *(undefined8 *)((long)apppuStack_55e0 + lVar11 + -0x20) = 0;
    *(undefined8 *)((long)apppuStack_55e0 + lVar11 + -0x18) = 0;
    *(undefined1 *)((long)apppuStack_55e0 + lVar11 + -0x10) = 0;
    *(undefined4 *)((long)apppuStack_55e0 + lVar11 + -8) = 0;
    *(undefined4 *)((long)apppuStack_55e0 + lVar11 + -5) = 0;
    *(undefined8 *)((long)apppuStack_55e0 + lVar11 + 0x10) = 0;
    local_55c8[lVar11] = 0;
    *(undefined4 *)(auStack_55c0 + lVar11) = 0;
    *(undefined4 *)(auStack_55c0 + lVar11 + 3) = 0;
    local_55a0[lVar11] = 0;
    *(undefined8 *)((long)local_55b8 + lVar11) = 0;
    *(undefined4 *)(local_5598 + lVar11 + 3) = 0;
    *(undefined4 *)(local_5598 + lVar11) = 0;
    *(undefined8 *)((long)local_5590 + lVar11 + 0x10) = 0;
    local_5578[lVar11] = 0;
    *(undefined4 *)(local_5570 + lVar11) = 0;
    *(undefined4 *)(local_5570 + lVar11 + 3) = 0;
    *(undefined8 *)((long)local_5568 + lVar11 + 0x10) = 0;
    local_5550[lVar11] = 0;
    *(undefined4 *)(auStack_5548 + lVar11) = 0;
    *(undefined4 *)(auStack_5548 + lVar11 + 3) = 0;
    *(undefined8 *)((long)local_5540 + lVar11) = 0;
    local_5528[lVar11] = 0;
    *(undefined4 *)(local_5520 + lVar11 + 3) = 0;
    *(undefined4 *)(local_5520 + lVar11) = 0;
    local_5500[lVar11] = 0;
    *(undefined8 *)((long)local_5518 + lVar11) = 0;
    *(undefined8 *)((long)apppuStack_55e0 + lVar11) = 0;
    *(undefined8 *)((long)apppuStack_55e0 + lVar11 + 8) = 0;
    *(undefined8 *)((long)local_55b8 + lVar11 + 8) = 0;
    *(undefined8 *)((long)local_55b8 + lVar11 + 0x10) = 0;
    *(undefined8 *)((long)local_5590 + lVar11) = 0;
    *(undefined8 *)((long)local_5590 + lVar11 + 8) = 0;
    *(undefined8 *)((long)local_5568 + lVar11) = 0;
    *(undefined8 *)((long)local_5568 + lVar11 + 8) = 0;
    *(undefined8 *)((long)local_5540 + lVar11 + 8) = 0;
    *(undefined8 *)((long)local_5540 + lVar11 + 0x10) = 0;
    *(undefined8 *)((long)local_5518 + lVar11 + 8) = 0;
    *(undefined8 *)((long)local_5518 + lVar11 + 0x10) = 0;
    lVar11 = lVar11 + 0x118;
  } while (pppuVar1 != apppuStack_55e0[2]);
  local_390 = 0;
  local_3a8 = local_370;
  local_388 = 0;
  uStack_560c = 0x20;
  uStack_560a = 0x20;
  local_5608 = 0xe7;
  local_5606 = 0xcb;
  local_3b8 = &PTR_LAB_04a5ecc0;
  local_3b0 = 0x110000020d;
  local_5610 = 0x20;
  local_380 = 0;
  local_378 = 0;
  local_3a0 = 0x19ffffffff;
  auStack_560e = (undefined1  [2])0x20;
  local_398 = 0x15;
  memset(auStack_328,0,0x20d);
  local_110 = 0x110000020d;
  local_100 = 0x19ffffffff;
  local_f8 = 0x15;
  puStack_118 = PTR_DAT_04bb96d8 + 0x10;
  local_108 = &local_f4;
  local_98 = *(undefined **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_5658 = (undefined **)((ulong)local_5658 & 0xffffffff00000000);
  local_90 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  uVar9 = (int)((float)(int)(fVar24 + 2.5) / 5.0) - (uint)(fVar24 + 2.5 < 0.0) & 0xffff;
  lVar11 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  uVar13 = (int)((float)(int)(fVar23 + 2.5) / 5.0) - (uint)(fVar23 + 2.5 < 0.0) & 0xffff;
  if (lVar11 == 0) {
    uVar19 = (uint)local_5604;
    uVar16 = 0;
    uVar15 = 0;
    uVar12 = (uint)uStack_5600;
  }
  else {
    uVar15 = *(uint *)(lVar11 + 0x20);
    iVar8 = CONCAT22(uStack_5602,local_5604);
    uVar12 = (uint)((float)uVar13 + -12.5);
    uVar14 = (uint)((float)uVar9 + -10.5);
    if ((int)uVar12 < (int)uVar15) {
      uVar19 = iVar8 + uVar15;
    }
    else {
      uVar16 = iVar8 + uVar12;
      iVar2 = *(int *)(lVar11 + 0x30) + 1;
      uVar19 = uVar16;
      if (iVar2 <= (int)uVar16) {
        uVar19 = *(int *)(lVar11 + 0x30) + 1;
      }
      uVar15 = iVar2 - iVar8;
      if ((int)uVar16 <= iVar2) {
        uVar15 = uVar12;
      }
    }
    uVar16 = *(uint *)(lVar11 + 0x24);
    iVar8 = CONCAT22(uStack_55fe,uStack_5600);
    if ((int)uVar14 < (int)uVar16) {
      uVar12 = iVar8 + uVar16;
    }
    else {
      uVar12 = iVar8 + uVar14;
      iVar2 = *(int *)(lVar11 + 0x34) + 1;
      uVar16 = iVar2 - iVar8;
      if ((int)uVar12 <= iVar2) {
        uVar16 = uVar14;
      }
      if (iVar2 <= (int)uVar12) {
        uVar12 = *(int *)(lVar11 + 0x34) + 1;
      }
    }
  }
  uStack_560c = (ushort)uVar15;
  local_5608 = (ushort)uVar19;
  uStack_560a = (ushort)uVar16;
  local_5610 = uStack_560c;
  if ((uVar19 & 0xffff) <= (uVar15 & 0xffff)) {
    local_5610 = local_5608;
  }
  local_5606 = (ushort)uVar12;
  auStack_560e = (undefined1  [2])uStack_560a;
  if ((uVar12 & 0xffff) <= (uVar16 & 0xffff)) {
    auStack_560e = (undefined1  [2])local_5606;
  }
  memset(auStack_328,2,0x20d);
  local_f4 = 0;
  uStack_ec = 0;
  local_b4 = 0;
  local_100 = local_100 & 0xffffffff00000000;
  local_e4 = 0;
  uStack_dc = 0;
  local_d4 = 0;
  uStack_cc = 0;
  local_c4 = 0;
  uStack_bc = 0;
  FUN_035a4230(&local_5610);
  uVar5 = local_5610;
  local_5648 = &local_98;
  local_5618 = 0;
  puStack_5640 = PTR_DAT_04bbc1a0 + 0x10;
  local_5638 = PTR_DAT_04bb2010 + 0x10;
  uStack_5630 = 0;
  uStack_5620 = 0;
  local_5658 = &PTR_FUN_04a5eca8;
  local_5650 = &local_5610;
  local_5628 = local_5638;
  if (local_55f8 != (undefined *)0x0) {
    uVar18 = 0;
    iVar8 = CONCAT22(uStack_5602,local_5604);
    uVar15 = (uint)local_5610;
    uVar19 = (uint)(ushort)auStack_560e;
    puVar10 = local_55f8;
    uVar12 = uVar15;
    do {
      iVar2 = uVar12 - local_5610;
      if (-1 < iVar2) {
        if (iVar2 < CONCAT22(uStack_5602,local_5604)) {
          iVar3 = uVar19 - (ushort)auStack_560e;
          if (((-1 < iVar3) && (iVar3 < CONCAT22(uStack_55fe,uStack_5600))) &&
             (local_55f0 != (undefined1 *)0x0)) {
            (*(code *)*local_5658)
                      (&local_5658,
                       local_55f0 + (long)(iVar2 + CONCAT22(uStack_5602,local_5604) * iVar3) * 0x28)
            ;
            puVar10 = local_55f8;
          }
        }
      }
      uVar18 = uVar18 + 1;
      bVar6 = uVar12 + 1 == iVar8 + uVar15;
      if (bVar6) {
        uVar19 = uVar19 + 1;
      }
      uVar16 = (uint)uVar5;
      if (!bVar6) {
        uVar16 = uVar12 + 1;
      }
      uVar12 = uVar16;
    } while (uVar18 < puVar10);
  }
  FUN_035a56c0(&local_5610,0);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,*(undefined4 *)(param_1[1] + 0x230));
  FUN_02146570(&local_5610,&local_a8,PTR_DAT_04bb3238,0);
  local_55c8[0] = 1;
  FUN_035a8968(&local_5610,uVar13,uVar9);
  FUN_035a81f0(&local_5610,uVar13,uVar9,0);
  iVar8 = *(int *)(param_2 + 0x24);
  local_55c8[0] = 0;
  uVar9 = *(uint *)(param_2 + 0x14);
  if (iVar8 + 1U != uVar9) {
    uVar13 = *(uint *)(param_2 + 0x10);
    uVar19 = uVar13;
    do {
      if ((((uint)local_5610 <= (uVar19 & 0xffff)) &&
          ((uVar19 & 0xffff) <= (((uint)local_5610 + (uint)local_5604) - 1 & 0xffff))) &&
         (((uint)(ushort)auStack_560e <= (uVar9 & 0xffff) &&
          ((uVar9 & 0xffff) <= (((uint)(ushort)auStack_560e + (uint)uStack_5600) - 1 & 0xffff))))) {
        uVar16 = (uVar19 - local_5610) +
                 *(int *)((long)apppuStack_55e0[2] + 0x1c) * (uVar9 - (ushort)auStack_560e);
        uVar15 = 1 << (ulong)(uVar16 & 0x1f);
        uVar12 = *(uint *)((long)apppuStack_55e0[2][2] + (long)((int)uVar16 >> 5) * 4);
        if ((uVar15 & uVar12) != 0) {
          *(uint *)((long)apppuStack_55e0[2][2] + ((long)((ulong)uVar16 << 0x20) >> 0x25) * 4) =
               uVar12 & (uVar15 ^ 0xffffffff);
          *(int *)(apppuStack_55e0[2] + 3) = *(int *)(apppuStack_55e0[2] + 3) + -1;
          uVar13 = *(uint *)(param_2 + 0x10);
          iVar8 = *(int *)(param_2 + 0x24);
        }
      }
      if ((int)uVar19 < *(int *)(param_2 + 0x20)) {
        uVar19 = uVar19 + 1;
      }
      else {
        uVar9 = uVar9 + 1;
        uVar19 = uVar13;
      }
    } while (uVar13 != uVar19 || iVar8 + 1U != uVar9);
  }
  lVar11 = param_1[1];
  uVar13 = *(uint *)(apppuStack_55e0[2] + 3);
  uVar9 = *(uint *)(lVar11 + 0x288);
  *(undefined4 *)(lVar11 + 0x288) = *(undefined4 *)(lVar11 + 0x28c);
  uVar9 = uVar9 ^ uVar9 << 0xb;
  *(undefined4 *)(lVar11 + 0x28c) = *(undefined4 *)(lVar11 + 0x290);
  uVar19 = *(uint *)(lVar11 + 0x294);
  *(uint *)(lVar11 + 0x290) = uVar19;
  uVar9 = uVar9 >> 8 ^ uVar19 >> 0x13 ^ uVar9 ^ uVar19;
  *(uint *)(lVar11 + 0x294) = uVar9;
  if (0 < (int)*(uint *)(apppuStack_55e0[2] + 1)) {
    uVar19 = 0;
    uVar18 = (ulong)uVar13 * (ulong)uVar9 >> 0x20;
    do {
      if ((*(uint *)((long)apppuStack_55e0[2][2] + (ulong)(uVar19 >> 5) * 4) >>
           (ulong)(uVar19 & 0x1f) & 1) != 0) {
        if ((int)uVar18 == 0) {
          iVar8 = *(int *)((long)apppuStack_55e0[2] + 0x1c);
          iVar2 = 0;
          if (iVar8 != 0) {
            iVar2 = (int)uVar19 / iVar8;
          }
          fVar20 = (float)(int)(iVar2 + (uint)(ushort)auStack_560e) * 5.0;
          local_a8 = (undefined *)
                     (ulong)(uint)((float)(int)((uVar19 - iVar2 * iVar8) + (uint)local_5610) * 5.0);
          goto LAB_01ea8c98;
        }
        uVar18 = (ulong)((int)uVar18 - 1);
      }
      uVar19 = uVar19 + 1;
    } while (*(uint *)(apppuStack_55e0[2] + 1) != uVar19);
  }
  if (*(int *)(param_1[1] + 0x500) == 1) {
    lVar11 = *(long *)PTR_DAT_04bb5c90;
    local_a8 = (undefined *)
               CONCAT44(local_a8._4_4_,
                        ((float)*(int *)(lVar11 + 0x80) * 5.0 +
                        (float)*(int *)(lVar11 + 0x90) * 5.0 + 5.0) * 0.5);
    fVar20 = ((float)*(int *)(lVar11 + 0x84) * 5.0 + (float)*(int *)(lVar11 + 0x94) * 5.0 + 5.0) *
             0.5;
LAB_01ea8c98:
    local_a0 = CONCAT44(local_a0._4_4_,fVar20);
    lVar11 = *(long *)PTR_DAT_04bb27c8;
  }
  else {
    uVar18 = FUN_021d9480(&local_a8,param_1[1] + 0x508,0);
    if ((uVar18 & 1) == 0) {
      lVar11 = *(long *)PTR_DAT_04bb5c90;
      local_a8 = (undefined *)
                 CONCAT44(local_a8._4_4_,
                          ((float)*(int *)(lVar11 + 0x80) * 5.0 +
                          (float)*(int *)(lVar11 + 0x90) * 5.0 + 5.0) * 0.5);
      local_a0 = CONCAT44(local_a0._4_4_,
                          ((float)*(int *)(lVar11 + 0x84) * 5.0 +
                          (float)*(int *)(lVar11 + 0x94) * 5.0 + 5.0) * 0.5);
    }
    lVar11 = *(long *)PTR_DAT_04bb27c8;
  }
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0xa8) == 0)) || (*(char *)(lVar11 + 0x11c8) != '\0')) {
    uVar21 = 0xc3fa0000;
  }
  else {
    uVar21 = FUN_0093a950(lVar11 + 0x28,&local_a8,0);
  }
  local_a8 = (undefined *)CONCAT44(uVar21,(undefined4)local_a8);
  local_565c = 0;
  FUN_01e39778(param_1[1],&local_a8,&local_565c,0);
  (**(code **)(*param_1 + 0x330))(param_1);
  FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
  return 0;
}

