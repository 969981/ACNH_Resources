
/* WARNING: Type propagation algorithm not settling */

void FUN_01350790(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined **ppuStack_10388;
  char *pcStack_10380;
  byte bStack_10365;
  uint local_fcd8;
  undefined **local_fcd0;
  char *local_fcc8;
  undefined8 local_fcc0;
  undefined8 local_fcb8;
  uint local_fcb0;
  undefined **local_fca8;
  undefined4 local_fca0;
  undefined1 local_fc9c [2];
  undefined4 local_fc9a;
  undefined1 local_fc96 [32246];
  undefined8 *local_7ea0;
  undefined1 local_7e98 [8];
  undefined8 uStack_7e90;
  undefined2 local_7e88;
  undefined2 uStack_7e86;
  uint uStack_7e84;
  undefined2 local_7e80;
  undefined2 uStack_7e7e;
  undefined4 uStack_7e7c;
  undefined2 local_7e78;
  undefined2 uStack_7e76;
  undefined4 uStack_7e74;
  undefined4 uStack_7e70;
  undefined2 local_7e6c;
  undefined2 uStack_7e6a;
  undefined6 local_7e68;
  undefined2 uStack_7e62;
  undefined6 uStack_7e60;
  undefined2 local_7e5a;
  undefined8 local_7e58;
  undefined8 local_7e50;
  undefined8 local_7e48;
  undefined8 uStack_7e40;
  undefined8 local_7e38;
  undefined8 uStack_7e30;
  undefined8 local_7e28;
  undefined8 uStack_7e20;
  undefined8 local_7e18;
  undefined8 uStack_7e10;
  undefined1 local_7d85;
  ulong local_98;
  undefined8 *local_90;
  ushort local_88;
  undefined4 local_84;
  uint *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  
  if (*param_2 == 0) {
    return;
  }
  lVar21 = 1;
  ppuStack_10388 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_10380 = "FieldPresetParamsWherearenNpcGardenHeap";
  plVar8 = (long *)FUN_038c6d48(&LAB_00500000,&ppuStack_10388,*param_2,8,1,0);
  plVar11 = (long *)PTR_DAT_04bb3350;
  if (plVar8 != (long *)0x0) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)(lVar9 + 0xa8);
    *(long **)(lVar9 + 0xa8) = plVar8;
  }
  FUN_01340710(&ppuStack_10388,&DAT_051993e0,param_1 + 8,0);
  ppuStack_10388 = &PTR_FUN_04992cf0;
  local_fcd8 = 0;
  memset(local_7e98,0,0x7e00);
  iVar15 = 0;
  do {
    lVar9 = (long)iVar15 * 0xe;
    iVar15 = iVar15 + 1;
    local_7e98[lVar9 + 0xc] = 0;
    *(undefined4 *)(local_7e98 + lVar9) = 0;
    local_7e98[lVar9 + 4] = 0;
    *(undefined4 *)(local_7e98 + lVar9 + 6) = 0;
    local_7e98[lVar9 + 10] = 0;
  } while (iVar15 != 0x900);
  local_fcc8 = "mLandMaking";
  local_fcc0 = 0;
  local_fcb8 = 0;
  local_fcb0 = 0;
  local_fcd0 = &PTR_FUN_04992f90;
  local_fca8 = &PTR_LAB_049930d0;
  memset(&local_fca0,0,0x7e00);
  iVar15 = 0;
  do {
    lVar9 = (long)iVar15 * 0xe;
    iVar15 = iVar15 + 1;
    local_fc96[lVar9 + 2] = 0;
    *(undefined4 *)((long)&local_fca0 + lVar9) = 0;
    local_fc9c[lVar9] = 0;
    *(undefined4 *)(local_fc9c + lVar9 + 2) = 0;
    local_fc96[lVar9] = 0;
  } while (iVar15 != 0x900);
  local_7ea0 = (undefined8 *)0x0;
  (*(code *)local_fcd0[7])(&local_fcd0,&ppuStack_10388);
  lVar9 = (*(code *)local_fcd0[0x1e])(&local_fcd0);
  memcpy((void *)(lVar9 + 8),&uStack_7e90,0x7e00);
  uVar19 = local_fcb0 | 0x1000000;
  uVar17 = local_fcb0 >> 7;
  local_fcb0 = uVar19;
  if ((uVar17 & 1) == 0) {
    uVar10 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                       (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),local_7ea0);
    puVar13 = local_7ea0;
    if (((uVar10 & 1) != 0) && (local_7ea0 != (undefined8 *)0x0)) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_7ea0);
      }
      else {
        plVar11 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_7ea0);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,puVar13);
        }
      }
    }
    local_7ea0 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    local_98 = 0;
    nn::os::GetCurrentStackInfo((ulong *)&local_90,&local_98);
    if ((local_7e98 < local_90) || ((undefined8 *)(local_98 + (long)local_90) <= local_7e98)) {
      if (*(long *)PTR_DAT_04bb2698 != 0) {
        if (*(int *)PTR_DAT_04bd0ca0 != 0) {
          puVar13 = *(undefined8 **)(PTR_DAT_04bd0ca0 + 8);
          lVar9 = (long)*(int *)PTR_DAT_04bd0ca0 << 3;
          do {
            uVar10 = (**(code **)(*(long *)*puVar13 + 0x88))((long *)*puVar13,local_7e98);
            if ((uVar10 & 1) != 0) goto LAB_01350a20;
            puVar13 = puVar13 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
        if (*(int *)PTR_DAT_04bd0d70 != 0) {
          puVar13 = *(undefined8 **)(PTR_DAT_04bd0d70 + 8);
          lVar9 = (long)*(int *)PTR_DAT_04bd0d70 << 3;
          do {
            uVar10 = (**(code **)(*(long *)*puVar13 + 0x88))((long *)*puVar13,local_7e98);
            if ((uVar10 & 1) != 0) goto LAB_01350a20;
            puVar13 = puVar13 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
      }
      puVar13 = (undefined8 *)local_7e98;
      plVar11 = (long *)PTR_DAT_04bb3350;
    }
    else {
LAB_01350a20:
      lVar9 = *(long *)PTR_DAT_04bb2698;
      if (lVar9 == 0) {
        puVar13 = malloc(0x7e08);
      }
      else {
        plVar11 = *(long **)(*(long *)PTR_DAT_04bb3058 + 0x330);
        if (plVar11 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar11 = (long *)(lVar9 + 8);
          if (lVar12 != 0) {
            plVar11 = (long *)(lVar12 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            puVar13 = (undefined8 *)0x0;
            goto LAB_01350b3c;
          }
        }
        puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x7e08,8);
      }
LAB_01350b3c:
      plVar11 = (long *)PTR_DAT_04bb3350;
      *puVar13 = &PTR_LAB_049930d0;
      memcpy(puVar13 + 1,&uStack_7e90,0x7e00);
    }
    local_7ea0 = puVar13;
  }
  local_fcb0 = local_fcb0 & 0xfeffffff;
  local_fcd0 = &PTR_FUN_04992e50;
  local_7d85 = 0;
  uVar16 = (uint)(*(char *)((long)param_2 + 0x12) == '\0');
  uVar17 = (uint)(*(char *)((long)param_2 + 0x13) == '\0') << 1;
  uVar19 = (uint)(*(char *)((long)param_2 + 0x14) == '\0') << 3;
  uVar1 = (uint)(*(char *)((long)param_2 + 0x15) == '\0') << 4;
  uVar2 = (uint)(*(char *)((long)param_2 + 0x16) == '\0') << 5;
  uVar7 = local_fcd8 & 0xffffff80;
  local_fcd8 = local_fcd8 & 0xffffff84 | uVar16 | uVar17 | uVar19 | uVar1 | uVar2 | 0x44;
  if ((char)param_2[2] != '\0') {
    local_fcd8 = uVar7 | uVar16 | uVar17 | uVar19 | uVar1 | uVar2 | 0x40;
  }
  local_7e88 = 0x100;
  uStack_7e86 = 0;
  uStack_7e90 = &uStack_7e84;
  uStack_7e84 = uStack_7e84 & 0xffffff00;
  local_7e98 = (undefined1  [8])(PTR_DAT_04bb21f8 + 0x10);
  uVar10 = (*(code *)ppuStack_10388[0x1e])(&ppuStack_10388,local_7e98,1);
  if ((uVar10 & 1) != 0) {
    FUN_03c27e60(&ppuStack_10388,local_7e98,plVar8);
  }
  lVar9 = param_2[1];
  if ((bStack_10365 & 1) != 0) {
    if ((local_fcd8 & 1) == 0) {
      uVar20 = *(undefined8 *)(lVar9 + 0xa8);
      lVar12 = (*(code *)local_fcd0[0x1e])(&local_fcd0);
      FUN_01342080(&ppuStack_10388,uVar20,lVar12 + 8,0x30,0x30);
    }
    if ((local_fcd8 >> 1 & 1) == 0) {
      FUN_013425a0(&ppuStack_10388,*(undefined8 *)(lVar9 + 0xb8),5,5);
    }
    if ((local_fcd8 >> 2 & 1) == 0) {
      FUN_0134278c(&ppuStack_10388,lVar9,0x1f);
    }
    if ((local_fcd8 >> 3 & 1) == 0) {
      FUN_01342bc0(&ppuStack_10388,lVar9);
    }
    if ((local_fcd8 >> 4 & 1) == 0) {
      FUN_01342d60(&ppuStack_10388,lVar9);
    }
    if ((local_fcd8 >> 5 & 1) == 0) {
      FUN_01342f00(&ppuStack_10388,lVar9);
    }
    if ((local_fcd8 >> 6 & 1) == 0) {
      FUN_01343124(&ppuStack_10388);
    }
    goto LAB_013511d0;
  }
  if (lVar9 == 0) goto LAB_013511d0;
  if ((*(char *)((long)param_2 + 0x13) != '\0') && (lVar9 = *(long *)(lVar9 + 0xb8), lVar9 != 0)) {
    uVar10 = 0;
    uStack_7e90 = (uint *)0x0;
    local_7e18 = 0;
    uStack_7e10 = 0;
    local_7e28 = 0;
    uStack_7e20 = 0;
    local_7e38 = 0;
    uStack_7e30 = 0;
    local_7e48 = 0;
    uStack_7e40 = 0;
    local_7e58 = 0;
    local_7e68 = 0;
    local_7e78 = 0;
    uStack_7e76 = 0;
    uStack_7e6a = 0;
    local_7e88 = 0;
    uStack_7e7c = 0;
    do {
      lVar12 = uVar10 << 0x20;
      uVar18 = uVar10 << 1;
      uVar6 = uVar10 >> 0x1f;
      uVar17 = (int)uVar10 + 2;
      uVar10 = (ulong)uVar17;
      *(undefined2 *)(local_7e98 + (-uVar6 & 0xfffffffe00000000 | uVar18)) = 0;
      *(undefined2 *)(local_7e98 + (lVar12 + 0x100000000 >> 0x1f)) = 0;
    } while (uVar17 != 0x48);
    local_7e98 = (undefined1  [8])0x2b002b002b002c;
    uStack_7e74 = 0x14002e;
    uStack_7e70 = 0x1d0000;
    uStack_7e90 = (uint *)CONCAT62(uStack_7e90._2_6_,0x2d);
    uStack_7e62 = 0x2e;
    uStack_7e60 = 0x2a00270026;
    uStack_7e86 = 0x2e;
    uStack_7e84 = 0x70007d;
    local_7e80 = 0x6a;
    local_7e48 = CONCAT62(local_7e48._2_6_,0x34);
    uStack_7e7e = 0x30;
    local_7e6c = 0x30;
    local_7e5a = 0x30;
    local_7e50 = 0x33003300330032;
    *(undefined8 *)(lVar9 + 8) = 0x800000009;
    uVar18 = 9;
    iVar15 = 0;
    uVar17 = 0;
    uVar19 = 8;
    uVar10 = 9;
    do {
      if (uVar10 != 0) {
        uVar10 = 0;
        do {
          if ((uVar17 < 9) && (uVar19 = (uint)uVar10, uVar19 < 10)) {
            uVar1 = iVar15 + uVar19;
            uVar18 = (ulong)uVar1;
            if (0x47 < uVar1) {
              uVar18 = 0;
            }
            uVar5 = *(undefined2 *)(local_7e98 + uVar18 * 2);
            lVar12 = lVar9 + 0x10 + (ulong)uVar1 * 0x18;
            if (0x47 < uVar1) {
              lVar12 = lVar9 + 0x10;
            }
            *(uint *)(lVar12 + 0xc) = uVar19;
            *(uint *)(lVar12 + 0x10) = uVar17;
            *(undefined2 *)(lVar12 + 8) = uVar5;
            uVar18 = (ulong)*(uint *)(lVar9 + 8);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar18);
        uVar19 = *(uint *)(lVar9 + 0xc);
        uVar10 = uVar18;
      }
      uVar17 = uVar17 + 1;
      iVar15 = iVar15 + 9;
    } while (uVar17 < uVar19);
    *(undefined4 *)(lVar9 + 0x6d0) = 0;
  }
  if ((char)param_2[2] == '\0') goto LAB_013511d0;
  local_90 = (undefined8 *)(PTR_DAT_04bb7648 + 0x10);
  lVar9 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar12 == 0)) {
    puVar3 = (ushort *)(lVar9 + 0x2c);
    if ((*(ushort *)(lVar9 + 0x28) & 0x40) != 0) {
      puVar3 = (ushort *)(lVar9 + 0x2a);
    }
    local_88 = *puVar3;
  }
  else if ((*(long **)(lVar12 + 0x60) == (long *)0x0) ||
          (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x60), puVar13 == (undefined8 *)0x0)) {
    local_88 = *(ushort *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
  }
  else {
    uVar10 = (**(code **)*puVar13)();
    local_88 = *(ushort *)(*(long *)(lVar12 + 0x48) + *(long *)(lVar12 + 0x40) + 2);
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar12 + 0x60) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x60) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
  }
  lVar9 = FUN_03775a30(&local_90);
  if (lVar9 != 0) {
    lVar12 = *(long *)(lVar9 + 0x1b0);
    if (lVar12 == 0) {
      uVar10 = 0;
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        lVar12 = *(long *)(lVar9 + 0x1b0);
        uVar10 = uVar10 & 0xffffffff;
        if (lVar12 == 0) goto LAB_0135100c;
      }
      plVar14 = *(long **)(lVar12 + 0x20);
      if (plVar14 != (long *)0x0) {
        local_7e98 = *(undefined1 (*) [8])(lVar9 + 400);
        uStack_7e90 = *(uint **)(lVar9 + 0x198);
        local_7e88 = 0x2acc;
        uStack_7e86 = 0;
        uStack_7e84 = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14,local_7e98);
      }
    }
LAB_0135100c:
    *(undefined2 *)(*(long *)(lVar9 + 0x198) + *(long *)(lVar9 + 400) + 1) = 0x4a50;
    if ((*(long *)(lVar9 + 0x1b0) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar9 + 0x1b0) + 0x20), plVar14 != (long *)0x0)) {
      local_7e98 = *(undefined1 (*) [8])(lVar9 + 400);
      uStack_7e90 = *(uint **)(lVar9 + 0x198);
      local_7e88 = 0x2acc;
      uStack_7e86 = 0;
      uStack_7e84 = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14,local_7e98);
    }
    *(undefined2 *)(*(long *)(lVar9 + 0x198) + *(long *)(lVar9 + 400) + 4) = 0x2a;
    if ((*(long *)(lVar9 + 0x1b0) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar9 + 0x1b0) + 0x20), plVar14 != (long *)0x0)) {
      local_7e98 = *(undefined1 (*) [8])(lVar9 + 400);
      uStack_7e90 = *(uint **)(lVar9 + 0x198);
      local_7e88 = 0x2acc;
      uStack_7e86 = 0;
      uStack_7e84 = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14,local_7e98);
    }
    *(undefined2 *)(*(long *)(lVar9 + 0x198) + *(long *)(lVar9 + 400) + 6) = 0x13;
    if ((*(long *)(lVar9 + 0x1b0) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar9 + 0x1b0) + 0x20), plVar14 != (long *)0x0)) {
      local_7e98 = *(undefined1 (*) [8])(lVar9 + 400);
      uStack_7e90 = *(uint **)(lVar9 + 0x198);
      local_7e88 = 0x2acc;
      uStack_7e86 = 0;
      uStack_7e84 = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14,local_7e98);
    }
    *(undefined2 *)(*(long *)(lVar9 + 0x198) + *(long *)(lVar9 + 400) + 8) = 0x1c;
    if ((*(long *)(lVar9 + 0x1b0) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar9 + 0x1b0) + 0x20), plVar14 != (long *)0x0)) {
      local_7e98 = *(undefined1 (*) [8])(lVar9 + 400);
      uStack_7e90 = *(uint **)(lVar9 + 0x198);
      local_7e88 = 0x2acc;
      uStack_7e86 = 0;
      uStack_7e84 = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14,local_7e98);
    }
    lVar12 = *(long *)(lVar9 + 0x198) + *(long *)(lVar9 + 400);
    uVar4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined4 *)(lVar12 + 0xc) = *(undefined4 *)PTR_DAT_04bb37e0;
    *(undefined4 *)(lVar12 + 0x10) = uVar4;
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x1b0) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x1b0) + 0x18), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
  }
  lVar9 = param_2[1];
  if (*(long *)(lVar9 + 0x150) != 0) {
    local_7e98._0_4_ = 0x1f;
    local_7e78 = 0;
    local_7e80 = 0;
    uStack_7e7e = 0;
    uStack_7e90 = (uint *)(PTR_DAT_04bb2010 + 0x10);
    local_7e88 = 0x50;
    uStack_7e86 = 0;
    uStack_7e84 = 0x4a;
    local_90 = (undefined8 *)(PTR_DAT_04bc4608 + 0x10);
    local_88 = local_88 & 0xff00;
    local_84 = 0;
    local_70 = 0;
    local_6c = 0;
    uStack_78 = 0;
    local_80 = uStack_7e90;
    FUN_02a8f958(&local_90,local_7e98);
    FUN_02a59250(lVar9 + 0x148,&local_90);
  }
LAB_013511d0:
  (*(code *)ppuStack_10388[4])(&ppuStack_10388);
  ppuStack_10388 = &PTR_FUN_04992cf0;
  local_fcd0 = &PTR_FUN_04992f90;
  uVar10 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                     (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),local_7ea0);
  puVar13 = local_7ea0;
  if (((uVar10 & 1) != 0) && (local_7ea0 != (undefined8 *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_7ea0);
    }
    else {
      plVar14 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_7ea0);
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14,puVar13);
      }
    }
  }
  local_7ea0 = (undefined8 *)0x0;
  FUN_01341630(&ppuStack_10388);
  if (lVar21 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*plVar11 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar21;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return;
}

