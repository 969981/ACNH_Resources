
/* WARNING: Removing unreachable block (ram,0x01025480) */
/* WARNING: Removing unreachable block (ram,0x01025490) */

bool FUN_010252d0(void)

{
  int *piVar1;
  undefined **ppuVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined8 *local_9c88;
  undefined8 *puStack_9c80;
  undefined8 *local_9c78;
  undefined *puStack_9c70;
  undefined *local_9c68;
  undefined8 uStack_9c60;
  undefined *local_9c58;
  undefined8 uStack_9c50;
  undefined1 local_9c48;
  undefined8 local_9c40;
  ushort local_9c38;
  undefined2 local_9c36;
  int local_9c34;
  int aiStack_9c30 [2];
  undefined8 uStack_9c28;
  undefined1 *local_9c20;
  undefined8 local_9c18;
  undefined **appuStack_9c10 [3];
  undefined1 local_9bf8 [8];
  undefined1 auStack_9bf0 [8];
  undefined8 local_9be8 [3];
  undefined1 local_9bd0 [8];
  undefined1 auStack_9bc8 [8];
  undefined8 local_9bc0 [3];
  undefined1 local_9ba8 [38368];
  undefined *local_5c8;
  undefined8 uStack_5c0;
  undefined1 *local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined1 auStack_580 [128];
  undefined1 auStack_500 [968];
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  long lStack_90;
  
  lVar10 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar10 == 0) {
    uVar15 = 0;
    fVar20 = 40.0;
    uVar18 = 0;
    iVar13 = 0x10;
    fVar21 = 40.0;
    uVar17 = 0x10;
  }
  else {
    fVar20 = *(float *)(lVar10 + 0xd74);
    fVar21 = *(float *)(lVar10 + 0xd7c);
    uVar15 = *(ushort *)(lVar10 + 0xd88);
    uVar18 = (uint)*(ushort *)(lVar10 + 0xd8c);
    uVar17 = *(ushort *)(lVar10 + 0xd98);
    iVar13 = *(int *)(lVar10 + 0xd9c);
  }
  appuStack_9c10[0]._0_4_ = (uint)(uint3)appuStack_9c10[0];
  aiStack_9c30[0] = 0x20;
  piVar1 = aiStack_9c30 + 1;
  local_9c40 = PTR_DAT_04bb2028 + 0x10;
  uStack_9c28._4_4_ = uStack_9c28._4_4_ & 0xffffff00;
  aiStack_9c30[1] = 0x72746e45;
  uStack_9c28._0_4_ = 0x65636e61;
  local_9c38 = (ushort)piVar1;
  local_9c36 = (undefined2)((ulong)piVar1 >> 0x10);
  local_9c34 = (int)((ulong)piVar1 >> 0x20);
  lVar10 = FUN_02917a1c(&local_9c40);
  if (lVar10 == 0) {
    uVar14 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
    uVar12 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  }
  else {
    uVar12 = iVar13 + 2;
    fVar20 = (float)NEON_ucvtf(*(undefined4 *)(lVar10 + 0x20));
    fVar20 = *(float *)(lVar10 + 0xc) +
             (*(float *)(lVar10 + 0x24) + *(float *)(lVar10 + 0x1c) * 0.5 + 0.0) *
             (*(float *)(PTR_DAT_04bb2d00 +
                        ((ulong)(long)(fVar20 * 11930465.0) >> 0x18 & 0xff) * 0x10) +
             (float)((uint)(long)(fVar20 * 11930465.0) & 0xffffff) * 5.9604645e-08 *
             *(float *)((long)(PTR_DAT_04bb2d00 +
                              ((ulong)(long)(fVar20 * 11930465.0) >> 0x18 & 0xff) * 0x10) + 4));
    uVar14 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  }
  local_98 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_9c34 = 0x1f;
  aiStack_9c30[0] = 0x1f;
  local_9c20 = auStack_9bf0;
  uStack_9c28._0_4_ = 0x3c1;
  uStack_9c28._4_4_ = 0;
  local_9c18 = 0;
  appuStack_9c10[0] = (undefined **)0x0;
  local_9bf8[0] = 0;
  lStack_90 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  appuStack_9c10[1] = (undefined **)0x0;
  lVar10 = 0x50;
  while( true ) {
    ppuVar2 = (undefined **)((long)appuStack_9c10 + lVar10 + -8);
    *(undefined4 *)((long)aiStack_9c30 + lVar10 + -0xd) = 0;
    *(undefined4 *)((long)aiStack_9c30 + lVar10 + -0x10) = 0;
    *(undefined8 *)((long)aiStack_9c30 + lVar10 + 8) = 0;
    *(undefined1 *)((long)appuStack_9c10 + lVar10 + -0x10) = 0;
    *(undefined8 *)((long)aiStack_9c30 + lVar10 + -8) = 0;
    *(undefined8 *)((long)aiStack_9c30 + lVar10) = 0;
    if (ppuVar2 == &local_5c8) break;
    *(undefined4 *)((long)appuStack_9c10 + lVar10 + -5) = 0;
    *(undefined4 *)ppuVar2 = 0;
    *(undefined8 *)((long)appuStack_9c10 + lVar10 + 0x10) = 0;
    local_9bf8[lVar10] = 0;
    *(undefined4 *)(auStack_9bf0 + lVar10) = 0;
    *(undefined4 *)(auStack_9bf0 + lVar10 + 3) = 0;
    *(undefined8 *)((long)local_9be8 + lVar10 + 0x10) = 0;
    local_9bd0[lVar10] = 0;
    *(undefined4 *)(auStack_9bc8 + lVar10) = 0;
    *(undefined4 *)(auStack_9bc8 + lVar10 + 3) = 0;
    local_9ba8[lVar10] = 0;
    *(undefined8 *)((long)local_9bc0 + lVar10) = 0;
    *(undefined8 *)((long)appuStack_9c10 + lVar10) = 0;
    *(undefined8 *)((long)appuStack_9c10 + lVar10 + 8) = 0;
    *(undefined8 *)((long)local_9be8 + lVar10) = 0;
    *(undefined8 *)((long)local_9be8 + lVar10 + 8) = 0;
    *(undefined8 *)((long)local_9bc0 + lVar10 + 8) = 0;
    *(undefined8 *)((long)local_9bc0 + lVar10 + 0x10) = 0;
    lVar10 = lVar10 + 0xa0;
  }
  puStack_9c80 = &local_9c40;
  local_5a8 = 0x1f;
  local_5a0 = 0;
  uStack_598 = 0;
  local_5b8 = auStack_580;
  local_590 = 0;
  uStack_588 = 0;
  uStack_5b0 = 0x1fffffffff;
  local_5c8 = PTR_DAT_04bb7f28 + 0x10;
  uStack_5c0 = 0x1f000003c1;
  local_128 = &local_114;
  local_11c = 0x1f0000001f;
  local_138 = PTR_DAT_04bb7f30 + 0x10;
  uStack_130 = 0x1f000003c1;
  local_9c78 = &local_98;
  local_9c48 = 0;
  puStack_9c70 = PTR_DAT_04bbc1a0 + 0x10;
  local_9c68 = PTR_DAT_04bb2010 + 0x10;
  uStack_9c60 = 0;
  uStack_9c50 = 0;
  local_9c88 = (undefined8 *)(PTR_DAT_04bb7f20 + 0x10);
  uVar3 = uVar15;
  if (uVar17 <= uVar15) {
    uVar3 = uVar17;
  }
  local_9c36 = (undefined2)(iVar13 + 4U);
  uVar4 = (short)uVar18;
  if ((iVar13 + 4U & 0xffff) <= uVar18) {
    uVar4 = local_9c36;
  }
  local_9c40 = (undefined *)CONCAT44(CONCAT22((short)uVar18,uVar15),CONCAT22(uVar4,uVar3));
  local_9c58 = local_9c68;
  local_9c38 = uVar17;
  appuStack_9c10[2] = &local_5c8;
  memset(auStack_500,2,0x3c1);
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_120 = 0;
  FUN_035a4230(&local_9c40);
  uVar9 = CONCAT44(uStack_9c28._4_4_,(undefined4)uStack_9c28);
  if (uVar9 != 0) {
    uVar15 = (ushort)local_9c40;
    uVar11 = 0;
    iVar8 = local_9c34 + (uint)(ushort)local_9c40;
    uVar18 = (uint)local_9c40._2_2_;
    uVar19 = (uint)(ushort)local_9c40;
    do {
      iVar5 = uVar19 - (ushort)local_9c40;
      if ((-1 < iVar5) && (iVar5 < local_9c34)) {
        iVar6 = uVar18 - local_9c40._2_2_;
        if ((-1 < iVar6) && ((iVar6 < aiStack_9c30[0] && (local_9c20 != (undefined1 *)0x0)))) {
          (*(code *)*local_9c88)(&local_9c88,local_9c20 + (long)(iVar5 + local_9c34 * iVar6) * 0x28)
          ;
          uVar9 = CONCAT44(uStack_9c28._4_4_,(undefined4)uStack_9c28);
        }
      }
      uVar11 = uVar11 + 1;
      bVar7 = uVar19 + 1 == iVar8;
      if (bVar7) {
        uVar18 = uVar18 + 1;
      }
      uVar16 = (uint)uVar15;
      if (!bVar7) {
        uVar16 = uVar19 + 1;
      }
      uVar19 = uVar16;
    } while (uVar11 < uVar9);
  }
  FUN_035a56c0(&local_9c40,0);
  local_9bf8[0] = 1;
  FUN_035a8968(&local_9c40,uVar14 & 0xffff,uVar12 & 0xffff);
  FUN_035a81f0(&local_9c40,uVar14 & 0xffff,uVar12 & 0xffff,0);
  iVar8 = uVar14 - 2;
  do {
    uVar18 = (*(int *)((long)appuStack_9c10[2] + 0x1c) * (iVar13 - (uint)local_9c40._2_2_) -
             (uint)(ushort)local_9c40) + iVar8;
    uVar18 = 1 << (ulong)(uVar18 & 0x1f) &
             *(uint *)(appuStack_9c10[2][2] + (long)((int)uVar18 >> 5) * 4);
    bVar7 = iVar8 <= (int)uVar14;
    iVar8 = iVar8 + 1;
  } while (uVar18 == 0 && bVar7);
  return uVar18 != 0;
}

