
bool FUN_02b60290(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (DAT_05574040 == 0) {
LAB_02b60320:
    bVar1 = true;
  }
  else {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_02b60320;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_02b60320;
    plVar6 = *(long **)(&LAB_00205730 + lVar4);
    if ((plVar6 == (long *)0x0) || (puVar5 = (undefined8 *)*plVar6, puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    iVar3 = FUN_0285e924(0);
    if ((iVar3 == 3) && (iVar3 = FUN_0285e924(1), iVar3 == 3)) {
      iVar3 = FUN_0285e924(2);
      bVar1 = iVar3 == 3;
    }
    else {
      bVar1 = false;
    }
    if ((((uVar2 & 1) == 0) && (lVar4 = *(long *)(&LAB_00205730 + lVar4), lVar4 != 0)) &&
       (puVar5 = *(undefined8 **)(lVar4 + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return bVar1;
}

