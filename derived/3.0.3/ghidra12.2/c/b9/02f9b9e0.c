
void FUN_02f9b9e0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  size_t __n;
  undefined *local_478;
  char *pcStack_470;
  undefined *local_468;
  undefined1 *local_460;
  int local_458;
  undefined1 auStack_454 [63];
  undefined1 local_415;
  undefined *local_410;
  undefined2 local_408;
  undefined8 local_404;
  undefined4 local_3fc;
  undefined *local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined1 local_3e4;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined4 local_3d0;
  undefined *local_3c8;
  undefined1 *puStack_3c0;
  undefined4 local_3b8;
  undefined1 local_3b4 [63];
  undefined1 local_375;
  undefined *local_370;
  undefined1 *puStack_368;
  undefined4 local_360;
  undefined1 local_35c [63];
  undefined1 local_31d;
  undefined8 local_318;
  undefined *local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined *local_2e0;
  undefined1 *puStack_2d8;
  undefined4 local_2d0;
  undefined1 local_2cc [63];
  undefined1 local_28d;
  undefined *local_288;
  undefined1 *puStack_280;
  undefined4 local_278;
  undefined1 local_274 [63];
  undefined1 local_235;
  undefined8 local_230;
  undefined *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined *local_1f8;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4 [63];
  undefined1 local_1a5;
  undefined *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined1 local_18c [63];
  undefined1 local_14d;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined1 *local_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined *local_80;
  int local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined4 local_54;
  
  if (*(int *)(param_1 + 0x8a350) != 0) {
    return;
  }
  puVar6 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  local_54 = param_2;
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
  local_80 = PTR_DAT_04bc0a78;
  puVar1 = PTR_DAT_04bb2bc0;
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(puVar6[0x43] + (ulong)(1 < *(uint *)(puVar6 + 0x42)) * 8);
  if (lVar7 == 0) {
    return;
  }
  local_404 = 0;
  local_408 = 0x100;
  local_3fc = 0;
  local_3e8 = 0;
  puStack_3c0 = local_3b4;
  local_3e4 = 0;
  local_3d0 = 0xffffffff;
  local_3b8 = 0x40;
  local_375 = 0;
  local_3b4[0] = 0;
  local_3e0 = 0xffffffff;
  uStack_3d8 = 0xffffffff00000000;
  local_3c8 = PTR_DAT_04bb2bc0 + 0x10;
  local_360 = 0x40;
  local_31d = 0;
  local_35c[0] = 0;
  puStack_368 = local_35c;
  local_3f8 = PTR_DAT_04bb2e00 + 0x10;
  puStack_280 = local_274;
  local_274[0] = 0;
  local_208 = 0xffffffff00000000;
  local_2e8 = 0xffffffff;
  local_210 = 0xffffffff;
  local_200 = 0xffffffff;
  local_300 = 0;
  local_2fc = 0;
  puStack_2d8 = local_2cc;
  local_2cc[0] = 0;
  local_2d0 = 0x40;
  local_28d = 0;
  local_278 = 0x40;
  local_235 = 0;
  local_318 = 0;
  local_220 = 0;
  local_218 = 0;
  local_214 = 0;
  local_1e8 = 0x40;
  local_1a5 = 0;
  local_190 = 0x40;
  local_14d = 0;
  local_230 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_120 = 0x40;
  local_dd = 0;
  local_c8 = 0x40;
  local_85 = 0;
  local_2f8 = 0xffffffff;
  uStack_2f0 = 0xffffffff00000000;
  local_1f0 = local_1e4;
  local_1e4[0] = 0;
  local_128 = local_11c;
  local_11c[0] = 0;
  local_d0 = local_c4;
  local_c4[0] = 0;
  local_198 = local_18c;
  local_18c[0] = 0;
  uStack_3f0 = 0;
  uStack_308 = 0;
  local_78 = *(int *)PTR_DAT_04bc0b30;
  local_74 = 0;
  *(int *)PTR_DAT_04bc0b30 = local_78 + 1;
  local_80 = local_80 + 0x10;
  local_70 = 0;
  local_410 = PTR_DAT_04bc0bf0 + 0x10;
  local_68 = 0;
  local_60 = 0;
  plVar8 = *(long **)(lVar7 + 0x48);
  local_370 = local_3c8;
  local_310 = local_3f8;
  local_2e0 = local_3c8;
  local_288 = local_3c8;
  local_228 = local_3f8;
  local_1f8 = local_3c8;
  local_1a0 = local_3c8;
  local_130 = local_3c8;
  local_d8 = local_3c8;
  if (plVar8[1] != 0) {
    local_468 = PTR_DAT_04bc0878 + 0x10;
    local_460 = (undefined1 *)CONCAT44(local_460._4_4_,9);
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_468);
    (**(code **)(plVar8[3] + 0x5e0))(plVar8[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar7);
  }
  local_458 = 0x40;
  local_415 = 0;
  local_468 = PTR_DAT_04bb2f70 + 0x10;
  local_460 = auStack_454;
  (**(code **)(DAT_056cb7a8 + 0x18))(&DAT_056cb7a8);
  puVar2 = DAT_056cb7b0;
  if (auStack_454 != DAT_056cb7b0) {
    (**(code **)(DAT_056cb7a8 + 0x18))(&DAT_056cb7a8);
    lVar5 = 0;
    do {
      if (DAT_056cb7b0[lVar5] == '\0') goto LAB_02f9bd0c;
      if (DAT_056cb7b0[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02f9bd0c;
      }
      if (DAT_056cb7b0[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02f9bd0c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02f9bd0c:
    iVar3 = (int)lVar5;
    if (local_458 <= (int)lVar5) {
      iVar3 = local_458 + -1;
    }
    memcpy(auStack_454,puVar2,(long)iVar3);
    auStack_454[iVar3] = 0;
  }
  puVar2 = local_460;
  local_468 = puVar1 + 0x10;
  switch(local_54) {
  case 0:
    (**(code **)(DAT_056cb7d8 + 0x18))(&DAT_056cb7d8);
    puVar9 = DAT_056cb7e0;
    if (puVar2 == DAT_056cb7e0) goto LAB_02f9c020;
    (**(code **)(DAT_056cb7d8 + 0x18))(&DAT_056cb7d8);
    lVar5 = 0;
    do {
      if (DAT_056cb7e0[lVar5] == '\0') goto LAB_02f9bff4;
      if (DAT_056cb7e0[lVar5 + 1] == '\0') goto LAB_02f9bfe8;
      if (DAT_056cb7e0[lVar5 + 2] == '\0') goto LAB_02f9bff0;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 1:
    (**(code **)(DAT_056cb7a8 + 0x18))(&DAT_056cb7a8);
    puVar9 = DAT_056cb7b0;
    if (puVar2 == DAT_056cb7b0) goto LAB_02f9c020;
    (**(code **)(DAT_056cb7a8 + 0x18))(&DAT_056cb7a8);
    lVar5 = 0;
    do {
      if (DAT_056cb7b0[lVar5] == '\0') goto LAB_02f9c06c;
      if (DAT_056cb7b0[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02f9c06c;
      }
      if (DAT_056cb7b0[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02f9c06c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02f9c06c:
    iVar3 = (int)lVar5;
    if (local_458 <= (int)lVar5) {
      iVar3 = local_458 + -1;
    }
    __n = (size_t)iVar3;
    memcpy(puVar2,puVar9,__n);
    goto LAB_02f9c01c;
  case 2:
  case 0x19:
    (**(code **)(DAT_056cb7b8 + 0x18))(&DAT_056cb7b8);
    puVar9 = DAT_056cb7c0;
    if (puVar2 == DAT_056cb7c0) goto LAB_02f9c020;
    (**(code **)(DAT_056cb7b8 + 0x18))(&DAT_056cb7b8);
    lVar5 = 0;
    do {
      if (DAT_056cb7c0[lVar5] == '\0') goto LAB_02f9bff4;
      if (DAT_056cb7c0[lVar5 + 1] == '\0') goto LAB_02f9bfe8;
      if (DAT_056cb7c0[lVar5 + 2] == '\0') goto LAB_02f9bff0;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  default:
    (**(code **)(DAT_056cb7d8 + 0x18))(&DAT_056cb7d8);
    puVar9 = DAT_056cb7e0;
    if (puVar2 == DAT_056cb7e0) goto LAB_02f9c020;
    (**(code **)(DAT_056cb7d8 + 0x18))(&DAT_056cb7d8);
    lVar5 = 0;
    do {
      if (DAT_056cb7e0[lVar5] == '\0') goto LAB_02f9bff4;
      if (DAT_056cb7e0[lVar5 + 1] == '\0') goto LAB_02f9bfe8;
      if (DAT_056cb7e0[lVar5 + 2] == '\0') goto LAB_02f9bff0;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 0x16:
    (**(code **)(DAT_056cb7e8 + 0x18))(&DAT_056cb7e8);
    puVar9 = DAT_056cb7f0;
    if (puVar2 == DAT_056cb7f0) goto LAB_02f9c020;
    (**(code **)(DAT_056cb7e8 + 0x18))(&DAT_056cb7e8);
    lVar5 = 0;
    do {
      if (DAT_056cb7f0[lVar5] == '\0') goto LAB_02f9bff4;
      if (DAT_056cb7f0[lVar5 + 1] == '\0') goto LAB_02f9bfe8;
      if (DAT_056cb7f0[lVar5 + 2] == '\0') goto LAB_02f9bff0;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 0x1b:
    (**(code **)(DAT_056cb7f8 + 0x18))(&DAT_056cb7f8);
    puVar9 = DAT_056cb800;
    if (puVar2 == DAT_056cb800) goto LAB_02f9c020;
    (**(code **)(DAT_056cb7f8 + 0x18))(&DAT_056cb7f8);
    lVar5 = 0;
    do {
      if (DAT_056cb800[lVar5] == '\0') goto LAB_02f9bff4;
      if (DAT_056cb800[lVar5 + 1] == '\0') goto LAB_02f9bfe8;
      if (DAT_056cb800[lVar5 + 2] == '\0') goto LAB_02f9bff0;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
  }
  lVar5 = 0;
LAB_02f9bff4:
  iVar3 = (int)lVar5;
  if (local_458 <= (int)lVar5) {
    iVar3 = local_458 + -1;
  }
  __n = (size_t)iVar3;
  memcpy(puVar2,puVar9,__n);
LAB_02f9c01c:
  puVar2[__n] = 0;
LAB_02f9c020:
  local_478 = PTR_DAT_04bb2020 + 0x10;
  pcStack_470 = "MenuRecipe";
  FUN_01bea210(&local_410,lVar7,&local_478,&local_468);
  FUN_01bea9c8(&local_410);
  FUN_01be9eb8(&local_410);
  return;
LAB_02f9bfe8:
  lVar5 = lVar5 + 1;
  goto LAB_02f9bff4;
LAB_02f9bff0:
  lVar5 = lVar5 + 2;
  goto LAB_02f9bff4;
}

