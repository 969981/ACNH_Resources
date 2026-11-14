
/* WARNING: Removing unreachable block (ram,0x01dc7654) */
/* WARNING: Removing unreachable block (ram,0x01dc7610) */
/* WARNING: Removing unreachable block (ram,0x01dc762c) */
/* WARNING: Removing unreachable block (ram,0x01dc7670) */

void FUN_01dc73dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_48;
  char *pcStack_40;
  
  FUN_03ebac90(param_1,5,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "State::cIdle";
  local_48 = puVar1;
  FUN_03ebaf40(param_1,0,&local_48);
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  puVar3[2] = FUN_01dc768c;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a5b4d0;
  puVar3[1] = param_1;
  puVar3[4] = &LAB_01dc7828;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_40 = "State::cWaitSendMovePlayer";
  local_48 = puVar1;
  FUN_03ebaf40(param_1,1,&local_48);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar3[2] = &LAB_01dc782c;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a5b4d0;
  puVar3[1] = param_1;
  puVar3[4] = &LAB_01dc7a34;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_40 = "State::cWaitReceiveMovePlayer";
  local_48 = puVar1;
  FUN_03ebaf40(param_1,2,&local_48);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  puVar3[2] = &LAB_01dc7aec;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a5b4d0;
  puVar3[1] = param_1;
  puVar3[4] = &LAB_01dc7bf8;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_40 = "State::cWaitFinishMovePlayer";
  local_48 = puVar1;
  FUN_03ebaf40(param_1,3,&local_48);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x28) < 4) {
    lVar4 = 0;
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar4);
  puVar3[2] = &LAB_01dc7c00;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a5b4d0;
  puVar3[1] = param_1;
  puVar3[4] = &LAB_01dc7c04;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  pcStack_40 = "State::cCheckReceivedMovePlayer";
  local_48 = puVar1;
  FUN_03ebaf40(param_1,4,&local_48);
  puVar3 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(4 < *(uint *)(param_1 + 0x28)) * 0x100);
  puVar3[2] = &LAB_01dc7d68;
  puVar3[3] = 0;
  *puVar3 = &PTR_LAB_04a5b4d0;
  puVar3[1] = param_1;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = &LAB_01dc7d70;
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
  puVar1 = PTR_DAT_04bc1060;
  lVar4 = *(long *)PTR_DAT_04bc1060;
  if (*(long *)(lVar4 + 0x90) == 0) {
    *(undefined ***)(lVar4 + 0x90) = &PTR_PTR_04c48678;
    lVar4 = *(long *)puVar1;
  }
  if (*(long *)(lVar4 + 0x98) == 0) {
    *(undefined ***)(lVar4 + 0x98) = &PTR_PTR_04c48678;
  }
  return;
}

