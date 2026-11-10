
undefined4 FUN_0010db70(long *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(*param_1 + 8) = param_2;
  if (param_2 < 0) {
    return 0xffffbc9f;
  }
  iVar1 = nn::fs::ReadFile(**(undefined8 **)*param_1,(long)*(int *)((undefined8 *)*param_1 + 1),
                           param_4,param_3);
  uVar2 = 0xffffbd9f;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  return uVar2;
}

