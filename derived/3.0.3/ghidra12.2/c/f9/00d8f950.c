
void FUN_00d8f950(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_50;
  char *pcStack_48;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar1 = PTR_DAT_04bb6560;
  param_1[1] = *param_2;
  lVar4 = param_2[1];
  param_1[0x18] = (long)(puVar1 + 0x10);
  plVar6 = param_1 + 0x1e;
  *plVar6 = (long)(PTR_DAT_04bd4738 + 0x10);
  param_1[6] = (long)(param_1 + 0x18);
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_LAB_04953e00;
  param_1[5] = (long)(param_1 + 6);
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = (long)param_1;
  *(int *)(param_1 + 2) = (int)lVar4;
  param_1[0x1d] = (long)param_1;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined2 *)((long)param_1 + 0x164) = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)((long)param_1 + 0x166) = 0;
  param_1[0x1b] = (long)puVar1;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  param_1[0x19] = (long)puVar1;
  param_1[0x1a] = (long)&DAT_0407c03e;
  param_1[3] = 0;
  param_1[4] = 0x1000000001;
  param_1[0x21] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x2b] = -1;
  FUN_03ebac90(plVar6,3,0,0,0);
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x24];
  puVar5[2] = 0x60;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04953eb0;
  puVar5[1] = param_1;
  puVar5[4] = 0x68;
  puVar5[5] = 1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cConnect";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x24] + (ulong)(1 < *(uint *)(param_1 + 0x23)) * 0x40);
  puVar5[2] = 0x70;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04953eb0;
  puVar5[1] = param_1;
  puVar5[4] = 0x78;
  puVar5[5] = 1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cExecute";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,2,&local_50);
  puVar5 = (undefined8 *)(param_1[0x24] + (ulong)(2 < *(uint *)(param_1 + 0x23)) * 0x80);
  puVar5[2] = 0x80;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04953eb0;
  puVar5[1] = param_1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0x88;
  puVar5[5] = 1;
  *(undefined1 *)((long)param_1 + 0x111) = 1;
  uVar3 = *(uint *)(param_1 + 0x21);
  uVar2 = *(undefined4 *)((long)param_1 + 0xfc);
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  *(int *)(param_1 + 0x20) = (int)param_1[0x1f];
  *(undefined4 *)((long)param_1 + 0x104) = uVar2;
  *(uint *)(param_1 + 0x1f) = uVar3;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x23) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = *(undefined8 **)(param_1[0x24] + (long)(int)uVar3 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

