
long FUN_0036afec(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = (**(code **)PTR_DAT_04bd0800)(0x70,0x10,*(undefined8 *)PTR_DAT_04bd0810);
  if (lVar1 != 0) {
    FUN_0036eb5c(lVar1,param_2);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  plVar4 = (long *)(*plVar2 + (long)(int)plVar2[1] * 0x30);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  *plVar4 = lVar1;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4 = plVar4 + 4;
  lVar3 = *plVar4;
  plVar2 = (long *)(param_1 + 0x38);
  *plVar4 = *plVar2;
  *(long **)(lVar3 + 8) = plVar2;
  *(long **)(*plVar2 + 8) = plVar4;
  *plVar2 = lVar3;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return lVar1;
}

