
void FUN_003a9754(long *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}

