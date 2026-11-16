
uint FUN_02641710(uint param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  lVar6 = *(long *)PTR_DAT_04bb27d0;
  bVar2 = false;
  if (lVar6 != 0) {
    if (((*(long *)(lVar6 + 0x10) != 0) && ((*(uint *)(lVar6 + 0x80) & 0xfffffffe) == 2)) &&
       (*(int *)(*(long *)(lVar6 + 0x10) + 0x3e4) != 1)) {
      return 0;
    }
    if (*(long *)(lVar6 + 0x28) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(lVar6 + 0x80) == 1;
    }
  }
  if (7 < param_1) {
    return 0;
  }
  if (bVar2) {
    return 0;
  }
  if (DAT_05574040 == 0) {
LAB_02641804:
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) {
LAB_0264180c:
        uVar3 = 0;
        uVar4 = 0;
        goto LAB_02641890;
      }
      lVar6 = lVar6 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) goto LAB_02641804;
      if (((long *)puVar7[0x26] == (long *)0x0) ||
         (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 == 0)) goto LAB_0264180c;
    }
    if ((*(long **)(lVar6 + 0xe7140) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0xe7140), puVar7 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar7)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar6 + 0xe7128) + *(long *)(lVar6 + 0xe7120);
    plVar8 = (long *)(lVar1 + (ulong)param_1 * 0x48);
    if ((*plVar8 == 0 && plVar8[1] == 0) || (uVar5 = FUN_02818650(lVar1,param_1), (uVar5 & 1) != 0))
    {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0281850c(*(long *)(lVar6 + 0xe7128) + *(long *)(lVar6 + 0xe7120),param_1);
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0xe7140) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xe7140) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    uVar3 = 1;
  }
LAB_02641890:
  return uVar3 & uVar4;
}

