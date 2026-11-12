
void FUN_007b3ddc(uint param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  lVar1 = DAT_04ca9180;
  if (((DAT_04ca9180 != 0) && (DAT_05574040 != 0)) &&
     (lVar3 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))(), lVar3 != 0))
  {
    if ((*(long **)(lVar3 + 0xe71b0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0xe71b0), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    plVar5 = &DAT_0417bad0;
    if (param_1 < 8) {
      plVar6 = (long *)(*(long *)(lVar3 + 0xe7198) + *(long *)(lVar3 + 0xe7190) +
                       (ulong)param_1 * 0x48);
      plVar5 = &DAT_0417bad0;
      if (*plVar6 != 0 || plVar6[1] != 0) {
        plVar5 = plVar6;
      }
    }
    FUN_007b3ecc(lVar1,*plVar5,plVar5[1]);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0xe71b0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0xe71b0) + 8), puVar4 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x007b3eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)();
      return;
    }
  }
  return;
}

