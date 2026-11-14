
void FUN_016d5870(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
      lVar4 = 0;
      if (lVar2 != 0) {
        lVar4 = lVar2 + 0x70;
      }
      goto LAB_016d58e4;
    }
    if (puVar5 != (undefined8 *)0x0) {
      lVar4 = 0;
      if ((long *)puVar5[0x26] != (long *)0x0) {
        lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      }
      goto LAB_016d58e4;
    }
  }
  lVar4 = 0;
LAB_016d58e4:
  iVar7 = 0;
  do {
    if (param_1[1] <= *param_1) {
      return;
    }
    lVar2 = lVar4 + 0x274e80 + (long)iVar7 * 0x3b8;
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 & 0xffffffff;
    }
    if (((*(int *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)) != 0) &&
        (iVar1 = FUN_016d50fc(), iVar1 != -1)) && (*param_1 < param_1[1])) {
      piVar6 = *(int **)(param_1 + 4);
      if (piVar6 != (int *)0x0) {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)piVar6;
      }
      *piVar6 = iVar1;
      if (*param_1 < param_1[1]) {
        *(int **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = piVar6;
        *param_1 = *param_1 + 1;
      }
    }
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 8);
  return;
}

