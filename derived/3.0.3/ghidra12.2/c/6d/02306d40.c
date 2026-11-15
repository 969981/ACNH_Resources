
/* WARNING: Removing unreachable block (ram,0x023073e4) */

void FUN_02306d40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined4 *local_138;
  undefined ***local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined1 local_e5;
  undefined4 *local_e0;
  char *local_d8;
  undefined4 local_d0;
  char local_cc [16];
  int local_bc;
  undefined1 local_8d;
  uint local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  undefined **local_68;
  char *pcStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  byte local_48 [4];
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4();
  lVar15 = *(long *)puVar3;
  if (lVar15 == 0) {
    return;
  }
  lVar17 = *(long *)(lVar17 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
  if (*(uint *)(lVar17 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  local_70 = (uint *)0x0;
  local_78 = *param_1;
  uStack_74 = param_1[1];
  local_80 = PTR_DAT_04bc0510 + 0x10;
  uVar5 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar3 == 0) {
LAB_02306ed0:
    uVar5 = 0xbc;
    puVar13 = (uint *)0x0;
    local_84 = 0xbc;
    bVar4 = true;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02306ed0;
    lVar15 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_1);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar5) ||
       (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar5 * 8),
       puVar13 == (uint *)0x0)) goto LAB_02306ed0;
    uVar5 = *puVar13;
    local_84 = 0;
    if ((uVar5 != 0) && (puVar13 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)puVar13 - (long)(ulong)uVar5);
      local_84 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar15 != 0) {
            uVar9 = 0;
            if ((ulong)uVar5 != 0) {
              uVar9 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_84 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2)
               , local_84 < 0xbd)) goto LAB_023074c8;
          }
        }
        local_84 = 0;
      }
    }
LAB_023074c8:
    uVar9 = *puVar13;
    uVar5 = 0;
    local_70 = puVar13;
    if ((uVar9 == 0) || (puVar13 == (uint *)(ulong)uVar9)) {
LAB_02307560:
      bVar4 = false;
    }
    else {
      puVar10 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
      uVar5 = 0;
      if (*puVar10 == 0) goto LAB_02307560;
      uVar5 = puVar10[1];
      if ((uVar5 == 0) || ((ulong)(ushort)puVar10[2] == 0)) {
LAB_0230755c:
        uVar5 = 0;
        goto LAB_02307560;
      }
      lVar15 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar15 == 0) goto LAB_0230755c;
      uVar9 = 0;
      if ((ulong)uVar5 != 0) {
        uVar9 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar5);
      }
      if (*puVar10 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc00c8 <= uVar9) goto LAB_0230755c;
      uVar5 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2);
      if (uVar5 < 0xbd) goto LAB_02307560;
      bVar4 = false;
      uVar5 = 0;
    }
  }
  local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,uVar5);
  if ((uVar5 - 0x60 < 0xb) && ((1 << (ulong)(uVar5 - 0x60 & 0x1f) & 0x409U) != 0)) {
    if (bVar4) {
      if (local_84 == 0x60) goto LAB_023073f8;
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x96);
      uVar9 = 0xbc;
LAB_023070ec:
      local_138 = (undefined4 *)CONCAT44(local_138._4_4_,uVar9);
      if (uVar9 != (uint)local_e0) {
        puVar1 = (undefined4 *)(PTR_DAT_04bb2020 + 0x10);
        local_d8 = "CatchFish";
        local_e0 = puVar1;
        FUN_0279b044((long)param_1 + 9,&local_e0,1);
        local_d8 = "CatchFish";
        local_e0 = puVar1;
        FUN_0279a9f0((long)param_1 + 9,&local_e0,1);
      }
    }
    else {
      puVar11 = (uint *)(ulong)*puVar13;
      puVar10 = (uint *)((long)puVar13 - (long)puVar11);
      if ((((*puVar13 != 0) && (puVar10 != (uint *)0x0)) && (*puVar10 != 0)) &&
         ((uVar5 = puVar10[1], uVar5 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar15 != 0) {
          uVar9 = 0;
          if ((ulong)uVar5 != 0) {
            uVar9 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar5);
          }
          if (*puVar10 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
             (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2) == 99)) {
            local_e0 = (undefined4 *)(PTR_DAT_04bb2020 + 0x10);
            local_d8 = "CatchTrash";
            FUN_0279a9f0((long)param_1 + 9,&local_e0,1);
            puVar11 = (uint *)(ulong)*puVar13;
            puVar10 = (uint *)((long)puVar13 - (long)puVar11);
          }
        }
      }
      if ((((puVar11 == puVar13) || ((int)puVar11 == 0)) || (*puVar10 == 0)) ||
         ((uVar5 = puVar10[1], uVar5 == 0 || ((ulong)(ushort)puVar10[2] == 0)))) {
LAB_0230704c:
        if (local_84 == 0x60) goto LAB_023073f8;
        uVar9 = 0;
        local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x96);
        uVar5 = *puVar13;
        if ((uVar5 != 0) && (puVar13 != (uint *)(ulong)uVar5)) {
          puVar10 = (uint *)((long)puVar13 - (long)(ulong)uVar5);
          uVar9 = 0;
          if (*puVar10 != 0) {
            uVar5 = puVar10[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar15 != 0) {
                uVar9 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar9 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar5);
                }
                if (*puVar10 <= uVar9) {
                  uVar9 = 0xffffffff;
                }
                if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar9 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
                   uVar9 < 0xbd)) goto LAB_023070ec;
              }
            }
            uVar9 = 0;
          }
        }
        goto LAB_023070ec;
      }
      lVar15 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar10 + lVar15 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar15 == 0) goto LAB_0230704c;
      uVar9 = 0;
      if ((ulong)uVar5 != 0) {
        uVar9 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar5);
      }
      if (*puVar10 <= uVar9) {
        uVar9 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc00c8 <= uVar9) ||
         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2) != 99))
      goto LAB_0230704c;
    }
    if (local_84 == 0x6a) {
      local_8d = 0;
      local_d0 = 0x40;
      local_d8 = local_cc;
      local_cc[0] = '\0';
      puVar1 = (undefined4 *)(PTR_DAT_04bb2bc0 + 0x10);
      uVar14 = *(undefined8 *)PTR_DAT_04bb3d80;
      local_e0 = puVar1;
      uVar6 = FUN_0277d6c4(param_1);
      FUN_013ee7b0(uVar14,&local_e0,uVar6);
      local_e5 = 0;
      local_130 = (undefined ***)((long)&uStack_128 + 4);
      uStack_128 = 0x6374614300000040;
      local_120 = 0x68;
      local_138 = puVar1;
      (**(code **)(local_e0 + 6))(&local_e0);
      (**(code **)(local_e0 + 6))(&local_e0);
      if (local_d8 == "Ga") {
LAB_02307234:
        pcVar8 = "Gar";
      }
      else {
        uVar12 = 0;
        bVar4 = true;
        do {
          if (local_d8[uVar12] != (&DAT_040a64e1)[uVar12]) break;
          if (local_d8[uVar12] == '\0') {
            if (bVar4) goto LAB_02307234;
            break;
          }
          bVar4 = uVar12 < 0x80000;
          uVar12 = uVar12 + 1;
        } while (uVar12 != 0x80001);
        (**(code **)(local_e0 + 6))(&local_e0);
        pcVar8 = local_d8;
      }
      FUN_038d13f0(&local_138,&DAT_0409e973,pcVar8);
      lVar15 = (long)param_1 + 9;
      FUN_0279b044(lVar15,&local_138,1);
      if (*(char *)(param_1 + 2) != '\0') {
        local_58 = *param_1;
        uStack_54 = param_1[1];
        local_68 = &PTR_FUN_04a72e50;
        iVar7 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
        if (iVar7 != 0) {
          lVar17 = (long)iVar7 << 3;
          puVar16 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
          pcStack_60 = (char *)lVar15;
          do {
            (*(code *)*local_68)(&local_68,*puVar16);
            lVar17 = lVar17 + -8;
            puVar16 = puVar16 + 1;
          } while (lVar17 != 0);
        }
        local_48[0] = *(byte *)((long)param_1 + 9);
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        if (7 < local_48[0]) {
          local_48[0] = 0xff;
        }
        pcStack_60 = "GetFishCount";
        local_68 = ppuVar2;
        local_44 = FUN_02582fe0(local_48);
        FUN_021294b0(&local_68,1,&local_44);
        puVar3 = PTR_DAT_04bb49a0;
        if (*(char *)(param_1 + 2) != '\0') {
          pcStack_60 = "PE_GetFish_HighPrice";
          uVar14 = *(undefined8 *)PTR_DAT_04bb49a0;
          local_68 = ppuVar2;
          local_44 = FUN_006bd550("PE_GetFish_HighPrice",0);
          uVar14 = FUN_01b5b4b0(uVar14,&local_44);
          FUN_01b5e0b0(&local_68,param_1,uVar14,lVar15,0);
          uVar14 = *(undefined8 *)puVar3;
          pcStack_60 = "PE_GetFish_New";
          local_68 = ppuVar2;
          local_44 = FUN_006bd550("PE_GetFish_New",0);
          uVar14 = FUN_01b5b4b0(uVar14,&local_44);
          FUN_01b5e0b0(&local_68,param_1,uVar14,lVar15,0);
          if ((local_84 == 0x6a) && (*(char *)(param_1 + 2) != '\0')) {
            local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,1);
            *(int *)(*(long *)PTR_DAT_04bc2fc8 + 4) = *(int *)(*(long *)PTR_DAT_04bc2fc8 + 4) + 1;
          }
        }
      }
    }
  }
LAB_023073f8:
  if (*(char *)(param_1 + 2) == '\0') {
    return;
  }
  local_138 = (undefined4 *)(PTR_DAT_04bb2020 + 0x10);
  local_130 = (undefined ***)0x40e590a;
  FUN_025ffac8(&local_e0,&local_138,(long)param_1 + 9);
  puVar1 = (undefined4 *)(PTR_DAT_04bc32c0 + 0x10);
  local_e0 = puVar1;
  FUN_0252d8f0(&local_68,(long)param_1 + 9);
  local_138 = param_1;
  local_130 = &local_68;
  FUN_0259ff98(&local_e0,&local_138);
  local_e0 = puVar1;
  iVar7 = FUN_02589ca4(&local_e0);
  if (iVar7 != -1) {
    iVar7 = (**(code **)(local_e0 + 8))(&local_e0);
    local_138 = (undefined4 *)CONCAT44(local_138._4_4_,iVar7);
    if (iVar7 < 0xd) goto LAB_023074a0;
  }
  if (local_bc == 0) {
    local_bc = 1;
  }
LAB_023074a0:
  FUN_02601530(&local_e0);
  return;
}

