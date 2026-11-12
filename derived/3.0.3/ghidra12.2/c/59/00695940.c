
undefined8 FUN_00695940(long param_1,undefined8 *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  
  if ((param_4 != 0) &&
     (uVar1 = (**(code **)(*param_3 + 0x18))(param_3,param_2,param_4), (uVar1 & 1) == 0)) {
    if ((*(ulong *)(param_1 + 0x218) < param_4) ||
       (uVar1 = (**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x210),param_4),
       (uVar1 & 1) == 0)) {
      return 0;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x210);
  }
  param_2[1] = param_4;
  return 1;
}

