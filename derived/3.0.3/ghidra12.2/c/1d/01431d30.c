
void FUN_01431d30(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined *local_50;
  char *pcStack_48;
  
  plVar1 = param_1 + 0x4f;
  uVar4 = (**(code **)(*param_1 + 0x198))();
  FUN_03ebac90(plVar1,uVar4,3,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cOn";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = 0xf8;
  puVar5[3] = 1;
  puVar5[4] = 0x100;
  puVar5[5] = 1;
  *puVar5 = &PTR_LAB_0499c160;
  puVar5[1] = param_1;
  puVar5[6] = 0x108;
  puVar5[7] = 1;
  pcStack_48 = "State::cOff";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[2] = 0x110;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_0499c160;
  puVar5[1] = param_1;
  puVar5[4] = 0x118;
  puVar5[5] = 1;
  puVar5[6] = 0x120;
  puVar5[7] = 1;
  pcStack_48 = "State::cOnKeep";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,2,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  puVar5[2] = 0x128;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_0499c160;
  puVar5[1] = param_1;
  puVar5[4] = 0x130;
  puVar5[5] = 1;
  puVar5[6] = 0x138;
  puVar5[7] = 1;
  pcStack_48 = "State::cOffKeep";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x54) < 4) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar3);
  puVar5[2] = 0x140;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_0499c160;
  puVar5[1] = param_1;
  puVar5[4] = 0x148;
  puVar5[5] = 1;
  puVar5[6] = 0x150;
  puVar5[7] = 1;
  (**(code **)(*param_1 + 0x178))(param_1);
  return;
}

