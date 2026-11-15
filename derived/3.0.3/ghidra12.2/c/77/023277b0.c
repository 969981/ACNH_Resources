
void FUN_023277b0(byte *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  undefined4 local_16ac;
  undefined *local_16a8;
  undefined1 auStack_16a0 [1876];
  uint local_f4c;
  uint local_f48;
  uint local_f44;
  int local_f40;
  undefined *local_f38;
  char *pcStack_f30;
  undefined8 local_f28;
  byte local_7c8 [4];
  byte local_7c4 [4];
  undefined8 local_7c0;
  char *local_7b8;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_2);
  if (*(long *)puVar5 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0 || 7 < *param_1) {
    return;
  }
  uVar6 = FUN_02582d8c(param_1,1);
  puVar4 = PTR_DAT_04bb4fb8;
  puVar5 = PTR_DAT_04bb4f78;
  if (7 < uVar6) {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) == '\0') {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) == '\0') {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) && (*(int *)(lVar12 + 0x80) == 1)) {
    return;
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_f38 = (undefined *)CONCAT44(local_f38._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      return;
    }
  }
  if (((*param_1 < 8) && (uVar6 = FUN_02582d8c(param_1,1), uVar6 < 8)) &&
     ((*(char *)(*(long *)puVar4 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0' &&
      ((*(char *)(*(long *)puVar4 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar8 = FUN_0264a1e0(param_1,param_2), (uVar8 & 1) != 0)))))) goto LAB_02327a4c;
  local_7c4[0] = *param_1;
  if (7 < local_7c4[0]) {
    local_7c4[0] = 0xff;
  }
  lVar12 = FUN_02583354(*(undefined8 *)puVar5,local_7c4,1);
  if (lVar12 == 0) goto LAB_02327a4c;
  lVar13 = lVar12 + 0x194b0;
  if (*(long *)(lVar12 + 0x194b8) == 0) {
    lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  lVar12 = *(long *)(lVar13 + 0x28);
  if (lVar12 == 0) {
    FUN_028135b8(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8),param_1,param_2);
    goto LAB_02327a4c;
  }
  if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
    uVar8 = 0;
LAB_023279ec:
    plVar9 = *(long **)(lVar12 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_f38 = *(undefined **)(lVar13 + 8);
      pcStack_f30 = *(char **)(lVar13 + 0x10);
      local_f28 = 0x3ce60;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_f38);
    }
  }
  else {
    uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
    lVar12 = *(long *)(lVar13 + 0x28);
    uVar8 = uVar8 & 0xffffffff;
    if (lVar12 != 0) goto LAB_023279ec;
  }
  FUN_028135b8(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8),param_1,param_2);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
LAB_02327a4c:
  FUN_02648c90(param_1,param_2,1);
  puVar4 = PTR_DAT_04bb2020;
  local_f38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_f30 = "MainmenuEncyclopedia";
  iVar7 = FUN_0274bce0(param_1,&local_f38);
  if (iVar7 != 0) {
    local_7c8[0] = *param_1;
    if (7 < local_7c8[0]) {
      local_7c8[0] = 0xff;
    }
    lVar12 = FUN_02583354(*(undefined8 *)puVar5,local_7c8,1);
    if (lVar12 != 0) {
      FUN_0264a400(&local_f38,param_1);
      local_16a8 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_16a0,0,0x754);
      uVar6 = nn::os::GetSystemTick();
      local_f4c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 2;
      local_f44 = (local_f48 ^ local_f48 >> 0x1e) * 0x6c078965 + 3;
      local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 4;
      pvVar11 = (void *)FUN_01a451fc(&local_16a8);
      memset(pvVar11,0,0x754);
      local_16ac = 0x6a;
      local_7c0 = &PTR_FUN_049ff448;
      local_7b8 = (char *)&local_16ac;
      FUN_008a1ba0(&local_16a8,&local_7c0);
      pvVar11 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
      lVar13 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
      for (lVar12 = 0;
          *(uint *)(local_7c4 + lVar12 + 4) =
               *(uint *)(lVar13 + lVar12) & *(uint *)((long)pvVar11 + lVar12), lVar12 != 0x750;
          lVar12 = lVar12 + 8) {
        *(uint *)(local_7c4 + lVar12 + 8) =
             *(uint *)(lVar13 + lVar12 + 4) & *(uint *)((long)pvVar11 + lVar12 + 4);
      }
      memcpy(pvVar11,&local_7c0,0x754);
      *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
      lVar13 = (**(code **)(local_f38 + 0x20))(&local_f38);
      lVar12 = 0;
      iVar7 = 0;
      do {
        puVar1 = (uint *)(lVar13 + lVar12);
        lVar12 = lVar12 + 4;
        uVar6 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        iVar7 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar7;
      } while (lVar12 != 0x754);
      local_7c0 = (undefined **)(puVar4 + 0x10);
      local_7b8 = "FillFishList";
      FUN_02799370(param_1,&local_7c0,iVar7);
      FUN_0264a400(&local_f38,param_1);
      local_16a8 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_16a0,0,0x754);
      uVar6 = nn::os::GetSystemTick();
      local_f4c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 2;
      local_f44 = (local_f48 ^ local_f48 >> 0x1e) * 0x6c078965 + 3;
      local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 4;
      pvVar11 = (void *)FUN_01a451fc(&local_16a8);
      memset(pvVar11,0,0x754);
      local_16ac = 0x6b;
      local_7c0 = &PTR_FUN_049ff448;
      local_7b8 = (char *)&local_16ac;
      FUN_008a1ba0(&local_16a8,&local_7c0);
      pvVar11 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
      lVar13 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
      for (lVar12 = 0;
          *(uint *)(local_7c4 + lVar12 + 4) =
               *(uint *)(lVar13 + lVar12) & *(uint *)((long)pvVar11 + lVar12), lVar12 != 0x750;
          lVar12 = lVar12 + 8) {
        *(uint *)(local_7c4 + lVar12 + 8) =
             *(uint *)(lVar13 + lVar12 + 4) & *(uint *)((long)pvVar11 + lVar12 + 4);
      }
      memcpy(pvVar11,&local_7c0,0x754);
      *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
      lVar13 = (**(code **)(local_f38 + 0x20))(&local_f38);
      lVar12 = 0;
      iVar7 = 0;
      do {
        puVar1 = (uint *)(lVar13 + lVar12);
        lVar12 = lVar12 + 4;
        uVar6 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        iVar7 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar7;
      } while (lVar12 != 0x754);
      local_7c0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_7b8 = "FillSeafoodList";
      FUN_02799370(param_1,&local_7c0,iVar7);
      FUN_0264a400(&local_f38,param_1);
      local_16a8 = PTR_DAT_04bbfe60 + 0x10;
      memset(auStack_16a0,0,0x754);
      uVar6 = nn::os::GetSystemTick();
      local_f4c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 2;
      local_f44 = (local_f48 ^ local_f48 >> 0x1e) * 0x6c078965 + 3;
      local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 4;
      pvVar11 = (void *)FUN_01a451fc(&local_16a8);
      memset(pvVar11,0,0x754);
      local_16ac = 0x69;
      local_7c0 = &PTR_FUN_049ff448;
      local_7b8 = (char *)&local_16ac;
      FUN_008a1ba0(&local_16a8,&local_7c0);
      pvVar11 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
      lVar13 = (**(code **)(local_16a8 + 0x20))(&local_16a8);
      for (lVar12 = 0;
          *(uint *)(local_7c4 + lVar12 + 4) =
               *(uint *)(lVar13 + lVar12) & *(uint *)((long)pvVar11 + lVar12), lVar12 != 0x750;
          lVar12 = lVar12 + 8) {
        *(uint *)(local_7c4 + lVar12 + 8) =
             *(uint *)(lVar13 + lVar12 + 4) & *(uint *)((long)pvVar11 + lVar12 + 4);
      }
      memcpy(pvVar11,&local_7c0,0x754);
      *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
      lVar13 = (**(code **)(local_f38 + 0x20))(&local_f38);
      lVar12 = 0;
      iVar7 = 0;
      do {
        puVar1 = (uint *)(lVar13 + lVar12);
        lVar12 = lVar12 + 4;
        uVar6 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        iVar7 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar7;
      } while (lVar12 != 0x754);
      local_7c0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_7b8 = "FillInsectList";
      FUN_02799370(param_1,&local_7c0,iVar7);
    }
  }
  return;
}

