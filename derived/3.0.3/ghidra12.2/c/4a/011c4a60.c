
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_011c4a60(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined *local_100;
  uint local_f8;
  uint uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined **local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  uint local_b8;
  uint local_b4;
  undefined *local_b0;
  undefined *puStack_a8;
  uint local_a0;
  uint uStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  uint local_80;
  uint local_7c;
  
  puVar3 = PTR_DAT_04bb27c8;
  uVar12 = *(uint *)(param_1 + 0x174) >> 0xc & 0xfff;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_98 = local_88;
  local_c0 = local_88;
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_a8 = local_88;
  uVar7 = (*(uint *)(param_1 + 0x174) & 0xfff) + param_2;
  local_a0 = uVar7;
  uStack_9c = uVar12;
  local_b8 = uVar7;
  local_b4 = uVar12;
  local_90 = uVar7 + 1;
  iStack_8c = uVar12 + 1;
  local_d0 = &puStack_a8;
  local_c8 = &local_98;
  local_80 = uVar7;
  local_7c = uVar12;
  do {
    local_e8 = 0;
    local_f0 = (undefined *)0x0;
    local_100 = (undefined *)CONCAT44(local_100._4_4_,8);
    local_f0 = (undefined *)0x100;
    local_e8 = 0;
    lVar10 = *(long *)puVar3;
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0xa8) != 0)) &&
       (uVar9 = FUN_00949ac8(lVar10 + 0x28,&local_c0,&local_f0), (uVar9 & 1) != 0)) {
      if (*(long *)puVar3 == 0) {
        return 1;
      }
      lVar10 = *(long *)(*(long *)puVar3 + 0xa8);
      if (lVar10 == 0) {
        return 1;
      }
      if ((int)local_b8 < 0) {
        return 1;
      }
      if ((int)local_b4 < 0) {
        return 1;
      }
      if (*(uint *)(lVar10 + 0x38) <= local_b8) {
        return 1;
      }
      if (*(uint *)(lVar10 + 0x3c) <= local_b4) {
        return 1;
      }
      uVar11 = local_b8 + *(uint *)(lVar10 + 0x38) * local_b4;
      if (*(uint *)(lVar10 + 0x68) <= uVar11) {
        return 1;
      }
      if (*(long *)(lVar10 + 0x70) == 0) {
        return 1;
      }
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,3);
      if ((*(uint *)(*(long *)(lVar10 + 0x70) + (long)(int)uVar11 * 4) >> 3 & 1) == 0) {
        return 1;
      }
    }
    if ((int)local_b8 < *(int *)(local_c8 + 1)) {
      local_b8 = local_b8 + 1;
    }
    else {
      local_b8 = *(uint *)(local_d0 + 1);
      local_b4 = local_b4 + 1;
    }
  } while ((uVar7 != local_b8) || (uVar12 + 2 != local_b4));
  local_d0._0_4_ = (float)(int)local_80 * 5.0 + 5.0;
  local_c8._0_4_ = (float)(int)local_7c * 5.0 + 5.0;
  fVar15 = (float)FUN_0093a950(*(long *)puVar3 + 0x28,&local_d0,0);
  local_d0._0_4_ = (float)(*(uint *)(param_1 + 0x174) & 0xfff) * 5.0 + 5.0;
  local_c8 = (undefined **)
             CONCAT44(local_c8._4_4_,(float)(*(uint *)(param_1 + 0x174) >> 0xc & 0xfff) * 5.0 + 5.0)
  ;
  fVar16 = (float)FUN_0093a950(*(long *)puVar3 + 0x28,&local_d0,0);
  if (2.0 < fVar15 - fVar16) {
    uVar7 = 0;
    if (*(long *)puVar3 != 0) {
      lVar10 = *(long *)(*(long *)puVar3 + 0xa8);
      if ((lVar10 == 0) || ((int)local_80 < 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if (((-1 < (int)local_7c) && (local_80 < *(uint *)(lVar10 + 0x38))) &&
           (local_7c < *(uint *)(lVar10 + 0x3c))) {
          uVar12 = local_80 + *(uint *)(lVar10 + 0x38) * local_7c;
          uVar7 = 0;
          if ((uVar12 < *(uint *)(lVar10 + 0x68)) && (*(long *)(lVar10 + 0x70) != 0)) {
            local_d0._0_4_ = 7.00649e-45;
            uVar7 = *(uint *)(*(long *)(lVar10 + 0x70) + (long)(int)uVar12 * 4) >> 5 & 1;
          }
        }
      }
    }
    if (10.0 < fVar15 - fVar16) {
      return 1;
    }
    if (uVar7 != 0) {
      return 1;
    }
  }
  local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  local_c8 = (undefined **)CONCAT44(*(undefined4 *)(puVar13 + 7),(float)local_c8);
  uVar5 = FUN_017baf44();
  local_c0 = (undefined *)(CONCAT71(local_c0._1_7_,uVar5) & 0xffffffffffffff01);
  local_d0 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
  FUN_01a5033c(&local_d8,&local_d0,0,&local_88,0);
  lVar10 = *(long *)PTR_DAT_04bbbc68;
  if (((lVar10 != 0) && (*(long *)(lVar10 + 0xb0) != 0)) &&
     ((*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0 &&
      ((((*(long *)(lVar10 + 0x488) != 0 && (*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0)) &&
        (*(long *)(lVar10 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0)))))) {
    uVar7 = FUN_0277d6c4(&local_d8);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      FUN_0124c030(&local_f0,&local_d8);
      uVar9 = FUN_0123d890(local_e0,4);
      if ((uVar9 & 1) == 0) {
        iVar6 = FUN_0123db50(&local_e8,local_e0);
        if ((iVar6 != 0x2e) && (iVar6 = FUN_0123db50(&local_e8,local_e0), iVar6 != 0x2d))
        goto LAB_011c4eb0;
      }
      return 1;
    }
  }
LAB_011c4eb0:
  puVar3 = PTR_DAT_04bb43c0;
  if (0 < param_2) {
    local_80 = *(uint *)(param_1 + 0x174) & 0xfff;
    local_7c = *(uint *)(param_1 + 0x174) >> 0xc & 0xfff;
  }
  uVar4 = local_80;
  iVar6 = local_80 + 3;
  uVar7 = local_7c + 2;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  uVar12 = local_7c;
  uVar11 = local_80;
  do {
    local_100 = puVar1;
    local_f8 = uVar11;
    uStack_f4 = uVar12;
    FUN_01a5033c(&local_f0,&local_d0,0,&local_100,0);
    lVar10 = *(long *)puVar3;
    local_d8 = (undefined4)local_f0;
    uStack_d4 = local_f0._4_4_;
    uVar8 = FUN_0277d6c4(&local_d8);
    lVar14 = *(long *)puVar3;
    if (lVar14 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_e0 = 0;
        local_e8 = local_d8;
        uStack_e4 = uStack_d4;
        local_f0 = puVar2;
        uVar8 = FUN_0277d6c4(&local_e8);
        if (*(long *)puVar3 != 0) {
          lVar10 = *(long *)(lVar14 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(&local_d8);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if (uVar8 < *(uint *)(lVar10 + 0x1d8)) {
              lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8);
              if (lVar10 != 0) {
                local_e0 = lVar10;
              }
            }
          }
        }
        uVar9 = FUN_01ae59b0(&local_f0);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
      }
    }
    if ((int)uVar11 < iVar6) {
      uVar11 = uVar11 + 1;
    }
    else {
      uVar12 = uVar12 + 1;
      uVar11 = uVar4;
    }
    if ((uVar4 == uVar11) && (uVar7 == uVar12)) {
      return 0;
    }
  } while( true );
}

