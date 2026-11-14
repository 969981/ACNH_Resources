
void FUN_016c8a24(undefined4 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar6 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_1);
  if (lVar6 == 0) {
    return;
  }
  lVar10 = *(long *)puVar4;
  if (lVar10 == 0) {
LAB_016c8aac:
    lVar10 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar11 + 0x38))();
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 + 0x70;
      }
    }
    else {
      if (puVar11 == (undefined8 *)0x0) goto LAB_016c8aac;
      lVar10 = 0;
      if ((long *)puVar11[0x26] != (long *)0x0) {
        lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      }
    }
  }
  lVar7 = *(long *)(&LAB_00205768 + lVar10);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar9 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(&LAB_00205768 + lVar10) == 0) goto LAB_016c8b28;
      plVar9 = *(long **)(*(long *)(&LAB_00205768 + lVar10) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_48 = *(long *)(lVar10 + 0x205748);
      local_40 = *(undefined8 *)(lVar10 + 0x205750);
      uStack_38 = 0x3a348;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
    }
  }
LAB_016c8b28:
  lVar7 = *(long *)(lVar10 + 0x205750) + *(long *)(lVar10 + 0x205748);
  if ((*(long **)(lVar6 + 0x17f68) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar6 + 0x17f68), puVar11 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar11)();
    uVar5 = uVar5 ^ 1;
  }
  piVar1 = (int *)(lVar7 + 0x3a268);
  if (*piVar1 == 0) {
    lVar13 = 0;
    piVar12 = piVar1;
  }
  else if (*(int *)(lVar7 + 0x3a284) == 0) {
    lVar13 = 1;
    piVar12 = (int *)(lVar7 + 0x3a284);
  }
  else if (*(int *)(lVar7 + 0x3a2a0) == 0) {
    lVar13 = 2;
    piVar12 = (int *)(lVar7 + 0x3a2a0);
  }
  else if (*(int *)(lVar7 + 0x3a2bc) == 0) {
    lVar13 = 3;
    piVar12 = (int *)(lVar7 + 0x3a2bc);
  }
  else if (*(int *)(lVar7 + 0x3a2d8) == 0) {
    lVar13 = 4;
    piVar12 = (int *)(lVar7 + 0x3a2d8);
  }
  else if (*(int *)(lVar7 + 0x3a2f4) == 0) {
    lVar13 = 5;
    piVar12 = (int *)(lVar7 + 0x3a2f4);
  }
  else if (*(int *)(lVar7 + 0x3a310) == 0) {
    lVar13 = 6;
    piVar12 = (int *)(lVar7 + 0x3a310);
  }
  else {
    if (*(int *)(lVar7 + 0x3a32c) != 0) goto LAB_016c8c48;
    lVar13 = 7;
    piVar12 = (int *)(lVar7 + 0x3a32c);
  }
  puVar11 = (undefined8 *)(*(long *)(lVar6 + 0x17f50) + *(long *)(lVar6 + 0x17f48));
  uVar2 = *puVar11;
  uVar14 = puVar11[2];
  *(undefined8 *)(piVar12 + 2) = puVar11[1];
  *(undefined8 *)(piVar12 + 4) = uVar14;
  *(undefined8 *)piVar12 = uVar2;
  uVar3 = *(uint *)(puVar11 + 3);
  if (1 < uVar3) {
    uVar3 = 0;
  }
  piVar1[lVar13 * 7 + 6] = uVar3;
LAB_016c8c48:
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x17f68) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar6 + 0x17f68) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(&LAB_00205768 + lVar10) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(&LAB_00205768 + lVar10) + 0x18),
     puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return;
}

