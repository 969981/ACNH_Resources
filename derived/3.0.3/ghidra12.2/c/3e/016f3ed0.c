
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_016f3ed0(float *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar10;
  ushort uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  uint uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  float local_c4;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined8 local_a0;
  int local_98;
  undefined8 local_94;
  float local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int local_74;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  
  *(float *)((long)param_2 + 0x2c) = *param_1;
  *(float *)(param_2 + 6) = param_1[1];
  *(float *)((long)param_2 + 0x34) = param_1[2];
  puVar4 = PTR_DAT_04bb2720;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar7 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  uVar5 = local_e8;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar11 = 0;
    puVar13 = DAT_055c1b60;
    do {
      if (*(int *)(puVar13 + -1) == *(int *)(puVar14 + 7)) {
        if (uVar11 != 0xffff) goto LAB_016f3fd4;
        break;
      }
      puVar13 = (undefined8 *)puVar13[1];
      uVar11 = uVar11 + 1;
    } while (puVar13 != &DAT_055c1b58);
  }
  uVar11 = 0;
LAB_016f3fd4:
  local_e8._5_3_ = SUB83(uVar5,5);
  local_e8._0_5_ = CONCAT14(1,(uint)uVar11);
  fVar16 = (float)FUN_016e06d0(param_1,0,1,&local_e8,0);
  fVar17 = (float)FUN_016e026c(0,param_1,0,0);
  fVar19 = *(float *)((long)param_2 + 0x24);
  uVar9 = FUN_016ea82c(0,param_1);
  puVar3 = PTR_DAT_04bb2010;
  if ((uVar9 & 1) != 0) {
LAB_016f402c:
    local_74 = 0xe;
    goto LAB_016f4030;
  }
  fVar18 = *(float *)((long)param_2 + 4);
  if (fVar16 - fVar18 <= fVar19) {
    if (fVar16 <= fVar18 + -1.25) {
      return 0xe;
    }
    local_88 = 0x1010001;
    local_94 = *(undefined8 *)param_1;
    local_98 = *(int *)(param_2 + 1);
    local_82 = 0;
    local_84 = 1;
    local_a0 = (undefined *)CONCAT44(fVar18,*(undefined4 *)param_2);
    local_8c = param_1[2];
    if ((*(char *)(param_2 + 8) != '\0') &&
       (uVar9 = FUN_016f0c64(&local_a0,&local_80), (uVar9 & 1) == 0)) {
      local_c8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      local_e0 = *(float *)(param_2 + 1);
      local_c0 = 0;
      local_bc = 0;
      local_e8 = (undefined *)*param_2;
      local_b4 = 0;
      local_ac = 0;
      local_a8 = 0;
      *(undefined4 *)((long)param_2 + 0x2c) = local_80;
      *(undefined4 *)(param_2 + 6) = uStack_7c;
      *(undefined4 *)((long)param_2 + 0x34) = local_78;
      local_dc = (float)local_80;
      uStack_d8 = uStack_7c;
      local_d4 = local_78;
      local_c4 = fVar19;
      local_74 = FUN_016f36e0(&local_e8);
      if ((local_74 != 0xe) && (local_74 != 0)) goto LAB_016f4030;
    }
    local_70 = PTR_DAT_04bb2010 + 0x10;
    local_e0 = 0.0;
    local_68 = 0;
    local_e8 = PTR_DAT_04bbfe68 + 0x10;
    local_58 = CONCAT44((int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0),
                        (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0));
    lVar12 = *(long *)puVar4;
    local_60 = local_70;
    if (lVar12 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(lVar12 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar7 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    local_dc = *(float *)(puVar14 + 7);
    uVar6 = FUN_017baf44();
    uStack_d8 = CONCAT31(uStack_d8._1_3_,uVar6) & 0xffffff01;
    pfVar10 = (float *)FUN_01a5190c(&local_e8,0,&local_60,&local_70);
    lVar12 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar12 != 0) && (*(long *)(lVar12 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar12 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar12 + 0x488) != 0 && (*(long *)(*(long *)(lVar12 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar12 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) != 0)))) {
      uVar8 = FUN_0277d6c4(pfVar10);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
         (iVar7 = FUN_0277d6c4(pfVar10), iVar7 != 0xea79)) {
        FUN_0124c030(&local_e8,pfVar10);
        iVar7 = FUN_0123db50(&local_e0,CONCAT44(local_d4,uStack_d8));
        if (iVar7 - 0x12U < 6) {
          local_74 = 7;
          goto LAB_016f4030;
        }
        iVar7 = FUN_0123db50(&local_e0,CONCAT44(local_d4,uStack_d8));
        if (iVar7 - 0x23U < 9) {
          local_74 = 8;
          goto LAB_016f4030;
        }
        iVar7 = FUN_0123db50(&local_e0,CONCAT44(local_d4,uStack_d8));
        if (6 < iVar7 - 0xbU) goto LAB_016f4820;
        if (5.0 < *(float *)((long)param_2 + 4) - fVar17) {
          return 0xe;
        }
LAB_016f48e4:
        local_74 = 4;
        goto LAB_016f4030;
      }
    }
    puVar4 = PTR_DAT_04bb43c0;
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(pfVar10);
    lVar15 = *(long *)puVar4;
    if (lVar15 == 0) {
      return 0;
    }
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar8) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
      return 0;
    }
    local_e8 = PTR_DAT_04bc0510 + 0x10;
    bVar2 = *(byte *)((long)pfVar10 + 2);
    local_e0 = *pfVar10;
    local_dc = pfVar10[1];
    uStack_d8 = 0;
    local_d4 = 0;
    uVar8 = FUN_0277d6c4(&local_e0);
    if (*(long *)puVar4 != 0) {
      lVar12 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(pfVar10);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
           (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8), lVar12 != 0)) {
          uStack_d8 = (uint)lVar12;
          local_d4 = (undefined4)((ulong)lVar12 >> 0x20);
        }
      }
    }
    uVar9 = FUN_01ae59b0(&local_e8);
    bVar1 = bVar2 >> 2 & 1;
    if ((uVar9 & 1) == 0) {
      bVar1 = bVar2 & 4;
    }
    if (bVar1 != 0) {
      local_74 = 10;
      goto LAB_016f4030;
    }
    uVar9 = FUN_0277e294(pfVar10);
    if (((uVar9 & 1) != 0) && (uVar9 = FUN_01ae6020(&local_e8), (uVar9 & 1) == 0)) {
      local_74 = 2;
      goto LAB_016f4030;
    }
  }
  else {
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    local_68 = 0;
    local_58 = 0;
    local_e0 = 0.0;
    local_e8 = PTR_DAT_04bbfe68 + 0x10;
    local_98 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
    local_94 = CONCAT44(local_94._4_4_,
                        (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0));
    lVar12 = *(long *)puVar4;
    local_70 = local_a0;
    local_60 = local_a0;
    if (lVar12 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(lVar12 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar7 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    local_dc = *(float *)(puVar14 + 7);
    uVar6 = FUN_017baf44();
    uStack_d8 = CONCAT31(uStack_d8._1_3_,uVar6) & 0xffffff01;
    pfVar10 = (float *)FUN_01a5190c(&local_e8,0,&local_a0,&local_60);
    local_e0 = 0.0;
    local_e8 = (undefined *)0x0;
    local_68 = local_58;
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,8);
    local_e8 = (undefined *)0x100;
    local_e0 = 0.0;
    lVar12 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar12 != 0) && (*(long *)(lVar12 + 0xa8) != 0)) &&
       (uVar9 = FUN_00949ac8(lVar12 + 0x28,&local_70,&local_e8), (uVar9 & 1) != 0)) {
      local_74 = 0xb;
      goto LAB_016f4030;
    }
    puVar4 = PTR_DAT_04bb43c0;
    if (fVar19 < fVar17 - *(float *)((long)param_2 + 4)) {
      local_e8 = *(undefined **)param_1;
      local_e0 = param_1[2];
      local_dc = 0.0;
      uStack_d8 = 0x3f800000;
      local_d4 = 2;
      uStack_d0 = 0;
      iVar7 = FUN_016ed290(&local_e8,0,0,0);
      if (iVar7 == 0) {
        iVar7 = FUN_016f33f0(0,param_2,param_1);
        local_e8 = puVar3 + 0x10;
        local_e0 = (float)((int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0));
        local_dc = (float)((int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0));
        if ((0 < iVar7) ||
           ((uVar9 = FUN_00976320(&local_e8), (uVar9 & 1) == 0 &&
            (10.0 < fVar17 - *(float *)((long)param_2 + 4))))) {
          local_74 = 0xd;
        }
        else {
          local_74 = 0xc;
        }
        goto LAB_016f4030;
      }
      goto LAB_016f402c;
    }
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(pfVar10);
    lVar12 = *(long *)puVar4;
    if (lVar12 == 0) {
LAB_016f4550:
      lVar12 = *(long *)PTR_DAT_04bbbc68;
      if (lVar12 == 0) {
        return 0;
      }
      if (*(long *)(lVar12 + 0xb0) == 0) {
        return 0;
      }
      if (*(long *)(*(long *)(lVar12 + 0xb0) + 8) == 0) {
        return 0;
      }
      if (*(long *)(lVar12 + 0x488) == 0) {
        return 0;
      }
      if (*(long *)(*(long *)(lVar12 + 0x488) + 8) == 0) {
        return 0;
      }
      if (*(long *)(lVar12 + 0x2b0) == 0) {
        return 0;
      }
      if (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) == 0) {
        return 0;
      }
      uVar8 = FUN_0277d6c4(pfVar10);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (*(uint *)(lVar12 + 0x1d8) <= uVar8) {
        return 0;
      }
      if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
        return 0;
      }
      iVar7 = FUN_0277d6c4(pfVar10);
      if (iVar7 == 0xea79) {
        return 0;
      }
      FUN_0124c030(&local_e8,pfVar10);
      iVar7 = FUN_0123db50(&local_e0,CONCAT44(local_d4,uStack_d8));
      if (iVar7 == 0x2e) {
        local_74 = 5;
        goto LAB_016f4030;
      }
      uVar9 = FUN_0124dc64(&local_e8,0);
      if ((uVar9 & 1) != 0) {
        local_74 = 3;
        goto LAB_016f4030;
      }
      iVar7 = FUN_0123db50(&local_e0,CONCAT44(local_d4,uStack_d8));
      if (iVar7 - 0xbU < 7) goto LAB_016f48e4;
      iVar7 = FUN_0123db50(&local_e0,CONCAT44(local_d4,uStack_d8));
      if (iVar7 == 0x2d) {
        local_74 = 6;
        goto LAB_016f4030;
      }
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_016f4550;
      local_e8 = PTR_DAT_04bc0510 + 0x10;
      local_e0 = *pfVar10;
      local_dc = pfVar10[1];
      uStack_d8 = 0;
      local_d4 = 0;
      uVar8 = FUN_0277d6c4(&local_e0);
      if (*(long *)puVar4 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(pfVar10);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
             (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8), lVar12 != 0)) {
            uStack_d8 = (uint)lVar12;
            local_d4 = (undefined4)((ulong)lVar12 >> 0x20);
          }
        }
      }
      uVar9 = FUN_0277e294(pfVar10);
      if (((uVar9 & 1) != 0) && (uVar9 = FUN_01ae6020(&local_e8), (uVar9 & 1) != 0)) {
        local_74 = 1;
        goto LAB_016f4030;
      }
    }
  }
LAB_016f4820:
  local_74 = 9;
LAB_016f4030:
  *(int *)(param_2 + 7) = local_74;
  return local_74;
}

