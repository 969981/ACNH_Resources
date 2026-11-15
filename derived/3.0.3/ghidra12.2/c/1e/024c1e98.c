
void FUN_024c1e98(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  byte local_24 [4];
  
  lVar3 = FUN_0251e98c(1);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x870) + 0xf0))(lVar3 + 0x870);
  uVar7 = *puVar4;
  *(undefined4 *)(param_1 + 0x184c) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  *(undefined4 *)(param_1 + 0x1850) = uVar7;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  piVar5 = (int *)(**(code **)(*plVar2 + 0x148))();
  uVar1 = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  if (*piVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0x17cc);
  }
  uVar6 = uVar1 & 0xfffffffe;
  *(uint *)(param_1 + 0x17cc) = uVar6;
  if ((uVar1 & 1) != 0) {
    local_24[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    FUN_024c1c20(local_24,param_1 + 0x18e0);
    uVar6 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar6 | 0x100000;
  *(undefined8 *)(param_1 + 0x184c) = 0x3e19999a00000000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  piVar5 = (int *)(**(code **)(*plVar2 + 0x148))();
  if (*piVar5 == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  }
  return;
}

