
long FUN_0036b09c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = (**(code **)PTR_DAT_04bd0800)(0x1d0,0x10,*(undefined8 *)PTR_DAT_04bd0810);
  if (lVar2 != 0) {
    FUN_00397b74(lVar2,param_2);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar5 = *(long *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x18) = iVar1 + 1;
  *(long *)(lVar5 + (long)iVar1 * 0x18) = lVar2;
  plVar6 = (long *)(param_1 + 0x50);
  plVar4 = (long *)(lVar5 + (long)iVar1 * 0x18 + 8);
  lVar3 = *plVar4;
  *plVar4 = *plVar6;
  *(long **)(lVar3 + 8) = plVar6;
  *(long **)(*plVar6 + 8) = plVar4;
  *plVar6 = lVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return lVar2;
}

