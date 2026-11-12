
void FUN_007b4370(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  
  lVar5 = DAT_04ca9180;
  if (((DAT_04ca9180 != 0) && (DAT_05574040 != 0)) &&
     (lVar7 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))(), lVar7 != 0))
  {
    if ((*(long **)(lVar7 + 0xe71b0) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0xe71b0), puVar8 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar8)();
      uVar6 = uVar6 ^ 1;
    }
    plVar9 = &DAT_0417bad0;
    if (param_1 < 8) {
      plVar10 = (long *)(*(long *)(lVar7 + 0xe7198) + *(long *)(lVar7 + 0xe7190) +
                        (ulong)param_1 * 0x48);
      plVar9 = &DAT_0417bad0;
      if (*plVar10 != 0 || plVar10[1] != 0) {
        plVar9 = plVar10;
      }
    }
    lVar3 = plVar9[1];
    if (*plVar9 != 0 || lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar5 + 0x140);
      uVar4 = *(undefined8 *)(lVar5 + 0x148);
      *(long *)(lVar5 + 0x140) = *plVar9;
      *(long *)(lVar5 + 0x148) = lVar3;
      lVar3 = *(long *)(lVar5 + 0x160);
      while (lVar3 != lVar5 + 0x158) {
        lVar2 = *(long *)(lVar3 + 8);
        puVar8 = (undefined8 *)(*(long *)(lVar3 + 0x10) + 0x40);
        (**(code **)*puVar8)(puVar8,uVar1,uVar4);
        lVar3 = lVar2;
      }
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0xe71b0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0xe71b0) + 8), puVar8 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x007b4490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar8)();
      return;
    }
  }
  return;
}

