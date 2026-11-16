
bool FUN_026692d0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1[7] == 0 || *param_1 == 0) {
    return true;
  }
  if (DAT_05574040 == 0) {
LAB_0266937c:
    bVar2 = false;
  }
  else {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_0266937c;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_0266937c;
    if ((*(long **)(lVar4 + 0xe7290) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0xe7290), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    piVar1 = (int *)(*(long *)(lVar4 + 0xe7278) + *(long *)(lVar4 + 0xe7270));
    if (((short)piVar1[1] == 0) || ((short)param_1[1] == 0)) {
      bVar2 = *piVar1 == *param_1;
    }
    else if (*piVar1 == *param_1) {
      bVar2 = (*(long *)(param_1 + 1) == *(long *)(piVar1 + 1) &&
              *(long *)(param_1 + 3) == *(long *)(piVar1 + 3)) && param_1[5] == piVar1[5];
    }
    else {
      bVar2 = false;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0xe7290) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xe7290) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return bVar2;
}

