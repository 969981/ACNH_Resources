
void FUN_0271ef70(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *__s;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bc35c8 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar4 != 0) {
      param_1[4] = lVar4;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x1dc0);
  lVar4 = 8;
  puVar1 = PTR_DAT_04bb4c38 + 0x10;
  lVar7 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar7 + 0x68) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x60) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x98) = 0;
    puVar6 = (undefined8 *)((long)param_1 + lVar7 + 0xa8);
    *puVar6 = &PTR_LAB_04a8ef40;
    *(undefined ***)((long)param_1 + lVar7 + 0x38) = &PTR_LAB_04a8eee0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x40) = 0;
    puVar8 = (undefined8 *)((long)param_1 + lVar7 + 0xe0);
    *puVar8 = &PTR_LAB_04a8efa0;
    plVar5 = (long *)((long)param_1 + lVar7 + 0x70);
    *plVar5 = (long)puVar1;
    *(undefined1 *)((long)param_1 + lVar7 + 0xa0) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x48) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x50) = 0;
    *(undefined1 *)((long)param_1 + lVar7 + 0xd8) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x108) = 0;
    *(undefined1 *)((long)param_1 + lVar7 + 0x110) = 0;
    *(undefined8 **)((long)param_1 + lVar7 + 0xc0) = puVar8;
    *(undefined8 *)((long)param_1 + lVar7 + 0x78) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x88) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x90) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0xb0) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0xb8) = 4;
    *(long **)((long)param_1 + lVar7 + 200) = plVar5;
    *(undefined8 *)((long)param_1 + lVar7 + 0xd0) = 0;
    *(undefined8 **)((long)param_1 + lVar7 + 0x50) = puVar6;
    *(undefined8 *)((long)param_1 + lVar7 + 0x58) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0xe8) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0xf0) = 4;
    *(undefined8 *)((long)param_1 + lVar7 + 0xf8) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x100) = 0;
    FUN_0270e78c((long)param_1 + lVar7 + 0x118,puVar8,4);
    lVar3 = *(long *)((long)param_1 + lVar7 + 0x50);
    *puVar8 = &PTR_LAB_04a8ef70;
    *puVar6 = &PTR_LAB_04a8ef10;
    puVar6 = (undefined8 *)((long)param_1 + lVar7 + 0x380);
    *(undefined8 *)((long)param_1 + lVar7 + 0x388) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x3a0) = 0;
    lVar2 = *(long *)((long)param_1 + lVar7 + 0x48) + 0x18;
    *(undefined8 *)((long)param_1 + lVar7 + 0x3a8) = 0;
    *(undefined1 *)((long)param_1 + lVar7 + 0x3b0) = 0;
    *(undefined8 **)((long)param_1 + lVar7 + 0x50) = puVar6;
    *(long *)((long)param_1 + lVar7 + 0x390) = lVar2;
    if (lVar3 != 0) {
      *(long *)((long)param_1 + lVar7 + 0x3a0) = lVar3;
    }
    *(long *)((long)param_1 + lVar7 + 0x3c8) = lVar2;
    lVar4 = lVar4 + -1;
    *(undefined8 *)((long)param_1 + lVar7 + 0x3c0) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x3d0) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x3d8) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x3e0) = 0;
    *(undefined1 *)((long)param_1 + lVar7 + 1000) = 0;
    *(long *)((long)param_1 + lVar7 + 0x398) = (long)param_1 + lVar7 + 0x3b8;
    *(undefined **)((long)param_1 + lVar7 + 0x3b8) = &DAT_04a8f030;
    *puVar6 = &PTR_LAB_04a8f000;
    *(undefined ***)((long)param_1 + lVar7 + 0x38) = &PTR_LAB_04a8eeb0;
    lVar7 = lVar7 + 0x3b8;
  } while (lVar4 != 0);
  *param_1 = (long)&PTR_LAB_04a8ed60;
  lVar4 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar4 != 0) {
    param_1[0xb] = lVar4;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar4 = param_1[3];
  param_1[3] = (long)(param_1 + 0x7e);
  if (lVar4 != 0) {
    param_1[0x82] = lVar4;
  }
  param_1[0x80] = param_1[0x80] + param_3 + 0x1c;
  FUN_026400e0();
  lVar4 = param_1[3];
  param_1[3] = (long)(param_1 + 0xf5);
  if (lVar4 != 0) {
    param_1[0xf9] = lVar4;
  }
  param_1[0xf7] = param_1[0xf7] + param_3 + 0x38;
  FUN_026400e0();
  lVar4 = param_1[3];
  param_1[3] = (long)(param_1 + 0x16c);
  if (lVar4 != 0) {
    param_1[0x170] = lVar4;
  }
  param_1[0x16e] = param_1[0x16e] + param_3 + 0x54;
  FUN_026400e0();
  lVar4 = param_1[3];
  param_1[3] = (long)(param_1 + 0x1e3);
  if (lVar4 != 0) {
    param_1[0x1e7] = lVar4;
  }
  param_1[0x1e5] = param_1[0x1e5] + param_3 + 0x70;
  FUN_026400e0();
  lVar4 = param_1[3];
  param_1[3] = (long)(param_1 + 0x25a);
  if (lVar4 != 0) {
    param_1[0x25e] = lVar4;
  }
  param_1[0x25c] = param_1[0x25c] + param_3 + 0x8c;
  FUN_026400e0();
  lVar4 = param_1[3];
  param_1[3] = (long)(param_1 + 0x2d1);
  if (lVar4 != 0) {
    param_1[0x2d5] = lVar4;
  }
  param_1[0x2d3] = param_1[0x2d3] + param_3 + 0xa8;
  FUN_026400e0();
  lVar4 = param_1[3];
  param_1[3] = (long)(param_1 + 0x348);
  if (lVar4 != 0) {
    param_1[0x34c] = lVar4;
  }
  param_1[0x34a] = param_1[0x34a] + param_3 + 0xc4;
  FUN_026400e0();
  return;
}

