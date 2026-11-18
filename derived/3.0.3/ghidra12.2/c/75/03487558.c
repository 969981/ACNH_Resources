
undefined8 FUN_03487558(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x218);
  if (lVar4 == 0) {
LAB_034875b8:
    uVar3 = 0;
  }
  else {
    if ((*(long *)(lVar4 + 0x570) != 0) &&
       (plVar1 = *(long **)(*(long *)(lVar4 + 0x570) + 0x1b0), plVar1 != (long *)0x0)) {
      uVar2 = (**(code **)(*plVar1 + 0x48))();
      if ((uVar2 & 1) == 0) goto LAB_034875b8;
      lVar4 = *(long *)(param_1 + 0x218);
    }
    plVar1 = *(long **)(**(long **)(lVar4 + 0x3f8) + 0x1b0);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034875b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x48))();
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}

