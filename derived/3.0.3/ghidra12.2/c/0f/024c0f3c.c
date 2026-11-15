
void FUN_024c0f3c(long param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  byte local_48 [4];
  undefined8 local_44;
  undefined8 local_3c;
  undefined1 local_34;
  
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
  uVar7 = *puVar4;
  *(undefined4 *)(param_1 + 0x184c) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  *(undefined4 *)(param_1 + 0x1850) = uVar7;
  plVar1 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x4c8);
  }
  piVar5 = (int *)(**(code **)(*plVar1 + 0x148))();
  uVar6 = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  if (*piVar5 != 0) {
    uVar6 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar6 & 0xfffffffe;
  if ((uVar6 & 1) != 0) {
    uVar6 = (uint)*(byte *)(param_1 + 0x1ee8);
    bVar2 = 7 < uVar6;
    if (bVar2) {
      uVar6 = 0xff;
    }
    lVar3 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar6 * 0x740;
    if (bVar2) {
      lVar3 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar3 + 0x24c) = 3;
      FUN_01393458(lVar3 + 0x2f0);
    }
    else {
      *(undefined4 *)(lVar3 + 0x24c) = 4;
    }
  }
  *(undefined8 *)(param_1 + 0x184c) = 0x3e19999a00000000;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  plVar1 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x4c8);
  }
  piVar5 = (int *)(**(code **)(*plVar1 + 0x148))();
  if (*piVar5 == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  }
  return;
}

