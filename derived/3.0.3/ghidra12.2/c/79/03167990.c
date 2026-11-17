
void FUN_03167990(long param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined8 *****pppppuVar9;
  bool bVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  undefined8 ****ppppuVar19;
  uint uVar20;
  undefined8 *puVar21;
  long *plVar22;
  byte *pbVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 local_6a0;
  undefined8 *local_698;
  undefined8 *****local_690;
  undefined8 *****pppppuStack_688;
  undefined8 *****local_680 [2];
  undefined8 *****local_670 [2];
  undefined8 *****local_660 [2];
  undefined8 *****local_650 [2];
  undefined8 *****local_640 [2];
  undefined8 *****local_630 [2];
  undefined8 *****local_620 [2];
  undefined8 *****local_610 [2];
  undefined8 *****local_600 [2];
  undefined8 *****local_5f0 [2];
  undefined8 *****local_5e0 [2];
  undefined8 *****local_5d0 [2];
  undefined8 *****local_5c0 [2];
  undefined8 *****local_5b0 [2];
  undefined8 *****local_5a0 [2];
  undefined8 *****local_590 [2];
  undefined8 *****local_580 [2];
  undefined8 *****local_570 [2];
  undefined8 *****local_560 [2];
  undefined8 *****local_550 [2];
  undefined8 *****local_540 [2];
  undefined8 *****local_530 [2];
  undefined8 *****local_520 [2];
  undefined8 *****local_510 [2];
  undefined8 *****local_500 [2];
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
  undefined8 local_b0;
  undefined **local_a8;
  long lStack_a0;
  uint local_84 [5];
  undefined4 local_64;
  
  local_b0 = 0xffffffff;
  local_a8 = &PTR_FUN_04b05a68;
  piVar1 = (int *)(param_1 + 0x1c1d8);
  uVar15 = *(uint *)(param_1 + 0x1c1f0);
  iVar11 = *piVar1;
  pbVar2 = (byte *)(param_1 + 0x1d588);
  if (((int)uVar15 < 0) || (iVar11 <= (int)uVar15)) {
LAB_03167a68:
    if (*(long **)(param_1 + 0x1c2e8) == (long *)0x0) {
      local_b0._4_4_ = 0;
      goto joined_r0x03167a94;
    }
    piVar12 = (int *)(**(code **)(**(long **)(param_1 + 0x1c2e8) + 0x18))();
    local_b0._4_4_ = *piVar12;
    uVar15 = *(uint *)(param_1 + 0x1c1f0);
    iVar11 = *piVar1;
    if (-1 < (int)uVar15) goto LAB_03167a98;
LAB_03167ac0:
    uVar25 = 0xffffffff;
  }
  else {
    lVar17 = param_1 + 0x1c1c8;
    uVar16 = uVar15 + 1 & 3;
    if (2 < uVar15) {
      uVar18 = uVar15 + 1 & 0xfffffffc;
      do {
        uVar18 = uVar18 - 4;
        lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(lVar17 + 8) + 8) + 8) + 8);
      } while (uVar18 != 0);
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      lVar17 = *(long *)(lVar17 + 8);
    }
    if (((lVar17 == 0) || (lVar17 = lVar17 - *(int *)(param_1 + 0x1c1dc), lVar17 == 0)) ||
       (*(int *)(lVar17 + 0x270) != 0x6f)) goto LAB_03167a68;
    local_b0._4_4_ = **(int **)(param_1 + 0x1c308);
joined_r0x03167a94:
    if ((int)uVar15 < 0) goto LAB_03167ac0;
LAB_03167a98:
    if (iVar11 <= (int)uVar15) goto LAB_03167ac0;
    uVar16 = uVar15 + 1;
    lVar17 = param_1 + 0x1c1c8;
    uVar18 = uVar16 & 3;
    lVar14 = lVar17;
    if (2 < uVar15) {
      uVar20 = uVar16 & 0xfffffffc;
      do {
        uVar20 = uVar20 - 4;
        lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 8) + 8) + 8);
      } while (uVar20 != 0);
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      lVar14 = *(long *)(lVar14 + 8);
    }
    uVar18 = 0xffffffff;
    if ((lVar14 != 0) && (lVar14 = lVar14 - *(int *)(param_1 + 0x1c1dc), lVar14 != 0)) {
      uVar18 = *(uint *)(lVar14 + 0x270);
    }
    if ((uVar18 & 0xfffffffe) == 8) {
      local_b0._4_4_ = local_b0._4_4_ + 1;
    }
    uVar18 = uVar16 & 3;
    if (2 < uVar15) {
      uVar16 = uVar16 & 0xfffffffc;
      do {
        uVar16 = uVar16 - 4;
        lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(lVar17 + 8) + 8) + 8) + 8);
      } while (uVar16 != 0);
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      lVar17 = *(long *)(lVar17 + 8);
    }
    uVar25 = 0xffffffff;
    if ((lVar17 != 0) && (lVar17 = lVar17 - *(int *)(param_1 + 0x1c1dc), lVar17 != 0)) {
      uVar25 = *(undefined4 *)(lVar17 + 0x270);
    }
  }
  local_b0 = CONCAT44(local_b0._4_4_,uVar25);
  local_a8 = &PTR_LAB_04b059a0;
  lStack_a0 = param_1;
  FUN_0345ca00(local_3a8,&local_b0);
  *pbVar2 = *pbVar2 & 0xfd | local_3a8[0] << 1;
  uVar13 = FUN_01810f30();
  lVar14 = FUN_033d0598(PTR_DAT_04bb32e0);
  lVar17 = 0x28c;
  if ((uVar13 & 1) == 0) {
    lVar17 = 0x1e4;
  }
  bVar5 = *pbVar2;
  bVar10 = *(short *)(lVar14 + lVar17 + 0xa4) == 0x10;
  bVar4 = bVar10 << 2;
  bVar6 = bVar5 & 3;
  if (!bVar10) {
    bVar6 = bVar5 & 2;
  }
  bVar7 = bVar6 | bVar4;
  *pbVar2 = bVar5 & 0xf8 | bVar6 | bVar4;
  *(bool *)(*(long *)(param_1 + 0x1d580) + 0x1518) = bVar7 == 7;
  pbVar23 = PTR_DAT_04bc4e60;
  puVar8 = PTR_DAT_04bc4e58;
  if (bVar7 == 7) {
    puVar21 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
      *(undefined **)puVar8 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar13 = (**(code **)*puVar21)(puVar21,PTR_DAT_04bc4e58);
    if ((uVar13 & 1) == 0) {
      puVar21 = (undefined8 *)0x0;
    }
    lVar17 = 0x18;
    if (*(uint *)(puVar21 + 0x44) < 4) {
      lVar17 = 0;
    }
    plVar22 = *(long **)(puVar21[0x45] + lVar17);
    if (plVar22 != (long *)0x0) {
      local_698._0_4_ = 9;
      puVar3 = PTR_DAT_04bc4f00 + 0x10;
      local_6a0 = (undefined **)puVar3;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_6a0);
      fVar24 = (float)(**(code **)(plVar22[3] + 0xb0))(plVar22[1]);
      local_698._0_4_ = 9;
      fVar26 = 0.5;
      if (fVar24 < 0.0) {
        fVar26 = -0.5;
      }
      uVar15 = local_3a0;
      if ((int)(fVar24 + fVar26) + 1 <= (int)local_3a0) {
        uVar15 = (int)(fVar24 + fVar26) + 1;
      }
      iVar11 = uVar15 - 1;
      if ((int)local_3a0 < 1) {
        iVar11 = 0;
      }
      local_6a0 = (undefined **)puVar3;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_6a0);
      fVar24 = (float)(**(code **)(plVar22[3] + 0xb0))(plVar22[1]);
      pbVar23 = PTR_DAT_04bc4e60;
      if ((float)iVar11 <= fVar24) {
        fVar24 = (float)iVar11;
      }
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,0x14);
      fVar26 = 0.0;
      if (-1 < iVar11) {
        fVar26 = fVar24;
      }
      local_6a0 = (undefined **)puVar3;
      (**(code **)(*plVar22 + 0x18))(plVar22,&local_6a0);
      (**(code **)(plVar22[3] + 0x158))(fVar26,plVar22[1]);
    }
    local_698 = (undefined8 *)0x0;
    local_680[0] = local_670;
    local_670[0] = local_660;
    pppppuStack_688 = local_680;
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
    local_690 = pppppuStack_688;
    local_3b0 = param_2;
    if (auStack_4a0 == (undefined8 *)0x0) {
      local_6a0 = (undefined **)0x0;
    }
    else {
      local_6a0 = (undefined **)0x1e00000000;
      local_698 = auStack_4a0;
      if (0 < (int)local_3a0) {
        lVar17 = 0;
        if (0x1d < (int)local_3a0) {
          local_3a0 = 0x1e;
        }
        iVar11 = 0;
        do {
          pppppuVar9 = local_690;
          if (iVar11 < local_6a0._4_4_) {
            if (local_690 != (undefined8 *****)0x0) {
              local_690 = (undefined8 *****)*local_690;
            }
            ppppuVar19 = (undefined8 ****)**(long **)(local_398 + lVar17);
            *(int *)(pppppuVar9 + 1) = (int)(*(long **)(local_398 + lVar17))[1];
            *pppppuVar9 = ppppuVar19;
            iVar11 = (int)local_6a0;
            if ((int)local_6a0 < local_6a0._4_4_) {
              auStack_4a0[(int)local_6a0] = pppppuVar9;
              iVar11 = (int)local_6a0 + 1;
              local_6a0 = (undefined **)CONCAT44(local_6a0._4_4_,iVar11);
            }
          }
          lVar17 = lVar17 + 8;
        } while ((ulong)local_3a0 * 8 != lVar17);
      }
    }
    FUN_0345db20(*(undefined8 *)(param_1 + 0x1d580),&local_6a0);
  }
  puVar21 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*pbVar23 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)puVar8 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar8 = PTR_DAT_04bc4e58;
  uVar13 = (**(code **)*puVar21)(puVar21,PTR_DAT_04bc4e58);
  if ((uVar13 & 1) == 0) {
    puVar21 = (undefined8 *)0x0;
  }
  plVar22 = *(long **)(puVar21[0x45] + (ulong)(4 < *(uint *)(puVar21 + 0x44)) * 0x20);
  if (plVar22 != (long *)0x0) {
    local_6a0 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
    if (bVar7 == 7) {
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,0xc);
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_6a0);
      uVar13 = (**(code **)(plVar22[3] + 0xe0))(plVar22[1]);
      if ((uVar13 & 1) != 0) goto LAB_03168060;
      local_6a0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,1);
      (**(code **)(*plVar22 + 0x18))(plVar22,&local_6a0);
      uVar25 = 0x3f800000;
    }
    else {
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,0xb);
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_6a0);
      uVar13 = (**(code **)(plVar22[3] + 0xd0))(plVar22[1]);
      if ((uVar13 & 1) != 0) goto LAB_03168060;
      local_6a0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,1);
      (**(code **)(*plVar22 + 0x18))(plVar22,&local_6a0);
      uVar25 = 0xbf800000;
    }
    (**(code **)(plVar22[3] + 400))(uVar25,plVar22[1]);
  }
LAB_03168060:
  puVar21 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*pbVar23 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)puVar8 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar13 = (**(code **)*puVar21)(puVar21,PTR_DAT_04bc4e58);
  if ((uVar13 & 1) == 0) {
    puVar21 = (undefined8 *)0x0;
  }
  plVar22 = *(long **)(puVar21[0x45] + (ulong)(2 < *(uint *)(puVar21 + 0x44)) * 0x10);
  if (plVar22 != (long *)0x0) {
    if ((*pbVar2 >> 1 & 1) == 0) {
      local_6a0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,7);
      (**(code **)(*plVar22 + 0x18))(plVar22,&local_6a0);
      puVar21 = (undefined8 *)(plVar22[3] + 0x1c0);
    }
    else {
      local_6a0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_698 = (undefined8 *)CONCAT44(local_698._4_4_,6);
      (**(code **)(*plVar22 + 0x18))(plVar22,&local_6a0);
      puVar21 = (undefined8 *)(plVar22[3] + 0x1b8);
    }
    (*(code *)*puVar21)(plVar22[1]);
  }
  if ((*pbVar2 >> 1 & 1) != 0) {
    local_6a0 = &PTR_FUN_04b059c8;
    local_698 = (undefined8 *)param_1;
    FUN_0315e2f0(local_84,param_1,param_2);
    uVar15 = *(uint *)(param_1 + 0x1c1f0);
    local_64 = 0xffffffff;
    if ((-1 < (int)uVar15) && ((int)uVar15 < *piVar1)) {
      lVar17 = param_1 + 0x1c1c8;
      uVar16 = uVar15 + 1 & 3;
      if (2 < uVar15) {
        uVar15 = uVar15 + 1 & 0xfffffffc;
        do {
          uVar15 = uVar15 - 4;
          lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(lVar17 + 8) + 8) + 8) + 8);
        } while (uVar15 != 0);
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        lVar17 = *(long *)(lVar17 + 8);
      }
      local_64 = 0xffffffff;
      if ((lVar17 != 0) && (lVar17 = lVar17 - *(int *)(param_1 + 0x1c1dc), lVar17 != 0)) {
        local_64 = *(undefined4 *)(lVar17 + 0x270);
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
      FUN_03414f00(param_1 + 0x1d428,&local_6a0,0x1c);
    }
  }
  return;
}

