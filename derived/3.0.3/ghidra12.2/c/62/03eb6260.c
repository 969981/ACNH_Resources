
/* WARNING: Removing unreachable block (ram,0x03eb62ec) */

void FUN_03eb6260(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bd4738;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x194) = 0;
  param_1[0x193] = 0;
  param_1[0x192] = 0;
  *(undefined4 *)((long)param_1 + 0xca4) = 0;
  local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
  *(undefined1 *)((long)param_1 + 0xcab) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[10] = (long)param_1;
  param_1[0xb] = (long)FUN_03eb64e0;
  param_1[8] = 0;
  param_1[9] = (long)&PTR_LAB_04ba4cf0;
  *(undefined4 *)((long)param_1 + 0xca7) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_03ebac90(param_1,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cSleep";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar4 = (undefined8 *)param_1[6];
  puVar4[4] = &LAB_03eb6508;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04ba4d40;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cCheckAccount";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  *puVar4 = &PTR_LAB_04ba4d40;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_03eb650c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cEnsureToken";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  *puVar4 = &PTR_LAB_04ba4d40;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_03eb65c0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cNoAccount";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 5) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[6] + lVar2);
  *puVar4 = &PTR_LAB_04ba4d40;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_03eb68bc;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cValidateWait";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,4,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(4 < *(uint *)(param_1 + 5)) * 0x100);
  *puVar4 = &PTR_LAB_04ba4d40;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_03eb69fc;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  uVar3 = *(uint *)(param_1 + 3);
  *(int *)(param_1 + 2) = (int)param_1[1];
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0xc);
  *(uint *)(param_1 + 1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 5) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[6] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

