
long FUN_02bfda90(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 *puVar9;
  char *__src;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined *local_2f0;
  undefined8 uStack_2e8;
  undefined *local_2e0;
  char *pcStack_2d8;
  long *local_2d0;
  undefined1 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined *local_2b0;
  char *local_2a8;
  int local_2a0;
  char local_29c [255];
  undefined1 local_19d;
  undefined *local_198;
  char *local_190;
  undefined4 local_188;
  char local_184 [255];
  undefined1 local_85;
  long *local_80;
  long *plStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  local_85 = 0;
  local_188 = 0x100;
  local_184[0] = '\0';
  local_190 = local_184;
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  local_198 = puVar1;
  if (param_2[3] != 0) {
    FUN_03c907b0(&local_198);
  }
  local_2a0 = 0x100;
  local_19d = 0;
  local_29c[0] = '\0';
  local_2b0 = puVar1;
  local_2a8 = local_29c;
  if (*(char *)(param_3 + 0x1f8) == '\0') {
    (**(code **)(local_198 + 0x18))(&local_198);
    pcVar4 = local_190;
    if (local_29c != local_190) {
      (**(code **)(local_198 + 0x18))(&local_198);
      lVar10 = 0;
      do {
        if (local_190[lVar10] == '\0') goto LAB_02bfdc40;
        if (local_190[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_02bfdc40;
        }
        if (local_190[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_02bfdc40;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_02bfdc40:
      iVar5 = (int)lVar10;
      if (local_2a0 <= (int)lVar10) {
        iVar5 = local_2a0 + -1;
      }
      memcpy(local_29c,pcVar4,(long)iVar5);
      local_29c[iVar5] = '\0';
    }
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x18))((long *)(param_3 + 0x18));
    pcVar4 = local_2a8;
    __src = *(char **)(param_3 + 0x20);
    if (local_2a8 != __src) {
      lVar10 = 0;
      do {
        if (__src[lVar10] == '\0') goto LAB_02bfdbec;
        if (__src[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_02bfdbec;
        }
        if (__src[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_02bfdbec;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_02bfdbec:
      iVar5 = (int)lVar10;
      if (local_2a0 <= (int)lVar10) {
        iVar5 = local_2a0 + -1;
      }
      memcpy(local_2a8,__src,(long)iVar5);
      pcVar4[iVar5] = '\0';
    }
    lVar10 = 0;
    if (param_2[3] != 0) {
      lVar10 = param_2[3] + 0xb0;
    }
    FUN_038d13f0(&local_2b0,&DAT_04073443,lVar10);
  }
  puVar1 = PTR_DAT_04bb2020;
  uStack_2e8 = *(undefined8 *)(param_1 + 0x48);
  local_2f0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_2d8 = local_2a8;
  local_2d0 = (long *)0x0;
  if (param_2[3] != 0) {
    local_2d0 = (long *)0x0;
    if (*(long *)(*param_2 + 0xb8) != 0) {
      local_2d0 = (long *)(*param_2 + 0xb8);
    }
  }
  local_2c8 = *(undefined1 *)(param_3 + 0x1f8);
  local_2c4 = *(undefined4 *)(param_1 + 0x158);
  local_2c0 = *(undefined8 *)(param_1 + 0x160);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x168);
  local_2e0 = local_2f0;
  if (*local_2a8 == '\0') {
    if ((*PTR_DAT_04bc5460 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_04bc5460);
      ppuVar13 = (undefined **)PTR_DAT_04bc5458;
      if (iVar5 != 0) {
        *(undefined **)PTR_DAT_04bc5458 = puVar1 + 0x10;
        *(char **)((long)ppuVar13 + 8) = "EffectClothTextureCtrl";
        __cxa_guard_release(PTR_DAT_04bc5460);
      }
    }
    else {
      ppuVar13 = (undefined **)PTR_DAT_04bc5458;
    }
  }
  else {
    ppuVar13 = &local_2b0;
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  local_70 = *(undefined **)(param_3 + 0x50);
  local_80 = (long *)(puVar1 + 0x10);
  plStack_78 = (long *)ppuVar13[1];
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar8 = malloc(0x2d0);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x2d0,8);
    }
  }
  FUN_030ddcb4(pvVar8,&local_80,&local_2f0);
  plVar11 = (long *)(param_3 + 0x38);
  lVar10 = *plVar11;
  plVar7 = (long *)((long)*(int *)(param_3 + 0x4c) + (long)pvVar8);
  *plVar11 = (long)plVar7;
  *plVar7 = lVar10;
  plVar7[1] = (long)plVar11;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar7;
  }
  lVar10 = *(long *)puVar2;
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  *(long *)((long)pvVar8 + 0x30) = param_3;
  if (lVar10 == 0) {
    plVar7 = malloc(0x58);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x58,0xfffffff8);
    }
  }
  plVar7[8] = (long)&PTR_FUN_04aabc28;
  *plVar7 = (long)&PTR_LAB_04aabc08;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)pvVar8;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = (long)&local_2f0;
  plVar7[9] = (long)pvVar8;
  plVar7[10] = (long)pvVar8;
  plVar12 = (long *)(param_3 + 0x78);
  lVar10 = *plVar12;
  plVar11 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar7);
  *plVar12 = (long)plVar11;
  *plVar11 = lVar10;
  plVar11[1] = (long)plVar12;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar11;
  }
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + 1;
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar7[6] = *(long *)(param_1 + 0x38);
  }
  if (*(char *)(param_1 + 0x171) == '\0') {
    FUN_03c684c0(plVar7,param_1 + 0x40,&local_198,0);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (puVar9 != (undefined8 *)0x0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    local_70 = puVar1 + 0x10;
    pcStack_58 = local_2a8;
    local_80 = plVar7;
    plStack_78 = plVar7 + 8;
    local_60 = local_70;
    (**(code **)*puVar9)(puVar9,&local_80);
  }
  lVar10 = plVar7[3];
  FUN_030ddf20(lVar10,plVar7,plVar7[7]);
  FUN_03c5d720(plVar7[3]);
  plVar7[3] = 0;
  plVar11 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar7);
  if (*plVar11 != 0) {
    *(long *)(*plVar11 + 8) = plVar11[1];
  }
  if ((long *)plVar11[1] != (long *)0x0) {
    *(long *)plVar11[1] = *plVar11;
  }
  *plVar11 = 0;
  plVar11[1] = 0;
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + -1;
  (**(code **)(*plVar7 + 8))(plVar7);
  return lVar10;
}

