
undefined8 FUN_01697d40(long param_1,uint param_2,int *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  param_1 = param_1 + 0x10;
  lVar3 = param_1 + (ulong)param_2 * 0x160;
  if (7 < param_2) {
    lVar3 = param_1;
  }
  if ((*(byte *)(lVar3 + 0x140) >> 6 & 1) == 0) {
    return 0;
  }
  lVar3 = param_1 + (ulong)param_2 * 0x160;
  if (7 < param_2) {
    lVar3 = param_1;
  }
  param_3[1] = *(int *)(lVar3 + 0x144);
  lVar3 = *(long *)PTR_DAT_04bb46b0;
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_01697dfc:
        if (param_2 < 8) {
          lVar1 = lVar3 + 0x119228 + (ulong)param_2 * 0xfa08;
          if (7 < param_2) {
            lVar1 = lVar3 + 0x119228;
          }
          if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
             (puVar4 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar4 == (undefined8 *)0x0)) {
            iVar5 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
          }
          else {
            uVar2 = (**(code **)*puVar4)();
            iVar5 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
            if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
               (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar4 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar4)();
            }
          }
          goto LAB_01697e0c;
        }
      }
    }
    else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 != 0)) goto LAB_01697dfc;
  }
  iVar5 = -1;
LAB_01697e0c:
  *param_3 = iVar5;
  lVar3 = param_1 + (ulong)param_2 * 0x160;
  if (7 < param_2) {
    lVar3 = param_1;
  }
  param_3[2] = *(int *)(lVar3 + 0x148);
  return 1;
}

