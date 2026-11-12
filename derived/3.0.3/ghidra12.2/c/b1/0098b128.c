
void FUN_0098b128(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(**(code **)(**(long **)(param_1 + 0x300) + 0x148))();
  iVar1 = *(int *)(param_1 + 0x31c);
  *piVar4 = iVar1;
  iVar2 = *(int *)(param_1 + 800);
  piVar4[1] = iVar2;
  iVar3 = *(int *)(param_1 + 0x324);
  piVar4[2] = iVar3;
  *piVar4 = *(int *)(param_1 + 0x34c) + iVar1;
  piVar4[1] = *(int *)(param_1 + 0x350) + iVar2;
  piVar4[2] = *(int *)(param_1 + 0x354) + iVar3;
  return;
}

