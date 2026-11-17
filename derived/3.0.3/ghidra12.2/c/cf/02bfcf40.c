
long FUN_02bfcf40(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *__src;
  long lVar12;
  long *plVar13;
  undefined **ppuVar14;
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
    pcVar5 = local_190;
    if (local_29c != local_190) {
      (**(code **)(local_198 + 0x18))(&local_198);
      lVar12 = 0;
      do {
        if (local_190[lVar12] == '\0') goto LAB_02bfd0f0;
        if (local_190[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_02bfd0f0;
        }
        if (local_190[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_02bfd0f0;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_02bfd0f0:
      iVar6 = (int)lVar12;
      if (local_2a0 <= (int)lVar12) {
        iVar6 = local_2a0 + -1;
      }
      memcpy(local_29c,pcVar5,(long)iVar6);
      local_29c[iVar6] = '\0';
    }
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x18))((long *)(param_3 + 0x18));
    pcVar5 = local_2a8;
    __src = *(char **)(param_3 + 0x20);
    if (local_2a8 != __src) {
      lVar12 = 0;
      do {
        if (__src[lVar12] == '\0') goto LAB_02bfd09c;
        if (__src[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_02bfd09c;
        }
        if (__src[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_02bfd09c;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_02bfd09c:
      iVar6 = (int)lVar12;
      if (local_2a0 <= (int)lVar12) {
        iVar6 = local_2a0 + -1;
      }
      memcpy(local_2a8,__src,(long)iVar6);
      pcVar5[iVar6] = '\0';
    }
    lVar12 = 0;
    if (param_2[3] != 0) {
      lVar12 = param_2[3] + 0xb0;
    }
    FUN_038d13f0(&local_2b0,&DAT_04073443,lVar12);
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
    if ((*PTR_DAT_04bc5440 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04bc5440);
      ppuVar14 = (undefined **)PTR_DAT_04bc5438;
      if (iVar6 != 0) {
        *(undefined **)PTR_DAT_04bc5438 = puVar1 + 0x10;
        *(char **)((long)ppuVar14 + 8) = "MyDesignEditColorPaletteLocatorCtrl";
        __cxa_guard_release(PTR_DAT_04bc5440);
      }
    }
    else {
      ppuVar14 = (undefined **)PTR_DAT_04bc5438;
    }
  }
  else {
    ppuVar14 = &local_2b0;
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  local_70 = *(undefined **)(param_3 + 0x50);
  local_80 = (long *)(puVar1 + 0x10);
  plStack_78 = (long *)ppuVar14[1];
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar8 = malloc(0x290);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x290,8);
    }
  }
  FUN_03c5cce8(plVar8,&local_80,0);
  puVar4 = PTR_DAT_04bd45f0;
  plVar8[0x3e] = 0;
  plVar8[0x36] = 0;
  plVar8[0x37] = 0;
  plVar8[0x38] = 0;
  plVar8[0x39] = 0;
  *plVar8 = (long)(puVar4 + 0x10);
  plVar8[0x3a] = 0;
  plVar8[0x3b] = 0;
  lVar12 = *(long *)puVar2;
  *(undefined1 *)(plVar8 + 0x3f) = local_2c8;
  plVar8[0x3c] = 0;
  plVar8[0x3d] = 0;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x18);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar11 = (undefined8 *)(lVar12 + 8);
    if (lVar7 != 0) {
      puVar11 = (undefined8 *)(lVar7 + 0xa8);
    }
    pvVar9 = (void *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0x18,8);
  }
  *(undefined4 *)((long)pvVar9 + 0x10) = 0;
  puVar4 = PTR_DAT_04bc8328;
  *(void **)pvVar9 = pvVar9;
  *(void **)((long)pvVar9 + 8) = pvVar9;
  plVar8[0x3b] = (long)pvVar9;
  *(undefined4 *)((long)pvVar9 + 0x14) = 8;
  plVar8[0x40] = 0;
  plVar8[0x41] = 0;
  plVar8[0x42] = 0;
  plVar8[0x43] = 0;
  plVar8[0x44] = 0;
  plVar8[0x45] = 0;
  plVar8[0x46] = 0;
  plVar8[0x47] = 0;
  *plVar8 = (long)(puVar4 + 0x10);
  plVar8[0x48] = 0;
  plVar8[0x49] = 0;
  plVar8[0x4a] = 0;
  plVar8[0x4b] = 0;
  plVar8[0x4c] = 0;
  plVar8[0x4d] = 0;
  plVar8[0x4e] = 0;
  plVar8[0x4f] = 0;
  plVar8[0x50] = 0;
  plVar8[0x51] = 0;
  plVar13 = (long *)(param_3 + 0x38);
  lVar12 = *plVar13;
  plVar10 = (long *)((long)*(int *)(param_3 + 0x4c) + (long)plVar8);
  *plVar13 = (long)plVar10;
  *plVar10 = lVar12;
  plVar10[1] = (long)plVar13;
  if (lVar12 != 0) {
    *(long **)(lVar12 + 8) = plVar10;
  }
  lVar12 = *(long *)puVar2;
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  plVar8[6] = param_3;
  if (lVar12 == 0) {
    plVar10 = malloc(0x50);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar10 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x50,0xfffffff8);
    }
  }
  plVar10[9] = (long)plVar8;
  *plVar10 = (long)&PTR_LAB_04aabbc8;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10[3] = (long)plVar8;
  plVar10[8] = (long)&PTR_LAB_04aabe48;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = (long)&local_2f0;
  plVar13 = (long *)(param_3 + 0x78);
  lVar12 = *plVar13;
  plVar8 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar10);
  *plVar13 = (long)plVar8;
  *plVar8 = lVar12;
  plVar8[1] = (long)plVar13;
  if (lVar12 != 0) {
    *(long **)(lVar12 + 8) = plVar8;
  }
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + 1;
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar10[6] = *(long *)(param_1 + 0x38);
  }
  if (*(char *)(param_1 + 0x171) == '\0') {
    FUN_03c684c0(plVar10,param_1 + 0x40,&local_198,0);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  if (puVar11 != (undefined8 *)0x0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    local_70 = puVar1 + 0x10;
    pcStack_58 = local_2a8;
    local_80 = plVar10;
    plStack_78 = plVar10 + 8;
    local_60 = local_70;
    (**(code **)*puVar11)(puVar11,&local_80);
  }
  lVar12 = plVar10[3];
  FUN_0310ce30(lVar12,plVar10,plVar10[7]);
  FUN_03c5d720(plVar10[3]);
  plVar10[3] = 0;
  plVar8 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar10);
  if (*plVar8 != 0) {
    *(long *)(*plVar8 + 8) = plVar8[1];
  }
  if ((long *)plVar8[1] != (long *)0x0) {
    *(long *)plVar8[1] = *plVar8;
  }
  *plVar8 = 0;
  plVar8[1] = 0;
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + -1;
  (**(code **)(*plVar10 + 8))(plVar10);
  return lVar12;
}

