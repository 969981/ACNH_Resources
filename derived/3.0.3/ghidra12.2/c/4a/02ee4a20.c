
void FUN_02ee4a20(long param_1,long param_2,int param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  char *__dest;
  long *plVar6;
  char *__src;
  undefined *local_470;
  char *local_468;
  undefined *local_460;
  undefined2 local_458;
  undefined2 uStack_456;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 local_44c;
  undefined *local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined1 local_434;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined *local_418;
  undefined1 *puStack_410;
  undefined4 local_408;
  undefined1 local_404 [63];
  undefined1 local_3c5;
  undefined *local_3c0;
  undefined1 *puStack_3b8;
  undefined4 local_3b0;
  undefined1 local_3ac [63];
  undefined1 local_36d;
  undefined8 local_368;
  undefined *local_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined1 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined *local_330;
  undefined1 *puStack_328;
  undefined4 local_320;
  undefined1 local_31c [63];
  undefined1 local_2dd;
  undefined *local_2d8;
  undefined1 *puStack_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4 [63];
  undefined1 local_285;
  undefined8 local_280;
  undefined *local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined1 local_264;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined1 local_234 [63];
  undefined1 local_1f5;
  undefined *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc [63];
  undefined1 local_19d;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  int local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  char *local_a0;
  int local_98;
  char local_94 [63];
  undefined1 local_55;
  
  puVar4 = PTR_DAT_04bb2bc0;
  if (param_2 == 0) {
    return;
  }
  local_55 = 0;
  local_98 = 0x40;
  local_a0 = local_94;
  local_94[0] = '\0';
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  if (param_3 == -1) {
    if (param_4 == 5) {
      FUN_033fbef0(&local_460,DAT_056b3844,param_1 + 0x268);
      __dest = local_a0;
      (**(code **)(local_460 + 0x18))(&local_460);
      __src = (char *)CONCAT44(uStack_454,CONCAT22(uStack_456,local_458));
      if (__dest == __src) goto LAB_02ee4c48;
      (**(code **)(local_460 + 0x18))(&local_460);
      lVar3 = CONCAT44(uStack_454,CONCAT22(uStack_456,local_458));
      lVar5 = 0;
      do {
        if (*(char *)(lVar3 + lVar5) == '\0') goto LAB_02ee4c20;
        lVar1 = lVar3 + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_02ee4c14;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_02ee4c1c;
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
    }
    else {
      if (5 < param_4) {
        param_4 = 0;
      }
      FUN_033fc4b0(&local_460,*(undefined4 *)((long)&DAT_056b3948 + (ulong)param_4 * 8 + 4));
      __dest = local_a0;
      (**(code **)(local_460 + 0x18))(&local_460);
      __src = (char *)CONCAT44(uStack_454,CONCAT22(uStack_456,local_458));
      if (__dest == __src) goto LAB_02ee4c48;
      (**(code **)(local_460 + 0x18))(&local_460);
      lVar3 = CONCAT44(uStack_454,CONCAT22(uStack_456,local_458));
      lVar5 = 0;
      do {
        if (*(char *)(lVar3 + lVar5) == '\0') goto LAB_02ee4c20;
        lVar1 = lVar3 + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_02ee4c14;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_02ee4c1c;
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
    }
  }
  else {
    FUN_033fbef0(&local_460,param_3,param_1 + 0x268);
    __dest = local_a0;
    (**(code **)(local_460 + 0x18))(&local_460);
    __src = (char *)CONCAT44(uStack_454,CONCAT22(uStack_456,local_458));
    if (__dest == __src) goto LAB_02ee4c48;
    (**(code **)(local_460 + 0x18))(&local_460);
    lVar3 = CONCAT44(uStack_454,CONCAT22(uStack_456,local_458));
    lVar5 = 0;
    do {
      if (*(char *)(lVar3 + lVar5) == '\0') goto LAB_02ee4c20;
      lVar1 = lVar3 + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_02ee4c14;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_02ee4c1c;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
  }
  lVar5 = 0;
LAB_02ee4c20:
  iVar2 = (int)lVar5;
  if (local_98 <= (int)lVar5) {
    iVar2 = local_98 + -1;
  }
  memcpy(__dest,__src,(long)iVar2);
  __dest[iVar2] = '\0';
LAB_02ee4c48:
  if (*local_a0 == '\0') {
    plVar6 = *(long **)(param_2 + 0x48);
    if (plVar6[1] != 0) {
      local_460 = PTR_DAT_04bc0878 + 0x10;
      local_458 = 9;
      uStack_456 = 0;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_460);
      (**(code **)(plVar6[3] + 0x5e0))(plVar6[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(param_2);
    }
  }
  else {
    uStack_454 = 0;
    uStack_450 = 0;
    local_458 = 0x100;
    puStack_410 = local_404;
    local_418 = puVar4 + 0x10;
    local_44c = 0;
    puStack_3b8 = local_3ac;
    local_438 = 0;
    local_434 = 0;
    local_420 = 0xffffffff;
    local_408 = 0x40;
    local_3c5 = 0;
    local_404[0] = 0;
    local_3b0 = 0x40;
    local_36d = 0;
    local_3ac[0] = 0;
    local_430 = 0xffffffff;
    uStack_428 = 0xffffffff00000000;
    local_448 = PTR_DAT_04bb2e00 + 0x10;
    local_258 = 0xffffffff00000000;
    puStack_2d0 = local_2c4;
    local_2c4[0] = 0;
    puStack_328 = local_31c;
    local_31c[0] = 0;
    local_350 = 0;
    local_34c = 0;
    local_338 = 0xffffffff;
    local_320 = 0x40;
    local_2dd = 0;
    local_2c8 = 0x40;
    local_285 = 0;
    local_368 = 0;
    local_268 = 0;
    local_264 = 0;
    local_260 = 0xffffffff;
    local_250 = 0xffffffff;
    local_238 = 0x40;
    local_1f5 = 0;
    local_1e0 = 0x40;
    local_19d = 0;
    local_280 = 0;
    local_188 = 0;
    local_190 = 0;
    local_198 = 0;
    local_170 = 0x40;
    local_12d = 0;
    local_118 = 0x40;
    local_d5 = 0;
    local_348 = 0xffffffff;
    uStack_340 = 0xffffffff00000000;
    local_16c[0] = 0;
    local_114[0] = 0;
    local_240 = local_234;
    local_234[0] = 0;
    local_1e8 = local_1dc;
    local_1dc[0] = 0;
    uStack_440 = 0;
    uStack_358 = 0;
    uStack_270 = 0;
    local_178 = local_16c;
    local_120 = local_114;
    local_c8 = *(int *)PTR_DAT_04bc0b30;
    local_c4 = 0;
    *(int *)PTR_DAT_04bc0b30 = local_c8 + 1;
    local_d0 = PTR_DAT_04bc0a78 + 0x10;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_460 = PTR_DAT_04bc0bf0 + 0x10;
    local_470 = PTR_DAT_04bb2020 + 0x10;
    local_468 = "STR_KeyIcon";
    local_3c0 = local_418;
    local_360 = local_448;
    local_330 = local_418;
    local_2d8 = local_418;
    local_278 = local_448;
    local_248 = local_418;
    local_1f0 = local_418;
    local_180 = local_418;
    local_128 = local_418;
    FUN_01bea210(&local_460,param_2,&local_470,&local_a8);
    FUN_01bea9c8(&local_460);
    FUN_01be9eb8(&local_460);
  }
  return;
LAB_02ee4c14:
  lVar5 = lVar5 + 1;
  goto LAB_02ee4c20;
LAB_02ee4c1c:
  lVar5 = lVar5 + 2;
  goto LAB_02ee4c20;
}

