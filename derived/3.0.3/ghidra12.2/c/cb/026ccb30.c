
void FUN_026ccb30(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_40;
  char *pcStack_38;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x31] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  *(undefined1 *)(param_1 + 0x15) = 0xff;
  *(undefined1 *)(param_1 + 0x1a) = 0xff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0xff;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0xff;
  param_1[0x26] = -0x100000000;
  param_1[0x27] = 0;
  param_1[0x2b] = (long)&LAB_026cd074;
  param_1[0x2c] = 0;
  param_1[10] = (long)param_1;
  param_1[0xb] = (long)&LAB_026cce10;
  param_1[0x29] = (long)&PTR_LAB_04a89188;
  param_1[0x2a] = (long)param_1;
  param_1[8] = 0;
  param_1[9] = (long)&PTR_LAB_04a89138;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x2f] = (long)param_1;
  param_1[0x30] = (long)&LAB_026cd144;
  puVar1 = PTR_DAT_04bb2720;
  *(undefined2 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = (long)&PTR_LAB_04a89138;
  if ((*(long *)puVar1 == 0) || (lVar4 = *(long *)(*(long *)puVar1 + 0x330), lVar4 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
  }
  FUN_03ebac90(param_1,4,0,uVar3,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar5 = (undefined8 *)param_1[6];
  puVar5[2] = &LAB_026cd170;
  puVar5[3] = 0;
  puVar5[4] = &LAB_026cd174;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a891d8;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_026cd178;
  puVar5[7] = 0;
  pcStack_38 = "State::cList";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar5 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  puVar5[4] = &LAB_026cd24c;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a891d8;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_026cd17c;
  puVar5[3] = 0;
  puVar5[6] = &LAB_026cd28c;
  puVar5[7] = 0;
  pcStack_38 = "State::cFailure";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar5 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  puVar5[4] = &LAB_026cd294;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a891d8;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_026cd290;
  puVar5[3] = 0;
  puVar5[6] = &LAB_026cd3ac;
  puVar5[7] = 0;
  pcStack_38 = "State::cDelete";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 5) < 4) {
    lVar4 = 0;
  }
  puVar5 = (undefined8 *)(param_1[6] + lVar4);
  puVar5[2] = &LAB_026cd3b0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a891d8;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_026cd47c;
  puVar5[7] = 0;
  puVar5[4] = &LAB_026cd45c;
  puVar5[5] = 0;
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  uVar2 = *(uint *)(param_1 + 3);
  *(int *)(param_1 + 2) = (int)param_1[1];
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0xc);
  *(uint *)(param_1 + 1) = uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 5) <= uVar2) {
      uVar2 = 0;
    }
    puVar5 = *(undefined8 **)(param_1[6] + (long)(int)uVar2 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

