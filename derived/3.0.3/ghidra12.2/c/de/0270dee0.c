
void FUN_0270dee0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *__s;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bc35c8 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar3 != 0) {
      param_1[4] = lVar3;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x1c00);
  lVar3 = 8;
  puVar1 = PTR_DAT_04bb4c38 + 0x10;
  lVar6 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar6 + 0x68) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x60) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x98) = 0;
    puVar5 = (undefined8 *)((long)param_1 + lVar6 + 0xa8);
    *puVar5 = &PTR_LAB_04a8f180;
    *(undefined ***)((long)param_1 + lVar6 + 0x38) = &PTR_LAB_04a8f120;
    *(undefined8 *)((long)param_1 + lVar6 + 0x40) = 0;
    puVar7 = (undefined8 *)((long)param_1 + lVar6 + 0xe0);
    *puVar7 = &PTR_LAB_04a8f1e0;
    plVar4 = (long *)((long)param_1 + lVar6 + 0x70);
    *plVar4 = (long)puVar1;
    *(undefined1 *)((long)param_1 + lVar6 + 0xa0) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x48) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x50) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0xd8) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x108) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0x110) = 0;
    *(undefined8 **)((long)param_1 + lVar6 + 0xc0) = puVar7;
    *(undefined8 *)((long)param_1 + lVar6 + 0x78) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x88) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x90) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0xb0) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0xb8) = 4;
    *(long **)((long)param_1 + lVar6 + 200) = plVar4;
    *(undefined8 *)((long)param_1 + lVar6 + 0xd0) = 0;
    *(undefined8 **)((long)param_1 + lVar6 + 0x50) = puVar5;
    *(undefined8 *)((long)param_1 + lVar6 + 0x58) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0xe8) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0xf0) = 4;
    *(undefined8 *)((long)param_1 + lVar6 + 0xf8) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x100) = 0;
    FUN_0270e78c((long)param_1 + lVar6 + 0x118,puVar7,4);
    lVar2 = *(long *)((long)param_1 + lVar6 + 0x50);
    *puVar7 = &PTR_LAB_04a8f1b0;
    *puVar5 = &PTR_LAB_04a8f150;
    puVar5 = (undefined8 *)((long)param_1 + lVar6 + 0x380);
    *(undefined8 *)((long)param_1 + lVar6 + 0x388) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x398) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x3a0) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x3a8) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0x3b0) = 0;
    *(long *)((long)param_1 + lVar6 + 0x390) = *(long *)((long)param_1 + lVar6 + 0x48) + 0x18;
    *(undefined8 **)((long)param_1 + lVar6 + 0x50) = puVar5;
    if (lVar2 != 0) {
      *(long *)((long)param_1 + lVar6 + 0x3a0) = lVar2;
    }
    lVar3 = lVar3 + -1;
    *puVar5 = &PTR_LAB_04916e90;
    *(undefined ***)((long)param_1 + lVar6 + 0x38) = &PTR_LAB_04a8f0f0;
    lVar6 = lVar6 + 0x380;
  } while (lVar3 != 0);
  *param_1 = (long)&PTR_LAB_04a8c5c0;
  lVar3 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar3 != 0) {
    param_1[0xb] = lVar3;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar3 = param_1[3];
  param_1[3] = (long)(param_1 + 0x77);
  if (lVar3 != 0) {
    param_1[0x7b] = lVar3;
  }
  param_1[0x79] = param_1[0x79] + param_3 + 0x1c;
  FUN_026400e0();
  lVar3 = param_1[3];
  param_1[3] = (long)(param_1 + 0xe7);
  if (lVar3 != 0) {
    param_1[0xeb] = lVar3;
  }
  param_1[0xe9] = param_1[0xe9] + param_3 + 0x38;
  FUN_026400e0();
  lVar3 = param_1[3];
  param_1[3] = (long)(param_1 + 0x157);
  if (lVar3 != 0) {
    param_1[0x15b] = lVar3;
  }
  param_1[0x159] = param_1[0x159] + param_3 + 0x54;
  FUN_026400e0();
  lVar3 = param_1[3];
  param_1[3] = (long)(param_1 + 0x1c7);
  if (lVar3 != 0) {
    param_1[0x1cb] = lVar3;
  }
  param_1[0x1c9] = param_1[0x1c9] + param_3 + 0x70;
  FUN_026400e0();
  lVar3 = param_1[3];
  param_1[3] = (long)(param_1 + 0x237);
  if (lVar3 != 0) {
    param_1[0x23b] = lVar3;
  }
  param_1[0x239] = param_1[0x239] + param_3 + 0x8c;
  FUN_026400e0();
  lVar3 = param_1[3];
  param_1[3] = (long)(param_1 + 0x2a7);
  if (lVar3 != 0) {
    param_1[0x2ab] = lVar3;
  }
  param_1[0x2a9] = param_1[0x2a9] + param_3 + 0xa8;
  FUN_026400e0();
  lVar3 = param_1[3];
  param_1[3] = (long)(param_1 + 0x317);
  if (lVar3 != 0) {
    param_1[0x31b] = lVar3;
  }
  param_1[0x319] = param_1[0x319] + param_3 + 0xc4;
  FUN_026400e0();
  return;
}

