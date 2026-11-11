
undefined8 FUN_003bc360(long param_1,int param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  
  if ((*param_3 & 0x3f) != 0) {
    return 0;
  }
  uVar1 = *param_3 + ((long)param_2 * 0x1f0 + 0x3fU & 0xffffffffffffffc0);
  if ((long)(uVar1 - param_4) < 1) {
    FUN_003bd710(param_1 + 0x88);
    *param_3 = uVar1;
    return 1;
  }
  return 0;
}

