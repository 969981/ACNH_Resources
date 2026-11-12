
void FUN_00829c5c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_50;
  char *pcStack_48;
  
  lVar1 = param_1 + 0x68;
  FUN_03ebac90(lVar1,4,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar4 = *(undefined8 **)(param_1 + 0x98);
  puVar4[2] = &LAB_00829e3c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917d50;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_00829e48;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cIn";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x98) + (ulong)(1 < *(uint *)(param_1 + 0x90)) * 0x40)
  ;
  puVar4[2] = &LAB_0082a24c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917d50;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0082a254;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cChange";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x98) + (ulong)(2 < *(uint *)(param_1 + 0x90)) * 0x80)
  ;
  puVar4[2] = &LAB_0082a4dc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917d50;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0082a5c4;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cOut";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_50);
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x90) < 4) {
    lVar1 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x98) + lVar1);
  puVar4[2] = &LAB_0082a9dc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917d50;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0082aa90;
  puVar4[5] = 0;
  *(undefined1 *)(param_1 + 0x89) = 1;
  uVar3 = *(uint *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x74);
  *(uint *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x90) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x98) + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

