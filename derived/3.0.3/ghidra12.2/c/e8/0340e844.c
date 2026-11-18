
void FUN_0340e844(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03ebac90(param_1,3,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cInit";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0,&local_50);
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  puVar3[2] = &LAB_0340e9e8;
  puVar3[3] = 0;
  puVar3[4] = &LAB_0340e9ec;
  puVar3[5] = 0;
  *puVar3 = &PTR_LAB_04b29db0;
  puVar3[1] = param_1;
  puVar3[6] = &LAB_0340e9f0;
  puVar3[7] = 0;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,1,&local_50);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar3[4] = &LAB_0340e9f8;
  puVar3[5] = 0;
  *puVar3 = &PTR_LAB_04b29db0;
  puVar3[1] = param_1;
  puVar3[2] = &LAB_0340e9f4;
  puVar3[3] = 0;
  puVar3[6] = &LAB_0340eb18;
  puVar3[7] = 0;
  pcStack_48 = "State::cFinish";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,2,&local_50);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  puVar3[2] = &LAB_0340eb1c;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04b29db0;
  puVar3[1] = param_1;
  puVar3[6] = &LAB_0340eba4;
  puVar3[7] = 0;
  puVar3[4] = &LAB_0340eba0;
  puVar3[5] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar2 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) <= uVar2) {
      uVar2 = 0;
    }
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)*puVar3)();
    }
  }
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}

