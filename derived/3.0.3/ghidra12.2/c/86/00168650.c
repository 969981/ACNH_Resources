
undefined8 FUN_00168650(int *param_1,int *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_4;
  if ((int)(uVar2 ^ 0x7fffffff) < *param_1) {
    return 0xfffffdf4;
  }
  *param_1 = *param_1 + uVar2;
  uVar3 = *param_3;
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar1 = uVar2;
  }
  *param_3 = uVar3 - uVar1;
  *param_2 = *param_2 + uVar1;
  *param_4 = *param_4 - uVar1;
  return 0;
}

