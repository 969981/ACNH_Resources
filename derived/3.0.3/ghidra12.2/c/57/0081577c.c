
void FUN_0081577c(long *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_2;
  lVar4 = *(long *)PTR_DAT_04bb27d0;
  if (lVar4 != 0) {
    if (((*(long *)(lVar4 + 0x10) != 0) && ((*(uint *)(lVar4 + 0x80) & 0xfffffffe) == 2)) &&
       (*(int *)(*(long *)(lVar4 + 0x10) + 0x3e4) != 1)) {
      return;
    }
    if (*(long *)(lVar4 + 0x28) != 0) {
      if (7 < param_2) {
        return;
      }
      if (*(int *)(lVar4 + 0x80) == 1) {
        return;
      }
      goto LAB_008157f0;
    }
  }
  if (7 < param_2) {
    return;
  }
LAB_008157f0:
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) {
        return;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return;
      }
      lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar4 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar4 + 0xe7140) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0xe7140), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 & 0xffffffff;
    }
    lVar1 = *(long *)(lVar4 + 0xe7128) + *(long *)(lVar4 + 0xe7120);
    plVar6 = (long *)(lVar1 + uVar8 * 0x48);
    if ((*plVar6 != 0 || plVar6[1] != 0) && (uVar3 = FUN_02818650(lVar1,uVar8), (uVar3 & 1) == 0)) {
      plVar7 = (long *)(*(long *)(lVar4 + 0xe7128) + *(long *)(lVar4 + 0xe7120) + uVar8 * 0x48);
      plVar6 = &DAT_0417bad0;
      if (*plVar7 != 0 || plVar7[1] != 0) {
        plVar6 = plVar7;
      }
      lVar1 = plVar6[1];
      *param_1 = *plVar6;
      param_1[1] = lVar1;
    }
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0xe7140) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xe7140) + 8), puVar5 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x008158f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)();
      return;
    }
  }
  return;
}

