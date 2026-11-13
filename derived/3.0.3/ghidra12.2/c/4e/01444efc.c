
void FUN_01444efc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  plVar1 = param_1 + 0x6c;
  uVar5 = (**(code **)(*param_1 + 0x318))();
  FUN_03ebac90(plVar1,uVar5,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "DemoState::cWait";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,0,&local_50);
  puVar6 = (undefined8 *)param_1[0x72];
  puVar6[2] = 0x2a0;
  puVar6[3] = 1;
  puVar6[4] = 0x2a8;
  puVar6[5] = 1;
  *puVar6 = &PTR_LAB_0499f0d0;
  puVar6[1] = param_1;
  puVar6[6] = 0x2b0;
  puVar6[7] = 1;
  pcStack_48 = "DemoState::cRequest";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar6 = (undefined8 *)(param_1[0x72] + (ulong)(1 < *(uint *)(param_1 + 0x71)) * 0x40);
  puVar6[2] = 0x2b8;
  puVar6[3] = 1;
  *puVar6 = &PTR_LAB_0499f0d0;
  puVar6[1] = param_1;
  puVar6[4] = 0x2c0;
  puVar6[5] = 1;
  puVar6[6] = 0x2c8;
  puVar6[7] = 1;
  pcStack_48 = "DemoState::cPreRun";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,2,&local_50);
  puVar6 = (undefined8 *)(param_1[0x72] + (ulong)(2 < *(uint *)(param_1 + 0x71)) * 0x80);
  puVar6[2] = 0x2d0;
  puVar6[3] = 1;
  *puVar6 = &PTR_LAB_0499f0d0;
  puVar6[1] = param_1;
  puVar6[4] = 0x2d8;
  puVar6[5] = 1;
  puVar6[6] = 0x2e0;
  puVar6[7] = 1;
  pcStack_48 = "DemoState::cRun";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x71) < 4) {
    lVar3 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x72] + lVar3);
  puVar6[2] = 0x2e8;
  puVar6[3] = 1;
  *puVar6 = &PTR_LAB_0499f0d0;
  puVar6[1] = param_1;
  puVar6[6] = 0x2f8;
  puVar6[7] = 1;
  puVar6[4] = 0x2f0;
  puVar6[5] = 1;
  pcStack_48 = "DemoState::cEnd";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,4,&local_50);
  puVar6 = (undefined8 *)(param_1[0x72] + (ulong)(4 < *(uint *)(param_1 + 0x71)) * 0x100);
  puVar6[2] = 0x300;
  puVar6[3] = 1;
  *puVar6 = &PTR_LAB_0499f0d0;
  puVar6[1] = param_1;
  puVar6[4] = 0x308;
  puVar6[5] = 1;
  puVar6[6] = 0x310;
  puVar6[7] = 1;
  *(undefined1 *)((long)param_1 + 0x381) = 1;
  uVar4 = *(uint *)(param_1 + 0x6f);
  *(int *)(param_1 + 0x6e) = (int)param_1[0x6d];
  uVar5 = *(undefined4 *)((long)param_1 + 0x36c);
  *(uint *)(param_1 + 0x6d) = uVar4;
  *(undefined4 *)((long)param_1 + 0x36c) = 0;
  *(undefined4 *)((long)param_1 + 0x374) = uVar5;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x71) <= uVar4) {
      uVar4 = 0;
    }
    puVar6 = *(undefined8 **)(param_1[0x72] + (long)(int)uVar4 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}

