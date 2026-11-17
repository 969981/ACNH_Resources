
long FUN_02bf8170(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  char *__src;
  long lVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined *local_370;
  undefined8 uStack_368;
  undefined *local_360;
  char *pcStack_358;
  long *local_350;
  undefined1 local_348;
  undefined4 local_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined *local_330;
  char *local_328;
  int local_320;
  char local_31c [255];
  undefined1 local_21d;
  undefined *local_218;
  char *local_210;
  undefined4 local_208;
  char local_204 [255];
  undefined1 local_105;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined **local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  char *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined *local_58;
  
  local_105 = 0;
  local_208 = 0x100;
  local_204[0] = '\0';
  local_210 = local_204;
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  local_218 = puVar1;
  if (param_2[3] != 0) {
    FUN_03c907b0(&local_218);
  }
  local_320 = 0x100;
  local_21d = 0;
  local_31c[0] = '\0';
  local_330 = puVar1;
  local_328 = local_31c;
  if (*(char *)(param_3 + 0x1f8) == '\0') {
    (**(code **)(local_218 + 0x18))(&local_218);
    pcVar5 = local_210;
    if (local_31c != local_210) {
      (**(code **)(local_218 + 0x18))(&local_218);
      lVar11 = 0;
      do {
        if (local_210[lVar11] == '\0') goto LAB_02bf8320;
        if (local_210[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_02bf8320;
        }
        if (local_210[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_02bf8320;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_02bf8320:
      iVar6 = (int)lVar11;
      if (local_320 <= (int)lVar11) {
        iVar6 = local_320 + -1;
      }
      memcpy(local_31c,pcVar5,(long)iVar6);
      local_31c[iVar6] = '\0';
    }
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x18))((long *)(param_3 + 0x18));
    pcVar5 = local_328;
    __src = *(char **)(param_3 + 0x20);
    if (local_328 != __src) {
      lVar11 = 0;
      do {
        if (__src[lVar11] == '\0') goto LAB_02bf82cc;
        if (__src[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_02bf82cc;
        }
        if (__src[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_02bf82cc;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_02bf82cc:
      iVar6 = (int)lVar11;
      if (local_320 <= (int)lVar11) {
        iVar6 = local_320 + -1;
      }
      memcpy(local_328,__src,(long)iVar6);
      pcVar5[iVar6] = '\0';
    }
    lVar11 = 0;
    if (param_2[3] != 0) {
      lVar11 = param_2[3] + 0xb0;
    }
    FUN_038d13f0(&local_330,&DAT_04073443,lVar11);
  }
  puVar1 = PTR_DAT_04bb2020;
  uStack_368 = *(undefined8 *)(param_1 + 0x48);
  local_370 = PTR_DAT_04bb2020 + 0x10;
  pcStack_358 = local_328;
  local_350 = (long *)0x0;
  if (param_2[3] != 0) {
    local_350 = (long *)0x0;
    if (*(long *)(*param_2 + 0xb8) != 0) {
      local_350 = (long *)(*param_2 + 0xb8);
    }
  }
  local_348 = *(undefined1 *)(param_3 + 0x1f8);
  local_344 = *(undefined4 *)(param_1 + 0x158);
  local_340 = *(undefined8 *)(param_1 + 0x160);
  uStack_338 = *(undefined8 *)(param_1 + 0x168);
  local_360 = local_370;
  if (*local_328 == '\0') {
    if ((*PTR_DAT_04bc5338 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04bc5338);
      ppuVar13 = (undefined **)PTR_DAT_04bc5330;
      if (iVar6 != 0) {
        *(undefined **)PTR_DAT_04bc5330 = puVar1 + 0x10;
        *(char **)((long)ppuVar13 + 8) = "AppScrollBtnListCtrl";
        __cxa_guard_release(PTR_DAT_04bc5338);
      }
    }
    else {
      ppuVar13 = (undefined **)PTR_DAT_04bc5330;
    }
  }
  else {
    ppuVar13 = &local_330;
  }
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  local_f0 = *(undefined8 *)(param_3 + 0x50);
  local_100 = puVar1 + 0x10;
  puStack_f8 = ppuVar13[1];
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar8 = malloc(0x5a0);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x5a0,8);
    }
  }
  FUN_0385f2ac(plVar8,&local_100,&local_370);
  puVar2 = PTR_DAT_04bc8208;
  *(undefined4 *)(plVar8 + 0x9f) = 0;
  plVar8[0xa0] = 0;
  *(undefined4 *)(plVar8 + 0xa1) = 0;
  plVar8[0xa2] = 0;
  *(undefined4 *)(plVar8 + 0xa3) = 0;
  plVar8[0xa4] = 0;
  *(undefined4 *)(plVar8 + 0xa5) = 0;
  *(undefined1 *)(plVar8 + 0xaa) = 0;
  plVar8[0xab] = 0;
  plVar8[0xa6] = 0;
  plVar8[0xa7] = 0;
  *plVar8 = (long)(puVar2 + 0x10);
  plVar8[0xa8] = 0;
  *(undefined4 *)(plVar8 + 0xa9) = 0;
  puVar2 = PTR_DAT_04bdf1d8 + 0x10;
  plVar8[0xb2] = 0;
  *(undefined4 *)(plVar8 + 0xb3) = 0;
  plVar8[0xad] = 0;
  plVar8[0xae] = 0;
  plVar8[0xaf] = 0;
  plVar8[0xb0] = 0;
  *(undefined4 *)(plVar8 + 0xb1) = 0;
  plVar8[0xac] = (long)puVar2;
  local_d8 = puVar1 + 0x10;
  local_90 = PTR_DAT_04bc8210 + 0x10;
  local_e8 = (long *)((ulong)local_e8 & 0xffffffffffff0000);
  local_80 = PTR_DAT_04bb2120;
  local_70 = PTR_DAT_04bb2120;
  uStack_68 = 0;
  local_d0 = PTR_DAT_04bb2120;
  local_b0 = PTR_DAT_04bb2120;
  local_e0 = &local_90;
  local_60 = 1;
  local_58 = &DAT_04afcdf8;
  local_a0 = "UIScrollBtnListObject";
  uStack_98 = 0;
  local_c0 = DAT_056eaf70;
  local_c8 = local_d8;
  puStack_b8 = local_d8;
  puStack_a8 = local_d8;
  puStack_88 = local_d8;
  puStack_78 = local_d8;
  FUN_038387b8(plVar8 + 0xaa,&local_e8);
  plVar12 = (long *)(param_3 + 0x38);
  lVar11 = *plVar12;
  plVar9 = (long *)((long)*(int *)(param_3 + 0x4c) + (long)plVar8);
  *plVar12 = (long)plVar9;
  *plVar9 = lVar11;
  plVar9[1] = (long)plVar12;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar9;
  }
  lVar11 = *(long *)puVar3;
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  plVar8[6] = param_3;
  if (lVar11 == 0) {
    plVar9 = malloc(0x58);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar9 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar9 = (long *)(lVar7 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x58,0xfffffff8);
    }
  }
  plVar9[8] = (long)&PTR_FUN_04aab9c8;
  *plVar9 = (long)&PTR_LAB_04aab9a8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar8;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = (long)&local_370;
  plVar9[9] = (long)plVar8;
  plVar9[10] = (long)plVar8;
  plVar12 = (long *)(param_3 + 0x78);
  lVar11 = *plVar12;
  plVar8 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar9);
  *plVar12 = (long)plVar8;
  *plVar8 = lVar11;
  plVar8[1] = (long)plVar12;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar8;
  }
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + 1;
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar9[6] = *(long *)(param_1 + 0x38);
  }
  if (*(char *)(param_1 + 0x171) == '\0') {
    FUN_03c684c0(plVar9,param_1 + 0x40,&local_218,0);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (puVar10 != (undefined8 *)0x0) {
    local_d0 = *(undefined **)(param_1 + 0x48);
    local_d8 = puVar1 + 0x10;
    local_c0 = local_328;
    local_e8 = plVar9;
    local_e0 = (undefined **)(plVar9 + 8);
    local_c8 = local_d8;
    (**(code **)*puVar10)(puVar10,&local_e8);
  }
  lVar11 = plVar9[3];
  FUN_03860f20(lVar11,plVar9,plVar9[7]);
  FUN_03c5d720(plVar9[3]);
  plVar9[3] = 0;
  plVar8 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar9);
  if (*plVar8 != 0) {
    *(long *)(*plVar8 + 8) = plVar8[1];
  }
  if ((long *)plVar8[1] != (long *)0x0) {
    *(long *)plVar8[1] = *plVar8;
  }
  *plVar8 = 0;
  plVar8[1] = 0;
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + -1;
  (**(code **)(*plVar9 + 8))(plVar9);
  return lVar11;
}

