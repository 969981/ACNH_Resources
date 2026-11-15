
bool FUN_024e5df0(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  short sVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  byte local_b8;
  short local_b0 [2];
  undefined1 local_ac;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  uVar10 = FUN_024effb0(param_2,param_3,1);
  if ((uVar10 & 1) == 0) {
    if (param_3 == -0x24a26848) {
LAB_024e5e90:
      if (((*(long *)PTR_DAT_04bb27c8 != 0) &&
          (lVar11 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar11 != 0)) &&
         (uVar10 = FUN_009721a0(lVar11,param_1,0), (uVar10 & 1) != 0)) {
        return false;
      }
      iVar7 = *(int *)(param_1 + 0x24) + 1;
      iVar20 = *(int *)(param_1 + 0x14);
      uVar4 = 0x32;
      if (param_3 != -0x24a26848) {
        uVar4 = 1;
      }
      if (iVar7 != iVar20) {
        iVar8 = *(int *)(param_1 + 0x10);
        iVar9 = iVar8;
        do {
          local_a8 = (undefined *)(ulong)(uint)((float)iVar9 * 5.0 + 2.5);
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(float)iVar20 * 5.0 + 2.5);
          iVar6 = FUN_01317b90(&local_a8,uVar4);
          if (iVar6 - 3U < 2) goto LAB_024e5e38;
          if (iVar9 < *(int *)(param_1 + 0x20)) {
            iVar9 = iVar9 + 1;
          }
          else {
            iVar20 = iVar20 + 1;
            iVar9 = *(int *)(param_1 + 0x10);
          }
        } while ((iVar8 != iVar9) || (iVar7 != iVar20));
      }
    }
    else if (param_3 == -0x17df00c3) {
      if (((*(long *)PTR_DAT_04bb27c8 != 0) &&
          (lVar11 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar11 != 0)) &&
         (uVar10 = FUN_009721a0(lVar11,param_1,0), (uVar10 & 1) != 0)) {
        return false;
      }
    }
    else if (param_3 == 0x6622bd46) goto LAB_024e5e90;
    uVar10 = FUN_017baf44(param_3);
    puVar2 = PTR_DAT_04bb2010;
    if ((uVar10 & 1) != 0) {
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      local_98 = (undefined *)0x0;
      local_88 = 0;
      local_a8 = PTR_DAT_04bbc1a0 + 0x10;
      local_90 = local_a0;
      FUN_017ba710(param_3,&local_a8);
      if ((((*(int *)(param_1 + 0x10) < (int)local_98) || ((int)local_88 < *(int *)(param_1 + 0x20))
           ) || (*(int *)(param_1 + 0x14) < local_98._4_4_)) ||
         (local_88._4_4_ < *(int *)(param_1 + 0x24))) goto LAB_024e5e38;
    }
    lVar11 = *(long *)PTR_DAT_04bb2720;
    if (lVar11 == 0) {
      puVar19 = &DAT_055c04a0;
    }
    else {
      puVar19 = &DAT_055c04a0;
      if (*(long *)(lVar11 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
        iVar7 = FUN_006bd550(*puVar19,0);
        puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar19 = &DAT_055c04a0;
        }
      }
    }
    puVar18 = DAT_055c1b60 + -8;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      puVar17 = DAT_055c1b60;
      puVar14 = puVar18;
      do {
        if (*(int *)(puVar14 + 7) == *(int *)(puVar19 + 7)) break;
        puVar17 = (undefined8 *)puVar17[1];
        puVar14 = puVar17 + -8;
      } while (puVar17 != &DAT_055c1b58);
    }
    local_ac = 1;
    if (puVar18 != &DAT_055c1b18) {
      local_b0[0] = 0;
      puVar19 = DAT_055c1b60;
      do {
        if (*(int *)(puVar18 + 7) == param_3) goto LAB_024e60e8;
        puVar19 = (undefined8 *)puVar19[1];
        local_b0[0] = local_b0[0] + 1;
        puVar18 = puVar19 + -8;
      } while (puVar19 != &DAT_055c1b58);
    }
    local_b0[0] = -1;
LAB_024e60e8:
    local_b0[1] = 1;
    puVar1 = (undefined *)(param_1 + 8);
    iVar20 = *(int *)(param_1 + 0x10);
    local_90._4_4_ = *(int *)(param_1 + 0x14);
    lVar11 = param_1 + 0x18;
    local_98 = puVar2 + 0x10;
    iVar7 = *(int *)(param_1 + 0x24) + 1;
    local_a8 = puVar1;
    local_a0 = (undefined *)lVar11;
    local_90._0_4_ = iVar20;
    if (iVar7 != local_90._4_4_) {
      do {
        uVar10 = FUN_016e8b30(&local_98,local_b0);
        if ((uVar10 & 1) != 0) goto LAB_024e5e38;
        if ((int)local_90 < *(int *)((long)local_a0 + 8)) {
          local_90._0_4_ = (int)local_90 + 1;
        }
        else {
          local_90._4_4_ = local_90._4_4_ + 1;
          local_90._0_4_ = *(int *)(local_a8 + 8);
        }
      } while (iVar20 != (int)local_90 || iVar7 != local_90._4_4_);
    }
    fVar21 = (float)FUN_024e5c00(param_1,param_3);
    fVar22 = (float)FUN_024e5c00(param_2,param_3);
    puVar2 = PTR_DAT_04bb2010;
    bVar5 = false;
    if ((fVar22 + -5.0 <= fVar21) && (fVar21 <= fVar22 + 16.0)) {
      puVar19 = &DAT_055c04a0;
      if (DAT_055c1b60 != &DAT_055c1b58) {
        puVar19 = DAT_055c1b60 + -8;
        sVar16 = 0;
        puVar18 = DAT_055c1b60;
        puVar17 = puVar19;
        do {
          puVar14 = DAT_055c1b60;
          if (*(int *)(puVar17 + 7) == param_3) {
            if (sVar16 == 0) goto LAB_024e6234;
            goto LAB_024e6210;
          }
          puVar18 = (undefined8 *)puVar18[1];
          sVar16 = sVar16 + 1;
          puVar17 = puVar18 + -8;
        } while (puVar18 != &DAT_055c1b58);
        sVar16 = -1;
LAB_024e6210:
        do {
          puVar14 = (undefined8 *)puVar14[1];
          sVar16 = sVar16 + -1;
        } while (puVar14 != &DAT_055c1b58 && sVar16 != 0);
        puVar19 = &DAT_055c04a0;
        if (puVar14 + -8 != &DAT_055c1b18) {
          puVar19 = puVar14 + -8;
        }
      }
LAB_024e6234:
      lVar15 = 0;
      while (*(int *)(PTR_DAT_04bbbf90 + lVar15 * 4 + 8) != *(int *)(puVar19 + 7)) {
        if (0x37 < (uint)lVar15) {
          lVar15 = 0;
          puVar13 = PTR_DAT_04bbbf90;
          goto LAB_024e6294;
        }
        if (*(int *)(PTR_DAT_04bbbf90 + lVar15 * 4 + 0xc) == *(int *)(puVar19 + 7)) {
          lVar15 = lVar15 + 1;
          break;
        }
        lVar15 = lVar15 + 2;
      }
      puVar13 = PTR_DAT_04bbbf90 + lVar15 * 4;
LAB_024e6294:
      local_c8 = PTR_DAT_04bbfe68 + 0x10;
      uStack_bc = *(undefined4 *)(puVar13 + 8);
      local_c0 = (undefined4)lVar15;
      local_b8 = FUN_017baf44();
      puVar13 = PTR_DAT_04bb5d40;
      local_98 = puVar2 + 0x10;
      local_b8 = local_b8 & 1;
      iVar20 = *(int *)(param_1 + 0x10);
      local_90._4_4_ = *(int *)(param_1 + 0x14);
      iVar7 = *(int *)(param_1 + 0x24) + 1;
      local_90._0_4_ = iVar20;
      if ((param_4 & 1) == 0) {
        if (iVar7 != local_90._4_4_) {
          puVar2 = PTR_DAT_04bb2010 + 0x10;
          puVar3 = PTR_DAT_04bc35c0 + 0x10;
          local_a8 = puVar1;
          local_a0 = (undefined *)lVar11;
          do {
            local_d0 = *(int *)(puVar13 + 8);
            iStack_cc = *(int *)(puVar13 + 0xc);
            local_d8 = puVar2;
            puVar12 = (undefined4 *)FUN_01a5190c(&local_c8,0,&local_98,&local_d8);
            local_e0 = *puVar12;
            local_dc = puVar12[1];
            iVar8 = FUN_0277ebd0(&local_e0);
            if (iVar8 != 0) goto LAB_024e5e38;
            local_78 = local_e0;
            uStack_74 = local_dc;
            local_80 = puVar3;
            iVar8 = FUN_0277d6c4(&local_78);
            if (iVar8 - 0xf619U < 7) goto LAB_024e5e38;
            if ((int)local_90 < *(int *)((long)local_a0 + 8)) {
              local_90._0_4_ = (int)local_90 + 1;
            }
            else {
              local_90._4_4_ = local_90._4_4_ + 1;
              local_90._0_4_ = *(int *)(local_a8 + 8);
            }
          } while ((iVar20 != (int)local_90) || (iVar7 != local_90._4_4_));
        }
      }
      else if (iVar7 != local_90._4_4_) {
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        puVar3 = PTR_DAT_04bc35c0 + 0x10;
        local_a8 = puVar1;
        local_a0 = (undefined *)lVar11;
        do {
          local_d0 = *(int *)(puVar13 + 8);
          iStack_cc = *(int *)(puVar13 + 0xc);
          local_d8 = puVar2;
          puVar12 = (undefined4 *)FUN_01a5190c(&local_c8,0,&local_98,&local_d8);
          local_e0 = *puVar12;
          local_dc = puVar12[1];
          iVar8 = FUN_0277ebd0(&local_e0);
          if ((iVar8 == 2) && (iVar9 = FUN_0277d6c4(&local_e0), iVar9 == 0xea79)) {
            return *(int *)(param_1 + 0x10) == local_d0 && *(int *)(param_1 + 0x14) == iStack_cc;
          }
          if (iVar8 != 0) goto LAB_024e5e38;
          local_78 = local_e0;
          uStack_74 = local_dc;
          local_80 = puVar3;
          iVar8 = FUN_0277d6c4(&local_78);
          if (iVar8 - 0xf619U < 7) goto LAB_024e5e38;
          if ((int)local_90 < *(int *)((long)local_a0 + 8)) {
            local_90._0_4_ = (int)local_90 + 1;
          }
          else {
            local_90._4_4_ = local_90._4_4_ + 1;
            local_90._0_4_ = *(int *)(local_a8 + 8);
          }
        } while ((iVar20 != (int)local_90) || (iVar7 != local_90._4_4_));
      }
      bVar5 = true;
    }
  }
  else {
LAB_024e5e38:
    bVar5 = false;
  }
  return bVar5;
}

