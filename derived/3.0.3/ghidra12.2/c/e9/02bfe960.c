
long FUN_02bfe960(long param_1,long *param_2,long param_3)

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
      lVar11 = 0;
      do {
        if (local_190[lVar11] == '\0') goto LAB_02bfeb10;
        if (local_190[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_02bfeb10;
        }
        if (local_190[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_02bfeb10;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_02bfeb10:
      iVar6 = (int)lVar11;
      if (local_2a0 <= (int)lVar11) {
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
      lVar11 = 0;
      do {
        if (__src[lVar11] == '\0') goto LAB_02bfeabc;
        if (__src[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_02bfeabc;
        }
        if (__src[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_02bfeabc;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_02bfeabc:
      iVar6 = (int)lVar11;
      if (local_2a0 <= (int)lVar11) {
        iVar6 = local_2a0 + -1;
      }
      memcpy(local_2a8,__src,(long)iVar6);
      pcVar5[iVar6] = '\0';
    }
    lVar11 = 0;
    if (param_2[3] != 0) {
      lVar11 = param_2[3] + 0xb0;
    }
    FUN_038d13f0(&local_2b0,&DAT_04073443,lVar11);
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
    if ((*PTR_DAT_04bc5490 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04bc5490);
      ppuVar13 = (undefined **)PTR_DAT_04bc5488;
      if (iVar6 != 0) {
        *(undefined **)PTR_DAT_04bc5488 = puVar1 + 0x10;
        *(char **)((long)ppuVar13 + 8) = "WherearenSeasonIconCtrl";
        __cxa_guard_release(PTR_DAT_04bc5490);
      }
    }
    else {
      ppuVar13 = (undefined **)PTR_DAT_04bc5488;
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
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar8 = malloc(0x290);
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
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x290,8);
    }
  }
  FUN_030bb734(plVar8,&local_80,&local_2f0);
  puVar4 = PTR_DAT_04bc84c8;
  plVar8[0x51] = 0;
  *plVar8 = (long)(puVar4 + 0x10);
  plVar12 = (long *)(param_3 + 0x38);
  lVar11 = *plVar12;
  plVar9 = (long *)((long)*(int *)(param_3 + 0x4c) + (long)plVar8);
  *plVar12 = (long)plVar9;
  *plVar9 = lVar11;
  plVar9[1] = (long)plVar12;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar9;
  }
  lVar11 = *(long *)puVar2;
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  plVar8[6] = param_3;
  if (lVar11 == 0) {
    plVar9 = malloc(0x58);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
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
  plVar9[8] = (long)&PTR_LAB_04aab7e8;
  *plVar9 = (long)&PTR_LAB_04aabc88;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar8;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = (long)&local_2f0;
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
    FUN_03c684c0(plVar9,param_1 + 0x40,&local_198,0);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (puVar10 != (undefined8 *)0x0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    local_70 = puVar1 + 0x10;
    pcStack_58 = local_2a8;
    local_80 = plVar9;
    plStack_78 = plVar9 + 8;
    local_60 = local_70;
    (**(code **)*puVar10)(puVar10,&local_80);
  }
  lVar11 = plVar9[3];
  FUN_03141410(lVar11,plVar9,plVar9[7]);
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

