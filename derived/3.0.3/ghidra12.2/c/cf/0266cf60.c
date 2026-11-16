
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0266cf60(undefined4 *param_1,uint param_2)

{
  short *psVar1;
  long lVar2;
  short *psVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) goto LAB_0266cfd8;
      lVar6 = lVar6 + 0x70;
    }
    else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
            (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 == 0)) goto LAB_0266cfd8;
    if (param_2 < 8) {
      lVar2 = lVar6 + 0x119228 + (ulong)param_2 * 0xfa08;
      if (7 < param_2) {
        lVar2 = lVar6 + 0x119228;
      }
      if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar7 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar7)();
        uVar5 = uVar5 ^ 1;
      }
      psVar1 = (short *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x28a08);
      psVar3 = (short *)&DAT_05599b30;
      if (*psVar1 != -2) {
        psVar3 = psVar1;
      }
      uVar4 = *(undefined4 *)(psVar3 + 2);
      *param_1 = *(undefined4 *)psVar3;
      param_1[1] = uVar4;
      if ((uVar5 & 1) != 0) {
        return;
      }
      if (*(long *)(lVar2 + 0x28) == 0) {
        return;
      }
      puVar7 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8);
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0266d090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar7)();
      return;
    }
  }
LAB_0266cfd8:
  uVar4 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar4;
  return;
}

