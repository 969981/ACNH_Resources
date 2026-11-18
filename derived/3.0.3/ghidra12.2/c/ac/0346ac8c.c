
void FUN_0346ac8c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  byte bVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*param_1 != 0) {
    return;
  }
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    pvVar8 = malloc(0x110);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar14 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x110,8);
  }
  puVar4 = PTR_DAT_04bb2020;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "Videogame";
  FUN_0386a3a0(pvVar8,&local_78);
  plVar7 = (long *)*param_1;
  *param_1 = (long)pvVar8;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  lVar14 = *(long *)puVar2;
  if (lVar14 == 0) {
    pvVar8 = malloc(0x18);
joined_r0x0346add8:
    if (pvVar8 != (void *)0x0) {
      param_1[2] = (long)pvVar8;
      *(undefined4 *)(param_1 + 1) = 3;
    }
    lVar14 = *param_1;
    *(undefined4 *)(lVar14 + 0xc0) = 1;
    if (param_2 == (long *)0x0) goto LAB_0346adec;
  }
  else {
    plVar7 = param_2;
    if (param_2 != (long *)0x0) {
LAB_0346ad98:
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x18,8);
      goto joined_r0x0346add8;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar14 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_0346ad98;
    lVar14 = *param_1;
    *(undefined4 *)(lVar14 + 0xc0) = 1;
LAB_0346adec:
    lVar13 = *(long *)puVar2;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_2 = (long *)(lVar13 + 8);
    if (lVar6 != 0) {
      param_2 = (long *)(lVar6 + 0xa8);
    }
    param_2 = (long *)*param_2;
  }
  uVar9 = FUN_038c6d48(0,lVar14 + 0xa0,param_2,8,1,0);
  puVar5 = PTR_DAT_04bc39b0;
  puVar1 = PTR_DAT_04bb2718;
  *(undefined8 *)(lVar14 + 0xb8) = uVar9;
  lVar6 = *param_1;
  local_78 = puVar5 + 0x10;
  lVar14 = *(long *)(lVar6 + 0xb8);
  local_70 = (char *)CONCAT17(local_70._7_1_,0xff000000000000);
  local_70 = (char *)CONCAT26(local_70._6_2_,0x100000000);
  local_68 = 0xffffffff;
  local_88 = puVar4 + 0x10;
  local_70 = (char *)CONCAT44(local_70._4_4_,
                              *(undefined4 *)(*(long *)(*(long *)puVar1 + 0x418) + 0xc));
  local_80 = "Back";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar2;
    lVar13 = 1;
    if (lVar14 == 0) goto LAB_0346af14;
LAB_0346aed0:
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar14 + 8);
    if (lVar10 != 0) {
      plVar7 = (long *)(lVar10 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_0346aefc;
    plVar7 = (long *)0x0;
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar10 + 0xa8);
    *(long *)(lVar10 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar2;
    if (lVar14 == 0) {
LAB_0346af14:
      plVar7 = malloc(0x220);
    }
    else {
      plVar7 = *(long **)(lVar6 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_0346aed0;
LAB_0346aefc:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x220,8);
    }
  }
  FUN_03868244(plVar7,&local_88,&local_78);
  puVar4 = PTR_DAT_04bd4738;
  *(undefined2 *)(plVar7 + 0x39) = 0;
  *(undefined4 *)(plVar7 + 0x3a) = 0;
  plVar7[0x3b] = 0;
  plVar7[0x37] = 0xffffffff;
  plVar7[0x38] = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x3c) = 0;
  *(undefined2 *)(plVar7 + 0x40) = 0;
  *(undefined1 *)((long)plVar7 + 0x202) = 0;
  plVar7[0x41] = 0;
  plVar7[0x35] = (long)(puVar4 + 0x10);
  plVar7[0x36] = 0xffffffff;
  bVar11 = local_70._6_1_;
  if (7 < local_70._6_1_) {
    bVar11 = 0xff;
  }
  *(byte *)(plVar7 + 0x3f) = bVar11;
  *(undefined4 *)((long)plVar7 + 0x1fc) = local_68;
  puVar1 = PTR_DAT_04bc9d50;
  plVar7[0x3d] = 0;
  plVar7[0x3e] = -1;
  plVar7[0x42] = 0;
  *(undefined4 *)(plVar7 + 0x43) = 0;
  *(undefined1 *)((long)plVar7 + 0x21c) = 0;
  plVar7[0x13] = lVar6;
  *plVar7 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  nn::os::LockMutex((MutexType *)(lVar6 + 0xf0));
  plVar12 = (long *)(lVar6 + 0x40);
  lVar14 = *plVar12;
  plVar3 = (long *)((long)*(int *)(lVar6 + 0x54) + (long)plVar7);
  *plVar12 = (long)plVar3;
  *plVar3 = lVar14;
  plVar3[1] = (long)plVar12;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar3;
  }
  *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0xf0));
  if (lVar13 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar13;
  }
  local_78 = puVar5 + 0x10;
  *(long **)param_1[2] = plVar7;
  lVar6 = *param_1;
  local_70 = (char *)CONCAT17(local_70._7_1_,0xff000000000000);
  local_68 = 0xffffffff;
  local_70 = (char *)CONCAT26(local_70._6_2_,0x100000000);
  lVar14 = *(long *)(lVar6 + 0xb8);
  local_70 = (char *)CONCAT44(local_70._4_4_,
                              *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc));
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "KeyGuide";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar2;
    lVar13 = 1;
    if (lVar14 == 0) goto LAB_0346b114;
LAB_0346b0d0:
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar14 + 8);
    if (lVar10 != 0) {
      plVar7 = (long *)(lVar10 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_0346b0fc;
    plVar7 = (long *)0x0;
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar10 + 0xa8);
    *(long *)(lVar10 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar2;
    if (lVar14 == 0) {
LAB_0346b114:
      plVar7 = malloc(0x218);
    }
    else {
      plVar7 = *(long **)(lVar6 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_0346b0d0;
LAB_0346b0fc:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x218,8);
    }
  }
  FUN_03868244(plVar7,&local_88,&local_78);
  *(undefined2 *)(plVar7 + 0x39) = 0;
  plVar7[0x35] = (long)(puVar4 + 0x10);
  plVar7[0x36] = 0xffffffff;
  plVar7[0x37] = 0xffffffff;
  plVar7[0x38] = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x3a) = 0;
  bVar11 = local_70._6_1_;
  if (7 < local_70._6_1_) {
    bVar11 = 0xff;
  }
  plVar7[0x3b] = 0;
  *(undefined4 *)(plVar7 + 0x3c) = 0;
  *(undefined2 *)(plVar7 + 0x40) = 0;
  *(undefined1 *)((long)plVar7 + 0x202) = 0;
  plVar7[0x41] = 0;
  *(byte *)(plVar7 + 0x3f) = bVar11;
  *(undefined4 *)((long)plVar7 + 0x1fc) = local_68;
  plVar7[0x3d] = 0;
  plVar7[0x3e] = -1;
  puVar1 = PTR_DAT_04bc9db0 + 0x10;
  plVar7[0x42] = 0;
  plVar7[0x13] = lVar6;
  *plVar7 = (long)puVar1;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  nn::os::LockMutex((MutexType *)(lVar6 + 0xf0));
  plVar12 = (long *)(lVar6 + 0x40);
  lVar14 = *plVar12;
  plVar3 = (long *)((long)*(int *)(lVar6 + 0x54) + (long)plVar7);
  *plVar12 = (long)plVar3;
  *plVar3 = lVar14;
  plVar3[1] = (long)plVar12;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar3;
  }
  *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0xf0));
  if (lVar13 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar13;
  }
  *(long **)(param_1[2] + (ulong)(1 < *(uint *)(param_1 + 1)) * 8) = plVar7;
  local_78 = puVar5 + 0x10;
  lVar6 = *param_1;
  local_70 = (char *)CONCAT17(local_70._7_1_,0xff000000000000);
  lVar14 = *(long *)(lVar6 + 0xb8);
  local_70 = (char *)CONCAT26(local_70._6_2_,0x100000000);
  local_68 = 0xffffffff;
  local_70 = (char *)CONCAT44(local_70._4_4_,
                              *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc));
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "Fade";
  if (lVar14 == 0) {
    lVar14 = *(long *)puVar2;
    lVar13 = 1;
    if (lVar14 != 0) {
LAB_0346b2c8:
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar14 + 8);
      if (lVar10 != 0) {
        plVar7 = (long *)(lVar10 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_0346b318;
      }
      goto LAB_0346b2f4;
    }
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar10 + 0xa8);
    *(long *)(lVar10 + 0xa8) = lVar14;
    lVar14 = *(long *)puVar2;
    if (lVar14 != 0) {
      plVar7 = *(long **)(lVar6 + 0xb8);
      if (plVar7 == (long *)0x0) goto LAB_0346b2c8;
LAB_0346b2f4:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x218,8);
      goto LAB_0346b318;
    }
  }
  plVar7 = malloc(0x218);
LAB_0346b318:
  FUN_03868244(plVar7,&local_88,&local_78);
  *(undefined2 *)(plVar7 + 0x39) = 0;
  plVar7[0x35] = (long)(puVar4 + 0x10);
  plVar7[0x36] = 0xffffffff;
  plVar7[0x37] = 0xffffffff;
  plVar7[0x38] = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x3a) = 0;
  bVar11 = local_70._6_1_;
  if (7 < local_70._6_1_) {
    bVar11 = 0xff;
  }
  plVar7[0x3b] = 0;
  *(undefined4 *)(plVar7 + 0x3c) = 0;
  *(undefined2 *)(plVar7 + 0x40) = 0;
  *(undefined1 *)((long)plVar7 + 0x202) = 0;
  plVar7[0x41] = 0;
  *(byte *)(plVar7 + 0x3f) = bVar11;
  *(undefined4 *)((long)plVar7 + 0x1fc) = local_68;
  plVar7[0x3d] = 0;
  plVar7[0x3e] = -1;
  puVar2 = PTR_DAT_04bc9d80 + 0x10;
  plVar7[0x42] = 0;
  plVar7[0x13] = lVar6;
  *plVar7 = (long)puVar2;
  *(undefined4 *)(plVar7 + 0x15) = 1;
  FUN_0386890c(plVar7,&local_78);
  *(undefined4 *)(plVar7 + 0x15) = 2;
  (**(code **)(*plVar7 + 0x48))(plVar7);
  nn::os::LockMutex((MutexType *)(lVar6 + 0xf0));
  plVar12 = (long *)(lVar6 + 0x40);
  lVar14 = *plVar12;
  plVar3 = (long *)((long)*(int *)(lVar6 + 0x54) + (long)plVar7);
  *plVar12 = (long)plVar3;
  *plVar3 = lVar14;
  plVar3[1] = (long)plVar12;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar3;
  }
  *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0xf0));
  if (lVar13 != 1) {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar14 + 0xa8) = lVar13;
  }
  *(long **)(param_1[2] + (ulong)(2 < *(uint *)(param_1 + 1)) * 0x10) = plVar7;
  lVar14 = *param_1;
  *(undefined4 *)(lVar14 + 0xc0) = 2;
  (**(code **)(**(long **)(lVar14 + 0xb8) + 0x28))();
  return;
}

