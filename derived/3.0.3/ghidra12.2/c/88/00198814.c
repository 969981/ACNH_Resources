
void FUN_00198814(long param_1,long param_2,long *param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  plVar3 = (long *)(param_1 + 0x20);
  plVar1 = (long *)FUN_00187df4(0x20);
  if ((param_4 & 1) == 0) {
    plVar1[2] = param_2;
    plVar1[3] = lVar4;
    *plVar1 = (long)plVar3;
    plVar3 = (long *)(param_1 + 0x28);
    puVar2 = (undefined8 *)*plVar3;
    plVar1[1] = (long)puVar2;
  }
  else {
    plVar1[2] = param_2;
    plVar1[3] = lVar4;
    *plVar1 = 0;
    plVar1[1] = (long)plVar3;
    lVar4 = *plVar3;
    *plVar1 = lVar4;
    puVar2 = (undefined8 *)(lVar4 + 8);
  }
  *puVar2 = plVar1;
  lVar4 = *(long *)(param_1 + 0x30);
  *plVar3 = (long)plVar1;
  *(long *)(param_1 + 0x30) = lVar4 + 1;
  return;
}

