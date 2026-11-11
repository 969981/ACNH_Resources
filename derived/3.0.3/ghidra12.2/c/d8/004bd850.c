
void FUN_004bd850(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  do {
    iVar2 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar8 = param_2;
    iVar3 = param_3;
    do {
      piVar7 = (int *)(param_1 + (long)iVar8 * 4);
      do {
        iVar5 = iVar8;
        piVar6 = piVar7;
        piVar7 = piVar6 + 1;
        iVar8 = iVar5 + 1;
      } while (*piVar6 < iVar2);
      piVar7 = (int *)(param_1 + 4 + (long)iVar3 * 4);
      iVar3 = iVar3 + 1;
      do {
        iVar4 = iVar3;
        piVar7 = piVar7 + -1;
        iVar1 = *piVar7;
        iVar3 = iVar4 + -1;
      } while (iVar2 < iVar1);
      iVar8 = iVar5;
      if (iVar5 <= iVar3) {
        if (iVar5 != iVar3) {
          *piVar7 = *piVar6;
          *piVar6 = iVar1;
        }
        iVar3 = iVar4 + -2;
        iVar8 = iVar5 + 1;
      }
    } while (iVar8 <= iVar3);
    if (param_2 < iVar3) {
      FUN_004bd850(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}

