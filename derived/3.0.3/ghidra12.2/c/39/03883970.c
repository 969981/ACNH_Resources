
void FUN_03883970(undefined8 *param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_LAB_04b60c10;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0xff;
  FUN_038e18e4(param_1 + 9);
  param_1[0x13] = 0;
  *(undefined1 *)((long)param_1 + 0x8a) = 0;
  puVar1 = PTR_DAT_04bcbbd0 + 0x10;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = puVar1;
  lVar7 = *(long *)PTR_DAT_04bcb7d8;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (*(long *)(lVar7 + 0x90) != 0) {
    param_1[0x13] = *(undefined8 *)(*(long *)(lVar7 + 0x90) + 200);
  }
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar5 = malloc(0x10);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_03883a78;
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x10,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    param_1[0x16] = puVar5;
    *puVar5 = 0;
    param_1[0x17] = puVar5;
    if (puVar5 + 1 != (undefined8 *)0x0) {
      param_1[0x14] = 0x100000000;
      param_1[0x15] = puVar5 + 1;
    }
  }
LAB_03883a78:
  lVar7 = *(long *)puVar1;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  param_1[0x18] = param_1 + 0x18;
  param_1[0x19] = param_1 + 0x18;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if (lVar7 == 0) {
    pvVar6 = malloc(4000);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,4000,8);
  }
  if (pvVar6 != (void *)0x0) {
    lVar7 = 0;
    param_1[0x1b] = pvVar6;
    do {
      puVar5 = (undefined8 *)((long)pvVar6 + lVar7);
      lVar7 = lVar7 + 0x78;
      puVar5[10] = puVar5 + 0xf;
      puVar5[5] = puVar5 + 10;
      *puVar5 = puVar5 + 5;
    } while (lVar7 != 0xf78);
    *(undefined8 *)((long)pvVar6 + 0xf78) = 0;
    param_1[0x1c] = pvVar6;
    *(undefined4 *)(param_1 + 0x1d) = 100;
  }
  return;
}

