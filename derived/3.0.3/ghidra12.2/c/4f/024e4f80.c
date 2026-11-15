
undefined8 FUN_024e4f80(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  short local_38 [2];
  undefined1 local_34;
  
  uVar4 = FUN_024effb0(param_1,param_2,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  iVar9 = (int)param_2;
  if (iVar9 == 0x6622bd46) {
LAB_024e4fec:
    if (DAT_04cfae30 != 0) {
      if (*(long *)(DAT_04cfae30 + 0x90) == 0) {
        return 0;
      }
      uVar4 = FUN_00971f80(*(long *)(DAT_04cfae30 + 0x90),param_1,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if ((iVar9 == -0x24a26848) || (iVar9 == 0x6622bd46)) {
        if ((DAT_04cfae30 != 0) &&
           ((*(long *)(DAT_04cfae30 + 0x90) != 0 &&
            (uVar4 = FUN_009721a0(*(long *)(DAT_04cfae30 + 0x90),param_1,0), (uVar4 & 1) != 0)))) {
          return 0;
        }
        iVar3 = *(int *)(param_1 + 0x24) + 1;
        iVar10 = *(int *)(param_1 + 0x14);
        uVar5 = 0x32;
        if (iVar9 != -0x24a26848) {
          uVar5 = 1;
        }
        if (iVar3 != iVar10) {
          iVar1 = *(int *)(param_1 + 0x10);
          iVar12 = iVar1;
          do {
            local_88 = (undefined *)(ulong)(uint)((float)iVar12 * 5.0 + 2.5);
            local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(float)iVar10 * 5.0 + 2.5);
            iVar2 = FUN_01317b90(&local_88,uVar5);
            if (iVar2 - 3U < 2) goto LAB_024e5198;
            if (iVar12 < *(int *)(param_1 + 0x20)) {
              iVar12 = iVar12 + 1;
            }
            else {
              iVar10 = iVar10 + 1;
              iVar12 = *(int *)(param_1 + 0x10);
            }
          } while ((iVar1 != iVar12) || (iVar3 != iVar10));
        }
      }
      goto LAB_024e511c;
    }
LAB_024e5198:
    uVar5 = 0;
  }
  else {
    if (iVar9 == -0x17df00c3) {
      if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
         (uVar4 = FUN_009721a0(*(long *)(DAT_04cfae30 + 0xa8),param_1,0), (uVar4 & 1) != 0)) {
        return 0;
      }
    }
    else if (iVar9 == -0x24a26848) goto LAB_024e4fec;
LAB_024e511c:
    uVar4 = FUN_017baf44(param_2 & 0xffffffff);
    if ((uVar4 & 1) != 0) {
      local_78 = (undefined8 *)0x0;
      local_70 = &DAT_048f9750;
      local_68 = 0;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      local_80 = &DAT_048f9750;
      FUN_017ba710(param_2 & 0xffffffff,&local_88);
      if ((((*(int *)(param_1 + 0x10) < (int)local_78) || ((int)local_68 < *(int *)(param_1 + 0x20))
           ) || (*(int *)(param_1 + 0x14) < local_78._4_4_)) ||
         (local_68._4_4_ < *(int *)(param_1 + 0x24))) goto LAB_024e5198;
    }
    if (DAT_05aed670 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    puVar6 = DAT_055c1b60 + -8;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      puVar7 = DAT_055c1b60;
      puVar8 = puVar6;
      do {
        if (*(int *)(puVar8 + 7) == *(int *)(puVar11 + 7)) break;
        puVar7 = (undefined8 *)puVar7[1];
        puVar8 = puVar7 + -8;
      } while (puVar7 != &DAT_055c1b58);
    }
    local_34 = 1;
    if (puVar6 != &DAT_055c1b18) {
      local_38[0] = 0;
      puVar11 = DAT_055c1b60;
      do {
        if (*(int *)(puVar6 + 7) == iVar9) goto LAB_024e5288;
        puVar11 = (undefined8 *)puVar11[1];
        local_38[0] = local_38[0] + 1;
        puVar6 = puVar11 + -8;
      } while (puVar11 != &DAT_055c1b58);
    }
    local_38[0] = -1;
LAB_024e5288:
    local_88 = (undefined *)(param_1 + 8);
    local_80 = (undefined8 *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x10);
    local_70._4_4_ = *(int *)(param_1 + 0x14);
    local_38[1] = 1;
    iVar9 = *(int *)(param_1 + 0x24) + 1;
    local_78 = &DAT_048f9750;
    if (iVar9 != local_70._4_4_) {
      local_70._0_4_ = iVar3;
      do {
        uVar4 = FUN_016e8b30(&local_78,local_38);
        if ((uVar4 & 1) != 0) goto LAB_024e5198;
        if ((int)local_70 < *(int *)((long)local_80 + 8)) {
          local_70._0_4_ = (int)local_70 + 1;
        }
        else {
          local_70._4_4_ = local_70._4_4_ + 1;
          local_70._0_4_ = *(int *)(local_88 + 8);
        }
      } while (iVar3 != (int)local_70 || iVar9 != local_70._4_4_);
    }
    uVar5 = 1;
  }
  return uVar5;
}

