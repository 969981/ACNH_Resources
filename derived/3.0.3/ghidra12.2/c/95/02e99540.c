
void FUN_02e99540(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 ****ppppuVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined8 ***pppuVar15;
  undefined8 *puVar16;
  long *plVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 local_6a0;
  undefined8 *local_698;
  undefined8 ****local_690;
  undefined8 ****ppppuStack_688;
  undefined8 ****local_680 [2];
  undefined8 ****local_670 [2];
  undefined8 ****local_660 [2];
  undefined8 ****local_650 [2];
  undefined8 ****local_640 [2];
  undefined8 ****local_630 [2];
  undefined8 ****local_620 [2];
  undefined8 ****local_610 [2];
  undefined8 ****local_600 [2];
  undefined8 ****local_5f0 [2];
  undefined8 ****local_5e0 [2];
  undefined8 ****local_5d0 [2];
  undefined8 ****local_5c0 [2];
  undefined8 ****local_5b0 [2];
  undefined8 ****local_5a0 [2];
  undefined8 ****local_590 [2];
  undefined8 ****local_580 [2];
  undefined8 ****local_570 [2];
  undefined8 ****local_560 [2];
  undefined8 ****local_550 [2];
  undefined8 ****local_540 [2];
  undefined8 ****local_530 [2];
  undefined8 ****local_520 [2];
  undefined8 ****local_510 [2];
  undefined8 ****local_500 [2];
  undefined8 ****local_4f0 [2];
  undefined8 ***local_4e0 [2];
  undefined8 **local_4d0 [2];
  undefined8 *local_4c0 [2];
  undefined8 local_4b0 [2];
  undefined8 auStack_4a0 [30];
  uint local_3b0;
  char local_3a8 [8];
  uint local_3a0;
  long local_398;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined **local_a8;
  long lStack_a0;
  uint local_84 [5];
  undefined4 local_64;
  
  local_ac = FUN_02e992d0();
  uVar14 = *(uint *)(param_1 + 0x1c1f8);
  local_b0 = 0xffffffff;
  if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(param_1 + 0x1c1e0))) {
    lVar13 = param_1 + 0x1c1d0;
    uVar2 = uVar14 + 1 & 3;
    if (2 < uVar14) {
      uVar14 = uVar14 + 1 & 0xfffffffc;
      do {
        uVar14 = uVar14 - 4;
        lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 8) + 8) + 8) + 8);
      } while (uVar14 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar13 = *(long *)(lVar13 + 8);
    }
    local_b0 = 0xffffffff;
    if ((lVar13 != 0) && (lVar13 = lVar13 - *(int *)(param_1 + 0x1c1e4), lVar13 != 0)) {
      local_b0 = *(undefined4 *)(lVar13 + 0x270);
    }
  }
  local_a8 = &PTR_LAB_04ada838;
  lStack_a0 = param_1;
  FUN_0345ca00(local_3a8,&local_b0);
  *(byte *)(param_1 + 0x1c568) = *(byte *)(param_1 + 0x1c568) & 0xfd | local_3a8[0] << 1;
  lVar13 = FUN_033d0598(PTR_DAT_04bb32e0);
  bVar4 = *(byte *)(param_1 + 0x1c568);
  bVar10 = *(short *)(lVar13 + 0x934) == 0x10;
  bVar3 = bVar10 << 2;
  bVar5 = bVar4 & 3;
  if (!bVar10) {
    bVar5 = bVar4 & 2;
  }
  bVar6 = bVar5 | bVar3;
  *(byte *)(param_1 + 0x1c568) = bVar4 & 0xf8 | bVar5 | bVar3;
  *(bool *)(*(long *)(param_1 + 0x1c560) + 0x1518) = bVar6 == 7;
  puVar8 = PTR_DAT_04bc4e60;
  puVar7 = PTR_DAT_04bc4e58;
  if (bVar6 == 7) {
    puVar16 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
      *(undefined **)puVar7 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar12 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bc4e58);
    if ((uVar12 & 1) == 0) {
      puVar16 = (undefined8 *)0x0;
    }
    plVar17 = *(long **)(puVar16[0x45] + (ulong)(4 < *(uint *)(puVar16 + 0x44)) * 0x20);
    if (plVar17 != (long *)0x0) {
      local_698._0_4_ = 9;
      puVar1 = PTR_DAT_04bc4f00 + 0x10;
      local_6a0 = (undefined **)puVar1;
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_6a0);
      fVar18 = (float)(**(code **)(plVar17[3] + 0xb0))(plVar17[1]);
      local_698._0_4_ = 9;
      fVar20 = 0.5;
      if (fVar18 < 0.0) {
        fVar20 = -0.5;
      }
      uVar14 = local_3a0;
      if ((int)(fVar18 + fVar20) + 1 <= (int)local_3a0) {
        uVar14 = (int)(fVar18 + fVar20) + 1;
      }
      iVar11 = uVar14 - 1;
      if ((int)local_3a0 < 1) {
        iVar11 = 0;
      }
      local_6a0 = (undefined **)puVar1;
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_6a0);
      fVar18 = (float)(**(code **)(plVar17[3] + 0xb0))(plVar17[1]);
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,0x14);
      if ((float)iVar11 <= fVar18) {
        fVar18 = (float)iVar11;
      }
      fVar20 = 0.0;
      if (-1 < iVar11) {
        fVar20 = fVar18;
      }
      local_6a0 = (undefined **)puVar1;
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_6a0);
      (**(code **)(plVar17[3] + 0x158))(fVar20,plVar17[1]);
    }
    local_698 = (undefined8 *)0x0;
    local_680[0] = local_670;
    local_670[0] = local_660;
    ppppuStack_688 = local_680;
    local_660[0] = local_650;
    local_650[0] = local_640;
    local_640[0] = local_630;
    local_630[0] = local_620;
    local_620[0] = local_610;
    local_610[0] = local_600;
    local_600[0] = local_5f0;
    local_5f0[0] = local_5e0;
    local_5e0[0] = local_5d0;
    local_5d0[0] = local_5c0;
    local_5c0[0] = local_5b0;
    local_5b0[0] = local_5a0;
    local_5a0[0] = local_590;
    local_590[0] = local_580;
    local_580[0] = local_570;
    local_570[0] = local_560;
    local_560[0] = local_550;
    local_550[0] = local_540;
    local_540[0] = local_530;
    local_530[0] = local_520;
    local_520[0] = local_510;
    local_510[0] = local_500;
    local_500[0] = local_4f0;
    local_4f0[0] = local_4e0;
    local_4e0[0] = local_4d0;
    local_4d0[0] = local_4c0;
    local_4c0[0] = local_4b0;
    local_4b0[0] = 0;
    local_690 = ppppuStack_688;
    local_3b0 = param_2;
    if (auStack_4a0 == (undefined8 *)0x0) {
      local_6a0 = (undefined **)0x0;
    }
    else {
      local_6a0 = (undefined **)0x1e00000000;
      local_698 = auStack_4a0;
      if (0 < (int)local_3a0) {
        lVar13 = 0;
        if (0x1d < (int)local_3a0) {
          local_3a0 = 0x1e;
        }
        iVar11 = 0;
        do {
          ppppuVar9 = local_690;
          if (iVar11 < local_6a0._4_4_) {
            if (local_690 != (undefined8 ****)0x0) {
              local_690 = (undefined8 ****)*local_690;
            }
            pppuVar15 = (undefined8 ***)**(long **)(local_398 + lVar13);
            *(int *)(ppppuVar9 + 1) = (int)(*(long **)(local_398 + lVar13))[1];
            *ppppuVar9 = pppuVar15;
            iVar11 = (int)local_6a0;
            if ((int)local_6a0 < local_6a0._4_4_) {
              auStack_4a0[(int)local_6a0] = ppppuVar9;
              iVar11 = (int)local_6a0 + 1;
              local_6a0 = (undefined **)CONCAT44(local_6a0._4_4_,iVar11);
            }
          }
          lVar13 = lVar13 + 8;
        } while ((ulong)local_3a0 * 8 != lVar13);
      }
    }
    FUN_0345db20(*(undefined8 *)(param_1 + 0x1c560),&local_6a0);
  }
  puVar16 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)puVar7 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar7 = PTR_DAT_04bc4e58;
  uVar12 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bc4e58);
  if ((uVar12 & 1) == 0) {
    puVar16 = (undefined8 *)0x0;
  }
  lVar13 = 0x28;
  if (*(uint *)(puVar16 + 0x44) < 6) {
    lVar13 = 0;
  }
  plVar17 = *(long **)(puVar16[0x45] + lVar13);
  if (plVar17 != (long *)0x0) {
    local_6a0 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
    if (bVar6 == 7) {
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,0xc);
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_6a0);
      uVar12 = (**(code **)(plVar17[3] + 0xe0))(plVar17[1]);
      if ((uVar12 & 1) != 0) goto LAB_02e99ab0;
      local_6a0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,1);
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_6a0);
      uVar19 = 0x3f800000;
    }
    else {
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,0xb);
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_6a0);
      uVar12 = (**(code **)(plVar17[3] + 0xd0))(plVar17[1]);
      if ((uVar12 & 1) != 0) goto LAB_02e99ab0;
      local_6a0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,1);
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_6a0);
      uVar19 = 0xbf800000;
    }
    (**(code **)(plVar17[3] + 400))(uVar19,plVar17[1]);
  }
LAB_02e99ab0:
  puVar16 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)puVar7 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar12 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bc4e58);
  if ((uVar12 & 1) == 0) {
    puVar16 = (undefined8 *)0x0;
  }
  lVar13 = 0x18;
  if (*(uint *)(puVar16 + 0x44) < 4) {
    lVar13 = 0;
  }
  plVar17 = *(long **)(puVar16[0x45] + lVar13);
  if (plVar17 != (long *)0x0) {
    if ((*(byte *)(param_1 + 0x1c568) >> 1 & 1) == 0) {
      local_6a0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,7);
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_6a0);
      puVar16 = (undefined8 *)(plVar17[3] + 0x1c0);
    }
    else {
      local_6a0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,6);
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_6a0);
      puVar16 = (undefined8 *)(plVar17[3] + 0x1b8);
    }
    (*(code *)*puVar16)(plVar17[1]);
  }
  if ((*(byte *)(param_1 + 0x1c568) >> 1 & 1) != 0) {
    local_6a0 = &PTR_FUN_04ada860;
    local_698 = (undefined8 *)param_1;
    FUN_02e8ef00(local_84,param_1,param_2);
    uVar14 = *(uint *)(param_1 + 0x1c1f8);
    local_64 = 0xffffffff;
    if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(param_1 + 0x1c1e0))) {
      lVar13 = param_1 + 0x1c1d0;
      uVar2 = uVar14 + 1 & 3;
      if (2 < uVar14) {
        uVar14 = uVar14 + 1 & 0xfffffffc;
        do {
          uVar14 = uVar14 - 4;
          lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(lVar13 + 8) + 8) + 8) + 8);
        } while (uVar14 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        lVar13 = *(long *)(lVar13 + 8);
      }
      local_64 = 0xffffffff;
      if ((lVar13 != 0) && (lVar13 = lVar13 - *(int *)(param_1 + 0x1c1e4), lVar13 != 0)) {
        local_64 = *(undefined4 *)(lVar13 + 0x270);
      }
    }
    local_84[0] = FUN_0345c6c0(local_84,&local_64);
    if (0 < (int)param_2) {
      do {
        if (local_84[0] != 0) break;
        local_84[0] = (*(code *)*local_6a0)(&local_6a0,param_2 - 1);
        bVar10 = 1 < param_2;
        param_2 = param_2 - 1;
      } while (bVar10);
    }
    if (local_84[0] != 0) {
      if (local_84[0] < 0x40) {
        local_698 = *(undefined8 **)(PTR_DAT_04bc0410 + (ulong)local_84[0] * 8 + 0x278);
      }
      else {
        local_698 = &DAT_0407ebb1;
      }
      local_6a0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      FUN_03414f00(param_1 + 0x1c408,&local_6a0,0x1c);
    }
  }
  return;
}

