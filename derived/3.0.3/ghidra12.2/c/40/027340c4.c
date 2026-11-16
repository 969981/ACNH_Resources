
void FUN_027340c4(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *local_40;
  char *pcStack_38;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[10] = (long)param_1;
  param_1[0xb] = (long)&LAB_02734290;
  param_1[8] = 0;
  param_1[9] = (long)&PTR_LAB_04a90c48;
  *(undefined4 *)((long)param_1 + 0x14c) = 3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_03ebac90(param_1,2,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar3 = (undefined8 *)param_1[6];
  puVar3[2] = &LAB_02735db0;
  puVar3[3] = 0;
  puVar3[4] = &LAB_02735db4;
  puVar3[5] = 0;
  *puVar3 = &PTR_LAB_04a90c98;
  puVar3[1] = param_1;
  puVar3[6] = &LAB_02735db8;
  puVar3[7] = 0;
  pcStack_38 = "State::cConvert";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar3 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  puVar3[2] = &LAB_02735dbc;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a90c98;
  puVar3[1] = param_1;
  puVar3[6] = &LAB_02735e6c;
  puVar3[7] = 0;
  puVar3[4] = &LAB_02735e50;
  puVar3[5] = 0;
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
    puVar3 = *(undefined8 **)(param_1[6] + (long)(int)uVar2 * 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)*puVar3)();
    }
  }
  return;
}

