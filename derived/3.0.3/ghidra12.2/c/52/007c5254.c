
undefined8 FUN_007c5254(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined *local_60;
  char *pcStack_58;
  
  puVar1 = PTR_DAT_04bb28c8;
  puVar2 = PTR_DAT_04bb2698;
  plVar12 = *(long **)(param_2 + 8);
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar9 = malloc(0x1400000);
joined_r0x007c5308:
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_1 + 200) = pvVar9;
      *(undefined4 *)(param_1 + 0xc0) = 0x1400000;
    }
    uVar11 = *(undefined8 *)puVar1;
    lVar13 = *(long *)puVar2;
    if (lVar13 != 0) {
      if (plVar12 == (long *)0x0) {
LAB_007c531c:
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar10 = (undefined8 *)(lVar13 + 8);
        if (lVar7 != 0) {
          puVar10 = (undefined8 *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*puVar10;
      }
      else {
        plVar8 = plVar12;
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0xd8,8);
      goto LAB_007c5364;
    }
  }
  else {
    plVar8 = plVar12;
    if (plVar12 != (long *)0x0) {
LAB_007c52c4:
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,&LAB_01400000,8);
      goto joined_r0x007c5308;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar13 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_007c52c4;
    uVar11 = *(undefined8 *)puVar1;
    lVar13 = *(long *)puVar2;
    if (lVar13 != 0) goto LAB_007c531c;
  }
  plVar8 = malloc(0xd8);
LAB_007c5364:
  FUN_03f2f3b8(0x3f800000,plVar8,0);
  puVar3 = PTR_DAT_04bb4460;
  plVar8[0x12] = 0;
  puVar6 = PTR_DAT_04bd0df0;
  *(undefined8 *)((long)plVar8 + 0x95) = 0;
  plVar8[0x16] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  *(undefined4 *)(plVar8 + 0x17) = 0;
  *plVar8 = (long)(puVar3 + 0x10);
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x10] = (long)(puVar6 + 0x10);
  plVar8[0x11] = 0;
  puVar1 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  *(undefined4 *)(plVar8 + 0x1a) = 1;
  pcStack_58 = "zs";
  FUN_038d9b80(uVar11,plVar8,&local_60);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    plVar8 = malloc(0xd8);
  }
  else {
    plVar8 = plVar12;
    if (plVar12 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar10 = (undefined8 *)(lVar13 + 8);
      if (lVar7 != 0) {
        puVar10 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar10;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0xd8,8);
  }
  FUN_03f2f3b8(0x3f800000,plVar8,0);
  local_60 = puVar1 + 0x10;
  plVar8[0x16] = 0;
  *plVar8 = (long)(puVar3 + 0x10);
  plVar8[0x10] = (long)(puVar6 + 0x10);
  *(undefined4 *)(plVar8 + 0x1a) = 1;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *(undefined8 *)((long)plVar8 + 0x95) = 0;
  *(undefined4 *)(plVar8 + 0x17) = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  pcStack_58 = "Nin_NX_NVN";
  FUN_038d9b80(uVar11,plVar8,&local_60);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    plVar8 = malloc(0xd8);
  }
  else {
    plVar8 = plVar12;
    if (plVar12 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar10 = (undefined8 *)(lVar13 + 8);
      if (lVar7 != 0) {
        puVar10 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar10;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0xd8,8);
  }
  FUN_03f2f3b8(0x3f800000,plVar8,0);
  local_60 = puVar1 + 0x10;
  plVar8[0x16] = 0;
  *plVar8 = (long)(puVar3 + 0x10);
  plVar8[0x10] = (long)(puVar6 + 0x10);
  *(undefined4 *)(plVar8 + 0x1a) = 1;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *(undefined8 *)((long)plVar8 + 0x95) = 0;
  *(undefined4 *)(plVar8 + 0x17) = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  pcStack_58 = "Nin_Ounce_NVN2";
  FUN_038d9b80(uVar11,plVar8,&local_60);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    plVar8 = malloc(0xd8);
  }
  else {
    plVar8 = plVar12;
    if (plVar12 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar10 = (undefined8 *)(lVar13 + 8);
      if (lVar7 != 0) {
        puVar10 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar10;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0xd8,8);
  }
  FUN_03f2f3b8(0x3f800000,plVar8,0);
  plVar8[0x16] = 0;
  *plVar8 = (long)(puVar3 + 0x10);
  plVar8[0x10] = (long)(puVar6 + 0x10);
  *(undefined4 *)(plVar8 + 0x1a) = 1;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *(undefined8 *)((long)plVar8 + 0x95) = 0;
  *(undefined4 *)(plVar8 + 0x17) = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  pcStack_58 = "bcsvpack";
  local_60 = puVar1 + 0x10;
  FUN_038d9b80(uVar11,plVar8,&local_60);
  pcStack_58 = "bfevfl";
  local_60 = puVar1 + 0x10;
  FUN_038d9b80(uVar11,PTR_DAT_04bb4a28,&local_60);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    plVar8 = malloc(0xb0);
  }
  else {
    plVar8 = plVar12;
    if (plVar12 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar10 = (undefined8 *)(lVar13 + 8);
      if (lVar7 != 0) {
        puVar10 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar10;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0xb0,8);
  }
  FUN_03f2f3b8(0x3f800000,plVar8,0);
  plVar8[0x12] = 0;
  puVar4 = PTR_DAT_04bb4a30;
  *(undefined4 *)(plVar8 + 0x13) = 0;
  puVar5 = PTR_DAT_04bc4350;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  *plVar8 = (long)(puVar4 + 0x10);
  local_60 = puVar1 + 0x10;
  plVar8[0x10] = (long)(puVar5 + 0x10);
  plVar8[0x11] = 0;
  pcStack_58 = "bars";
  FUN_038d9b80(uVar11,plVar8,&local_60);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    plVar8 = malloc(0xd8);
  }
  else {
    plVar8 = plVar12;
    if (plVar12 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar10 = (undefined8 *)(lVar13 + 8);
      if (lVar7 != 0) {
        puVar10 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar10;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0xd8,8);
  }
  FUN_03f2f3b8(0x3f800000,plVar8,0);
  local_60 = puVar1 + 0x10;
  plVar8[0x16] = 0;
  *plVar8 = (long)(puVar3 + 0x10);
  plVar8[0x10] = (long)(puVar6 + 0x10);
  *(undefined4 *)(plVar8 + 0x1a) = 1;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *(undefined8 *)((long)plVar8 + 0x95) = 0;
  *(undefined4 *)(plVar8 + 0x17) = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  pcStack_58 = "barslistpack";
  FUN_038d9b80(uVar11,plVar8,&local_60);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    puVar10 = malloc(200);
  }
  else {
    plVar8 = plVar12;
    if (plVar12 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar10 = (undefined8 *)(lVar13 + 8);
      if (lVar7 != 0) {
        puVar10 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar10;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,200,8);
  }
  FUN_03f2f3b8(0x3f800000,puVar10,0);
  puVar4 = PTR_DAT_04bc3ee0;
  *puVar10 = &PTR_LAB_04914260;
  local_60 = puVar1 + 0x10;
  *(undefined4 *)(puVar10 + 0x13) = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0x14] = 0;
  *(undefined4 *)(puVar10 + 0x15) = 0;
  puVar10[0x16] = 0;
  *(undefined4 *)(puVar10 + 0x17) = 0;
  puVar10[0x18] = 0;
  puVar10[0x10] = puVar4 + 0x10;
  pcStack_58 = "bdli";
  FUN_038d9b80(uVar11,puVar10,&local_60);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    plVar8 = malloc(0xd8);
  }
  else {
    plVar8 = plVar12;
    if (plVar12 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar10 = (undefined8 *)(lVar13 + 8);
      if (lVar7 != 0) {
        puVar10 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar10;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0xd8,8);
  }
  FUN_03f2f3b8(0x3f800000,plVar8,0);
  local_60 = puVar1 + 0x10;
  plVar8[0x16] = 0;
  *plVar8 = (long)(puVar3 + 0x10);
  plVar8[0x10] = (long)(puVar6 + 0x10);
  *(undefined4 *)(plVar8 + 0x1a) = 1;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *(undefined8 *)((long)plVar8 + 0x95) = 0;
  *(undefined4 *)(plVar8 + 0x17) = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  pcStack_58 = "dlarc";
  FUN_038d9b80(uVar11,plVar8,&local_60);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    plVar12 = malloc(0xd8);
  }
  else {
    if (plVar12 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar10 = (undefined8 *)(lVar13 + 8);
      if (lVar7 != 0) {
        puVar10 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar12 = (long *)*puVar10;
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xd8,8);
  }
  FUN_03f2f3b8(0x3f800000,plVar12,0);
  local_60 = puVar1 + 0x10;
  plVar12[0x16] = 0;
  *plVar12 = (long)(puVar3 + 0x10);
  plVar12[0x10] = (long)(puVar6 + 0x10);
  *(undefined4 *)(plVar12 + 0x1a) = 1;
  plVar12[0x11] = 0;
  plVar12[0x12] = 0;
  *(undefined8 *)((long)plVar12 + 0x95) = 0;
  *(undefined4 *)(plVar12 + 0x17) = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x18] = 0;
  plVar12[0x19] = 0;
  pcStack_58 = "sarc";
  FUN_038d9b80(uVar11,plVar12,&local_60);
  return 1;
}

