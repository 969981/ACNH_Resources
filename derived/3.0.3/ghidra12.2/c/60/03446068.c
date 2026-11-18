
void FUN_03446068(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bd4738;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  bVar5 = *PTR_DAT_04bb32e0;
  param_1[10] = 0;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *(byte *)(param_1 + 0xb) = bVar5;
  FUN_03ebac90(param_1,4,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar4 = (undefined8 *)param_1[6];
  puVar4[2] = &LAB_034462a8;
  puVar4[3] = 0;
  puVar4[4] = &LAB_034462ac;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04b2aac8;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0344636c;
  puVar4[7] = 0;
  pcStack_38 = "State::cFirst";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  puVar4[4] = &LAB_03446378;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04b2aac8;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_03446374;
  puVar4[3] = 0;
  puVar4[6] = &LAB_034463b8;
  puVar4[7] = 0;
  pcStack_38 = "State::cToAnnounce";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  puVar4[4] = &LAB_034463c0;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04b2aac8;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_034463bc;
  puVar4[3] = 0;
  puVar4[6] = &LAB_03446494;
  puVar4[7] = 0;
  pcStack_38 = "State::cFromAnnounce";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 5) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[6] + lVar2);
  puVar4[2] = &LAB_03446498;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2aac8;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_034464c4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0344649c;
  puVar4[5] = 0;
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

