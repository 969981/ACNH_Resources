
void FUN_0311d508(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar1 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_2), lVar1 != 0)) {
    if ((*(long **)(lVar1 + 0x3278) == (long *)0x0) ||
       (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x3278), puVar2 == (undefined8 *)0x0)) {
      FUN_0311d5d0(param_1,*(long *)(lVar1 + 0x3260) + *(long *)(lVar1 + 0x3258));
      return;
    }
    uVar3 = (**(code **)*puVar2)();
    FUN_0311d5d0(param_1,*(long *)(lVar1 + 0x3260) + *(long *)(lVar1 + 0x3258));
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x3278) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x3278) + 8), puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0311d598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)();
      return;
    }
  }
  return;
}

