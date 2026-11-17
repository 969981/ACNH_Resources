
void FUN_02d34110(undefined4 *param_1,long *param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  
  piVar2 = (int *)(**(code **)(*param_2 + 0x18))();
  if ((*piVar2 == 0) ||
     (piVar2 = (int *)(**(code **)(*param_2 + 0x18))(param_2), *piVar2 - 1U < param_3)) {
    puVar4 = (undefined4 *)&DAT_05586008;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    puVar4 = *(undefined4 **)(*(long *)(lVar3 + 8) + (long)(int)param_3 * 8);
  }
  uVar1 = puVar4[1];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  return;
}

