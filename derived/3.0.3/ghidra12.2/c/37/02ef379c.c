
void FUN_02ef379c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *local_50;
  char *pcStack_48;
  
  lVar1 = param_1 + 8;
  FUN_03ebac90(lVar1,7,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar5[2] = &LAB_02ef47a4;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfc18;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02ef47bc;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cStart";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(1 < *(uint *)(param_1 + 0x30)) * 0x40)
  ;
  puVar5[2] = &LAB_02ef47c0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfc18;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02ef490c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cChangeCamera";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(2 < *(uint *)(param_1 + 0x30)) * 0x80)
  ;
  puVar5[2] = &LAB_02ef4984;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfc18;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02ef4a88;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cWaitBootWipeEnd";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x30) < 4) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
  puVar5[2] = &LAB_02ef4cf8;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfc18;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02ef4dc8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cPlay";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,4,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(4 < *(uint *)(param_1 + 0x30)) * 0x100);
  puVar5[2] = &LAB_02ef4e24;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfc18;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02ef4fe8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cDeleteSeq";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,5,&local_50);
  lVar3 = 0x140;
  if (*(uint *)(param_1 + 0x30) < 6) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
  puVar5[2] = &LAB_02ef530c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfc18;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_02ef5310;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cEnd";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,6,&local_50);
  lVar1 = 0x180;
  if (*(uint *)(param_1 + 0x30) < 7) {
    lVar1 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar1);
  puVar5[2] = &LAB_02ef5508;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04adfc18;
  puVar5[1] = param_1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = &LAB_02ef550c;
  puVar5[5] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  uVar4 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x30) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)(int)uVar4 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

