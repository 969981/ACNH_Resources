
void FUN_02d15024(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_03ebac90(param_1,2,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  puVar3[4] = &LAB_02d15f9c;
  puVar3[5] = 0;
  *puVar3 = &PTR_LAB_04abcd50;
  puVar3[1] = param_1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_38 = "State::cLottery";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar3[2] = &LAB_02d15fa0;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04abcd50;
  puVar3[1] = param_1;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = &LAB_02d160b0;
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
  return;
}

