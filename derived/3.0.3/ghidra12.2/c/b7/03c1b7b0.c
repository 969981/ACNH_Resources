
void FUN_03c1b7b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  FUN_03c11314(param_1,param_2,"DbgTextWriter");
  *param_1 = &PTR_LAB_04b7db30;
  param_1[0x45] = &PTR_LAB_04b7dc08;
  FUN_038e18e4(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  FUN_038e3114(param_1 + 0x4f,0,0x7fff);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_038e3114(param_1 + 0x59,0,0x7fff);
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = DAT_04c4c188;
  *(undefined1 *)(param_1 + 0x65) = 0;
  uVar7 = DAT_05aecab0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  puVar1 = param_1 + 0x6c;
  param_1[0x67] = param_1 + 0x66;
  param_1[0x66] = param_1 + 0x66;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  puVar2 = PTR_DAT_04bb2030 + 0x10;
  param_1[0x6a] = param_1 + 0x69;
  param_1[0x69] = param_1 + 0x69;
  puVar3 = PTR_DAT_04bb4ca0 + 0x10;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6d] = puVar1;
  param_1[0x6c] = puVar1;
  lVar8 = 0;
  do {
    lVar9 = lVar8 + 0x188;
    *(undefined8 *)((long)param_1 + lVar8 + 0x380) = 0;
    lVar4 = (long)param_1 + lVar8 + 0x3c0;
    *(undefined8 *)((long)param_1 + lVar8 + 0x378) = 0;
    *(undefined4 *)((long)param_1 + lVar8 + 0x388) = 0xffffffff;
    *(long *)((long)param_1 + lVar8 + 0x398) = lVar4;
    *(undefined **)((long)param_1 + lVar8 + 0x390) = puVar2;
    *(undefined4 *)((long)param_1 + lVar8 + 0x3a0) = 0x100;
    *(long *)((long)param_1 + lVar8 + 0x3b0) = lVar4;
    *(undefined **)((long)param_1 + lVar8 + 0x3a8) = puVar3;
    *(undefined4 *)((long)param_1 + lVar8 + 0x3b8) = 0x80;
    *(undefined2 *)((long)param_1 + lVar8 + 0x4be) = 0;
    *(undefined8 *)((long)param_1 + lVar8 + 0x4c8) = 0x100000001;
    *(undefined1 **)((long)param_1 + lVar8 + 0x4d0) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)param_1 + lVar8 + 0x4d8) = 0x3f80000000000000;
    *(undefined1 **)((long)param_1 + lVar8 + 0x4e0) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)param_1 + lVar8 + 0x4e8) = 0x3f800000;
    *(undefined1 *)((long)param_1 + lVar8 + 0x4f0) = uVar6;
    *(undefined1 *)((long)param_1 + lVar8 + 0x4f1) = uVar7;
    *(undefined8 *)((long)param_1 + lVar8 + 0x4f8) = 0;
    lVar8 = lVar9;
  } while (lVar9 != 0x62000);
  FUN_038e18e4(param_1 + 0xc46f);
  lVar8 = 0;
  do {
    lVar9 = *(long *)((long)param_1 + lVar8 + 0x4f8);
    plVar5 = (long *)((long)param_1 + lVar8 + 0x378);
    if (lVar9 != 0) {
      *(undefined8 *)((long)param_1 + lVar8 + 0x4f8) = 0;
      if (*plVar5 != 0) {
        *(undefined8 *)(*plVar5 + 8) = *(undefined8 *)((long)param_1 + lVar8 + 0x380);
      }
      plVar10 = *(long **)((long)param_1 + lVar8 + 0x380);
      if (plVar10 != (long *)0x0) {
        *plVar10 = *plVar5;
      }
      *plVar5 = 0;
      *(undefined8 *)((long)param_1 + lVar8 + 0x380) = 0;
      *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
    }
    lVar9 = param_1[0x6c];
    *(undefined8 **)((long)param_1 + lVar8 + 0x4f8) = puVar1;
    param_1[0x6c] = plVar5;
    *(undefined8 **)((long)param_1 + lVar8 + 0x380) = puVar1;
    *plVar5 = lVar9;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar5;
    }
    lVar8 = lVar8 + 0x188;
    *(int *)(param_1 + 0x6e) = *(int *)(param_1 + 0x6e) + 1;
  } while (lVar8 != 0x62000);
  return;
}

