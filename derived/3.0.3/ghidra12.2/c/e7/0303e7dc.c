
undefined8 FUN_0303e7dc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x210) == 0) || (lVar4 = *(long *)(param_1 + 0x218), lVar4 == 0)) {
LAB_0303e844:
    uVar3 = 0;
  }
  else {
    plVar1 = *(long **)(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x1b0);
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x48))();
      if ((uVar2 & 1) == 0) goto LAB_0303e844;
      lVar4 = *(long *)(param_1 + 0x218);
    }
    plVar1 = *(long **)(**(long **)(lVar4 + 0x3f8) + 0x1b0);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0303e840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x48))();
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}

