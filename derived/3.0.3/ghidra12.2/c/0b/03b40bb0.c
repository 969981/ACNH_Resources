
void FUN_03b40bb0(char *param_1,undefined8 *param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  void *pvVar11;
  size_t sVar12;
  size_t __size;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  char *pcVar17;
  undefined4 uVar18;
  long lVar19;
  char **__s1;
  float fVar20;
  char *local_5d0;
  char *local_5c8;
  undefined8 local_5c0;
  size_t sStack_5b8;
  undefined8 local_5b0;
  ulong uStack_5a8;
  void *local_5a0;
  size_t sStack_598;
  undefined1 local_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined4 local_570;
  undefined1 local_3bd;
  undefined *local_1d0;
  char *local_1c8;
  undefined *local_1c0;
  long *local_1b8;
  long *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined *local_180;
  char *local_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  if (*param_1 != '\0') {
    return;
  }
  __s1 = &local_5d0;
  uVar14 = *param_2;
  uVar15 = param_2[2];
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = uVar15;
  *(undefined8 *)(param_1 + 0x10) = uVar14;
  uVar14 = param_2[3];
  uVar15 = param_2[4];
  uVar3 = param_2[6];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar14;
  *(undefined8 *)(param_1 + 0x30) = uVar15;
  uVar14 = param_2[7];
  uVar15 = param_2[8];
  uVar3 = param_2[10];
  *(undefined8 *)(param_1 + 0x58) = param_2[9];
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar14;
  *(undefined8 *)(param_1 + 0x50) = uVar15;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0xb);
  uVar14 = *(undefined8 *)((long)param_2 + 0x5c);
  uVar18 = *(undefined4 *)((long)param_2 + 100);
  *(long *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0x74) = uVar18;
  *(undefined8 *)(param_1 + 0x6c) = uVar14;
  puVar13 = PTR_DAT_04bb3350;
  if (param_3 == 0) {
    FUN_03b414bc(param_1,param_2);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = param_3;
    FUN_03b414bc(param_1,param_2);
    if (lVar19 != 1) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar13 + 0x68));
      *(long *)(lVar8 + 0xa8) = lVar19;
    }
  }
  pcVar1 = param_1 + 0x2b8;
  FUN_003e4a70(pcVar1,param_2[9]);
  local_3bd = 0;
  pcVar2 = (char *)((long)&local_5c0 + 4);
  local_5c0 = CONCAT35(local_5c0._5_3_,0x200);
  pcVar17 = (char *)param_2[9];
  local_5d0 = PTR_DAT_04bb2d90 + 0x10;
  uVar18 = 0x200;
  local_5c8 = pcVar2;
  if (pcVar2 != pcVar17) {
    lVar8 = 0;
    do {
      if (pcVar17[lVar8] == '\0') {
LAB_03b40d14:
        iVar6 = (int)lVar8;
joined_r0x03b40d18:
        if (0x1ff < iVar6) {
          iVar6 = 0x1ff;
        }
        goto LAB_03b40d20;
      }
      if (pcVar17[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03b40d14;
      }
      if (pcVar17[lVar8 + 2] == '\0') {
        iVar6 = (int)lVar8 + 2;
        goto joined_r0x03b40d18;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    iVar6 = 0;
LAB_03b40d20:
    memcpy(pcVar2,pcVar17,(long)iVar6);
    pcVar2[iVar6] = '\0';
    pcVar17 = local_5c8;
    uVar18 = (undefined4)local_5c0;
  }
  puVar13 = PTR_DAT_04bb2020;
  local_178 = "content://";
  local_1b8 = &DAT_0407ebb1;
  local_1d0 = (undefined *)((ulong)local_1d0 & 0xffffffffffffff00);
  local_1c0 = PTR_DAT_04bb2020 + 0x10;
  local_180 = local_1c0;
  (**(code **)(local_5d0 + 0x18))(&local_5d0);
  pcVar2 = local_5c8;
  (**(code **)(local_5d0 + 0x18))(&local_5d0);
  lVar8 = 0;
  do {
    if (local_5c8[lVar8] == '\0') goto LAB_03b40dd0;
    if (local_5c8[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03b40dd0;
    }
    if (local_5c8[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_03b40dd0;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_03b40dd0:
  FUN_038d0770(pcVar17,0,uVar18,pcVar2,lVar8,&local_180,&local_1c0,&local_1d0);
  puVar4 = PTR_DAT_04bb60d8;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = (long *)0x0;
  uVar14 = *(undefined8 *)PTR_DAT_04bb2130;
  local_188 = 0;
  local_1c0 = PTR_DAT_04bb60d8 + 0x10;
  local_1b8 = (long *)0x0;
  (**(code **)(local_5d0 + 0x18))(&local_5d0);
  local_1d0 = puVar13 + 0x10;
  local_6d = 0;
  local_178 = local_16c;
  local_16c[0] = 0;
  local_1c8 = local_5c8;
  local_170 = 0x100;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  plVar9 = (long *)FUN_038b56b0(uVar14,&local_1d0,&local_180);
  if ((plVar9 == (long *)0x0) || ((char)plVar9[0xf] == '\0')) {
    if (local_1b8 != (long *)0x0) goto LAB_03b40ee0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))(plVar9);
    local_188 = 0;
    local_1b8 = (long *)(**(code **)(*plVar9 + 0x68))(plVar9,&local_1c0,&local_180,0);
    if (local_1b8 != (long *)0x0) {
      local_1b0 = plVar9;
LAB_03b40ee0:
      local_180 = (undefined *)((ulong)local_180 & 0xffffffff00000000);
      if ((char)local_1b8[0xf] != '\0') {
        (**(code **)(*local_1b8 + 0xb8))(local_1b8,&local_180,&local_1c0);
      }
      plVar9 = local_1b0;
      if ((((local_1b0 != (long *)0x0) && ((char)local_1b0[0xf] != '\0')) &&
          (uVar10 = (**(code **)(*local_1b0 + 0x48))(local_1b0,&local_1c0), (uVar10 & 1) != 0)) &&
         (uVar10 = (**(code **)(*plVar9 + 0x70))(plVar9,&local_1c0), (uVar10 & 1) != 0)) {
        local_1b8 = (long *)0x0;
        local_1b0 = (long *)0x0;
      }
    }
  }
  plVar9 = local_1b0;
  local_1c0 = puVar4 + 0x10;
  if (((local_1b0 != (long *)0x0) && ((char)local_1b0[0xf] != '\0')) &&
     (uVar10 = (**(code **)(*local_1b0 + 0x48))(local_1b0,&local_1c0), (uVar10 & 1) != 0)) {
    (**(code **)(*plVar9 + 0x70))(plVar9,&local_1c0);
  }
  uVar10 = FUN_003b8e74(param_1 + 0x558);
  puVar13 = PTR_DAT_04bb2698;
  uVar10 = uVar10 & 0xffffffff;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar11 = malloc(uVar10);
  }
  else {
    plVar9 = *(long **)(param_1 + 8);
    if (plVar9 == (long *)0x0) {
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar8 + 8);
      if (lVar19 != 0) {
        plVar9 = (long *)(lVar19 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        pvVar11 = (void *)0x0;
        goto LAB_03b41000;
      }
    }
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar10,0x1000);
  }
LAB_03b41000:
  *(void **)(param_1 + 0xc48) = pvVar11;
  FUN_003e4d10(pcVar1,pvVar11,uVar10);
  pcVar2 = param_1 + 0x78;
  sVar12 = FUN_003e004c(pcVar2,pcVar1);
  lVar8 = *(long *)puVar13;
  if (lVar8 == 0) {
    pvVar11 = malloc(sVar12);
  }
  else {
    plVar9 = *(long **)(param_1 + 8);
    if (plVar9 == (long *)0x0) {
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar8 + 8);
      if (lVar19 != 0) {
        plVar9 = (long *)(lVar19 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        pvVar11 = (void *)0x0;
        goto LAB_03b41084;
      }
    }
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,sVar12,0x1000);
  }
LAB_03b41084:
  *(void **)(param_1 + 0xc58) = pvVar11;
  if (DAT_05aebc00 == '\0') {
    FUN_003e0070(pcVar2,pcVar1,pvVar11,sVar12);
  }
  sVar12 = FUN_003ba7b8(pcVar1);
  lVar8 = *(long *)puVar13;
  if (lVar8 == 0) {
    pvVar11 = malloc(sVar12);
  }
  else {
    plVar9 = *(long **)(param_1 + 8);
    if (plVar9 == (long *)0x0) {
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar8 + 8);
      if (lVar19 != 0) {
        plVar9 = (long *)(lVar19 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      pvVar11 = (void *)0x0;
      if (plVar9 == (long *)0x0) goto LAB_03b4110c;
    }
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,sVar12,0x1000);
  }
LAB_03b4110c:
  cVar5 = DAT_05aebc00;
  *(void **)(param_1 + 0xc68) = pvVar11;
  if (cVar5 != '\0') goto LAB_03b413c4;
  pcVar17 = param_1 + 0x8c8;
  uVar10 = FUN_003ba95c(pcVar17,pcVar1);
  iVar6 = FUN_003ba964(pcVar17,pcVar1);
  plVar9 = (long *)param_2[8];
  lVar8 = *(long *)puVar13;
  fVar20 = (float)iVar6;
  if ((float)iVar6 <= *(float *)(param_2 + 5)) {
    fVar20 = *(float *)(param_2 + 5);
  }
  uVar10 = (ulong)((int)(long)(fVar20 * (float)uVar10) + 0xfff) & 0xfffff000;
  if (plVar9 == (long *)0x0) {
    if (lVar8 == 0) goto LAB_03b411d0;
    plVar9 = *(long **)(param_1 + 8);
    if (plVar9 == (long *)0x0) {
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar8 + 8);
      if (lVar19 != 0) {
        plVar9 = (long *)(lVar19 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      pvVar11 = (void *)0x0;
      if (plVar9 != (long *)0x0) goto LAB_03b411b8;
    }
    else {
LAB_03b411b8:
      pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar10,0x1000);
    }
  }
  else {
    if (lVar8 != 0) goto LAB_03b411b8;
LAB_03b411d0:
    pvVar11 = malloc(uVar10);
  }
  *(void **)(param_1 + 0xc78) = pvVar11;
  FUN_038d1270(param_1 + 0xca8,"StreamBuffer");
  *(ulong *)(param_1 + 0xcf0) = uVar10;
  *(undefined8 *)(param_1 + 0xce8) = *(undefined8 *)(param_1 + 0xc78);
  lVar19 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x78);
  nn::os::LockMutex((MutexType *)(lVar19 + 0x58));
  plVar9 = (long *)(param_1 + 0xca8 + *(int *)(lVar19 + 0x1c));
  plVar16 = (long *)(lVar19 + 8);
  lVar8 = *plVar16;
  *plVar16 = (long)plVar9;
  *plVar9 = lVar8;
  plVar9[1] = (long)plVar16;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar9;
  }
  *(int *)(lVar19 + 0x18) = *(int *)(lVar19 + 0x18) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar19 + 0x58));
  if (param_2[6] == 0) {
    local_5a0 = *(void **)(param_1 + 0xc88);
    __size = 0;
    plVar9 = (long *)PTR_DAT_04bb2698;
  }
  else {
    __size = thunk_FUN_003e2a88(pcVar1);
    plVar9 = (long *)PTR_DAT_04bb2698;
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      local_5a0 = malloc(__size);
    }
    else {
      plVar16 = *(long **)(param_1 + 8);
      if (plVar16 == (long *)0x0) {
        lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar8 + 8);
        if (lVar19 != 0) {
          plVar16 = (long *)(lVar19 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        local_5a0 = (void *)0x0;
        if (plVar16 == (long *)0x0) goto LAB_03b412e8;
      }
      local_5a0 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,__size,0x1000);
    }
LAB_03b412e8:
    *(void **)(param_1 + 0xc88) = local_5a0;
    *(size_t *)(param_1 + 0xc90) = __size;
  }
  local_590 = 1;
  local_5c0 = *(undefined8 *)(param_1 + 0xc68);
  local_578 = 0;
  local_570 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_5b0 = *(undefined8 *)(param_1 + 0xc78);
  local_5d0 = pcVar1;
  local_5c8 = pcVar2;
  sStack_5b8 = sVar12;
  uStack_5a8 = uVar10;
  sStack_598 = __size;
  FUN_003ba554(pcVar17,&local_5d0);
  lVar8 = *plVar9;
  sVar12 = 0x8000;
  if (param_2[10] != 0) {
    sVar12 = param_2[10];
  }
  if (lVar8 == 0) {
    pvVar11 = malloc(sVar12);
  }
  else {
    plVar9 = *(long **)(param_1 + 8);
    if (plVar9 == (long *)0x0) {
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar8 + 8);
      if (lVar19 != 0) {
        plVar9 = (long *)(lVar19 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        pvVar11 = (void *)0x0;
        goto LAB_03b41398;
      }
    }
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,sVar12,0x1000);
  }
LAB_03b41398:
  *(void **)(param_1 + 0xc98) = pvVar11;
  FUN_003e5344(param_1 + 0xbd8,pvVar11,sVar12);
  FUN_003d0c2c(param_1 + 0x90,0x6000000,param_1 + 0xbd8,0xffffffff,0);
LAB_03b413c4:
  uVar7 = nn::audio::ListAudioDeviceName((AudioDeviceName *)&local_5d0,3);
  if (0 < (int)uVar7) {
    uVar10 = (ulong)uVar7;
    do {
      iVar6 = strcmp((char *)__s1,"AudioTvOutput");
      if (iVar6 == 0) {
        puVar13 = &DAT_05aeb720;
LAB_03b41424:
        memcpy(puVar13,__s1,0x100);
      }
      else {
        iVar6 = strcmp((char *)__s1,"AudioStereoJackOutput");
        if (iVar6 == 0) {
LAB_03b4147c:
          puVar13 = &DAT_05aeb820;
          goto LAB_03b41424;
        }
        iVar6 = strcmp((char *)__s1,"AudioBuiltInSpeakerOutput");
        if (iVar6 == 0) {
          puVar13 = &DAT_05aeb920;
          goto LAB_03b41424;
        }
        iVar6 = strcmp((char *)__s1,"AudioExternalOutput");
        if (iVar6 == 0) goto LAB_03b4147c;
      }
      uVar10 = uVar10 - 1;
      __s1 = (char **)((long)__s1 + 0x100);
    } while (uVar10 != 0);
  }
  *param_1 = '\x01';
  return;
}

