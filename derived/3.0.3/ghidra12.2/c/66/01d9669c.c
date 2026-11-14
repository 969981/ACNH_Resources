
undefined8 FUN_01d9669c(long param_1,long param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_01d967c4;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_01d967c4;
    if (*(long **)(lVar4 + 0xe7290) == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar4 + 0xe7290);
      uVar2 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar2 = (**(code **)*puVar5)();
      }
    }
    piVar1 = (int *)(*(long *)(lVar4 + 0xe7278) + *(long *)(lVar4 + 0xe7270));
    if ((*(short *)(param_2 + 0x1e382c) == 0) || ((short)piVar1[1] == 0)) {
      if (*(int *)(param_2 + 0x1e3828) == *piVar1) goto LAB_01d967fc;
    }
    else if ((*(int *)(param_2 + 0x1e3828) == *piVar1) &&
            ((*(long *)(piVar1 + 1) == *(long *)(param_2 + 0x1e382c) &&
             *(long *)(piVar1 + 3) == *(long *)(param_2 + 0x1e3834)) &&
             piVar1[5] == *(int *)(param_2 + 0x1e383c))) {
LAB_01d967fc:
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      if (((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0xe7290) != 0)) {
        puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xe7290) + 8);
        if (puVar5 == (undefined8 *)0x0) {
          return 0;
        }
        (**(code **)*puVar5)();
      }
      return 0;
    }
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0xe7290) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xe7290) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
LAB_01d967c4:
  uVar3 = 1;
  if (((*(int *)(param_1 + 0x110) == 3) && ((param_3 & 1) == 0)) &&
     (uVar3 = 0, param_4 != (undefined4 *)0x0)) {
    *param_4 = 2;
  }
  return uVar3;
}

