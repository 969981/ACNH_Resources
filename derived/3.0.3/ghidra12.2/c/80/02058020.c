
/* WARNING: Removing unreachable block (ram,0x020580fc) */
/* WARNING: Removing unreachable block (ram,0x0205810c) */
/* WARNING: Removing unreachable block (ram,0x020581f8) */

bool FUN_02058020(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  bool bVar13;
  int iVar14;
  float *pfVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined4 *puVar21;
  int iVar22;
  byte bVar23;
  float fVar24;
  float fVar25;
  int local_170;
  long local_120;
  long lStack_118;
  undefined8 local_110;
  undefined **local_108;
  undefined **local_100;
  undefined *local_f8;
  int local_f0;
  int local_ec;
  undefined *local_e8;
  undefined *puStack_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  undefined *local_a8;
  int local_a0;
  undefined8 local_9c;
  int local_90 [4];
  
  if (param_1 == 0) {
    return false;
  }
  pfVar15 = (float *)FUN_0252d9bc(0);
  lVar16 = FUN_0252dec4(0);
  bVar13 = false;
  if ((pfVar15 != (float *)0x0) && (lVar16 != 0)) {
    fVar24 = *pfVar15;
    fVar25 = pfVar15[2];
    iVar14 = FUN_01317b90(pfVar15,0);
    iVar8 = *(int *)(lVar16 + 4);
    lVar16 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
    uVar5 = (int)((float)(int)(fVar24 + 2.5) / 5.0) - (uint)(fVar24 + 2.5 < 0.0) & 0xffff;
    uVar19 = 0;
    lStack_118 = *(long *)PTR_DAT_04bb27c8 + 0x28;
    uVar6 = (int)((float)(int)(fVar25 + 2.5) / 5.0) - (uint)(fVar25 + 2.5 < 0.0) & 0xffff;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    bVar13 = true;
    pbVar20 = PTR_DAT_04bb32e0;
    local_120 = lVar16;
    do {
      puVar21 = (undefined4 *)PTR_DAT_04bb3238;
      uVar10 = (uint)((int)(long)((float)(iVar8 + 0x10000000U >> 0x1d) * 45.0 * 11930465.0) +
                      0x10000000 + (&DAT_04058260)[uVar19]) >> 0x1d;
      local_a8 = (undefined *)0xbf8000000000001f;
      local_a0 = CONCAT13(local_a0._3_1_,0x10101);
      local_9c = 0x1000000000000;
      puVar7 = &DAT_053cfb20 + (ulong)uVar10 * 2;
      if (7 < uVar10) {
        puVar7 = &DAT_053cfb20;
      }
      iVar22 = uVar5 + *(int *)(puVar7 + 1) * 2;
      local_170 = uVar6 + *(int *)((long)puVar7 + 0xc) * 2;
      local_ac = *(int *)PTR_DAT_04bb3238;
      bVar23 = *pbVar20;
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      local_b0 = CONCAT31(local_b0._1_3_,bVar23);
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,(float)iVar22 * 5.0);
      local_b8 = (undefined *)CONCAT44(0x40a00000,(float)local_170 * 5.0);
      uVar17 = FUN_0251fad0(&local_c0,0);
      puVar12 = PTR_DAT_04bb27c8;
      if ((uVar17 & 1) == 0) {
        iVar11 = iVar22 + -1;
        puVar3 = PTR_DAT_04bbc1a0 + 0x10;
        puVar4 = PTR_DAT_04bb2010 + 0x10;
        local_ec = local_170 + -1;
        local_108 = &puStack_e0;
        local_100 = &local_d0;
        local_f8 = puVar4;
        local_f0 = iVar11;
        local_e8 = puVar3;
        puStack_e0 = puVar4;
        local_d8 = iVar11;
        iStack_d4 = local_ec;
        local_d0 = puVar4;
        local_c8 = iVar22;
        iStack_c4 = local_170;
        while( true ) {
          local_ac = local_ec;
          lVar18 = *(long *)puVar12;
          local_9c = CONCAT44(local_9c._4_4_,local_ec);
          local_c0 = puVar3;
          local_b0 = local_f0;
          local_a0 = local_f0;
          if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xa8), lVar18 == 0)) break;
          local_b8 = puVar4;
          local_a8 = puVar4;
          uVar17 = FUN_00971f80(lVar18,&local_c0,0);
          if ((uVar17 & 1) == 0) break;
          local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(float)local_ec * 5.0 + 2.5);
          local_c0 = (undefined *)(ulong)(uint)((float)local_f0 * 5.0 + 2.5);
          uVar17 = FUN_00925354(&local_c0);
          if (((uVar17 & 1) != 0) ||
             (local_90[0] = FUN_01317b90(&local_c0,0), local_90[0] != iVar14)) break;
          lVar18 = *(long *)puVar12;
          if ((lVar18 == 0) ||
             ((*(long *)(lVar18 + 0xa8) == 0 || (*(char *)(lVar18 + 0x11c8) != '\0')))) {
            fVar24 = -500.0;
          }
          else {
            fVar24 = (float)FUN_0093a950(lVar18 + 0x28,&local_c0,0);
          }
          if ((fVar24 - pfVar15[1] < -7.0) || (7.0 < fVar24 - pfVar15[1])) break;
          local_110 = 0xfffe;
          FUN_0277d4ac(&local_110);
          if (*(long *)(lVar16 + 0xd0) == 0) {
            sVar9 = *(short *)PTR_DAT_04bb37e0;
          }
          else {
            FUN_012e4f58(local_90,*(long *)(lVar16 + 0xd0),&local_f8,0);
            sVar9 = (short)local_90[0];
          }
          if ((sVar9 != -2) ||
             (uVar17 = FUN_035aa210(local_f0,local_ec,&local_120), (uVar17 & 1) == 0)) break;
          if (local_f0 < *(int *)(local_100 + 1)) {
            local_f0 = local_f0 + 1;
          }
          else {
            local_f0 = *(int *)(local_108 + 1);
            local_ec = local_ec + 1;
          }
          if ((iVar11 == local_f0) && (local_170 + 1 == local_ec)) goto LAB_020587a4;
        }
        pbVar20 = PTR_DAT_04bb32e0;
        puVar21 = (undefined4 *)PTR_DAT_04bb3238;
      }
      local_a8 = (undefined *)0xbf8000000000001f;
      puVar7 = &DAT_053cfb20 + (ulong)uVar10 * 2;
      local_a0 = CONCAT13(local_a0._3_1_,0x10101);
      local_9c = 0x1000000000000;
      if (7 < uVar10) {
        puVar7 = &DAT_053cfb20;
      }
      iVar22 = *(int *)(puVar7 + 1) * 3 + uVar5;
      local_170 = *(int *)((long)puVar7 + 0xc) * 3 + uVar6;
      local_ac = *puVar21;
      bVar23 = *pbVar20;
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      local_b0 = CONCAT31(local_b0._1_3_,bVar23);
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,(float)iVar22 * 5.0);
      local_b8 = (undefined *)CONCAT44(0x40a00000,(float)local_170 * 5.0);
      uVar17 = FUN_0251fad0(&local_c0,0);
      puVar3 = PTR_DAT_04bbc1a0;
      puVar12 = PTR_DAT_04bb27c8;
      if ((uVar17 & 1) == 0) {
        iVar11 = iVar22 + -1;
        local_ec = local_170 + -1;
        local_108 = &puStack_e0;
        local_100 = &local_d0;
        local_f8 = puVar2;
        local_f0 = iVar11;
        local_e8 = puVar1;
        puStack_e0 = puVar2;
        local_d8 = iVar11;
        iStack_d4 = local_ec;
        local_d0 = puVar2;
        local_c8 = iVar22;
        iStack_c4 = local_170;
        while( true ) {
          local_ac = local_ec;
          local_c0 = puVar3 + 0x10;
          local_9c = CONCAT44(local_9c._4_4_,local_ec);
          local_b8 = PTR_DAT_04bb2010 + 0x10;
          lVar18 = *(long *)puVar12;
          local_b0 = local_f0;
          local_a0 = local_f0;
          if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xa8), lVar18 == 0)) break;
          local_a8 = local_b8;
          uVar17 = FUN_00971f80(lVar18,&local_c0,0);
          if ((uVar17 & 1) == 0) break;
          local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(float)local_ec * 5.0 + 2.5);
          local_c0 = (undefined *)(ulong)(uint)((float)local_f0 * 5.0 + 2.5);
          uVar17 = FUN_00925354(&local_c0);
          if (((uVar17 & 1) != 0) ||
             (local_90[0] = FUN_01317b90(&local_c0,0), local_90[0] != iVar14)) break;
          lVar18 = *(long *)puVar12;
          if ((lVar18 == 0) ||
             ((*(long *)(lVar18 + 0xa8) == 0 || (*(char *)(lVar18 + 0x11c8) != '\0')))) {
            fVar24 = -500.0;
          }
          else {
            fVar24 = (float)FUN_0093a950(lVar18 + 0x28,&local_c0,0);
          }
          if ((fVar24 - pfVar15[1] < -7.0) || (7.0 < fVar24 - pfVar15[1])) break;
          local_110 = 0xfffe;
          FUN_0277d4ac(&local_110);
          if (*(long *)(lVar16 + 0xd0) == 0) {
            sVar9 = *(short *)PTR_DAT_04bb37e0;
          }
          else {
            FUN_012e4f58(local_90,*(long *)(lVar16 + 0xd0),&local_f8,0);
            sVar9 = (short)local_90[0];
          }
          if ((sVar9 != -2) ||
             (uVar17 = FUN_035aa210(local_f0,local_ec,&local_120), (uVar17 & 1) == 0)) break;
          if (local_f0 < *(int *)(local_100 + 1)) {
            local_f0 = local_f0 + 1;
          }
          else {
            local_f0 = *(int *)(local_108 + 1);
            local_ec = local_ec + 1;
          }
          if ((iVar11 == local_f0) && (local_170 + 1 == local_ec)) {
LAB_020587a4:
            *(int *)(param_1 + 8) = iVar22;
            *(int *)(param_1 + 0xc) = local_170;
            return bVar13;
          }
        }
      }
      bVar13 = uVar19 < 7;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 8);
  }
  return bVar13;
}

