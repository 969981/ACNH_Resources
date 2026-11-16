
byte FUN_026d3220(ushort *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  
  uVar5 = nn::time::IsValidDate
                    ((uint)*param_1,(uint)(byte)param_1[1],(uint)*(byte *)((long)param_1 + 3));
  if (param_2 == -1) {
    return 0;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if ((DAT_05574040 == 0) || (lVar6 = FUN_026eec4c(DAT_05574040,param_2), lVar6 == 0)) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
    plVar8 = *(long **)(lVar10 + 0x28);
    if (plVar8 != (long *)0x0) goto LAB_026d32b8;
LAB_026d32d4:
    uVar3 = 1;
  }
  else {
    lVar10 = lVar6 + 0x194b0;
    plVar8 = *(long **)(lVar6 + 0x194d8);
    if (plVar8 == (long *)0x0) goto LAB_026d32d4;
LAB_026d32b8:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_026d32d4;
    uVar3 = (*(code *)**(undefined8 **)*plVar8)();
    uVar3 = uVar3 ^ 1;
  }
  if (*(uint *)(param_1 + 0x3be4) <=
      *(uint *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x305c0)) {
    bVar9 = 0;
    goto LAB_026d33ec;
  }
  if ((*(long **)(lVar6 + 0x17bb0) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
  }
  piVar1 = (int *)(*(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90));
  if ((*(int *)(param_1 + 0x3bcc) == piVar1[7]) &&
     ((*(long *)(piVar1 + 8) == *(long *)(param_1 + 0x3bce) &&
      *(long *)(piVar1 + 10) == *(long *)(param_1 + 0x3bd2)) &&
      piVar1[0xc] == *(int *)(param_1 + 0x3bd6))) {
    if ((param_1[0x3bc0] == 0) || ((short)piVar1[1] == 0)) {
      bVar2 = *(int *)(param_1 + 0x3bbe) == *piVar1;
    }
    else {
      if (*(int *)(param_1 + 0x3bbe) != *piVar1) goto LAB_026d3360;
      bVar2 = (*(long *)(piVar1 + 1) == *(long *)(param_1 + 0x3bc0) &&
              *(long *)(piVar1 + 3) == *(long *)(param_1 + 0x3bc4)) &&
              piVar1[5] == *(int *)(param_1 + 0x3bc8);
    }
    bVar9 = bVar2 ^ 1;
  }
  else {
LAB_026d3360:
    bVar9 = 1;
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x17bb0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_026d33ec:
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return bVar9;
}

