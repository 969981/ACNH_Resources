
void FUN_024c45b8(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  byte local_48 [4];
  undefined8 local_44;
  undefined8 local_3c;
  undefined1 local_34;
  byte local_14 [4];
  
  local_44 = 0;
  local_48[0] = *(byte *)(param_1 + 0x1ee8);
  local_3c = 0x3dcccccd00000000;
  local_34 = 0;
  if (7 < local_48[0]) {
    local_48[0] = 0xff;
  }
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_48,*(undefined4 *)(param_1 + 0x230),1);
  lVar3 = FUN_0251e98c(1);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x870) + 0xf0))(lVar3 + 0x870);
  uVar6 = *puVar4;
  *(undefined4 *)(param_1 + 0x184c) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  *(undefined4 *)(param_1 + 0x1850) = uVar6;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  piVar5 = (int *)(**(code **)(*plVar2 + 0x148))();
  uVar1 = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  if (*piVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar1 & 0xfffffffe;
  if ((uVar1 & 1) != 0) {
    local_14[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
    FUN_024c43c4(local_14,param_1 + 0x18e0);
  }
  return;
}

