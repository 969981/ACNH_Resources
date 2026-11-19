
undefined8 FUN_03b59a60(long *param_1,ushort param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return 1;
  }
  lVar7 = *(long *)(DAT_05aebb88 + 0x178);
  if (lVar7 == 0) {
    return 1;
  }
  if (*(ushort *)(lVar7 + 0x1f0) == param_2) {
    plVar10 = (long *)(lVar7 + 0x60);
  }
  else {
    if (*(char *)(lVar7 + 0x28) == '\0') {
      return 1;
    }
    if (param_2 == 0xffff) {
      return 1;
    }
    uVar2 = *(uint *)(lVar7 + 0x48);
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (*(long *)(lVar7 + 0x30) != 0) {
      uVar8 = (uint)param_2;
      bVar5 = SBORROW4(uVar2,uVar8);
      bVar3 = (int)(uVar2 - uVar8) < 0;
      bVar4 = uVar2 == uVar8;
    }
    if (bVar4 || bVar3 != bVar5) {
      return 1;
    }
    plVar10 = (long *)(*(long *)(lVar7 + 0x30) + (ulong)param_2 * 0xe8);
    if (*(ushort *)(plVar10 + 0x1c) != param_2) {
      return 1;
    }
  }
  uVar6 = (**(code **)(*plVar10 + 0x58))(plVar10);
  if (((uVar6 & 1) != 0) &&
     (uVar6 = (**(code **)(*param_1 + 0x48))(param_1,plVar10), (uVar6 & 1) != 0)) {
    (**(code **)(*param_1 + 0x60))(param_1,1);
    *(undefined1 *)(param_1 + 1) = 1;
    plVar9 = plVar10 + 0x10;
    lVar7 = *plVar9;
    plVar1 = (long *)((long)*(int *)((long)plVar10 + 0x94) + (long)param_1);
    *plVar9 = (long)plVar1;
    *plVar1 = lVar7;
    plVar1[1] = (long)plVar9;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar1;
    }
    *(int *)(plVar10 + 0x12) = (int)plVar10[0x12] + 1;
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return 1;
}

