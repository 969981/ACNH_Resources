
void FUN_028b0618(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "GrowUpAfterPatch1_5";
  uVar8 = FUN_0273f0a0(&local_40);
  puVar6 = PTR_DAT_04bb37e0;
  if ((uVar8 & 1) == 0) {
    uVar3 = PTR_DAT_04bb37e0[2];
    uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined1 *)(param_1 + 0x16d2) = uVar3;
    *(undefined2 *)(param_1 + 0x16d0) = uVar5;
    *(undefined2 *)(param_1 + 0x16d8) = uVar5;
    *(undefined2 *)(param_1 + 0x16e0) = uVar5;
    uVar4 = puVar6[3];
    *(undefined1 *)(param_1 + 0x16d3) = uVar4;
    uVar1 = *(undefined4 *)(puVar6 + 4);
    *(undefined1 *)(param_1 + 0x16da) = uVar3;
    *(undefined1 *)(param_1 + 0x16db) = uVar4;
    *(undefined1 *)(param_1 + 0x16e2) = uVar3;
    *(undefined1 *)(param_1 + 0x16e3) = uVar4;
    *(undefined4 *)(param_1 + 0x16d4) = uVar1;
    *(undefined4 *)(param_1 + 0x16dc) = uVar1;
    *(undefined4 *)(param_1 + 0x16e4) = uVar1;
  }
  FUN_0289de30(param_1);
  if (DAT_05574040 != 0) {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar11 + 0x38))();
      lVar10 = 0;
      if (lVar9 != 0) {
        lVar10 = lVar9 + 0x70;
      }
      goto LAB_028b070c;
    }
    if (puVar11 != (undefined8 *)0x0) {
      lVar10 = 0;
      if ((long *)puVar11[0x26] != (long *)0x0) {
        lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      }
      goto LAB_028b070c;
    }
  }
  lVar10 = 0;
LAB_028b070c:
  if ((*(long **)(lVar10 + 0x1a0b70) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x1a0b70), puVar11 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar11)();
    uVar7 = uVar7 ^ 1;
  }
  uVar2 = *(uint *)(*(long *)(lVar10 + 0x1a0b58) + *(long *)(lVar10 + 0x1a0b50));
  if (3 < uVar2) {
    uVar2 = 0;
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar2);
  if ((((uVar7 & 1) == 0) && (*(long *)(lVar10 + 0x1a0b70) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x1a0b70) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  if (uVar2 < 2) {
    FUN_0289f6b0(param_1,param_2);
  }
  else if (uVar2 == 2) {
    FUN_0289fa20(param_1,param_2);
  }
  else if (uVar2 == 3) {
    FUN_028a1730(param_1,param_2);
  }
  return;
}

