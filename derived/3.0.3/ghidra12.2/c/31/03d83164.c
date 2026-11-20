
uint FUN_03d83164(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xf8))();
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 700) = 0;
    FUN_03d831c0(param_1,4,0,0xffffffff);
  }
  return (uVar1 ^ 0xffffffff) & 1;
}

