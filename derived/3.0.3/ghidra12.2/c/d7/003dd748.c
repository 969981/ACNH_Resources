
void FUN_003dd748(long param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  
  if (((*param_2 == 0x50545346) && ((short)param_2[1] == -0x101)) &&
     (param_2[2] - 0x10000U < 0x40201)) {
    *(int **)(param_1 + 8) = param_2;
    piVar2 = (int *)FUN_003dd9d0(param_2);
    if ((*piVar2 == 0x4f464e49) &&
       (piVar3 = (int *)FUN_003dda20(*(undefined8 *)(param_1 + 8)), *piVar3 == 0x54414450)) {
      *(int **)(param_1 + 0x10) = piVar2 + 2;
      *(int **)(param_1 + 0x18) = piVar3 + 2;
      if ((*(long *)(param_1 + 8) == 0) || (uVar4 = FUN_003dda70(), (uVar4 & 1) == 0)) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_003ddab0(*(undefined8 *)(param_1 + 8));
        lVar5 = FUN_003dbc20(*(undefined8 *)(param_1 + 0x10));
        iVar1 = iVar1 + *(int *)(lVar5 + 0x40) + 8;
      }
      *(int *)(param_1 + 0x20) = iVar1;
      lVar5 = FUN_003dbc20(*(undefined8 *)(param_1 + 0x10));
      *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(lVar5 + 0x38);
    }
  }
  return;
}

