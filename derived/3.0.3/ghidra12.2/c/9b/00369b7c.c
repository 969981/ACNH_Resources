
long FUN_00369b7c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = (**(code **)PTR_DAT_04bd0800)(0x40,4,*(undefined8 *)PTR_DAT_04bd0810);
  if (lVar1 != 0) {
    FUN_0035d9bc(lVar1);
    plVar4 = (long *)(param_1 + 8);
    plVar2 = (long *)(lVar1 + 8);
    lVar3 = *plVar2;
    *plVar2 = *plVar4;
    *(long **)(lVar3 + 8) = plVar4;
    *(long **)(*plVar4 + 8) = plVar2;
    *plVar4 = lVar3;
  }
  return lVar1;
}

