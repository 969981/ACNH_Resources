
void FUN_01de8b58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_03ebac90(param_1,4,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  puVar4[2] = FUN_01de8d28;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5bcb8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01de8de8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cSetupPlayerMemories";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar4[2] = &LAB_01de8df0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5bcb8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01de92f0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cSetupIslandMemories";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  puVar4[2] = &LAB_01de9b60;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5bcb8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dea5b0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cWaitMemories";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 0x28) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar2);
  puVar4[2] = &LAB_01dead58;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5bcb8;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_01dead5c;
  puVar4[5] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar3 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

