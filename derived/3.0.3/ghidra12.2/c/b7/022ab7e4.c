
undefined8
FUN_022ab7e4(float param_1,float param_2,float param_3,long param_4,byte *param_5,float *param_6,
            uint *param_7)

{
  float *pfVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_f0;
  undefined1 local_ec [4];
  undefined *local_e8;
  undefined *local_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  undefined2 local_b8;
  byte local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  long local_b0;
  undefined2 local_a8;
  byte local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined *local_78;
  uint local_70;
  uint local_6c;
  undefined *local_68;
  uint local_60;
  uint local_5c;
  byte local_54 [4];
  
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_7 >> 0x14) & 0xff0));
  fVar12 = (float)(*param_7 & 0xffffff) * 5.9604645e-08;
  fVar15 = *pfVar1 + fVar12 * pfVar1[1];
  fVar13 = pfVar1[2] + fVar12 * pfVar1[3];
  fVar11 = *param_6;
  fVar12 = param_6[2];
  fVar14 = fVar11 + param_2 * fVar15 * 0.0 + param_1 * fVar13 + param_3 * (fVar15 + 0.0);
  fVar13 = fVar12 + (param_2 * fVar13 * 0.0 - param_1 * fVar15) + param_3 * fVar13;
  local_60 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  local_5c = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  local_68 = PTR_DAT_04bbbad8 + 0x10;
  if ((local_60 & 1) != 0) {
    local_60 = local_60 - 1;
  }
  uVar7 = local_60;
  if ((local_5c & 1) != 0) {
    local_5c = local_5c - 1;
  }
  uVar5 = local_5c;
  local_78 = PTR_DAT_04bbbad8 + 0x10;
  local_70 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  local_6c = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  if ((local_70 & 1) != 0) {
    local_70 = local_70 - 1;
  }
  if ((local_6c & 1) != 0) {
    local_6c = local_6c - 1;
  }
  local_88 = 0;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar6 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_84 = *(undefined4 *)(puVar10 + 7);
  local_80 = FUN_017baf44();
  local_80 = local_80 & 1;
  local_90 = PTR_DAT_04bb6268 + 0x10;
  lVar9 = FUN_01a4fa00(&local_90);
  puVar3 = PTR_DAT_04bb2010;
  if ((*(int *)(lVar9 + 0x10) <= (int)uVar7 && (int)uVar7 <= *(int *)(lVar9 + 0x20)) &&
     (*(int *)(lVar9 + 0x14) <= (int)uVar5 && (int)uVar5 <= *(int *)(lVar9 + 0x24))) {
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    local_98 = 0;
    FUN_01a5033c(&local_a8,&local_90,0,&local_68,&local_a0);
    iVar6 = FUN_0277d6c4(&local_a8);
    puVar4 = PTR_DAT_04bb43c0;
    if (iVar6 == 0x3332) {
      local_b0 = 0;
      local_c0 = PTR_DAT_04bc0510 + 0x10;
      local_b8 = local_a8;
      local_b6 = local_a6;
      local_b5 = local_a5;
      local_b4 = local_a4;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(&local_b8);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_a8);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (uVar7 < *(uint *)(lVar9 + 0x1d8)) {
            lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8);
            if (lVar9 != 0) {
              local_b0 = lVar9;
            }
          }
        }
      }
      uVar8 = FUN_01ae59b0(&local_c0);
      bVar2 = local_a6 >> 2 & 1;
      if ((uVar8 & 1) == 0) {
        bVar2 = local_a6 & 4;
      }
      if ((bVar2 == 0) && (uVar8 = FUN_011eac30(&local_a0), (uVar8 & 1) != 0)) {
        local_54[0] = *param_5;
        if (7 < local_54[0]) {
          local_54[0] = 0xff;
        }
        local_e0 = (undefined *)CONCAT44(local_e0._4_4_,(float)local_98._4_4_ * 5.0 + 5.0);
        local_e8 = (undefined *)CONCAT44(local_e8._4_4_,(float)(int)local_98 * 5.0 + 5.0);
        lVar9 = FUN_0251b3b0(local_54,0);
        if ((lVar9 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
          fVar12 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_e8,0);
          fVar12 = fVar12 - *(float *)(lVar9 + 4);
          if (5.0 < fVar12) {
            return 0;
          }
          if (fVar12 < -5.0) {
            return 0;
          }
          local_e0 = puVar3 + 0x10;
          local_d8 = (int)local_98;
          iStack_d4 = local_98._4_4_;
          local_c8 = (int)local_98 + 1;
          local_e8 = PTR_DAT_04bbc1a0 + 0x10;
          iStack_c4 = local_98._4_4_ + 1;
          local_d0 = local_e0;
          uVar8 = FUN_00978ce0(&local_e8);
          if ((uVar8 & 1) != 0) {
            local_f0 = 0;
            local_ec[0] = 0xff;
            uVar8 = FUN_022a6bb0(param_6,&local_78,&local_a0,0,local_ec,&local_f0);
            if ((uVar8 & 1) == 0) {
              return 0;
            }
            if (param_4 == 0) {
              return 1;
            }
            *(int *)(param_4 + 8) = (int)local_98;
            *(int *)(param_4 + 0xc) = local_98._4_4_;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

