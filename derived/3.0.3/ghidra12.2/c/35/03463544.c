
void FUN_03463544(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_50;
  char *pcStack_48;
  
  *param_1 = 0;
  puVar1 = PTR_DAT_04bdf0c8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  puVar4 = PTR_DAT_04bdf1d8;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = puVar1 + 0x10;
  param_1[4] = 0;
  param_1[5] = puVar4 + 0x10;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined4 *)(param_1 + 0xd) = 0x80;
  *(undefined1 *)((long)param_1 + 0xeb) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0xb] = puVar1;
  param_1[0xc] = (undefined1 *)((long)param_1 + 0x6c);
  puVar1 = PTR_DAT_04bd4738;
  *(undefined4 *)((long)param_1 + 0xf4) = 2;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0xffffffff;
  plVar6 = param_1 + 0x1f;
  *plVar6 = (long)(puVar1 + 0x10);
  FUN_03ebac90(plVar6,2,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cPlay";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x25];
  puVar5[4] = &LAB_03463724;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04b2b208;
  puVar5[1] = param_1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cDelete";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x25] + (ulong)(1 < *(uint *)(param_1 + 0x24)) * 0x40);
  puVar5[2] = &LAB_0346378c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04b2b208;
  puVar5[1] = param_1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = &LAB_03463794;
  puVar5[5] = 0;
  *(undefined1 *)((long)param_1 + 0x119) = 1;
  uVar2 = *(uint *)(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)((long)param_1 + 0x104);
  *(uint *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)((long)param_1 + 0x104) = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = uVar3;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x24) <= uVar2) {
      uVar2 = 0;
    }
    puVar5 = *(undefined8 **)(param_1[0x25] + (long)(int)uVar2 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

