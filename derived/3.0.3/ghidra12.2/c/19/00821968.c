
void FUN_00821968(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar4 = DAT_054ee400;
  if (DAT_054ee400 == 0) {
    return;
  }
  if (DAT_04ca9180 == 0) {
    return;
  }
  lVar2 = *(long *)(DAT_04ca9180 + 0x140);
  lVar3 = *(long *)(DAT_04ca9180 + 0x148);
  if (lVar2 == 0 && lVar3 == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
    if (lVar6 == 0) {
      return;
    }
    lVar6 = lVar6 + 0x70;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar7[0x26] == (long *)0x0) {
      return;
    }
    lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
    if (lVar6 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar7)();
    uVar5 = uVar5 ^ 1;
  }
  lVar1 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
  if (lVar2 == *(long *)(lVar1 + 0x1e33b0) && lVar3 == *(long *)(lVar1 + 0x1e33b8)) {
    uVar8 = 0;
  }
  else {
    if (((((lVar2 != *(long *)(lVar1 + 0x1e33f8) || lVar3 != *(long *)(lVar1 + 0x1e3400)) &&
          (lVar2 != *(long *)(lVar1 + 0x1e3440) || lVar3 != *(long *)(lVar1 + 0x1e3448))) &&
         (lVar2 != *(long *)(lVar1 + 0x1e3488) || lVar3 != *(long *)(lVar1 + 0x1e3490))) &&
        ((lVar2 != *(long *)(lVar1 + 0x1e34d0) || lVar3 != *(long *)(lVar1 + 0x1e34d8) &&
         (lVar2 != *(long *)(lVar1 + 0x1e3518) || lVar3 != *(long *)(lVar1 + 0x1e3520))))) &&
       ((lVar2 != *(long *)(lVar1 + 0x1e3560) || lVar3 != *(long *)(lVar1 + 0x1e3568) &&
        (lVar2 != *(long *)(lVar1 + 0x1e35a8) || lVar3 != *(long *)(lVar1 + 0x1e35b0)))))
    goto LAB_00821c04;
    if (*(long *)(lVar1 + 0x1e33f8) == lVar2 && *(long *)(lVar1 + 0x1e3400) == lVar3) {
      uVar8 = 1;
    }
    else if (*(long *)(lVar1 + 0x1e3440) == lVar2 && *(long *)(lVar1 + 0x1e3448) == lVar3) {
      uVar8 = 2;
    }
    else if (*(long *)(lVar1 + 0x1e3488) == lVar2 && *(long *)(lVar1 + 0x1e3490) == lVar3) {
      uVar8 = 3;
    }
    else if (*(long *)(lVar1 + 0x1e34d0) == lVar2 && *(long *)(lVar1 + 0x1e34d8) == lVar3) {
      uVar8 = 4;
    }
    else if (*(long *)(lVar1 + 0x1e3518) == lVar2 && *(long *)(lVar1 + 0x1e3520) == lVar3) {
      uVar8 = 5;
    }
    else if (*(long *)(lVar1 + 0x1e3560) == lVar2 && *(long *)(lVar1 + 0x1e3568) == lVar3) {
      uVar8 = 6;
    }
    else {
      if (*(long *)(lVar1 + 0x1e35a8) != lVar2 || *(long *)(lVar1 + 0x1e35b0) != lVar3)
      goto LAB_00821c04;
      uVar8 = 7;
    }
  }
  FUN_02509b80(lVar4);
  FUN_0250a6b0(lVar4,0,uVar8,1);
LAB_00821c04:
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00821c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar7)();
    return;
  }
  return;
}

