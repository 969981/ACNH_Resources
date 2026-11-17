
long FUN_02bf8c10(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
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
  uint local_2c4;
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
    pcVar6 = local_190;
    if (local_29c != local_190) {
      (**(code **)(local_198 + 0x18))(&local_198);
      lVar12 = 0;
      do {
        if (local_190[lVar12] == '\0') goto LAB_02bf8dc0;
        if (local_190[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_02bf8dc0;
        }
        if (local_190[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_02bf8dc0;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_02bf8dc0:
      iVar7 = (int)lVar12;
      if (local_2a0 <= (int)lVar12) {
        iVar7 = local_2a0 + -1;
      }
      memcpy(local_29c,pcVar6,(long)iVar7);
      local_29c[iVar7] = '\0';
    }
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x18))((long *)(param_3 + 0x18));
    pcVar6 = local_2a8;
    __src = *(char **)(param_3 + 0x20);
    if (local_2a8 != __src) {
      lVar12 = 0;
      do {
        if (__src[lVar12] == '\0') goto LAB_02bf8d6c;
        if (__src[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_02bf8d6c;
        }
        if (__src[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_02bf8d6c;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_02bf8d6c:
      iVar7 = (int)lVar12;
      if (local_2a0 <= (int)lVar12) {
        iVar7 = local_2a0 + -1;
      }
      memcpy(local_2a8,__src,(long)iVar7);
      pcVar6[iVar7] = '\0';
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
  local_2c4 = *(uint *)(param_1 + 0x158);
  local_2c0 = *(undefined8 *)(param_1 + 0x160);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x168);
  local_2e0 = local_2f0;
  if (*local_2a8 == '\0') {
    if ((*PTR_DAT_04bc5368 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04bc5368);
      ppuVar14 = (undefined **)PTR_DAT_04bc5360;
      if (iVar7 != 0) {
        *(undefined **)PTR_DAT_04bc5360 = puVar1 + 0x10;
        *(char **)((long)ppuVar14 + 8) = "FixedBtnCtrl";
        __cxa_guard_release(PTR_DAT_04bc5368);
      }
    }
    else {
      ppuVar14 = (undefined **)PTR_DAT_04bc5360;
    }
  }
  else {
    ppuVar14 = &local_2b0;
  }
  puVar4 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  local_70 = *(undefined **)(param_3 + 0x50);
  local_80 = (long *)(puVar1 + 0x10);
  plStack_78 = (long *)ppuVar14[1];
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar9 = malloc(0x498);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar12 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x498,8);
    }
  }
  FUN_030bed84(plVar9,&local_80,&local_2f0);
  puVar5 = PTR_DAT_04bc82b8;
  plVar9[0x81] = 0;
  plVar9[0x82] = 0;
  *(undefined1 *)((long)plVar9 + 0x42c) = 0;
  *(undefined1 *)((long)plVar9 + 0x46b) = 0;
  *(undefined4 *)(plVar9 + 0x85) = 0x40;
  puVar3 = PTR_DAT_04bb2bc0;
  plVar9[0x84] = (long)plVar9 + 0x42c;
  *(undefined1 *)((long)plVar9 + 0x48b) = 0;
  *plVar9 = (long)(puVar5 + 0x10);
  plVar9[0x83] = (long)(puVar3 + 0x10);
  *(undefined4 *)(plVar9 + 0x90) = 8;
  *(undefined1 *)((long)plVar9 + 0x484) = 0;
  plVar9[0x8f] = (long)plVar9 + 0x484;
  plVar9[0x8e] = (long)(PTR_DAT_04bb3768 + 0x10);
  *(undefined1 *)(plVar9 + 0x92) = 0xff;
  plVar13 = (long *)(param_3 + 0x38);
  lVar12 = *plVar13;
  plVar10 = (long *)((long)*(int *)(param_3 + 0x4c) + (long)plVar9);
  *plVar13 = (long)plVar10;
  *plVar10 = lVar12;
  plVar10[1] = (long)plVar13;
  if (lVar12 != 0) {
    *(long **)(lVar12 + 8) = plVar10;
  }
  lVar12 = *(long *)puVar2;
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  plVar9[6] = param_3;
  if (lVar12 == 0) {
    plVar10 = malloc(0x58);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar10 = (long *)(lVar12 + 8);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x58,0xfffffff8);
    }
  }
  plVar10[2] = 0;
  plVar10[3] = (long)plVar9;
  puVar2 = PTR_DAT_04bc4e08;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[9] = (long)plVar9;
  plVar10[10] = (long)plVar9;
  plVar10[8] = (long)(puVar2 + 0x10);
  *plVar10 = (long)&PTR_LAB_04aaba08;
  plVar10[1] = 0;
  plVar10[6] = 0;
  plVar10[7] = (long)&local_2f0;
  plVar13 = (long *)(param_3 + 0x78);
  lVar12 = *plVar13;
  plVar9 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar10);
  *plVar13 = (long)plVar9;
  *plVar9 = lVar12;
  plVar9[1] = (long)plVar13;
  if (lVar12 != 0) {
    *(long **)(lVar12 + 8) = plVar9;
  }
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + 1;
  if ((local_2c4 & 1) == 0) {
    FUN_03c68fb0(plVar10);
  }
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
  FUN_030df3f8(lVar12,plVar10,plVar10[7]);
  FUN_03c5d720(plVar10[3]);
  plVar10[3] = 0;
  plVar9 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar10);
  if (*plVar9 != 0) {
    *(long *)(*plVar9 + 8) = plVar9[1];
  }
  if ((long *)plVar9[1] != (long *)0x0) {
    *(long *)plVar9[1] = *plVar9;
  }
  *plVar9 = 0;
  plVar9[1] = 0;
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + -1;
  (**(code **)(*plVar10 + 8))(plVar10);
  return lVar12;
}

