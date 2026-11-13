
void FUN_00d8c704(long *param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined **local_50;
  char *pcStack_48;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[0x18] = (long)&PTR_LAB_04933af8;
  plVar5 = param_1 + 0x1e;
  *plVar5 = (long)(PTR_DAT_04bd4738 + 0x10);
  *param_1 = (long)&PTR_LAB_04953bf0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = (long)param_1;
  *(int *)(param_1 + 2) = (int)lVar3;
  param_1[0x1d] = (long)param_1;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x19] = (long)&PTR_LAB_048f9770;
  param_1[0x1a] = (long)&DAT_040fe5ab;
  param_1[6] = (long)(param_1 + 0x18);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1b] = (long)&PTR_LAB_048f9770;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  param_1[3] = 0;
  param_1[4] = 0x1000000001;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  FUN_03ebac90(plVar5,3,0,0,0);
  local_50 = &PTR_LAB_048f9770;
  pcStack_48 = "State::cSleep";
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x24];
  puVar4[2] = 0x60;
  puVar4[3] = 1;
  *puVar4 = &PTR_LAB_04953cb0;
  puVar4[1] = param_1;
  puVar4[4] = 0x68;
  puVar4[5] = 1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  local_50 = &PTR_LAB_048f9770;
  pcStack_48 = "State::cPost";
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x24] + (ulong)(1 < *(uint *)(param_1 + 0x23)) * 0x40);
  puVar4[2] = 0x70;
  puVar4[3] = 1;
  *puVar4 = &PTR_LAB_04953cb0;
  puVar4[1] = param_1;
  puVar4[4] = 0x78;
  puVar4[5] = 1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  local_50 = &PTR_LAB_048f9770;
  pcStack_48 = "State::cUpload";
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[0x24] + (ulong)(2 < *(uint *)(param_1 + 0x23)) * 0x80);
  puVar4[2] = 0x80;
  puVar4[3] = 1;
  *puVar4 = &PTR_LAB_04953cb0;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = 0x88;
  puVar4[5] = 1;
  *(undefined1 *)((long)param_1 + 0x111) = 1;
  uVar2 = *(uint *)(param_1 + 0x21);
  uVar1 = *(undefined4 *)((long)param_1 + 0xfc);
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  *(int *)(param_1 + 0x20) = (int)param_1[0x1f];
  *(undefined4 *)((long)param_1 + 0x104) = uVar1;
  *(uint *)(param_1 + 0x1f) = uVar2;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x23) <= uVar2) {
      uVar2 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[0x24] + (long)(int)uVar2 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

