
void FUN_03136ca0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined *local_450;
  char *local_448;
  int local_440;
  char local_43c [31];
  undefined1 local_41d;
  undefined *local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  undefined *local_400;
  undefined8 uStack_3f8;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined *local_3d0;
  undefined1 *puStack_3c8;
  undefined4 local_3c0;
  undefined1 local_3bc [63];
  undefined1 local_37d;
  undefined *local_378;
  undefined1 *puStack_370;
  undefined4 local_368;
  undefined1 local_364 [63];
  undefined1 local_325;
  undefined8 local_320;
  undefined *local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined1 local_304;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined *local_2e8;
  undefined1 *puStack_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4 [63];
  undefined1 local_295;
  undefined *local_290;
  undefined1 *puStack_288;
  undefined4 local_280;
  undefined1 local_27c [63];
  undefined1 local_23d;
  undefined8 local_238;
  undefined *local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec [63];
  undefined1 local_1ad;
  undefined *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  undefined1 local_194 [63];
  undefined1 local_155;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined1 local_cc [63];
  undefined1 local_8d;
  undefined *local_88;
  int local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined *local_60;
  char *local_58;
  
  FUN_03137320(param_1,param_3,0);
  lVar9 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (lVar9 != 0) {
    uVar2 = *(uint *)(param_1 + 0x34);
    *(uint *)(lVar9 + 0x230) = uVar2;
    plVar7 = *(long **)(lVar9 + 0x210);
    *(uint *)(lVar9 + 0x22c) = uVar2;
    if ((((plVar7 != (long *)0x0) && (plVar7[1] != 0 && uVar2 < *(uint *)(lVar9 + 0x218))) &&
        (plVar8 = *(long **)(*(long *)(lVar9 + 0x220) + (long)(int)uVar2 * 8), plVar8 != (long *)0x0
        )) && (plVar8[1] != 0)) {
      local_410 = 8;
      puVar1 = PTR_DAT_04bc0cb8 + 0x10;
      local_418 = puVar1;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_418);
      uVar5 = (**(code **)(plVar8[3] + 0xa0))(plVar8[1]);
      local_410 = 8;
      local_418 = puVar1;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_418);
      (**(code **)(plVar7[3] + 0x98))(plVar7[1],uVar5);
    }
    *(undefined1 *)(lVar9 + 0x264) = 0;
    *(undefined4 *)(lVar9 + 0x234) = 999;
  }
  local_40c = 0;
  local_410 = CONCAT22(local_410._2_2_,0x100);
  local_404 = 0;
  local_3f0 = 0;
  puStack_3c8 = local_3bc;
  local_3ec = 0;
  local_3d8 = 0xffffffff;
  local_3c0 = 0x40;
  local_37d = 0;
  local_3e8 = 0xffffffff;
  uStack_3e0 = 0xffffffff00000000;
  local_3d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_3bc[0] = 0;
  local_368 = 0x40;
  local_325 = 0;
  local_364[0] = 0;
  puStack_370 = local_364;
  local_400 = PTR_DAT_04bb2e00 + 0x10;
  local_2f0 = 0xffffffff;
  puStack_288 = local_27c;
  local_27c[0] = 0;
  puStack_2e0 = local_2d4;
  local_2d4[0] = 0;
  local_218 = 0xffffffff;
  local_208 = 0xffffffff;
  local_210 = 0xffffffff00000000;
  local_308 = 0;
  local_304 = 0;
  local_2d8 = 0x40;
  local_295 = 0;
  local_280 = 0x40;
  local_23d = 0;
  local_320 = 0;
  local_228 = 0;
  local_220 = 0;
  local_21c = 0;
  local_1f0 = 0x40;
  local_1ad = 0;
  local_198 = 0x40;
  local_155 = 0;
  local_238 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_128 = 0x40;
  local_e5 = 0;
  local_d0 = 0x40;
  local_8d = 0;
  local_300 = 0xffffffff;
  uStack_2f8 = 0xffffffff00000000;
  local_130 = local_124;
  local_124[0] = 0;
  local_d8 = local_cc;
  local_cc[0] = 0;
  local_1f8 = local_1ec;
  local_1ec[0] = 0;
  local_1a0 = local_194;
  local_194[0] = 0;
  uStack_3f8 = 0;
  uStack_310 = 0;
  local_80 = *(int *)PTR_DAT_04bc0b30;
  local_7c = 0;
  *(int *)PTR_DAT_04bc0b30 = local_80 + 1;
  local_88 = PTR_DAT_04bc0a78 + 0x10;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_418 = PTR_DAT_04bc0bf0 + 0x10;
  local_378 = local_3d0;
  local_318 = local_400;
  local_2e8 = local_3d0;
  local_290 = local_3d0;
  local_230 = local_400;
  local_200 = local_3d0;
  local_1a8 = local_3d0;
  local_138 = local_3d0;
  local_e0 = local_3d0;
  if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    FUN_033fbef0(&local_60,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2);
    local_440 = 0x20;
    local_41d = 0;
    local_450 = PTR_DAT_04bb2a08 + 0x10;
    local_448 = local_43c;
    (**(code **)(local_60 + 0x18))(&local_60);
    pcVar3 = local_58;
    if (local_43c != local_58) {
      (**(code **)(local_60 + 0x18))(&local_60);
      lVar9 = 0;
      do {
        if (local_58[lVar9] == '\0') goto LAB_03136fec;
        if (local_58[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_03136fec;
        }
        if (local_58[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_03136fec;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_03136fec:
      iVar4 = (int)lVar9;
      if (local_440 <= (int)lVar9) {
        iVar4 = local_440 + -1;
      }
      memcpy(local_43c,pcVar3,(long)iVar4);
      local_43c[iVar4] = '\0';
    }
    lVar9 = *(long *)(param_1 + 0x50);
    local_450 = PTR_DAT_04bb2028 + 0x10;
    if (*local_448 == '\0') {
      if ((lVar9 != 0) && (plVar7 = *(long **)(lVar9 + 0x48), plVar7[1] != 0)) {
        local_60 = PTR_DAT_04bc0878 + 0x10;
        local_58 = (char *)CONCAT44(local_58._4_4_,9);
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
        (**(code **)(plVar7[3] + 0x5e0))(plVar7[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar9);
      }
    }
    else {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      local_58 = "STR_KeyIcon";
      FUN_01bea210(&local_418,lVar9,&local_60,&local_450);
      FUN_01bea9c8(&local_418);
    }
  }
  if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_033fbef0(&local_60,*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),param_2);
    local_440 = 0x20;
    local_41d = 0;
    local_450 = PTR_DAT_04bb2a08 + 0x10;
    local_448 = local_43c;
    (**(code **)(local_60 + 0x18))(&local_60);
    pcVar3 = local_58;
    if (local_43c != local_58) {
      (**(code **)(local_60 + 0x18))(&local_60);
      lVar9 = 0;
      do {
        if (local_58[lVar9] == '\0') goto LAB_0313718c;
        if (local_58[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0313718c;
        }
        if (local_58[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0313718c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0313718c:
      iVar4 = (int)lVar9;
      if (local_440 <= (int)lVar9) {
        iVar4 = local_440 + -1;
      }
      memcpy(local_43c,pcVar3,(long)iVar4);
      local_43c[iVar4] = '\0';
    }
    lVar9 = *(long *)(param_1 + 0x58);
    local_450 = PTR_DAT_04bb2028 + 0x10;
    if (*local_448 == '\0') {
      if ((lVar9 != 0) && (plVar7 = *(long **)(lVar9 + 0x48), plVar7[1] != 0)) {
        local_60 = PTR_DAT_04bc0878 + 0x10;
        local_58 = (char *)CONCAT44(local_58._4_4_,9);
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
        (**(code **)(plVar7[3] + 0x5e0))(plVar7[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar9);
      }
    }
    else {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      local_58 = "STR_KeyIcon";
      FUN_01bea210(&local_418,lVar9,&local_60,&local_450);
      FUN_01bea9c8(&local_418);
    }
  }
  if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(*(long *)(param_1 + 0x60) + 8) != 0)) {
    iVar4 = FUN_033fc390(param_2);
    plVar7 = *(long **)(param_1 + 0x60);
    local_450 = PTR_DAT_04bc4e68 + 0x10;
    if (iVar4 == 1) {
      local_448 = (char *)CONCAT44(local_448._4_4_,7);
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_450);
      puVar6 = (undefined8 *)(plVar7[3] + 0x1c0);
    }
    else {
      local_448 = (char *)CONCAT44(local_448._4_4_,6);
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_450);
      puVar6 = (undefined8 *)(plVar7[3] + 0x1b8);
    }
    (*(code *)*puVar6)(plVar7[1]);
  }
  FUN_01be9eb8(&local_418);
  return;
}

