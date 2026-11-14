
void FUN_01dcf540(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *local_60;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  plVar13 = *(long **)(*(long *)PTR_DAT_04bb36f8 + 8);
  *(undefined8 *)(param_1 + 0x100) = 0xffffffff;
  puVar1 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    pvVar5 = malloc(0xa8);
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar14 + 8);
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*puVar7;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0xa8,8);
  }
  FUN_01d705b4();
  *(void **)(param_1 + 0xd8) = pvVar5;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    pvVar5 = malloc(0x48);
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar14 + 8);
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*puVar7;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x48,8);
  }
  FUN_01d6f7fc();
  *(void **)(param_1 + 0xe0) = pvVar5;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    pvVar5 = malloc(0x48);
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar14 + 8);
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*puVar7;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x48,8);
  }
  FUN_01d6e634();
  *(void **)(param_1 + 0xe8) = pvVar5;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    pvVar5 = malloc(0xa8);
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar14 + 8);
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*puVar7;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0xa8,8);
  }
  FUN_01d705b4();
  *(void **)(param_1 + 0xf0) = pvVar5;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    plVar4 = malloc(0x48);
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar14 + 8);
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*puVar7;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x48,8);
  }
  *(undefined2 *)((long)plVar4 + 0x3c) = 0;
  *(undefined2 *)((long)plVar4 + 0x14) = 0;
  *(undefined4 *)(plVar4 + 2) = 0x15;
  puVar2 = PTR_DAT_04bb4c98;
  *(undefined1 *)(plVar4 + 8) = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[1] = (long)plVar4 + 0x14;
  *(long **)(param_1 + 0xf8) = plVar4;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    pvVar5 = malloc(0x490);
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar14 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_01dcf7fc;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x490,8);
  }
LAB_01dcf7fc:
  *(undefined8 *)((long)pvVar5 + 0x20) = 0;
  *(undefined8 *)((long)pvVar5 + 0x19) = 0;
  *(undefined8 *)((long)pvVar5 + 0x11) = 0;
  *(undefined8 *)((long)pvVar5 + 9) = 0;
  *(undefined8 *)((long)pvVar5 + 0x2a) = 0;
  *(undefined8 *)((long)pvVar5 + 0x32) = 0;
  *(undefined8 *)((long)pvVar5 + 0x3a) = 0;
  *(undefined8 *)((long)pvVar5 + 0x42) = 0;
  *(undefined8 *)((long)pvVar5 + 0x4a) = 0;
  *(undefined8 *)((long)pvVar5 + 0x52) = 0;
  *(undefined8 *)((long)pvVar5 + 0x5a) = 0;
  *(undefined8 *)((long)pvVar5 + 0x5f) = 0;
  *(undefined8 *)((long)pvVar5 + 0x80) = 0;
  memset((void *)((long)pvVar5 + 0x90),0,0x400);
  *(void **)(param_1 + 0xa0) = pvVar5;
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    puVar6 = malloc(0x20);
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar14 + 8);
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*puVar7;
    }
    puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
  *puVar6 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 **)(puVar6 + 4) = puVar6 + 2;
  *(undefined8 *)(puVar6 + 6) = 0x2000000000;
  *(undefined4 **)(puVar6 + 2) = puVar6 + 2;
  *(undefined4 **)(param_1 + 0x60) = puVar6;
  FUN_01d6e9b0(*(undefined8 *)(param_1 + 0xe8),0x78,plVar13);
  FUN_01d70ad0(*(undefined8 *)(param_1 + 0xf0),4000,plVar13);
  FUN_01d70ad0(*(undefined8 *)(param_1 + 0xd8),200,plVar13);
  FUN_01d6fbc0(*(undefined8 *)(param_1 + 0xe0),0x14,200,plVar13);
  lVar14 = *(long *)puVar1;
  local_58 = (char *)0x400;
  uStack_50 = 0x1000;
  uStack_44 = *(undefined4 *)(param_1 + 0x4c);
  local_48 = 0x100;
  local_60 = plVar13;
  if (lVar14 == 0) {
    pvVar5 = malloc(0x3a440);
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar14 + 8);
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*puVar7;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x3a440,8);
  }
  FUN_006ddca0();
  *(void **)(param_1 + 0x58) = pvVar5;
  FUN_006dddf0(pvVar5,&local_60);
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    pvVar5 = malloc(0x800);
    if (pvVar5 != (void *)0x0) goto LAB_01dcf9e8;
LAB_01dcfa04:
    uVar9 = *(uint *)(param_1 + 0x108);
    if ((int)uVar9 < 1) goto LAB_01dcfa94;
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar14 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_01dcfa04;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x800,8);
    if (pvVar5 == (void *)0x0) goto LAB_01dcfa04;
LAB_01dcf9e8:
    uVar9 = 0x100;
    *(void **)(param_1 + 0x110) = pvVar5;
    *(undefined4 *)(param_1 + 0x108) = 0x100;
  }
  uVar12 = (ulong)uVar9;
  uVar10 = uVar12 & 3;
  if (uVar12 - 1 < 3) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      lVar14 = uVar11 * 8;
      uVar11 = uVar11 + 4;
      *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar14) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar14 + 8) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar14 + 0x10) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar14 + 0x18) = 0;
    } while ((uVar12 & 0xfffffffc) != uVar11);
  }
  if ((uVar9 & 3) != 0) {
    lVar14 = uVar11 << 3;
    do {
      uVar10 = uVar10 - 1;
      *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar14) = 0;
      lVar14 = lVar14 + 8;
    } while (uVar10 != 0);
  }
LAB_01dcfa94:
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
    puVar7 = malloc(0x28);
  }
  else {
    plVar4 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar14 + 8);
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*puVar7;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x28,8);
  }
  puVar1 = PTR_DAT_04bc1318;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = puVar1 + 0x10;
  puVar7[4] = 0;
  *(undefined8 **)(param_1 + 0x120) = puVar7;
  local_60 = (long *)CONCAT44(local_60._4_4_,0x200);
  FUN_01d6c380(puVar7,&local_60,plVar13);
  puVar1 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 0x161) = 0x101;
  local_60 = (long *)(puVar1 + 0x10);
  local_58 = "ParallelHeap";
  uVar8 = FUN_038c6d48(0xc00000,&local_60,plVar13,8,1,0);
  puVar1 = PTR_DAT_04bb21c8;
  *(undefined8 *)(param_1 + 0x168) = uVar8;
  FUN_006d56ac(*(undefined8 *)(*(long *)puVar1 + 0x110),uVar8,0x80000);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return;
}

