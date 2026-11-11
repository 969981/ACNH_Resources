
undefined8 FUN_00467240(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_b0 [18];
  
  iVar1 = FUN_00467120();
  if (iVar1 == -1) {
    return 0x80040200;
  }
  if (iVar1 == 5) {
    FUN_00422780(local_b0,param_1);
    uVar2 = FUN_0043a330(local_b0[0]);
    *param_2 = uVar2;
    FUN_00422550(local_b0);
    return 0;
  }
  *param_2 = *(undefined8 *)(&DAT_041407a0 + (long)iVar1 * 8);
  return 0;
}

