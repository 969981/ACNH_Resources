
undefined4 FUN_01bda460(long param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined2 uVar8;
  ulong uVar9;
  long lVar10;
  short sVar11;
  void *pvVar12;
  bool bVar13;
  long *plVar14;
  long lVar15;
  void *pvVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  int iVar20;
  size_t __n;
  short *psVar21;
  undefined4 uVar22;
  long lVar23;
  short *psVar24;
  ushort uVar25;
  undefined *local_740;
  char *pcStack_738;
  undefined **local_730;
  long local_728 [2];
  undefined *local_718 [4];
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined *local_6e8;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined *local_6b8;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined *local_688;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined *local_658;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined *local_628;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined *local_5f8;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined *local_5c8;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined *local_598;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined *local_568;
  uint local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  char local_528;
  undefined *local_520;
  void *local_518;
  undefined4 local_510;
  undefined1 local_50c;
  undefined8 local_508;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined *local_4f0;
  undefined1 *local_4e8;
  undefined4 local_4e0;
  undefined1 local_4dc [63];
  undefined1 local_49d;
  undefined *local_498;
  undefined1 *local_490;
  undefined4 local_488;
  undefined1 local_484 [63];
  undefined1 local_445;
  void *local_440;
  undefined8 local_438;
  long *local_430;
  long local_428 [121];
  
  *(undefined8 *)(param_1 + 0x1c) = 0;
  local_430 = local_428;
  local_438 = 0x7800000000;
  lVar10 = param_2[2];
  if ((int)lVar10 != 0) {
    iVar20 = 0;
    iVar19 = 0;
    do {
      if (iVar20 < local_438._4_4_) {
        iVar7 = 0;
        if ((int)param_2[1] <= iVar19 + *(int *)((long)param_2 + 0xc)) {
          iVar7 = (int)param_2[1];
        }
        local_430[iVar20] = *param_2 + (long)(iVar19 + (*(int *)((long)param_2 + 0xc) - iVar7)) * 8;
        iVar20 = (int)local_438 + 1;
        local_438 = CONCAT44(local_438._4_4_,iVar20);
      }
      iVar19 = iVar19 + 1;
    } while ((int)lVar10 != iVar19);
  }
  memset(local_728,0,0x1e0);
  local_6f8 = 0;
  uStack_6f0 = 0;
  local_6c8 = 0;
  uStack_6c0 = 0;
  puVar3 = PTR_DAT_04bb2d80 + 0x10;
  local_698 = 0;
  uStack_690 = 0;
  local_548 = 0xffffffff;
  local_540 = 0;
  local_538 = 0;
  local_500 = 0xffffffff00000000;
  local_4e8 = local_4dc;
  local_530 = 0;
  local_528 = '\0';
  local_518 = (void *)0x0;
  local_510 = 0;
  local_50c = 0;
  local_508 = 0xffffffff;
  local_4f8 = 0xffffffff;
  local_4e0 = 0x40;
  local_49d = 0;
  local_4dc[0] = 0;
  local_668 = 0;
  uStack_660 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_608 = 0;
  uStack_600 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_578 = 0;
  uStack_570 = 0;
  local_4f0 = PTR_DAT_04bb2bc0 + 0x10;
  local_488 = 0x40;
  local_445 = 0;
  local_490 = local_484;
  local_484[0] = 0;
  local_520 = PTR_DAT_04bb2e00 + 0x10;
  plVar18 = *(long **)(param_1 + 8);
  local_440 = (void *)0x0;
  lVar10 = plVar18[2];
  local_730 = &PTR_LAB_04a3cd90;
  if ((int)lVar10 == 0) {
    uVar22 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    iVar19 = 0;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    local_718[0] = puVar3;
    local_6e8 = puVar3;
    local_6b8 = puVar3;
    local_688 = puVar3;
    local_658 = puVar3;
    local_628 = puVar3;
    local_5f8 = puVar3;
    local_5c8 = puVar3;
    local_598 = puVar3;
    local_568 = puVar3;
    local_498 = local_4f0;
    do {
      iVar20 = *(int *)((long)plVar18 + 0xc) + iVar19;
      iVar7 = 0;
      if ((int)plVar18[1] <= iVar20) {
        iVar7 = (int)plVar18[1];
      }
      lVar1 = *plVar18 + (long)(iVar20 - iVar7) * 4;
      pcStack_738 = "STR_Mailcheck";
      uVar8 = *(undefined2 *)(lVar1 + 2);
      local_740 = puVar4;
      pvVar12 = local_518;
      if (local_518 == (void *)0x0) {
        lVar23 = *(long *)PTR_DAT_04bb2698;
        if (lVar23 == 0) {
          pvVar16 = malloc(0x1000);
          pvVar12 = local_518;
        }
        else {
          plVar14 = *(long **)PTR_DAT_04bc08b8;
          if (plVar14 == (long *)0x0) {
            lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar14 = (long *)(lVar23 + 8);
            if (lVar15 != 0) {
              plVar14 = (long *)(lVar15 + 0xa8);
            }
            plVar14 = (long *)*plVar14;
            pvVar12 = local_518;
            if (plVar14 == (long *)0x0) goto LAB_01bda720;
          }
          pvVar16 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1000,8);
          pvVar12 = local_518;
        }
        local_518 = pvVar16;
        if (local_518 != (void *)0x0) {
          local_510 = 0x800;
          local_440 = local_518;
          (**(code **)(local_520 + 0x38))(&local_520);
          pvVar12 = local_518;
        }
      }
LAB_01bda720:
      local_518 = pvVar12;
      FUN_006f5290(&local_520,&local_740,uVar8);
      (*(code *)local_730[2])(&local_730);
      local_540 = 0;
      local_538 = 0;
      local_548 = 0xffffffff;
      local_530 = local_530 & 0xffffffff00000000;
      lVar23 = (**(code **)(local_520 + 0x18))(&local_520);
      lVar15 = (**(code **)(local_520 + 0x18))(&local_520);
      if (((lVar15 != 0) && (uVar17 = (**(code **)(local_520 + 0x20))(&local_520), lVar23 != 0)) &&
         ((int)local_548 < 9)) {
        local_548 = local_548 + 1;
        bVar13 = 9 < local_548;
        uVar9 = (ulong)local_548;
        plVar14 = local_728 + uVar9 * 6;
        if (bVar13) {
          plVar14 = local_728;
        }
        *plVar14 = lVar23;
        plVar14 = local_728 + uVar9 * 6 + 1;
        if (bVar13) {
          plVar14 = local_728 + 1;
        }
        *plVar14 = lVar15 + (uVar17 & 0xffffffff) * 2;
        ppuVar6 = local_718 + uVar9 * 6;
        if (bVar13) {
          ppuVar6 = local_718;
        }
        *ppuVar6 = puVar3;
      }
      (*(code *)local_730[3])(&local_730);
      local_530 = local_530 & 0xffffffffffff;
LAB_01bda7f4:
      if (local_548 < 10) {
        psVar24 = (short *)local_728[(ulong)local_548 * 6];
      }
      else {
        psVar24 = (short *)0x0;
      }
      local_530._0_6_ = (uint6)(uint)local_530;
      local_528 = '\0';
      FUN_006f1490(&local_730);
      if (local_528 != '\0') {
        sVar11 = local_530._6_2_;
        uVar25 = local_530._4_2_;
        local_530 = CONCAT26(local_530._6_2_ + 1,(uint6)local_530);
        if (0 < (int)local_438) {
          if (3 < uVar25) {
            uVar25 = 4;
          }
          if (uVar25 != 0) {
            uVar17 = 0;
            __n = (long)(int)local_438 * 8;
            plVar14 = local_430;
            do {
              __n = __n - 8;
              psVar21 = (short *)*plVar14;
              if ((*psVar21 == *psVar24) &&
                 ((uVar25 == 1 ||
                  ((psVar21[1] == psVar24[1] &&
                   ((uVar25 == 2 ||
                    ((psVar21[2] == psVar24[2] && ((uVar25 == 3 || (psVar21[3] == psVar24[3]))))))))
                  )))) {
                iVar20 = (int)uVar17;
                if ((-1 < iVar20) && (iVar20 < (int)local_438)) {
                  if (iVar20 + 1 < (int)local_438) {
                    memmove(plVar14,plVar14 + 1,__n);
                  }
                  local_438 = CONCAT44(local_438._4_4_,(int)local_438 + -1);
                }
                iVar20 = *(int *)(param_1 + 0x20);
                iVar7 = *(int *)(param_1 + 0x18);
                if (iVar20 < iVar7) {
                  *(int *)(param_1 + 0x20) = iVar20 + 1;
                  iVar20 = *(int *)(param_1 + 0x1c) + iVar20;
                  iVar5 = 0;
                  if (iVar7 <= iVar20) {
                    iVar5 = iVar7;
                  }
                  puVar2 = (undefined4 *)(*(long *)(param_1 + 0x10) + (long)(iVar20 - iVar5) * 4);
                  *puVar2 = 0;
                  uVar8 = *(undefined2 *)(lVar1 + 2);
                  *(short *)((long)puVar2 + 2) = sVar11;
                  *(undefined2 *)puVar2 = uVar8;
                }
                break;
              }
              uVar17 = uVar17 + 1;
              plVar14 = plVar14 + 1;
            } while ((local_438 & 0xffffffff) != uVar17);
          }
        }
        goto LAB_01bda7f4;
      }
      iVar19 = iVar19 + 1;
    } while ((int)lVar10 != iVar19);
    uVar22 = *(undefined4 *)(param_1 + 0x20);
    local_730 = &PTR_LAB_04a3cd90;
    local_520 = PTR_DAT_04bb2e00 + 0x10;
    if (local_440 != (void *)0x0) {
      local_518 = (void *)0x0;
      local_508 = 0xffffffff;
      local_510 = 0;
      local_500 = 0xffffffff00000000;
      local_50c = 0;
      local_4f8 = 0xffffffff;
      *local_4e8 = 0;
      *local_490 = 0;
      pvVar12 = local_440;
      if (local_440 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(local_440);
        }
        else {
          plVar18 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_440);
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x38))(plVar18,pvVar12);
          }
        }
      }
    }
  }
  return uVar22;
}

