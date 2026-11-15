
void FUN_024af560(long param_1)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 local_18 [4];
  undefined1 local_14;
  byte local_13;
  undefined1 local_12;
  
  lVar5 = FUN_0251e98c(1);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x870) + 0xf0))(lVar5 + 0x870);
  uVar9 = *puVar6;
  *(undefined4 *)(param_1 + 0x184c) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  *(undefined4 *)(param_1 + 0x1850) = uVar9;
  plVar1 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x4c8);
  }
  piVar7 = (int *)(**(code **)(*plVar1 + 0x148))();
  uVar4 = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  if (*piVar7 != 0) {
    uVar4 = *(uint *)(param_1 + 0x17cc);
  }
  uVar8 = uVar4 & 0xfffffffe;
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if ((uVar4 & 1) == 0) goto LAB_024af6dc;
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  uVar4 = (uint)bVar2;
  bVar3 = 7 < uVar4;
  if (bVar3) {
    uVar4 = 0xff;
  }
  local_18[0] = (undefined1)uVar4;
  lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar4 * 0x740;
  if (bVar3) {
    lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar5 + 0x11c) = 3;
    FUN_01393458(lVar5 + 0x1c0);
  }
  else {
    *(undefined4 *)(lVar5 + 0x11c) = 4;
  }
  if (bVar2 < 8) {
    local_13 = bVar2;
    uVar4 = FUN_02582d8c(local_18,1);
    if ((7 < uVar4) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0'))
    goto LAB_024af6c0;
    local_14 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0';
  }
  else {
    local_13 = 0xff;
LAB_024af6c0:
    local_14 = false;
  }
  local_12 = 1;
  FUN_02308c94(&local_14);
  uVar8 = *(uint *)(param_1 + 0x17cc);
LAB_024af6dc:
  *(uint *)(param_1 + 0x17cc) = uVar8 | 0x100000;
  *(undefined8 *)(param_1 + 0x184c) = 0x3e19999a00000000;
  plVar1 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x4c8);
  }
  piVar7 = (int *)(**(code **)(*plVar1 + 0x148))();
  if (*piVar7 == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  }
  return;
}

