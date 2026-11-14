
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_01510b7c(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  undefined3 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  float *pfVar16;
  undefined2 uVar17;
  long lVar18;
  undefined1 uVar19;
  uint *puVar20;
  undefined1 uVar21;
  uint *puVar22;
  long *plVar23;
  short *psVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  uint local_124;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined7 uStack_108;
  undefined4 local_101;
  undefined4 local_fc;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  uint *local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  float local_80;
  uint local_64;
  
  uVar14 = FUN_01503c40(param_3);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  lVar18 = *(long *)PTR_DAT_04bb27c0;
  if (lVar18 == 0) {
    plVar23 = (long *)0x0;
  }
  else {
    uVar27 = *param_3;
    if ((((uVar27 == 0) ||
         (plVar23 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                              ((ulong)(uVar27 >> 0x11) & 0x7ff8)), plVar23 == (long *)0x0)) ||
        ((*(uint *)(plVar23 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar23 + 0x46) != uVar27)) {
      plVar23 = (long *)0x0;
    }
    if (*(int *)(lVar18 + 0x288) == 1 || *(int *)(lVar18 + 0x288) == -1) {
      plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar15 + 0x60))();
    }
    if (plVar23 != (long *)0x0) {
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar13 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      (**(code **)(*plVar23 + 0x20))(plVar23,PTR_DAT_04bb5920);
    }
  }
  local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
  if (plVar23[0xe] == 0) {
    local_128 = -1;
  }
  else {
    local_128 = *(int *)(plVar23[0xe] + 0x280);
  }
  if (local_128 != 0) {
    return 0;
  }
  local_88 = *(undefined8 *)(param_3 + 2);
  puVar1 = param_3 + 1;
  local_80 = (float)param_3[4];
  local_64 = param_3[5];
  uVar27 = local_64 + 0x20000000 >> 0x1e;
  lVar18 = *(long *)PTR_DAT_04bb4718;
  if ((lVar18 == 0) || (uVar14 = (ulong)(byte)*puVar1, 7 < uVar14)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar24 = &DAT_054f0c08;
      if (iVar13 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar24 = &DAT_054f0c08;
    }
  }
  else {
    psVar24 = (short *)(lVar18 + uVar14 * 0xd0 +
                        (ulong)(*(uint *)(lVar18 + uVar14 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((char)psVar24[0x32] == '\0') || (*psVar24 != *(short *)PTR_DAT_04bb6298)) {
    iVar13 = 1;
  }
  else {
    iVar13 = *(int *)(psVar24 + 0x30);
  }
  FUN_01476a50(&local_90,plVar23);
  iVar10 = FUN_006f0400(param_3[0xd],param_3[0xf]);
  local_a0 = 0;
  local_c0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_b8 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = 0;
  puStack_a8 = puStack_b8;
  local_94 = iVar10;
  FUN_01470a84(plVar23,&local_c0);
  local_c8 = 0;
  local_d0 = 0;
  if (((DAT_0520f020 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_0520f020), iVar12 != 0)) {
    lVar18 = FUN_0251e98c(1);
    pfVar16 = (float *)(**(code **)(*(long *)(lVar18 + 0x2a0) + 0xf0))(lVar18 + 0x2a0);
    DAT_0520f018 = *pfVar16 * 1.5;
    __cxa_guard_release(&DAT_0520f020);
  }
  bVar9 = FUN_015114c0(DAT_0520f018,&local_90,&local_c0,&local_88,&local_64,&local_d0);
  uVar11 = local_94 + 0xa0000000U >> 0x1e;
  local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar11);
  *(undefined4 *)((long)plVar23 + 0x88c) = 0;
  if ((int)plVar23[0x57] == 0) {
    lVar18 = plVar23[0xd];
    *(undefined4 *)(plVar23 + 0x111) = *(undefined4 *)(lVar18 + 0x278);
    *(undefined4 *)((long)plVar23 + 0x88c) = *(undefined4 *)(lVar18 + 0x27c);
    fVar26 = *(float *)(lVar18 + 0x280);
  }
  else {
    pfVar16 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(local_64 >> 0x14) & 0xff0));
    *(float *)(plVar23 + 0x111) =
         (float)local_88 + *pfVar16 + pfVar16[1] * (float)(local_64 & 0xffffff) * 5.9604645e-08;
    fVar26 = local_80 + pfVar16[2] + pfVar16[3] * (float)(local_64 & 0xffffff) * 5.9604645e-08;
  }
  local_128 = (uint)plVar23[0x5a];
  *(float *)(plVar23 + 0x112) = fVar26;
  bVar9 = bVar9 & local_64 + 0x20000000 >> 0x1e == uVar11;
  if (iVar13 == 7) {
    bVar9 = 1;
  }
  bVar2 = 0;
  if (local_128 == 0) {
    bVar2 = bVar9;
  }
  if (bVar2 != 1) {
    return bVar2;
  }
  local_d8 = 0;
  local_e0 = 0;
  FUN_01511978(&local_e0,&local_c0,&local_88,&local_94,iVar13 == 7);
  uVar11 = param_2[0x11];
  plVar15 = (long *)plVar23[0x151];
  if (((*PTR_DAT_04bbcc08 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bbcc08), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bbcc00 = PTR_DAT_04bb6608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbcc08);
  }
  uVar11 = uVar11 + 1;
  uVar25 = uVar11;
  if ((plVar15 == (long *)0x0) ||
     (uVar14 = (**(code **)(*plVar15 + 0x10))(plVar15,PTR_DAT_04bbcc00), (uVar14 & 1) == 0)) {
    plVar15 = (long *)plVar23[0x151];
    if (((*PTR_DAT_04bbcc30 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bbcc30), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bbcc28 = PTR_DAT_04bb6608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbcc30);
    }
    if ((plVar15 != (long *)0x0) &&
       (uVar14 = (**(code **)(*plVar15 + 0x10))(plVar15,PTR_DAT_04bbcc28), (uVar14 & 1) != 0))
    goto LAB_01510f80;
  }
  else {
LAB_01510f80:
    uVar25 = 0;
    if (((float)param_3[0xb] != 0.0 || (float)param_3[9] != 0.0) &&
        ((float)param_3[8] != 0.0 || (float)param_3[7] != 0.0)) {
      uVar25 = uVar11;
    }
  }
  puVar7 = PTR_DAT_04bb43c0;
  local_e8 = (uint *)0x0;
  local_f8 = PTR_DAT_04bc0510 + 0x10;
  local_f0 = local_90;
  uStack_ec = uStack_8c;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(&local_f0);
  puVar6 = PTR_DAT_04bb2010;
  if (*(long *)puVar7 == 0) {
    local_130 = 0;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      lVar18 = *(long *)PTR_DAT_04bc0428;
      uVar11 = FUN_0277d6c4(&local_90);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar18 + 0x1d8)) &&
         (puVar20 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8),
         puVar20 != (uint *)0x0)) {
        local_130 = 0;
        uVar11 = *puVar20;
        local_e8 = puVar20;
        if ((uVar11 != 0) && (puVar20 != (uint *)(ulong)uVar11)) {
          puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar11);
          local_130 = 0;
          if (*puVar22 != 0) {
            uVar11 = puVar22[1];
            if ((uVar11 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar18 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar18 = 0x1c;
              }
              lVar18 = (long)puVar22 + lVar18 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar18 != 0) {
                uVar3 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar20 - lVar18) / (ulong)uVar11);
                }
                if (*puVar22 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
                   (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
                   local_130 = (uint)uVar4, uVar4 < 0x52)) goto LAB_01511128;
              }
            }
            local_130 = 0;
          }
        }
        goto LAB_01511128;
      }
    }
    local_130 = 0;
  }
LAB_01511128:
  local_128 = 0x4a;
  if (local_130 == 0x4a) {
    local_128 = *(int *)(plVar23[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
    bVar8 = local_128 == uVar27;
  }
  else {
    bVar8 = false;
  }
  *param_2 = *param_3;
  param_2[1] = iVar10 + 0x20000000U >> 0x1e;
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  uVar11 = param_3[4];
  *(undefined8 *)(param_2 + 5) = local_e0;
  param_2[4] = uVar11;
  param_2[7] = local_d8;
  param_2[8] = param_3[5];
  param_2[9] = (uint)(long)((float)uVar27 * 90.0 * 11930465.0);
  param_2[10] = param_3[6];
  bVar9 = (byte)param_3[1];
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(param_2 + 0xb) = bVar9;
  param_2[0xc] = param_3[7];
  uVar27 = param_3[8];
  param_2[0x11] = uVar25;
  param_2[0xd] = uVar27;
  bVar9 = (**(code **)(*(long *)plVar23[0x151] + 0x1c0))((long *)plVar23[0x151],puVar1);
  local_120 = puVar6 + 0x10;
  *(byte *)(param_2 + 0x12) = bVar9 & 1;
  param_2[0xe] = param_3[9];
  param_2[0xf] = param_3[10];
  param_2[0x10] = param_3[0xb];
  param_2[0x15] = param_3[0xd];
  puVar6 = PTR_DAT_04bb37e0;
  uStack_118 = 0;
  local_fc = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_101 = 0;
  uVar5 = *(undefined3 *)PTR_DAT_04bb37e0;
  param_2[0x16] = param_3[0xe];
  uVar19 = puVar6[3];
  local_124 = *(uint *)(puVar6 + 4);
  param_2[0x17] = param_3[0xf];
  local_128 = CONCAT13(uVar19,uVar5);
  uVar14 = FUN_01503f54(&local_128,puVar1);
  if ((uVar14 & 1) == 0) {
    FUN_01476a50(&local_130,plVar23);
    uVar17 = (undefined2)local_130;
    uVar19 = local_130._2_1_;
    uVar21 = local_130._3_1_;
  }
  else {
    uVar17 = (undefined2)local_128;
    uVar19 = local_128._2_1_;
    uVar21 = local_128._3_1_;
    local_12c = local_124;
  }
  *(undefined2 *)(param_2 + 0x13) = uVar17;
  *(undefined1 *)((long)param_2 + 0x4e) = uVar19;
  *(undefined1 *)((long)param_2 + 0x4f) = uVar21;
  param_2[0x14] = local_12c;
  *(bool *)(param_2 + 0x18) = bVar8;
  plVar15 = (long *)plVar23[0x151];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x200))(plVar15,param_2);
  }
  if ((char)param_3[0xc] == '\0' && *(char *)((long)param_3 + 0x31) == '\0') {
    return 1;
  }
  FUN_01476a50(&local_128,plVar23);
  param_2[0x1a] = local_128;
  param_2[0x1b] = local_124;
  *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(plVar23[0x151] + 0x308);
  param_2[0x20] = *(uint *)(plVar23 + 0x59);
  param_2[0x21] = *(uint *)((long)plVar23 + 0x2cc);
  param_2[0x22] = *(uint *)(plVar23 + 0x5a);
  param_2[0x23] = *(uint *)(plVar23 + 0x46);
  FUN_01479710(plVar23,param_2,(char)param_3[0xc]);
  return 1;
}

