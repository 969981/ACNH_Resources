
void FUN_0242dd78(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  byte local_34 [4];
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined1 local_28;
  byte local_27;
  undefined1 local_26;
  undefined4 local_24;
  undefined8 local_8;
  
  local_8 = 0xfffe;
  FUN_0277d4ac(&local_8);
  local_8 = *(undefined8 *)(param_1 + 0x1900);
  uVar3 = *(uint *)(param_1 + 0x17cc);
  if ((uVar3 >> 9 & 1) == 0) {
    local_30 = (undefined2)local_8;
    *(uint *)(param_1 + 0x17cc) = uVar3 | 0x200;
    local_2c = (undefined4)((ulong)local_8 >> 0x20);
    local_26 = 0;
    local_28 = *(int *)(param_1 + 0x178) == 0;
    local_24 = 0;
    local_2e = (undefined1)((ulong)local_8 >> 0x10);
    local_2d = (undefined1)((ulong)local_8 >> 0x18);
    local_27 = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_27) {
      local_27 = 0xff;
    }
    FUN_02306630(&local_30);
    uVar3 = *(uint *)(param_1 + 0x17cc);
  }
  uVar4 = uVar3 & 0xfffffffe;
  *(uint *)(param_1 + 0x17cc) = uVar4;
  if ((uVar3 & 1) != 0) {
    local_34[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    FUN_0242d8bc(local_34,param_1 + 0x18e0);
    uVar4 = *(uint *)(param_1 + 0x17cc);
  }
  *(undefined8 *)(param_1 + 0x184c) = 0x3e19999a00000000;
  *(uint *)(param_1 + 0x17cc) = uVar4 | 0x100000;
  plVar1 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x4c8);
  }
  piVar2 = (int *)(**(code **)(*plVar1 + 0x148))();
  if (*piVar2 == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  }
  return;
}

