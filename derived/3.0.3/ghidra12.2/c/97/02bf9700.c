
long FUN_02bf9700(long param_1,long *param_2,long param_3)

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
  undefined8 uVar10;
  char *__src;
  long lVar11;
  long *plVar12;
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
    pcVar4 = local_190;
    if (local_29c != local_190) {
      (**(code **)(local_198 + 0x18))(&local_198);
      lVar11 = 0;
      do {
        if (local_190[lVar11] == '\0') goto LAB_02bf98b0;
        if (local_190[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_02bf98b0;
        }
        if (local_190[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_02bf98b0;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_02bf98b0:
      iVar5 = (int)lVar11;
      if (local_2a0 <= (int)lVar11) {
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
      lVar11 = 0;
      do {
        if (__src[lVar11] == '\0') goto LAB_02bf985c;
        if (__src[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_02bf985c;
        }
        if (__src[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_02bf985c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_02bf985c:
      iVar5 = (int)lVar11;
      if (local_2a0 <= (int)lVar11) {
        iVar5 = local_2a0 + -1;
      }
      memcpy(local_2a8,__src,(long)iVar5);
      pcVar4[iVar5] = '\0';
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
    if ((*PTR_DAT_04bc5390 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_04bc5390);
      ppuVar14 = (undefined **)PTR_DAT_04bc5388;
      if (iVar5 != 0) {
        *(undefined **)PTR_DAT_04bc5388 = puVar1 + 0x10;
        *(char **)((long)ppuVar14 + 8) = "ItemColorWindowCtrl";
        __cxa_guard_release(PTR_DAT_04bc5390);
      }
    }
    else {
      ppuVar14 = (undefined **)PTR_DAT_04bc5388;
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
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar8 = malloc(0x538);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x538,8);
    }
  }
  FUN_030e5830(pvVar8,&local_80,&local_2f0);
  plVar12 = (long *)(param_3 + 0x38);
  lVar11 = *plVar12;
  plVar7 = (long *)((long)*(int *)(param_3 + 0x4c) + (long)pvVar8);
  *plVar12 = (long)plVar7;
  *plVar7 = lVar11;
  plVar7[1] = (long)plVar12;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar7;
  }
  lVar11 = *(long *)puVar2;
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  *(long *)((long)pvVar8 + 0x30) = param_3;
  if (lVar11 == 0) {
    plVar7 = malloc(0x50);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x50,0xfffffff8);
    }
  }
  plVar7[9] = (long)pvVar8;
  *plVar7 = (long)&PTR_LAB_04aaba48;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)pvVar8;
  plVar7[8] = (long)&PTR_LAB_04aabe48;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = (long)&local_2f0;
  plVar13 = (long *)(param_3 + 0x78);
  lVar11 = *plVar13;
  plVar12 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar7);
  *plVar13 = (long)plVar12;
  *plVar12 = lVar11;
  plVar12[1] = (long)plVar13;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar12;
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
  lVar11 = plVar7[3];
  lVar6 = plVar7[7];
  if (((DAT_056ee7b0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_056ee7b0), iVar5 != 0)) {
    DAT_056ee790 = puVar1 + 0x10;
    DAT_056ee798 = "@T_Guide_00";
    DAT_056ee7a8 = "@T_BtnIcon_00";
    DAT_056ee7a0 = DAT_056ee790;
    __cxa_guard_release(&DAT_056ee7b0);
  }
  uVar10 = FUN_03462740(lVar11,plVar7,&DAT_056ee790);
  *(undefined8 *)(lVar11 + 0x208) = uVar10;
  uVar10 = FUN_03462740(lVar11,plVar7,&DAT_056ee7a0);
  *(undefined8 *)(lVar11 + 0x210) = uVar10;
  FUN_030bc030(lVar11,plVar7,lVar6);
  FUN_03c5d720(plVar7[3]);
  plVar7[3] = 0;
  plVar12 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar7);
  if (*plVar12 != 0) {
    *(long *)(*plVar12 + 8) = plVar12[1];
  }
  if ((long *)plVar12[1] != (long *)0x0) {
    *(long *)plVar12[1] = *plVar12;
  }
  *plVar12 = 0;
  plVar12[1] = 0;
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + -1;
  (**(code **)(*plVar7 + 8))(plVar7);
  return lVar11;
}

