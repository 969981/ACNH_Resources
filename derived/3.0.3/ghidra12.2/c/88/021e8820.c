
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021e8820(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((param_2 == 0) || (lVar2 = FUN_0265c2a0(*(undefined4 *)(param_2 + 0x508)), lVar2 == 0)) {
    uVar1 = DAT_0558600c;
    *param_1 = _DAT_05586008;
    param_1[1] = uVar1;
  }
  else {
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      FUN_026b1730(param_1,*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      return;
    }
    uVar4 = (**(code **)*puVar3)();
    FUN_026b1730(param_1,*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x021e88a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

