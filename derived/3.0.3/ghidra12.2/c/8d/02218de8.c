
void FUN_02218de8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_50;
  char *pcStack_48;
  
  lVar1 = param_1 + 0x10;
  FUN_03ebac90(lVar1,4,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cNone";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  puVar4[2] = &LAB_02218fe8;
  puVar4[3] = 0;
  puVar4[4] = &LAB_02218ffc;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a77320;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02219000;
  puVar4[7] = 0;
  pcStack_48 = "State::cOpen";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)(1 < *(uint *)(param_1 + 0x38)) * 0x40)
  ;
  puVar4[4] = &LAB_02219020;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a77320;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_02219004;
  puVar4[3] = 0;
  puVar4[6] = &LAB_022191d4;
  puVar4[7] = 0;
  pcStack_48 = "State::cClose";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)(2 < *(uint *)(param_1 + 0x38)) * 0x80)
  ;
  puVar4[4] = &LAB_0221920c;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a77320;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_022191d8;
  puVar4[3] = 0;
  puVar4[6] = &LAB_02219268;
  puVar4[7] = 0;
  pcStack_48 = "State::cCloseAndOpen";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_50);
  lVar1 = 0xc0;
  if (*(uint *)(param_1 + 0x38) < 4) {
    lVar1 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar1);
  puVar4[2] = &LAB_0221926c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a77320;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02219358;
  puVar4[7] = 0;
  puVar4[4] = &LAB_022192b8;
  puVar4[5] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  uVar3 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x38) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x40) + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

