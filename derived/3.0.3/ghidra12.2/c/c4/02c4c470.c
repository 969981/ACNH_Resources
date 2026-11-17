
void FUN_02c4c470(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  undefined *local_390;
  undefined1 *puStack_388;
  undefined4 local_380;
  undefined1 local_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined *local_360;
  undefined1 *puStack_358;
  undefined4 local_350;
  undefined1 local_34c [63];
  undefined1 local_30d;
  undefined *local_308;
  undefined1 *puStack_300;
  undefined4 local_2f8;
  undefined1 local_2f4 [63];
  undefined1 local_2b5;
  undefined1 local_2b0 [8];
  undefined6 uStack_2a8;
  undefined2 local_2a2;
  undefined6 uStack_2a0;
  undefined2 uStack_29a;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined *local_270;
  char *local_268;
  undefined4 local_260;
  char local_25c [31];
  undefined1 local_23d;
  undefined *local_238;
  undefined1 *puStack_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined *local_208;
  undefined1 *puStack_200;
  undefined4 local_1f8;
  undefined1 local_1f4 [63];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [4];
  undefined4 local_104;
  undefined8 local_100;
  undefined **local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined2 *puStack_98;
  undefined4 local_90;
  undefined2 local_8c [15];
  undefined2 local_6e;
  
  local_110 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_10c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  FUN_007ef010(auStack_108,PTR_DAT_04bb3170);
  puVar7 = PTR_DAT_04bb4e10;
  puVar6 = PTR_DAT_04bb2bc0;
  local_100 = 0;
  local_f8 = (undefined **)0x0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = PTR_DAT_04bc5058 + 0x10;
  local_104 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_90 = 0x10;
  puStack_98 = local_8c;
  local_6e = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = PTR_DAT_04bbd6c0 + 0x10;
  local_8c[0] = 0;
  local_228 = 0x20;
  local_224 = 0;
  local_210 = 0xffffffff;
  local_1f8 = 0x40;
  local_1b5 = 0;
  local_1f4[0] = 0;
  puStack_200 = local_1f4;
  puStack_230 = local_158;
  local_220 = 0xffffffff;
  uStack_218 = 0xffffffff00000000;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_1a0 = 0x40;
  local_15d = 0;
  local_19c[0] = 0;
  puStack_1a8 = local_19c;
  local_238 = PTR_DAT_04bb4e10 + 0x10;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = (undefined1  [8])0x0;
  puVar3 = &local_118;
  if (&local_118 <= local_158 + 2) {
    puVar3 = (undefined8 *)(local_158 + 2);
  }
  local_208 = puVar1;
  local_1b0 = puVar1;
  local_118 = param_2;
  memset(puStack_230,0,(size_t)((long)puVar3 + (-0xe0 - (long)&local_238)));
  if ((param_4 & 1) == 0) {
    local_260 = 0x20;
    local_23d = 0;
    local_268 = local_25c;
    local_25c[0] = '\0';
    local_270 = PTR_DAT_04bb2028 + 0x10;
    FUN_033bf650(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),&local_270,param_3);
    if (*local_268 != '\0') {
      (**(code **)(local_270 + 0x18))(&local_270);
      pcVar11 = local_268;
      local_380 = 0x20;
      local_360 = puVar6 + 0x10;
      local_378 = 0xffffffff;
      uStack_370 = 0xffffffff00000000;
      puStack_358 = local_34c;
      puStack_300 = local_2f4;
      puStack_388 = local_2b0;
      local_390 = puVar7 + 0x10;
      local_350 = 0x40;
      local_2f8 = 0x40;
      local_37c = 0;
      local_368 = 0xffffffff;
      local_30d = 0;
      local_34c[0] = 0;
      local_2b5 = 0;
      local_2f4[0] = 0;
      ppuVar5 = &local_270;
      if (&local_270 <= local_2b0 + 2) {
        ppuVar5 = (undefined **)(local_2b0 + 2);
      }
      local_2b0 = (undefined1  [8])0x0;
      uStack_2a8 = 0;
      local_2a2 = 0;
      uStack_2a0 = 0;
      uStack_29a = 0;
      uStack_298 = 0;
      local_290 = 0;
      uStack_288 = 0;
      local_280 = 0;
      uStack_278 = 0;
      local_308 = local_360;
      memset(puStack_388,0,(size_t)((long)ppuVar5 + (-0xe0 - (long)&local_390)));
      FUN_01c0e6b4(&local_390,pcVar11,PTR_DAT_04bb2df0);
      (**(code **)(local_238 + 0x28))(&local_238,&local_390);
      (**(code **)(local_238 + 0x30))(&local_238,&local_390);
    }
    if (*(int *)(param_1 + 0x224) == param_3) {
      (**(code **)(local_270 + 0x18))(&local_270);
      (**(code **)(local_270 + 0x18))(&local_270);
      pcVar11 = local_268;
      (**(code **)(*(long *)(param_1 + 0x228) + 0x18))(param_1 + 0x228);
      if (pcVar11 == *(char **)(param_1 + 0x230)) {
        return;
      }
      uVar10 = 0;
      bVar8 = true;
      do {
        if (local_268[uVar10] != (*(char **)(param_1 + 0x230))[uVar10]) break;
        if (local_268[uVar10] == '\0') {
          if (bVar8) {
            return;
          }
          break;
        }
        bVar8 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
    }
    (**(code **)(local_270 + 0x18))(&local_270);
    pcVar11 = *(char **)(param_1 + 0x230);
    if (pcVar11 != local_268) {
      lVar9 = 0;
      do {
        if (local_268[lVar9] == '\0') goto LAB_02c4c8cc;
        if (local_268[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_02c4c8cc;
        }
        if (local_268[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_02c4c8cc;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_02c4c8cc:
      iVar2 = (int)lVar9;
      if (*(int *)(param_1 + 0x238) <= (int)lVar9) {
        iVar2 = *(int *)(param_1 + 0x238) + -1;
      }
      memcpy(pcVar11,local_268,(long)iVar2);
      pcVar11[iVar2] = '\0';
    }
  }
  else {
    local_37c = 0;
    local_380 = 0xb;
    puStack_358 = local_34c;
    local_378 = 0xffffffff;
    uStack_370 = 0xffffffff00000000;
    puStack_388 = local_2b0;
    local_368 = 0xffffffff;
    local_350 = 0x40;
    local_30d = 0;
    local_34c[0] = 0;
    local_2f8 = 0x40;
    local_2b5 = 0;
    local_2f4[0] = 0;
    puStack_300 = local_2f4;
    uStack_2a0 = 0;
    local_390 = PTR_DAT_04bb5128 + 0x10;
    puVar4 = &uStack_29a;
    if (&uStack_29a <= local_2b0 + 2) {
      puVar4 = (undefined2 *)(local_2b0 + 2);
    }
    local_2b0 = (undefined1  [8])0x0;
    uStack_2a8 = 0;
    local_2a2 = 0;
    local_360 = puVar1;
    local_308 = puVar1;
    memset(puStack_388,0,(long)puVar4 + (-0xe1 - (long)&local_390) & 0xfffffffffffffffcU | 2);
    FUN_01c11758(&local_390,param_1 + 0x1f8);
    (**(code **)(local_238 + 0x28))(&local_238,&local_390);
    (**(code **)(local_238 + 0x30))(&local_238,&local_390);
    **(undefined1 **)(param_1 + 0x230) = 0;
    if (*(int *)(param_1 + 0x224) == param_3) {
      return;
    }
  }
  local_f8 = &local_238;
  *(int *)(param_1 + 0x224) = param_3;
  FUN_03111440(*(undefined8 *)(param_1 + 0x218),&local_118);
  return;
}

