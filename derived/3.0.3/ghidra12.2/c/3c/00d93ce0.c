
void FUN_00d93ce0(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined **local_50;
  char *pcStack_48;
  
  plVar1 = param_1 + 0x22;
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar4 = param_2[1];
  param_1[0x18] = (long)&PTR_LAB_04933b28;
  param_1[0x1d] = (long)&PTR_LAB_04933b28;
  *param_1 = (long)&PTR_LAB_049541a0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = (long)param_1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = (long)param_1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[7] = (long)(param_1 + 0x1d);
  *(int *)(param_1 + 2) = (int)lVar4;
  param_1[6] = (long)(param_1 + 0x18);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1e] = (long)&PTR_LAB_048f9770;
  param_1[0x1f] = (long)"IsForce";
  param_1[0x19] = (long)&PTR_LAB_048f9770;
  param_1[0x1a] = (long)"IsSkipError";
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x21] = (long)param_1;
  param_1[0x22] = (long)&PTR_LAB_04ba4ef0;
  param_1[0x25] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  FUN_03ebac90(plVar1,3,0,0,0);
  local_50 = &PTR_LAB_048f9770;
  pcStack_48 = "State::cSleep";
  FUN_03ebaf40(plVar1,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x28];
  puVar5[2] = 0x60;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04954240;
  puVar5[1] = param_1;
  puVar5[4] = 0x68;
  puVar5[5] = 1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  local_50 = &PTR_LAB_048f9770;
  pcStack_48 = "State::cConnect";
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x28] + (ulong)(1 < *(uint *)(param_1 + 0x27)) * 0x40);
  puVar5[2] = 0x70;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_04954240;
  puVar5[1] = param_1;
  puVar5[4] = 0x78;
  puVar5[5] = 1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  local_50 = &PTR_LAB_048f9770;
  pcStack_48 = "State::cExecute";
  FUN_03ebaf40(plVar1,2,&local_50);
  puVar5 = (undefined8 *)(param_1[0x28] + (ulong)(2 < *(uint *)(param_1 + 0x27)) * 0x80);
  *puVar5 = &PTR_LAB_04954240;
  puVar5[1] = param_1;
  puVar5[2] = 0x80;
  puVar5[3] = 1;
  puVar5[4] = 0x88;
  puVar5[5] = 1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  *(undefined1 *)((long)param_1 + 0x131) = 1;
  uVar2 = *(uint *)(param_1 + 0x25);
  *(int *)(param_1 + 0x24) = (int)param_1[0x23];
  uVar3 = *(undefined4 *)((long)param_1 + 0x11c);
  *(uint *)(param_1 + 0x23) = uVar2;
  *(undefined4 *)((long)param_1 + 0x11c) = 0;
  *(undefined4 *)((long)param_1 + 0x124) = uVar3;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x27) <= uVar2) {
      uVar2 = 0;
    }
    puVar5 = *(undefined8 **)(param_1[0x28] + (long)(int)uVar2 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

