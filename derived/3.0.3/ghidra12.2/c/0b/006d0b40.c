
void FUN_006d0b40(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  if (1 < *(uint *)(param_1 + 0x10)) {
    uVar4 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + uVar4 * 8) + 0x10) = 0;
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  puVar6 = (uint *)*param_2;
  uVar8 = puVar6[4];
  if (1 < *(uint *)(param_1 + 0x10)) {
    uVar4 = 0;
  }
  puVar5 = *(uint **)(param_1 + uVar4 * 8);
  if (0 < (int)uVar8) {
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      if (*puVar6 <= uVar7) {
        uVar8 = 0;
      }
      uVar2 = uVar7;
      if (*puVar5 <= uVar7) {
        uVar2 = 0;
      }
      uVar7 = uVar7 + 1;
      *(undefined8 *)(*(long *)(puVar5 + 2) + (ulong)uVar2 * 8) =
           *(undefined8 *)(*(long *)(puVar6 + 2) + (ulong)uVar8 * 8);
      uVar8 = puVar6[4];
    } while ((int)uVar7 < (int)uVar8);
  }
  puVar5[4] = uVar8;
  plVar1 = (long *)(param_1 + 0x20);
  plVar3 = plVar1 + *(uint *)(param_1 + 0x30);
  if (1 < *(uint *)(param_1 + 0x30)) {
    plVar3 = plVar1;
  }
  *(undefined4 *)(*plVar3 + 0x10) = 0;
  plVar3 = plVar1 + *(uint *)(param_1 + 0x30);
  if (1 < *(uint *)(param_1 + 0x30)) {
    plVar3 = plVar1;
  }
  FUN_006d0260(*plVar3,param_2[1]);
  plVar1 = (long *)(param_1 + 0x40);
  plVar3 = plVar1 + *(uint *)(param_1 + 0x50);
  if (1 < *(uint *)(param_1 + 0x50)) {
    plVar3 = plVar1;
  }
  *(undefined4 *)(*plVar3 + 0x10) = 0;
  plVar3 = plVar1 + *(uint *)(param_1 + 0x50);
  if (1 < *(uint *)(param_1 + 0x50)) {
    plVar3 = plVar1;
  }
  FUN_006d0260(*plVar3,param_2[2]);
  return;
}

