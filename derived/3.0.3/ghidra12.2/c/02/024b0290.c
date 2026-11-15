
void FUN_024b0290(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 local_18 [4];
  undefined1 local_14;
  byte local_13;
  undefined1 local_12;
  
  lVar4 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x870) + 0xf0))(lVar4 + 0x870);
  uVar8 = *puVar5;
  *(undefined4 *)(param_1 + 0x184c) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  *(undefined4 *)(param_1 + 0x1850) = uVar8;
  plVar1 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x4c8);
  }
  piVar6 = (int *)(**(code **)(*plVar1 + 0x148))();
  uVar3 = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  if (*piVar6 != 0) {
    uVar3 = *(uint *)(param_1 + 0x17cc);
  }
  uVar7 = uVar3 & 0xfffffffe;
  *(uint *)(param_1 + 0x17cc) = uVar7;
  if ((uVar3 & 1) == 0) goto LAB_024b0470;
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  uVar3 = (uint)bVar2;
  if (7 < uVar3) {
    uVar3 = 0xff;
  }
  local_18[0] = (undefined1)uVar3;
  if (*(char *)(param_1 + 0x1922) == '\x01') {
    lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar3 * 0x740;
    if (7 < bVar2) {
      lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == DAT_04c487d4) {
      *(undefined4 *)(lVar4 + 0xc) = 3;
      FUN_01393458(lVar4 + 0xb0);
    }
    else {
      *(undefined4 *)(lVar4 + 0xc) = 4;
    }
  }
  else {
    lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar3 * 0x740;
    if (7 < bVar2) {
      lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar4 + 0x11c) = 3;
      FUN_01393458(lVar4 + 0x1c0);
    }
    else {
      *(undefined4 *)(lVar4 + 0x11c) = 4;
    }
  }
  if (bVar2 < 8) {
    local_13 = bVar2;
    uVar3 = FUN_02582d8c(local_18,1);
    if ((7 < uVar3) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) == '\0'))
    goto LAB_024b0458;
    local_14 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0';
  }
  else {
    local_13 = 0xff;
LAB_024b0458:
    local_14 = false;
  }
  local_12 = 0;
  FUN_02308c94(&local_14);
  uVar7 = *(uint *)(param_1 + 0x17cc);
LAB_024b0470:
  *(uint *)(param_1 + 0x17cc) = uVar7 | 0x100000;
  *(undefined8 *)(param_1 + 0x184c) = 0x3e19999a00000000;
  plVar1 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x4c8);
  }
  piVar6 = (int *)(**(code **)(*plVar1 + 0x148))();
  if (*piVar6 == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  }
  return;
}

