
undefined8 FUN_003dd240(long param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  plVar2 = *(long **)(param_1 + 8);
  if (((plVar2 == (long *)0x0) || (*(long *)(param_1 + 0x18) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x003dd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3);
    return uVar4;
  }
  uVar3 = (**(code **)(*plVar2 + 0x58))();
  if ((uVar3 & 1) != 0) {
    if (param_3 == 2) {
      lVar5 = *(long *)(param_1 + 0x10) + param_2;
      if (lVar5 < lVar1) goto LAB_003dd300;
    }
    else {
      if (param_3 != 1) {
        uVar4 = 0x80000000;
        if (((param_3 == 0) && (-1 < param_2)) && (param_2 < lVar1)) {
          uVar4 = 0;
          *(long *)(param_1 + 0x10) = param_2;
        }
        return uVar4;
      }
      lVar5 = lVar1 - param_2;
      if (param_2 <= lVar1) {
LAB_003dd300:
        *(long *)(param_1 + 0x10) = lVar5;
        return 0;
      }
    }
  }
  return 0x80000000;
}

