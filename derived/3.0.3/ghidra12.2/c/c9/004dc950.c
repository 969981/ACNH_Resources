
undefined8 FUN_004dc950(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    return 1;
  }
  lVar2 = param_1[1];
  uVar1 = FUN_00428440(lVar2);
  if (((lVar2 == 0) || ((uVar1 & 0x1f) != 6)) || (*(int *)*param_1 != 0)) {
    return 0;
  }
  return 1;
}

