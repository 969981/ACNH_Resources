
uint FUN_022829d0(float param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined **local_160;
  undefined **local_158;
  undefined8 local_150;
  undefined8 local_148;
  int local_140;
  int iStack_13c;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  long local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined *local_118;
  int local_110;
  int iStack_10c;
  undefined *local_108;
  undefined *puStack_100;
  int local_f8;
  int iStack_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  byte local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined *local_b0;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  int local_78;
  uint local_74;
  
  puVar4 = PTR_DAT_04bb27c8;
  local_78 = 0;
  local_d0 = 0;
  lVar13 = *(long *)PTR_DAT_04bb27c8;
  local_bc = (float)param_2 * 5.0 + 2.5;
  local_b4 = (float)param_3 * 5.0 + 2.5;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar6 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_cc = *(undefined4 *)(puVar15 + 7);
  local_c8 = FUN_017baf44();
  local_c8 = local_c8 & 1;
  local_d8 = PTR_DAT_04bb3140 + 0x10;
  local_e0 = 0xfffe;
  FUN_0277d4ac(&local_e0);
  puVar5 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bb2010;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_e8 = (int)((float)(int)(local_bc - param_1) / 5.0) - (uint)(local_bc - param_1 < 0.0);
  iStack_e4 = (int)((float)(int)(local_b4 - param_1) / 5.0) - (uint)(local_b4 - param_1 < 0.0);
  iVar8 = (int)((float)(int)(param_1 + local_bc) / 5.0) - (uint)(param_1 + local_bc < 0.0);
  iVar6 = local_e8;
  if (iVar8 <= local_e8) {
    iVar6 = iVar8;
  }
  if (local_e8 <= iVar8) {
    local_e8 = iVar8;
  }
  iVar8 = (int)((float)(int)(param_1 + local_b4) / 5.0) - (uint)(param_1 + local_b4 < 0.0);
  iStack_f4 = iStack_e4;
  if (iVar8 <= iStack_e4) {
    iStack_f4 = iVar8;
  }
  if (iStack_e4 <= iVar8) {
    iStack_e4 = iVar8;
  }
  iVar8 = iStack_e4 + 1;
  local_160 = &puStack_100;
  local_158 = &local_f0;
  local_150 = puVar2;
  local_108 = puVar1;
  puStack_100 = puVar2;
  local_f8 = iVar6;
  local_f0 = puVar2;
  local_148._0_4_ = iVar6;
  local_148._4_4_ = iStack_f4;
  if (iVar8 != iStack_f4) {
    do {
      iStack_9c = local_148._4_4_;
      lVar14 = *(long *)puVar4;
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0xa8), lVar14 == 0)) goto LAB_0228302c;
      local_b0 = puVar1;
      local_a8 = puVar2;
      local_a0 = (int)local_148;
      local_98 = puVar2;
      local_90 = (int)local_148;
      iStack_8c = iStack_9c;
      uVar12 = FUN_00971f80(lVar14,&local_b0,0);
      if (((uVar12 & 1) == 0) || (uVar12 = FUN_00975dc0(&local_150), (uVar12 & 1) == 0))
      goto LAB_0228302c;
      puVar15 = (undefined8 *)FUN_01a5190c(&local_d8,0,&local_150,0);
      local_e0 = *puVar15;
      iVar10 = FUN_0277ebd0(&local_e0);
      if (iVar10 != 0) goto LAB_0228302c;
      local_110 = (int)local_148;
      iStack_10c = local_148._4_4_;
      local_118 = puVar3 + 0x10;
      local_b0._0_4_ = iVar10;
      uVar12 = FUN_0168bb28(&local_118);
      if ((uVar12 & 1) != 0) goto LAB_0228302c;
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(float)(int)local_148._4_4_ * 5.0 + 2.5);
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,(float)(int)local_148 * 5.0 + 2.5);
      FUN_0093b024(lVar13 + 0x28,&local_b0,&local_78);
      if (((((local_78 != 0) && (local_78 != 2)) && (local_78 != 3)) &&
          ((local_78 != 0x1a && (local_78 != 0x1f)))) &&
         ((((local_78 != 0x20 && ((local_78 != 0x21 && (local_78 != 0x22)))) && (local_78 != 0x23))
          && (local_78 != 0x24)))) goto LAB_0228302c;
      if ((int)local_148 < *(int *)(local_158 + 1)) {
        local_148._0_4_ = (int)local_148 + 1;
      }
      else {
        local_148._0_4_ = *(int *)(local_160 + 1);
        local_148._4_4_ = local_148._4_4_ + 1;
      }
    } while ((iVar6 != (int)local_148) || (iVar8 != local_148._4_4_));
  }
  local_b8 = (float)FUN_0093b024(lVar13 + 0x28,&local_bc,&local_78);
  puVar1 = PTR_DAT_04bbbc68;
  if (local_b8 <= 30.0) {
    local_160 = &local_a8;
    local_158 = &local_98;
    local_b0 = puVar5 + 0x10;
    local_150 = puVar3 + 0x10;
    iVar6 = (int)((float)(int)(local_bc + -12.5) / 5.0) - (uint)(local_bc + -12.5 < 0.0);
    local_90 = iVar6 + 5;
    iStack_9c = (int)((float)(int)(local_b4 + -12.5) / 5.0) - (uint)(local_b4 + -12.5 < 0.0);
    iStack_8c = iStack_9c + 5;
    uVar9 = iStack_9c + 6;
    local_148 = (undefined *)CONCAT44(iStack_9c,iVar6);
    local_a8 = local_150;
    local_a0 = iVar6;
    local_98 = local_150;
    do {
      puVar11 = (undefined2 *)FUN_01a5190c(&local_d8,0,&local_150,0);
      local_120 = *puVar11;
      local_11e = *(undefined1 *)(puVar11 + 1);
      local_11d = *(undefined1 *)((long)puVar11 + 3);
      local_11c = *(undefined4 *)(puVar11 + 2);
      lVar13 = *(long *)puVar1;
      if ((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
         (((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)) &&
          ((*(long *)(lVar13 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)))))) {
        uVar7 = FUN_0277d6c4(&local_120);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          FUN_0124c030(auStack_138,&local_120);
          if (local_128 != 0) {
            local_74 = 4;
            lVar13 = FUN_01246470(local_128,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
            if (lVar13 != 0) {
              uVar7 = local_74 + 7;
              if (-1 < (int)local_74) {
                uVar7 = local_74;
              }
              if ((*(byte *)(lVar13 + (ulong)(uint)((int)uVar7 >> 3)) >> (ulong)(local_74 & 7) & 1)
                  != 0) goto LAB_0228302c;
            }
          }
          iVar8 = FUN_0123db50(auStack_130,local_128);
          if (((iVar8 - 2U & 0xfffffff9) == 0) ||
             (iVar8 = FUN_0123db50(auStack_130,local_128), iVar8 == 0x2e)) goto LAB_0228302c;
        }
      }
      if ((int)local_148 < *(int *)(local_158 + 1)) {
        iVar8 = (int)local_148 + 1;
        uVar7 = local_148._4_4_;
      }
      else {
        uVar7 = local_148._4_4_ + 1;
        iVar8 = *(int *)(local_160 + 1);
        local_148 = (undefined *)((ulong)uVar7 << 0x20);
      }
      local_148 = (undefined *)CONCAT44(local_148._4_4_,iVar8);
    } while ((iVar6 != iVar8) || (uVar9 != uVar7));
    local_160 = (undefined **)(puVar5 + 0x10);
    local_158 = (undefined **)(puVar3 + 0x10);
    local_140 = (int)((float)(int)(local_bc + -12.5) / 5.0) - (uint)(local_bc + -12.5 < 0.0);
    iStack_13c = (int)((float)(int)(local_b4 + -12.5) / 5.0) - (uint)(local_b4 + -12.5 < 0.0);
    local_150 = (undefined *)CONCAT44(iStack_13c,local_140);
    local_140 = local_140 + 5;
    iStack_13c = iStack_13c + 5;
    lVar13 = *(long *)puVar4;
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0xa8), lVar13 != 0)) {
      local_148 = (undefined *)local_158;
      uVar9 = FUN_00971f80(lVar13,&local_160,0);
      uVar9 = uVar9 ^ 1;
      goto LAB_02283030;
    }
  }
LAB_0228302c:
  uVar9 = 1;
LAB_02283030:
  return uVar9 & 1;
}

