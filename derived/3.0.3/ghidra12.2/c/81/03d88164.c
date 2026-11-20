
void FUN_03d88164(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  FUN_03c11314(param_1,param_2,"UIMgr");
  *param_1 = &PTR_FUN_04b92c58;
  FUN_038e18e4(param_1 + 0x45);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((long)param_1 + 0x26c) = 0;
  FUN_038e3114(param_1 + 0x4e,0,0x7fff);
  *(undefined4 *)(param_1 + 0x57) = 0;
  FUN_038e3114(param_1 + 0x58,0,0x7fff);
  puVar6 = param_1 + 0x65;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = puVar6;
  param_1[0x6e] = PTR_DAT_04bb2020 + 0x10;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x6f] = &DAT_0407ebb1;
  param_1[0x66] = 0;
  param_1[0x65] = puVar1;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  if (*(long *)puVar1 != 0) {
    lVar5 = FUN_038cb610(*(long *)puVar1,puVar6);
    param_1[0x66] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar12 = (long *)(lVar5 + 0x70);
      lVar11 = *plVar12;
      plVar4 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)puVar6);
      *plVar12 = (long)plVar4;
      *plVar4 = lVar11;
      plVar4[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar4;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  param_1[0x76] = 0;
  puVar2 = PTR_DAT_04bb24a8;
  param_1[0x77] = 0;
  puVar3 = PTR_DAT_04bb24b0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x65] = puVar2 + 0x10;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  param_1[0x70] = puVar3 + 0x10;
  FUN_038e18e4(param_1 + 0x78);
  param_1[0x86] = 0;
  param_1[0x87] = &PTR_LAB_04b92d30;
  param_1[0x8c] = 0x2000000000;
  param_1[0x8b] = param_1 + 0x8a;
  param_1[0x91] = param_1 + 0x90;
  param_1[0x90] = param_1 + 0x90;
  param_1[0x94] = param_1 + 0x93;
  param_1[0x93] = param_1 + 0x93;
  param_1[0x8a] = param_1 + 0x8a;
  param_1[0x97] = param_1 + 0x96;
  param_1[0x96] = param_1 + 0x96;
  param_1[0x89] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0x800000000;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9a] = param_1 + 0x99;
  param_1[0x99] = param_1 + 0x99;
  puVar2 = PTR_DAT_04bd40a0 + 0x10;
  *(undefined4 *)((long)param_1 + 0x4dc) = 0;
  param_1[0x8d] = puVar2;
  plVar4 = DAT_05af83f8;
  puVar2 = PTR_DAT_04bb2d80 + 0x10;
  *(undefined1 *)((long)param_1 + 0x504) = 0;
  param_1[0xa2] = 0;
  param_1[0x9c] = puVar2;
  if (param_1[0x74] == 0) {
    param_1[0x71] = param_1;
    param_1[0x72] = FUN_03d887bc;
    param_1[0x73] = 0;
    param_1[0x70] = &PTR_LAB_04b92de0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x74] + 0x20));
    param_1[0x72] = FUN_03d887bc;
    param_1[0x71] = param_1;
    param_1[0x73] = 0;
    param_1[0x70] = &PTR_LAB_04b92de0;
    if (param_1[0x74] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x74] + 0x20));
    }
  }
  lVar5 = *(long *)puVar1;
  param_1[0x6f] = "UIMgr::PreCalc";
  puVar2 = PTR_DAT_04bb3350;
  if (lVar5 == 0) {
    puVar6 = malloc(0x860);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar12 = (long *)(lVar5 + 8);
    if (lVar13 != 0) {
      plVar12 = (long *)(lVar13 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x860,8);
    }
  }
  FUN_038e1bac(puVar6 + 3,0);
  *(undefined4 *)(puVar6 + 9) = 0;
  *(undefined4 *)(puVar6 + 0x10a) = 0;
  *(undefined4 *)(puVar6 + 0x10b) = 0;
  memset(puVar6 + 10,0,0x800);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 0x10a) = 0xf0000;
  *(undefined4 *)((long)puVar6 + 0x854) = 0;
  *(undefined4 *)(puVar6 + 0x10b) = 0;
  param_1[0x84] = puVar6;
  FUN_03d89814();
  FUN_03cbb634();
  (**(code **)(*plVar4 + 0x10))(plVar4);
  uVar7 = (**(code **)(*plVar4 + 0x20))(plVar4);
  lVar5 = *(long *)puVar1;
  *(undefined8 *)PTR_DAT_04bd4508 = uVar7;
  if (lVar5 == 0) {
    puVar8 = malloc(0x80);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar12 = (long *)(lVar5 + 8);
    if (lVar13 != 0) {
      plVar12 = (long *)(lVar13 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      puVar8 = (undefined1 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x80,8);
    }
  }
  *puVar8 = 0;
  *(undefined1 **)(puVar8 + 8) = puVar8 + 8;
  *(undefined1 **)(puVar8 + 0x10) = puVar8 + 8;
  *(undefined8 *)(puVar8 + 0x38) = 0;
  *(undefined1 **)(puVar8 + 0x28) = puVar8 + 0x20;
  *(undefined8 *)(puVar8 + 0x30) = 0x800000000;
  *(undefined8 *)(puVar8 + 0x18) = 0x800000000;
  *(undefined1 **)(puVar8 + 0x20) = puVar8 + 0x20;
  FUN_038e18e4(puVar8 + 0x40);
  param_1[0xa1] = puVar8;
  FUN_03b1eba0(0);
  uVar7 = (**(code **)(*plVar4 + 0x50))(plVar4);
  param_1[0x88] = uVar7;
  uVar7 = (**(code **)(*plVar4 + 0x58))(plVar4);
  lVar5 = *(long *)puVar1;
  param_1[0x83] = uVar7;
  if (lVar5 == 0) {
    pvVar9 = malloc(0xd8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar5 + 8);
    if (lVar13 != 0) {
      puVar6 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar9 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0xd8,8);
  }
  FUN_03d4e3e8();
  param_1[0x80] = pvVar9;
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    plVar12 = malloc(0x20);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar12 = (long *)(lVar5 + 8);
    if (lVar13 != 0) {
      plVar12 = (long *)(lVar13 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x20,8);
    }
  }
  puVar3 = PTR_DAT_04bd4560 + 0x10;
  plVar12[2] = 0;
  plVar12[3] = 0;
  *plVar12 = (long)puVar3;
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    plVar10 = malloc(0x38);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar5 + 8);
    if (lVar13 != 0) {
      puVar6 = (undefined8 *)(lVar13 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x38,8);
  }
  *(undefined4 *)(plVar10 + 4) = 0;
  plVar10[2] = (long)(plVar10 + 1);
  plVar10[3] = 0x2000000000;
  plVar10[5] = 0;
  *(undefined1 *)(plVar10 + 6) = 1;
  *plVar10 = (long)(PTR_DAT_04bd4568 + 0x10);
  plVar10[1] = (long)(plVar10 + 1);
  plVar12[1] = (long)plVar10;
  param_1[0x81] = plVar12;
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    pvVar9 = malloc(0x18);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar5 + 8);
    if (lVar13 != 0) {
      puVar6 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar9 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x18,8);
  }
  *(void **)pvVar9 = pvVar9;
  lVar5 = *(long *)puVar1;
  *(void **)((long)pvVar9 + 8) = pvVar9;
  *(undefined8 *)((long)pvVar9 + 0x10) = 0x2000000000;
  param_1[0x82] = pvVar9;
  if (lVar5 == 0) {
    plVar12 = malloc(0x28);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar5 + 8);
    if (lVar13 != 0) {
      puVar6 = (undefined8 *)(lVar13 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x28,8);
  }
  puVar1 = PTR_DAT_04bd46a0;
  plVar12[2] = 0;
  plVar12[4] = 0;
  *plVar12 = (long)(puVar1 + 0x10);
  plVar12[1] = 0;
  *(undefined4 *)(plVar12 + 3) = 0x3f800000;
  param_1[0x85] = plVar12;
  (**(code **)(*plVar4 + 0x118))(plVar4);
  FUN_03c887f8();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)((long)param_1 + 0x504) = 0;
  return;
}

