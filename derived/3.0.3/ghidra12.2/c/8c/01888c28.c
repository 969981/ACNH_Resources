
void FUN_01888c28(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(**(code **)(**(long **)(param_1 + 0x300) + 0x148))();
  if (*(int *)(param_1 + 0x280) == 1) {
    iVar3 = *(int *)(param_1 + 0x31c);
    *piVar4 = iVar3;
    iVar1 = *(int *)(param_1 + 800);
    piVar4[1] = iVar1;
    iVar2 = *(int *)(param_1 + 0x324);
    piVar4[2] = iVar2;
    *piVar4 = *(int *)(param_1 + 0x34c) + iVar3;
    piVar4[1] = *(int *)(param_1 + 0x350) + iVar1;
    piVar4[2] = *(int *)(param_1 + 0x354) + iVar2;
  }
  else {
    iVar3 = FUN_006f0400(*(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x4cc),
                         *(float *)(param_1 + 0x33c) - *(float *)(param_1 + 0x4d4));
    piVar4[1] = iVar3;
  }
  return;
}

