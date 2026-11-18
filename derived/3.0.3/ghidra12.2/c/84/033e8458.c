
void FUN_033e8458(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  byte local_4a;
  undefined4 local_48;
  
  lVar12 = *(long *)(param_1 + 0x98);
  uVar5 = FUN_033fa1e0();
  puVar2 = PTR_DAT_04bb3350;
  lVar8 = *(long *)PTR_DAT_04bb27f8;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(lVar8 + 0xd8) == 5) {
      if (*(long *)PTR_DAT_04bb59d8 == 0) {
        return;
      }
      lVar8 = *(long *)PTR_DAT_04bb2720;
      if (lVar8 == 0) {
        puVar11 = &DAT_055c04a0;
      }
      else {
        puVar11 = &DAT_055c04a0;
        if (*(long *)(lVar8 + 0x330) != 0) {
          puVar11 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
          iVar4 = FUN_006bd550(*puVar11,0);
          puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar11 = &DAT_055c04a0;
          }
        }
      }
      if (*(int *)(puVar11 + 7) != -0x6efba09b) {
        return;
      }
      local_4a = *(byte *)(param_1 + 0x1f8);
      if (7 < local_4a) {
        local_4a = 0xff;
      }
      local_58 = PTR_DAT_04bc39b0 + 0x10;
      local_50 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
      local_4c = 1;
      local_48 = 0xffffffff;
      lVar8 = *(long *)(lVar12 + 0xb8);
      local_68 = PTR_DAT_04bb2020 + 0x10;
      pcStack_60 = "PartnerTheme";
      if (lVar8 == 0) {
        lVar13 = 1;
        lVar8 = *(long *)PTR_DAT_04bb2698;
        if (lVar8 != 0) {
LAB_033e8ca4:
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar7 = (long *)(lVar8 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)0x0;
            goto LAB_033e8cf4;
          }
          goto LAB_033e8cd0;
        }
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar13 = *(long *)(lVar6 + 0xa8);
        *(long *)(lVar6 + 0xa8) = lVar8;
        lVar8 = *(long *)PTR_DAT_04bb2698;
        if (lVar8 != 0) {
          plVar7 = *(long **)(lVar12 + 0xb8);
          if (plVar7 == (long *)0x0) goto LAB_033e8ca4;
LAB_033e8cd0:
          plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x220,8);
          goto LAB_033e8cf4;
        }
      }
      plVar7 = malloc(0x220);
LAB_033e8cf4:
      FUN_03868244(plVar7,&local_68,&local_58);
      puVar2 = PTR_DAT_04bd4738;
      plVar7[0x37] = 0xffffffff;
      plVar7[0x38] = 0xffffffff;
      *(undefined2 *)(plVar7 + 0x39) = 0;
      *(undefined4 *)(plVar7 + 0x3a) = 0;
      plVar7[0x3b] = 0;
      *(undefined4 *)(plVar7 + 0x3c) = 0;
      *(undefined2 *)(plVar7 + 0x40) = 0;
      *(undefined1 *)((long)plVar7 + 0x202) = 0;
      plVar7[0x41] = 0;
      plVar7[0x35] = (long)(puVar2 + 0x10);
      plVar7[0x36] = 0xffffffff;
      bVar9 = local_4a;
      if (7 < local_4a) {
        bVar9 = 0xff;
      }
      *(byte *)(plVar7 + 0x3f) = bVar9;
      *(undefined4 *)((long)plVar7 + 0x1fc) = local_48;
      puVar2 = PTR_DAT_04bc9ac8;
      plVar7[0x3d] = 0;
      plVar7[0x3e] = -1;
      plVar7[0x42] = 0;
      *(undefined1 *)(plVar7 + 0x43) = 0;
      *plVar7 = (long)(puVar2 + 0x10);
      nn::os::LockMutex((MutexType *)(param_1 + 0x188));
      plVar10 = (long *)(param_1 + 0x50);
      lVar8 = *plVar10;
      plVar1 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
      *plVar10 = (long)plVar1;
      *plVar1 = lVar8;
      plVar1[1] = (long)plVar10;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar1;
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      plVar7[9] = param_1;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
      plVar7[0x13] = lVar12;
      *(undefined4 *)(plVar7 + 0x15) = 1;
      FUN_0386890c(plVar7,&local_58);
      *(undefined4 *)(plVar7 + 0x15) = 2;
      (**(code **)(*plVar7 + 0x48))(plVar7);
      if (lVar13 != 1) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        *(long *)(lVar8 + 0xa8) = lVar13;
      }
      *(long **)(param_1 + 0x218) = plVar7;
      return;
    }
    local_4a = *(byte *)(param_1 + 0x1f8);
    if (7 < local_4a) {
      local_4a = 0xff;
    }
    local_58 = PTR_DAT_04bc39b0 + 0x10;
    local_50 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_4c = 1;
    local_48 = 0xffffffff;
    lVar8 = *(long *)(lVar12 + 0xb8);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "FacilityTheme";
    if (lVar8 == 0) {
      lVar13 = 1;
      lVar8 = *(long *)PTR_DAT_04bb2698;
      if (lVar8 != 0) {
LAB_033e88cc:
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        plVar7 = (long *)(lVar8 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
          goto LAB_033e8914;
        }
        goto LAB_033e88f0;
      }
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar13 = *(long *)(lVar6 + 0xa8);
      *(long *)(lVar6 + 0xa8) = lVar8;
      lVar8 = *(long *)PTR_DAT_04bb2698;
      if (lVar8 != 0) {
        plVar7 = *(long **)(lVar12 + 0xb8);
        if (plVar7 == (long *)0x0) goto LAB_033e88cc;
LAB_033e88f0:
        plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x5e8,8);
        goto LAB_033e8914;
      }
    }
    plVar7 = malloc(0x5e8);
LAB_033e8914:
    FUN_03868244(plVar7,&local_68,&local_58);
    puVar3 = PTR_DAT_04bd4738;
    plVar7[0x37] = 0xffffffff;
    plVar7[0x38] = 0xffffffff;
    *(undefined2 *)(plVar7 + 0x39) = 0;
    *(undefined4 *)(plVar7 + 0x3a) = 0;
    plVar7[0x3b] = 0;
    *(undefined4 *)(plVar7 + 0x3c) = 0;
    *(undefined2 *)(plVar7 + 0x40) = 0;
    *(undefined1 *)((long)plVar7 + 0x202) = 0;
    plVar7[0x41] = 0;
    plVar7[0x35] = (long)(puVar3 + 0x10);
    plVar7[0x36] = 0xffffffff;
    bVar9 = local_4a;
    if (7 < local_4a) {
      bVar9 = 0xff;
    }
    *(byte *)(plVar7 + 0x3f) = bVar9;
    *(undefined4 *)((long)plVar7 + 0x1fc) = local_48;
    puVar3 = PTR_DAT_04bc9a38;
    plVar7[0x3d] = 0;
    plVar7[0x3e] = -1;
    plVar7[0x43] = 0;
    plVar7[0x42] = 0;
    *plVar7 = (long)(puVar3 + 0x10);
    FUN_01beb8d0(plVar7 + 0x44);
    *(undefined1 *)(plVar7 + 0xbc) = 0;
    plVar7[0xbb] = 0;
    nn::os::LockMutex((MutexType *)(param_1 + 0x188));
    plVar10 = (long *)(param_1 + 0x50);
    lVar8 = *plVar10;
    plVar1 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
    *plVar10 = (long)plVar1;
    *plVar1 = lVar8;
    plVar1[1] = (long)plVar10;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar1;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    plVar7[9] = param_1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
    plVar7[0x13] = lVar12;
    *(undefined4 *)(plVar7 + 0x15) = 1;
    FUN_0386890c(plVar7,&local_58);
    *(undefined4 *)(plVar7 + 0x15) = 2;
    (**(code **)(*plVar7 + 0x48))(plVar7);
    if (lVar13 != 1) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      *(long *)(lVar8 + 0xa8) = lVar13;
    }
    *(long **)(param_1 + 0x220) = plVar7;
    return;
  }
  if (((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)
      ) || ((*(int *)(lVar8 + 0x14) != 4 && (*(int *)(lVar8 + 0x14) != 5)))) {
    local_4a = *(byte *)(param_1 + 0x1f8);
    if (7 < local_4a) {
      local_4a = 0xff;
    }
    local_58 = PTR_DAT_04bc39b0 + 0x10;
    local_50 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_4c = 1;
    local_48 = 0xffffffff;
    lVar8 = *(long *)(lVar12 + 0xb8);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "NpcTheme";
    if (lVar8 == 0) {
      lVar13 = 1;
      lVar8 = *(long *)PTR_DAT_04bb2698;
      if (lVar8 != 0) {
LAB_033e8a4c:
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar8 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
          goto LAB_033e8a9c;
        }
        goto LAB_033e8a78;
      }
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar13 = *(long *)(lVar6 + 0xa8);
      *(long *)(lVar6 + 0xa8) = lVar8;
      lVar8 = *(long *)PTR_DAT_04bb2698;
      if (lVar8 != 0) {
        plVar7 = *(long **)(lVar12 + 0xb8);
        if (plVar7 == (long *)0x0) goto LAB_033e8a4c;
LAB_033e8a78:
        plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x220,8);
        goto LAB_033e8a9c;
      }
    }
    plVar7 = malloc(0x220);
LAB_033e8a9c:
    FUN_03868244(plVar7,&local_68,&local_58);
    puVar2 = PTR_DAT_04bd4738;
    plVar7[0x37] = 0xffffffff;
    plVar7[0x38] = 0xffffffff;
    *(undefined2 *)(plVar7 + 0x39) = 0;
    *(undefined4 *)(plVar7 + 0x3a) = 0;
    plVar7[0x3b] = 0;
    *(undefined4 *)(plVar7 + 0x3c) = 0;
    *(undefined2 *)(plVar7 + 0x40) = 0;
    *(undefined1 *)((long)plVar7 + 0x202) = 0;
    plVar7[0x41] = 0;
    plVar7[0x35] = (long)(puVar2 + 0x10);
    plVar7[0x36] = 0xffffffff;
    bVar9 = local_4a;
    if (7 < local_4a) {
      bVar9 = 0xff;
    }
    *(byte *)(plVar7 + 0x3f) = bVar9;
    *(undefined4 *)((long)plVar7 + 0x1fc) = local_48;
    puVar2 = PTR_DAT_04bc9a68;
    plVar7[0x3d] = 0;
    plVar7[0x3e] = -1;
    plVar7[0x42] = 0;
    *(undefined1 *)(plVar7 + 0x43) = 0;
    *plVar7 = (long)(puVar2 + 0x10);
    nn::os::LockMutex((MutexType *)(param_1 + 0x188));
    plVar10 = (long *)(param_1 + 0x50);
    lVar8 = *plVar10;
    plVar1 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
    *plVar10 = (long)plVar1;
    *plVar1 = lVar8;
    plVar1[1] = (long)plVar10;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar1;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    plVar7[9] = param_1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
    plVar7[0x13] = lVar12;
    *(undefined4 *)(plVar7 + 0x15) = 1;
    FUN_0386890c(plVar7,&local_58);
    *(undefined4 *)(plVar7 + 0x15) = 2;
    (**(code **)(*plVar7 + 0x48))(plVar7);
    if (lVar13 != 1) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      *(long *)(lVar8 + 0xa8) = lVar13;
    }
    *(long **)(param_1 + 0x228) = plVar7;
    return;
  }
  local_4a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_4a) {
    local_4a = 0xff;
  }
  local_58 = PTR_DAT_04bc39b0 + 0x10;
  local_50 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_4c = 1;
  local_48 = 0xffffffff;
  lVar8 = *(long *)(lVar12 + 0xb8);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "NpcThemeStart";
  if (lVar8 == 0) {
    lVar13 = 1;
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 != 0) {
LAB_033e874c:
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar8 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_033e879c;
      }
      goto LAB_033e8778;
    }
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar8;
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 != 0) {
      plVar7 = *(long **)(lVar12 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_033e874c;
LAB_033e8778:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x220,8);
      goto LAB_033e879c;
    }
  }
  plVar7 = malloc(0x220);
LAB_033e879c:
  FUN_03868244(plVar7,&local_68,&local_58);
  puVar2 = PTR_DAT_04bd4738;
  plVar7[0x37] = 0xffffffff;
  plVar7[0x38] = 0xffffffff;
  *(undefined2 *)(plVar7 + 0x39) = 0;
  *(undefined4 *)(plVar7 + 0x3a) = 0;
  plVar7[0x3b] = 0;
  *(undefined4 *)(plVar7 + 0x3c) = 0;
  *(undefined2 *)(plVar7 + 0x40) = 0;
  *(undefined1 *)((long)plVar7 + 0x202) = 0;
  plVar7[0x41] = 0;
  plVar7[0x35] = (long)(puVar2 + 0x10);
  plVar7[0x36] = 0xffffffff;
  bVar9 = local_4a;
  if (7 < local_4a) {
    bVar9 = 0xff;
  }
  *(byte *)(plVar7 + 0x3f) = bVar9;
  *(undefined4 *)((long)plVar7 + 0x1fc) = local_48;
  puVar2 = PTR_DAT_04bc9a98;
  plVar7[0x3d] = 0;
  plVar7[0x3e] = -1;
  plVar7[0x42] = 0;
  *(undefined1 *)(plVar7 + 0x43) = 0;
  *plVar7 = (long)(puVar2 + 0x10);
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  plVar10 = (long *)(param_1 + 0x50);
  lVar8 = *plVar10;
  plVar1 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar7);
  *plVar10 = (long)plVar1;
  *plVar1 = lVar8;
  plVar1[1] = (long)plVar10;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar1;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar7[9] = param_1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  plVar7[0x13] = lVar12;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_58);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  if (lVar13 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar13;
  }
  *(long **)(param_1 + 0x210) = plVar7;
  return;
}

