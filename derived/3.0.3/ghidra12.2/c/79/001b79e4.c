
undefined8 FUN_001b79e4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = FUN_001b8fa0(param_2,"RVCID",0);
  if (iVar1 != 0) {
    iVar1 = FUN_001b8fa0(param_2,"RVCID",0);
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != iVar1)) {
      return 0;
    }
    *(int *)(param_1 + 8) = iVar1;
    uVar2 = FUN_001b8fa0(param_2,&DAT_0410a687,0);
    if (*(long *)(param_1 + 0x10) == 0) {
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
  }
  plVar3 = (long *)FUN_00187df4(0x80);
  *plVar3 = 0;
  FUN_001b8358(plVar3 + 2,param_2);
  plVar4 = (long *)(param_1 + 0x18);
  lVar6 = *plVar4;
  *plVar3 = lVar6;
  plVar3[1] = (long)plVar4;
  *plVar4 = (long)plVar3;
  lVar5 = *(long *)(param_1 + 0x28);
  *(long **)(lVar6 + 8) = plVar3;
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  return 1;
}

