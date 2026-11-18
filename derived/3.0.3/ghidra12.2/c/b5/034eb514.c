
/* WARNING: Type propagation algorithm not settling */

uint FUN_034eb514(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  short *psVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  undefined *puVar19;
  float fVar20;
  undefined8 uVar21;
  undefined *local_828;
  char *pcStack_820;
  undefined4 local_818;
  undefined1 local_814 [7];
  undefined1 local_80d;
  undefined *local_808;
  undefined1 *puStack_800;
  undefined *local_7f8;
  char *pcStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined *local_7d8;
  char *pcStack_7d0;
  uint local_674;
  undefined8 local_670;
  char *local_668;
  undefined4 local_660;
  undefined1 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined *local_640;
  undefined1 *puStack_638;
  undefined4 local_630;
  undefined1 local_62c [63];
  undefined1 local_5ed;
  undefined *local_5e8;
  undefined1 *local_5e0;
  undefined4 local_5d8;
  undefined1 local_5d4 [63];
  undefined1 local_595;
  char local_590 [2];
  undefined1 auStack_58e [14];
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined *local_490;
  undefined2 local_488;
  undefined2 uStack_486;
  undefined4 uStack_484;
  undefined4 uStack_480;
  uint local_47c;
  undefined1 *local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined1 local_464;
  undefined1 *local_460;
  undefined1 *local_458;
  undefined4 local_450;
  undefined1 local_44c [4];
  undefined *local_448;
  undefined1 *local_440;
  undefined4 local_438;
  undefined1 local_434 [39];
  undefined1 local_40d;
  undefined1 *local_408;
  undefined1 *local_400;
  uint local_3f8;
  undefined1 local_3f4 [4];
  undefined *local_3f0;
  undefined1 *local_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc [39];
  undefined1 local_3b5;
  undefined8 local_3b0;
  undefined6 uStack_3a8;
  undefined2 local_3a2;
  uint uStack_3a0;
  undefined2 uStack_39c;
  undefined1 auStack_39a [2];
  undefined8 local_398;
  undefined1 *local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined1 local_37c;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined *local_360;
  undefined1 *local_358;
  undefined4 local_350;
  undefined1 local_34c [63];
  undefined1 local_30d;
  undefined *local_308;
  undefined1 *local_300;
  undefined4 local_2f8;
  undefined1 local_2f4 [63];
  undefined1 local_2b5;
  undefined8 local_2b0;
  undefined1 *local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined1 local_294;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  undefined1 local_264 [63];
  undefined1 local_225;
  undefined *local_220;
  undefined1 *local_218;
  undefined4 local_210;
  undefined1 local_20c [63];
  undefined1 local_1cd;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  int local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined4 local_c8;
  char local_c4 [63];
  undefined1 local_85;
  uint local_7c [3];
  
  if (((DAT_057651d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_057651d0), iVar6 != 0)) {
    DAT_057651c8 = 0x300000002;
    __cxa_guard_release(&DAT_057651d0);
  }
  if ((int)param_4 < 0) {
    return 4;
  }
  iVar6 = *(int *)(param_1 + 0x1cf60);
  if (iVar6 - 3U < 2) {
    if (9 < (int)param_4) {
      return 4;
    }
    goto LAB_034eb638;
  }
  local_490 = (undefined *)CONCAT44(local_490._4_4_,iVar6);
  lVar13 = *(long *)PTR_DAT_04bb7bc0;
  uVar5 = 0;
  if (lVar13 == 0) goto joined_r0x034ebcac;
  if (*(long *)(lVar13 + 0x68) == 0) {
switchD_034eb5e8_default:
    if (param_4 < 0x80000000) {
      return 4;
    }
    goto LAB_034eb638;
  }
  switch(iVar6) {
  case 0:
    uVar5 = *(uint *)(lVar13 + 0x170);
    break;
  case 1:
    uVar5 = *(int *)(lVar13 + 0x180);
    break;
  case 2:
    lVar11 = *(long *)(lVar13 + 0x1b8);
    uVar5 = *(int *)(lVar13 + 0x1b0);
    goto LAB_034ebca0;
  case 3:
    uVar5 = *(uint *)(lVar13 + 0x610) & ((int)*(uint *)(lVar13 + 0x610) >> 0x1f ^ 0xffffffffU);
    break;
  case 4:
    lVar11 = *(long *)(lVar13 + 0x1e0);
    uVar5 = *(int *)(lVar13 + 0x1d8);
LAB_034ebca0:
    if (lVar11 == 0) {
      uVar5 = -1;
    }
    break;
  default:
    goto switchD_034eb5e8_default;
  }
joined_r0x034ebcac:
  if ((int)uVar5 <= (int)param_4) {
    return 4;
  }
LAB_034eb638:
  local_670 = (undefined *)((ulong)local_670._4_4_ << 0x20);
  lVar13 = param_1 + 0x1cf68 + (ulong)param_4 * 0x18;
  if (0x20 < param_4) {
    lVar13 = param_1 + 0x1cf68;
  }
  FUN_034e839c(lVar13,&local_670);
  puVar1 = PTR_DAT_04bc4f00;
  plVar15 = *(long **)(*(long *)(param_2 + 0x2f0) + (ulong)(4 < *(uint *)(param_2 + 0x2e8)) * 0x20);
  if (plVar15 != (long *)0x0) {
    local_488 = 0x14;
    uStack_486 = 0;
    fVar20 = (float)(int)local_670;
    local_490 = PTR_DAT_04bc4f00 + 0x10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
    (**(code **)(plVar15[3] + 0x158))(fVar20,plVar15[1]);
  }
  uVar5 = param_3;
  if (*(uint *)(param_1 + 0x1d280) <= param_3) {
    uVar5 = 0;
  }
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x1d288) + (long)(int)uVar5 * 8) + 0x1070);
  if (((*(int *)(lVar11 + 0x18) != 0) &&
      (lVar12 = *(long *)(lVar11 + 0x10) - (long)*(int *)(lVar11 + 0x1c),
      *(long *)(lVar11 + 0x10) != 0 && lVar12 != 0)) &&
     (plVar15 = *(long **)(lVar12 + 0x218), plVar15 != (long *)0x0)) {
    local_488 = 0x14;
    uStack_486 = 0;
    fVar20 = (float)(int)local_670;
    local_490 = puVar1 + 0x10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
    (**(code **)(plVar15[3] + 0x158))(fVar20,plVar15[1]);
  }
  lVar11 = *(long *)(param_2 + 0x318);
  if (((*(int *)(lVar11 + 0x18) != 0) && (*(long *)(lVar11 + 0x10) != 0)) &&
     ((lVar11 = *(long *)(lVar11 + 0x10) - (long)*(int *)(lVar11 + 0x1c), lVar11 != 0 &&
      (plVar15 = *(long **)(lVar11 + 0x218), plVar15 != (long *)0x0)))) {
    local_488 = 0x14;
    uStack_486 = 0;
    fVar20 = (float)(int)local_670;
    local_490 = puVar1 + 0x10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
    (**(code **)(plVar15[3] + 0x158))(fVar20,plVar15[1]);
  }
  local_670 = (undefined *)((ulong)local_670 & 0xffffffff00000000);
  FUN_034e84b8(lVar13,&local_670);
  uVar5 = *(uint *)(param_2 + 0x2e8);
  lVar12 = *(long *)(param_2 + 0x2f0);
  lVar11 = 0x28;
  if (uVar5 < 6) {
    lVar11 = 0;
  }
  plVar15 = *(long **)(lVar12 + lVar11);
  if (plVar15 != (long *)0x0) {
    local_488 = 0x14;
    uStack_486 = 0;
    fVar20 = (float)(int)local_670;
    local_490 = puVar1 + 0x10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
    (**(code **)(plVar15[3] + 0x158))(fVar20,plVar15[1]);
    uVar5 = *(uint *)(param_2 + 0x2e8);
    lVar12 = *(long *)(param_2 + 0x2f0);
  }
  lVar11 = 0x18;
  if (uVar5 < 4) {
    lVar11 = 0;
  }
  plVar15 = *(long **)(lVar12 + lVar11);
  if (plVar15 != (long *)0x0) {
    lVar11 = lVar13 + 8;
    uVar7 = FUN_01d77c78(lVar11);
    if ((((uVar7 & 1) == 0) || (uVar7 = FUN_01d77c78(lVar11), (uVar7 & 1) == 0)) ||
       (*(char *)(lVar13 + 0x14) != '\0')) {
LAB_034eb870:
      uVar5 = 0;
    }
    else {
      bVar4 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,lVar13 + 0x15,lVar11);
      *(byte *)(lVar13 + 0x14) = bVar4 & 1;
      if ((bVar4 & 1) != 0) goto LAB_034eb870;
      uVar5 = FUN_01d77fa0(lVar11);
    }
    local_488 = 0x14;
    uStack_486 = 0;
    local_490 = puVar1 + 0x10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
    (**(code **)(plVar15[3] + 0x158))((float)(uVar5 & 1),plVar15[1]);
    uVar5 = *(uint *)(param_2 + 0x2e8);
    lVar12 = *(long *)(param_2 + 0x2f0);
  }
  lVar11 = lVar13 + 8;
  lVar9 = 0x30;
  if (uVar5 < 7) {
    lVar9 = 0;
  }
  plVar15 = *(long **)(lVar12 + lVar9);
  uVar7 = FUN_01d77c78(lVar11);
  if ((uVar7 & 1) != 0) {
    uVar7 = FUN_01d77c78(lVar11);
    if (((uVar7 & 1) != 0) && (*(char *)(lVar13 + 0x14) == '\0')) {
      bVar4 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,lVar13 + 0x15,lVar11);
      *(byte *)(lVar13 + 0x14) = bVar4 & 1;
      if ((bVar4 & 1) == 0) goto LAB_034ebb4c;
    }
    pcVar18 = (char *)(lVar13 + 0x15);
    if (*pcVar18 != '\0') {
      if (plVar15 == (long *)0x0) goto LAB_034eb9b0;
      uVar7 = FUN_01d77c78(lVar11);
      uVar21 = 0;
      if ((uVar7 & 1) != 0) {
        uVar7 = FUN_01d77c78(lVar11);
        if (((uVar7 & 1) != 0) && (*(char *)(lVar13 + 0x14) == '\0')) {
          bVar4 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,pcVar18,lVar11);
          *(byte *)(lVar13 + 0x14) = bVar4 & 1;
          if ((bVar4 & 1) == 0) goto LAB_034eb97c;
        }
        uVar21 = 0x3f800000;
        if (*pcVar18 == '\0') {
          uVar21 = 0;
        }
      }
LAB_034eb97c:
      local_490 = puVar1 + 0x10;
      local_488 = 0x14;
      uStack_486 = 0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
      (**(code **)(plVar15[3] + 0x158))(uVar21,plVar15[1]);
LAB_034eb9b0:
      plVar15 = *(long **)(param_2 + 0x2e0);
      lVar13 = plVar15[(ulong)(2 < *(uint *)(param_2 + 0x2d8)) * 2];
      if ((lVar13 != 0) && (plVar14 = *(long **)(lVar13 + 0x48), plVar14[1] != 0)) {
        local_490 = PTR_DAT_04bc0878 + 0x10;
        local_488 = 9;
        uStack_486 = 0;
        (**(code **)(*plVar14 + 0x18))(plVar14,&local_490);
        (**(code **)(plVar14[3] + 0x5e0))(plVar14[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar13);
        plVar15 = *(long **)(param_2 + 0x2e0);
      }
      lVar13 = *plVar15;
      if ((lVar13 != 0) && (plVar14 = *(long **)(lVar13 + 0x48), plVar14[1] != 0)) {
        local_490 = PTR_DAT_04bc0878 + 0x10;
        local_488 = 9;
        uStack_486 = 0;
        (**(code **)(*plVar14 + 0x18))(plVar14,&local_490);
        (**(code **)(plVar14[3] + 0x5e0))(plVar14[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar13);
        plVar15 = *(long **)(param_2 + 0x2e0);
      }
      lVar13 = plVar15[1 < *(uint *)(param_2 + 0x2d8)];
      if ((lVar13 != 0) && (plVar15 = *(long **)(lVar13 + 0x48), plVar15[1] != 0)) {
        local_490 = PTR_DAT_04bc0878 + 0x10;
        local_488 = 9;
        uStack_486 = 0;
        (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
        (**(code **)(plVar15[3] + 0x5e0))(plVar15[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar13);
      }
      plVar15 = (long *)**(undefined8 **)(param_2 + 0x2f0);
      if (plVar15 == (long *)0x0) {
        return 3;
      }
      local_490 = puVar1 + 0x10;
      local_488 = 0x14;
      uStack_486 = 0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
      (**(code **)(plVar15[3] + 0x158))(0,plVar15[1]);
      return 3;
    }
  }
LAB_034ebb4c:
  if (plVar15 != (long *)0x0) {
    local_490 = puVar1 + 0x10;
    local_488 = 0x14;
    uStack_486 = 0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
    (**(code **)(plVar15[3] + 0x158))(0,plVar15[1]);
  }
  uVar5 = FUN_01d77efc(lVar11);
  if ((uVar5 != 0) && (uVar5 != 3)) {
    plVar15 = (long *)**(undefined8 **)(param_2 + 0x2f0);
    if (plVar15 != (long *)0x0) {
      local_490 = puVar1 + 0x10;
      local_488 = 0x14;
      uStack_486 = 0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
      (**(code **)(plVar15[3] + 0x158))(0,plVar15[1]);
    }
    goto LAB_034ebd1c;
  }
  local_7c[0] = 0xffffffff;
  uVar5 = FUN_034e7e80(lVar13,local_7c);
  uVar21 = 0;
  if (uVar5 == 0) {
    if (local_7c[0] == 1) {
      uVar5 = 0;
      uVar21 = 0x3f800000;
    }
    else {
      if (local_7c[0] == 3) {
        uVar21 = 0x40000000;
      }
      else if (local_7c[0] == 2) {
        local_478._0_4_ = (uint)(uint3)local_478;
        uStack_480 = 8;
        local_47c = local_47c & 0xffffff00;
        local_488 = SUB82(&local_47c,0);
        uStack_486 = (undefined2)((ulong)&local_47c >> 0x10);
        uStack_484 = (undefined4)((ulong)&local_47c >> 0x20);
        local_490 = PTR_DAT_04bb3768 + 0x10;
        uVar5 = FUN_034e8058(lVar13,&local_490);
        if (uVar5 == 0) {
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          local_668 = "kpp";
          local_670 = puVar1;
          uVar7 = FUN_00710cb0(&local_490,&local_670);
          if ((uVar7 & 1) == 0) {
            local_668 = "hgs";
            local_670 = puVar1;
            uVar7 = FUN_00710cb0(&local_490,&local_670);
            uVar21 = 0x40800000;
            if ((uVar7 & 1) == 0) {
              uVar21 = 0;
            }
          }
          else {
            uVar21 = 0x40400000;
          }
        }
        goto LAB_034ebcc8;
      }
      uVar5 = 0;
    }
  }
LAB_034ebcc8:
  plVar15 = (long *)**(undefined8 **)(param_2 + 0x2f0);
  if (plVar15 != (long *)0x0) {
    local_488 = 0x14;
    uStack_486 = 0;
    local_490 = PTR_DAT_04bc4f00 + 0x10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
    (**(code **)(plVar15[3] + 0x158))(uVar21,plVar15[1]);
  }
  puVar19 = PTR_DAT_04bc0bf0;
  puVar1 = PTR_DAT_04bc0a78;
  if ((uVar5 & 0xfffffffe) == 2) {
LAB_034ebd1c:
    plVar15 = *(long **)(param_2 + 0x2e0);
    lVar13 = plVar15[(ulong)(2 < *(uint *)(param_2 + 0x2d8)) * 2];
    if ((lVar13 != 0) && (plVar14 = *(long **)(lVar13 + 0x48), plVar14[1] != 0)) {
      local_490 = PTR_DAT_04bc0878 + 0x10;
      local_488 = 9;
      uStack_486 = 0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_490);
      (**(code **)(plVar14[3] + 0x5e0))(plVar14[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar13);
      plVar15 = *(long **)(param_2 + 0x2e0);
    }
    lVar13 = *plVar15;
    if ((lVar13 != 0) && (plVar14 = *(long **)(lVar13 + 0x48), plVar14[1] != 0)) {
      local_490 = PTR_DAT_04bc0878 + 0x10;
      local_488 = 9;
      uStack_486 = 0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_490);
      (**(code **)(plVar14[3] + 0x5e0))(plVar14[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar13);
      plVar15 = *(long **)(param_2 + 0x2e0);
    }
    lVar13 = plVar15[1 < *(uint *)(param_2 + 0x2d8)];
    if ((lVar13 != 0) && (plVar15 = *(long **)(lVar13 + 0x48), plVar15[1] != 0)) {
      local_490 = PTR_DAT_04bc0878 + 0x10;
      local_488 = 9;
      uStack_486 = 0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
      (**(code **)(plVar15[3] + 0x5e0))(plVar15[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar13);
    }
    return uVar5;
  }
  local_85 = 0;
  local_c8 = 0x40;
  local_d0 = local_c4;
  local_c4[0] = '\0';
  local_d8 = PTR_DAT_04bb2bc0 + 0x10;
  uVar5 = *(uint *)((long)&DAT_057651c8 + (ulong)(local_7c[0] == 3) * 4);
  plVar15 = *(long **)(param_2 + 0x2e0);
  if (*(uint *)(param_2 + 0x2d8) <= uVar5) {
    uVar5 = 0;
  }
  lVar12 = plVar15[(int)uVar5];
  if (lVar12 != 0) {
    uStack_484 = 0;
    uStack_480 = 0;
    local_488 = 0x100;
    local_440 = local_434;
    local_438 = 0x40;
    local_3e0 = 0x40;
    local_350 = 0x40;
    local_2f8 = 0x40;
    local_268 = 0x40;
    local_210 = 0x40;
    local_1a0 = 0x40;
    local_148 = 0x40;
    local_3e8 = local_3dc;
    local_f8 = *(int *)PTR_DAT_04bc0b30;
    local_478 = PTR_DAT_04bb2e00 + 0x10;
    local_300 = local_2f4;
    local_2f4[0] = 0;
    local_358 = local_34c;
    local_34c[0] = 0;
    local_218 = local_20c;
    local_20c[0] = 0;
    local_1a8 = local_19c;
    local_19c[0] = 0;
    *(int *)PTR_DAT_04bc0b30 = local_f8 + 1;
    local_100 = puVar1 + 0x10;
    local_150 = local_144;
    local_270 = local_264;
    local_264[0] = 0;
    local_490 = puVar19 + 0x10;
    local_47c = 0;
    local_468 = 0;
    local_464 = 0;
    local_460 = &DAT_ffffffff;
    local_458 = &DAT_ffffffff00000000;
    local_450 = 0xffffffff;
    local_3f8 = local_3f8 & 0xffffff;
    local_434[0] = 0;
    uStack_3a0 = uStack_3a0 & 0xffffff;
    local_3dc[0] = 0;
    local_470 = 0;
    local_388 = 0;
    local_380 = 0;
    local_37c = 0;
    local_378 = 0xffffffff;
    local_370 = 0xffffffff00000000;
    local_368 = 0xffffffff;
    local_30d = 0;
    local_2b5 = 0;
    local_398 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_294 = 0;
    local_290 = 0xffffffff;
    local_288 = 0xffffffff00000000;
    local_280 = 0xffffffff;
    local_225 = 0;
    local_1cd = 0;
    local_2b0 = 0;
    local_1b8 = 0;
    local_1c0 = 0;
    local_1c8 = 0;
    local_15d = 0;
    local_105 = 0;
    local_144[0] = 0;
    local_f4 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_448 = local_d8;
    local_3f0 = local_d8;
    local_390 = local_478;
    local_360 = local_d8;
    local_308 = local_d8;
    local_2a8 = local_478;
    local_278 = local_d8;
    local_220 = local_d8;
    local_1b0 = local_d8;
    local_158 = local_d8;
    if (local_7c[0] < 3) {
      local_7d8 = PTR_DAT_04bb2020 + 0x10;
      local_668 = "WherearenInspect";
      pcStack_7d0 = "0101";
      local_670 = local_7d8;
      FUN_01bea210(&local_490,lVar12,&local_670,&local_7d8);
      local_65c = 0;
      local_660 = 0x80;
      puStack_638 = local_62c;
      local_658 = 0xffffffff;
      uStack_650 = 0xffffffff00000000;
      local_668 = local_590;
      local_648 = 0xffffffff;
      local_630 = 0x40;
      local_5ed = 0;
      local_62c[0] = 0;
      local_640 = PTR_DAT_04bb2bc0 + 0x10;
      local_5d8 = 0x40;
      local_595 = 0;
      local_5d4[0] = 0;
      local_5e0 = local_5d4;
      local_670 = PTR_DAT_04bb6b38 + 0x10;
      local_498 = 0;
      local_4a0 = 0;
      local_4a8 = 0;
      local_4b0 = 0;
      local_4b8 = 0;
      local_4c0 = 0;
      local_4c8 = 0;
      local_4d0 = 0;
      local_4d8 = 0;
      local_4e0 = 0;
      local_4e8 = 0;
      local_4f0 = 0;
      local_4f8 = 0;
      local_500 = 0;
      local_508 = 0;
      local_510 = 0;
      local_518 = 0;
      local_520 = 0;
      local_528 = 0;
      local_530 = 0;
      local_538 = 0;
      local_540 = 0;
      local_548 = 0;
      local_550 = 0;
      local_558 = 0;
      local_560 = 0;
      local_568 = 0;
      local_570 = 0;
      local_578 = 0;
      local_580 = 0;
      auStack_58e._6_8_ = 0;
      _local_590 = 0;
      ppuVar2 = &local_490;
      if (&local_490 <= local_590 + 2) {
        ppuVar2 = (undefined **)(local_590 + 2);
      }
      local_5e8 = local_640;
      memset(local_668,0,(size_t)((long)ppuVar2 + (-0xe0 - (long)&local_670)));
      uVar7 = FUN_01d77c78(lVar11);
      if ((uVar7 & 1) != 0) {
        FUN_01d78930(lVar11,&local_670);
      }
      psVar8 = (short *)(**(code **)(local_670 + 0x18))(&local_670);
      iVar6 = (**(code **)(local_670 + 0x20))(&local_670);
      puVar19 = PTR_DAT_04bc0bf0;
      if (((psVar8 == (short *)0x0) || (iVar6 == 0)) || (*psVar8 == 0)) {
        uVar7 = FUN_01d77c78(lVar11);
        if (((uVar7 & 1) == 0) || (iVar6 = FUN_01d78edc(lVar11,&local_7e8), iVar6 != 0))
        goto LAB_034ec374;
        FUN_038d1270(&local_d8,&DAT_040e92c2,(ulong)local_7e8 & 0xffff);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_7d0 = "OneRoom_ThemeName";
        local_7d8 = puVar1;
        (**(code **)(local_d8 + 0x18))(&local_d8);
        pcStack_820 = local_d0;
        local_828 = puVar1;
        FUN_006f50a0(&local_670,&local_7d8,&local_828,0);
        uVar21 = 0;
      }
      else {
LAB_034ec218:
        uVar21 = 1;
      }
      FUN_01bb1ca0(&local_100,&local_670,uVar21,0);
LAB_034ec4a0:
      FUN_01bea9c8(&local_490);
    }
    else {
      local_674 = 0;
      uVar7 = FUN_01d77c78(lVar11);
      if (((uVar7 & 1) != 0) && (iVar6 = FUN_01d79ca4(lVar11,&local_674), iVar6 == 0)) {
        FUN_034eac60(*(undefined8 *)(param_1 + 0x238));
        local_670 = PTR_DAT_04bb2020 + 0x10;
        local_668 = "/L_FacilityIcon_00";
        lVar9 = FUN_034b0150(param_2,&local_670);
        if ((lVar9 != 0) && (plVar15 = *(long **)(lVar9 + 0x288), plVar15 != (long *)0x0)) {
          fVar20 = (float)(int)local_674;
          local_670 = PTR_DAT_04bc4f00 + 0x10;
          local_668 = (char *)CONCAT44(local_668._4_4_,0x14);
          (**(code **)(*plVar15 + 0x18))(plVar15,&local_670);
          (**(code **)(plVar15[3] + 0x158))(fVar20,plVar15[1]);
        }
        FUN_00d5a918(&local_670);
        uVar7 = FUN_01d77c78(lVar11);
        if ((uVar7 & 1) != 0) {
          FUN_01d79b5c(lVar11,&local_670);
        }
        psVar8 = (short *)(**(code **)(local_670 + 0x18))(&local_670);
        iVar6 = (**(code **)(local_670 + 0x20))(&local_670);
        if (((psVar8 != (short *)0x0) && (iVar6 != 0)) && (*psVar8 != 0)) {
          local_828 = PTR_DAT_04bb2020 + 0x10;
          pcStack_7d0 = "WherearenInspect";
          pcStack_820 = "0103";
          local_7d8 = local_828;
          FUN_01bea210(&local_490,lVar12,&local_7d8,&local_828);
          goto LAB_034ec218;
        }
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_7d0 = "WherearenInspect";
        pcStack_820 = "0102";
        local_828 = puVar1;
        local_7d8 = puVar1;
        FUN_01bea210(&local_490,lVar12,&local_7d8,&local_828);
        FUN_00d5a868(&local_7d8);
        pcStack_820 = "STR_Common";
        uVar5 = local_674;
        if (4 < local_674) {
          uVar5 = 0;
        }
        local_828 = puVar1;
        (**(code **)((&DAT_05765130)[(long)(int)uVar5 * 2] + 0x18))
                  (&DAT_05765130 + (long)(int)uVar5 * 2);
        uStack_7e0 = (&DAT_05765138)[(long)(int)uVar5 * 2];
        local_7e8 = puVar1;
        FUN_006f50a0(&local_7d8,&local_828,&local_7e8,0);
        FUN_01bb1bc0(&local_100,&local_7d8,1,0);
        goto LAB_034ec4a0;
      }
LAB_034ec374:
      FUN_01beb660(lVar12);
    }
    FUN_01be9eb8(&local_490);
    plVar15 = *(long **)(param_2 + 0x2e0);
  }
  lVar12 = *plVar15;
  if (lVar12 != 0) {
    local_47c = local_47c & 0xffffff00;
    local_470 = 0xffffffff00000000;
    uStack_480 = 0xb;
    local_458 = local_44c;
    local_478 = &DAT_ffffffff;
    local_468 = 0xffffffff;
    local_450 = 0x40;
    local_40d = 0;
    local_44c[0] = 0;
    local_460 = PTR_DAT_04bb2bc0 + 0x10;
    local_400 = local_3f4;
    local_3f8 = 0x40;
    local_3b5 = 0;
    local_3f4[0] = 0;
    local_490 = PTR_DAT_04bb5128 + 0x10;
    local_488 = SUB82(&local_3b0,0);
    uStack_486 = (undefined2)((ulong)&local_3b0 >> 0x10);
    uStack_484 = (undefined4)((ulong)&local_3b0 >> 0x20);
    uStack_3a0 = 0;
    uStack_39c = 0;
    uStack_3a8 = 0;
    local_3a2 = 0;
    local_3b0 = 0;
    puVar3 = auStack_39a;
    if (auStack_39a <= (undefined1 *)((long)&local_3b0 + 2U)) {
      puVar3 = (undefined1 *)((long)&local_3b0 + 2U);
    }
    local_408 = local_460;
    memset(&local_3b0,0,(ulong)(puVar3 + (-0xe1 - (long)&local_490)) & 0xfffffffffffffffc | 2);
    uVar7 = FUN_01d77c78(lVar11);
    if (((uVar7 & 1) == 0) || (iVar6 = FUN_01d78088(lVar11,&local_490), iVar6 != 0)) {
      FUN_01beb660(lVar12);
    }
    else {
      local_808 = PTR_DAT_04bb2020 + 0x10;
      pcStack_7f0 = "WherearenInspect";
      puStack_800 = &DAT_040a04a3;
      local_7f8 = local_808;
      FUN_03466610(&local_670,lVar12,&local_490,&local_7f8,&local_808);
    }
  }
  local_80d = 0;
  local_818 = 8;
  pcStack_820 = local_814;
  local_814[0] = 0;
  local_828 = PTR_DAT_04bb3768 + 0x10;
  if (local_7c[0] < 3) {
    iVar6 = FUN_034e8058(lVar13,&local_828);
    if (iVar6 == 0) {
      uVar10 = 0;
      if (local_7c[0] == 0) goto LAB_034ec634;
      if (local_7c[0] == 1) {
        FUN_034f47e0(param_1,&local_828,param_3,0);
        iVar6 = FUN_034e80a4(lVar13,&local_828);
        if (iVar6 == 0) {
          uVar10 = 1;
          goto LAB_034ec634;
        }
      }
    }
    else if ((local_7c[0] == 3) && (iVar6 = FUN_034e80f0(lVar13,&local_828,0), iVar6 == 0)) {
      uVar10 = 0;
LAB_034ec634:
      FUN_034f47e0(param_1,&local_828,param_3,uVar10);
    }
  }
  lVar11 = *(long *)(*(long *)(param_2 + 0x2e0) + (ulong)(1 < *(uint *)(param_2 + 0x2d8)) * 8);
  if (lVar11 == 0) goto LAB_034ec840;
  local_47c = 0;
  local_488 = 0x100;
  uStack_484 = 0;
  uStack_480 = 0;
  local_468 = 0;
  local_440 = local_434;
  local_464 = 0;
  local_460 = &DAT_ffffffff;
  local_458 = &DAT_ffffffff00000000;
  local_450 = 0xffffffff;
  local_438 = 0x40;
  local_3f8 = local_3f8 & 0xffffff;
  local_434[0] = 0;
  local_448 = PTR_DAT_04bb2bc0 + 0x10;
  local_3e8 = local_3dc;
  local_3e0 = 0x40;
  uStack_3a0 = uStack_3a0 & 0xffffff;
  local_3dc[0] = 0;
  local_478 = PTR_DAT_04bb2e00 + 0x10;
  local_300 = local_2f4;
  local_2f4[0] = 0;
  local_370 = 0xffffffff00000000;
  local_288 = 0xffffffff00000000;
  local_470 = 0;
  local_270 = local_264;
  local_264[0] = 0;
  local_1a8 = local_19c;
  local_19c[0] = 0;
  local_150 = local_144;
  local_388 = 0;
  local_380 = 0;
  local_358 = local_34c;
  local_34c[0] = 0;
  local_218 = local_20c;
  local_20c[0] = 0;
  local_37c = 0;
  local_378 = 0xffffffff;
  local_368 = 0xffffffff;
  local_350 = 0x40;
  local_30d = 0;
  local_2f8 = 0x40;
  local_2b5 = 0;
  local_398 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_294 = 0;
  local_290 = 0xffffffff;
  local_280 = 0xffffffff;
  local_268 = 0x40;
  local_225 = 0;
  local_210 = 0x40;
  local_1cd = 0;
  local_2b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1a0 = 0x40;
  local_15d = 0;
  local_148 = 0x40;
  local_105 = 0;
  local_144[0] = 0;
  local_f8 = *(int *)PTR_DAT_04bc0b30;
  local_f4 = 0;
  *(int *)PTR_DAT_04bc0b30 = local_f8 + 1;
  local_100 = PTR_DAT_04bc0a78 + 0x10;
  local_490 = puVar19 + 0x10;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_3f0 = local_448;
  local_390 = local_478;
  local_360 = local_448;
  local_308 = local_448;
  local_2a8 = local_478;
  local_278 = local_448;
  local_220 = local_448;
  local_1b0 = local_448;
  local_158 = local_448;
  if (*(int *)(param_1 + 0x1cf60) == 2) {
    local_7e8 = (undefined *)CONCAT17((char)((ulong)local_7e8 >> 0x38),0x1010000);
    iVar6 = FUN_034e8144(lVar13,&local_7e8);
    if (iVar6 != 0) goto LAB_034ec830;
    if ((short)local_7e8 != 0) {
      uVar7 = nn::time::IsValidDate((int)(short)local_7e8,(int)local_7e8._2_1_,(int)local_7e8._3_1_)
      ;
      if ((uVar7 & 1) != 0) {
        iVar6 = (int)(short)local_7e8;
        iVar16 = (int)local_7e8._2_1_;
        iVar17 = (int)local_7e8._3_1_;
        local_7d8 = PTR_DAT_04bb2020 + 0x10;
        local_668 = "WherearenInspect";
        pcStack_7d0 = "0701";
        local_670 = local_7d8;
        FUN_01bea210(&local_490,lVar11,&local_670,&local_7d8);
        FUN_01baff20(&local_100,iVar6,0);
        FUN_01bb00d0(&local_100,iVar16,0);
        FUN_01bb0360(&local_100,iVar17,0);
        FUN_01c1130c(&local_670);
        FUN_01c113c8(&local_670,iVar16);
        FUN_01bafb50(&local_100,&local_670,0);
        FUN_01c1130c(&local_7d8);
        FUN_01c11450(&local_7d8,iVar17);
        FUN_01bafb50(&local_100,&local_7d8,1);
        FUN_01bea9c8(&local_490);
      }
    }
  }
  else {
LAB_034ec830:
    FUN_01beb660(lVar11);
  }
  FUN_01be9eb8(&local_490);
LAB_034ec840:
  plVar15 = *(long **)(*(long *)(param_2 + 0x2f0) + (ulong)(2 < *(uint *)(param_2 + 0x2e8)) * 0x10);
  if (plVar15 != (long *)0x0) {
    local_488 = 0x14;
    uStack_486 = 0;
    uVar21 = 0x3f800000;
    if (*(int *)(param_1 + 0x1ce38) != 2) {
      uVar21 = 0;
    }
    local_490 = PTR_DAT_04bc4f00 + 0x10;
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_490);
    (**(code **)(plVar15[3] + 0x158))(uVar21,plVar15[1]);
  }
  return 0;
}

